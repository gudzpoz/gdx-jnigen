package com.badlogic.jnigen.tests;

import com.badlogic.gdx.jnigen.closure.ClosureObject;
import com.badlogic.jnigen.generated.TestData;
import com.badlogic.jnigen.generated.enums.TestEnum;
import org.junit.jupiter.api.Test;

import java.util.concurrent.atomic.AtomicReference;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class EnumTest extends BaseTest {

    @Test
    public void testPassEnum() {
        assertEquals(1, TestData.passTestEnum(TestEnum.SECOND));
        assertEquals(0, TestData.passTestEnum(TestEnum.FIRST));
        assertEquals(0, TestData.passTestEnum(TestEnum.THIRD));
    }

    @Test
    public void testReturnEnum() {
        assertEquals(TestEnum.THIRD, TestData.returnTestEnum());
    }

    @Test
    public void testPassAndReturnEnum() {
        assertEquals(TestEnum.FIRST, TestData.passAndReturnTestEnum(TestEnum.FIRST));
        assertEquals(TestEnum.SECOND, TestData.passAndReturnTestEnum(TestEnum.SECOND));
        assertEquals(TestEnum.THIRD, TestData.passAndReturnTestEnum(TestEnum.THIRD));
    }

    @Test
    public void testReturnEnumClosure() {
        AtomicReference<TestEnum> toReturn = new AtomicReference<>();
        ClosureObject<TestData.methodWithCallbackTestEnumReturn> closure = ClosureObject.fromClosure(toReturn::get);
        toReturn.set(TestEnum.FIRST);
        assertEquals(toReturn.get(), TestData.call_methodWithCallbackTestEnumReturn(closure));
        toReturn.set(TestEnum.SECOND);
        assertEquals(toReturn.get(), TestData.call_methodWithCallbackTestEnumReturn(closure));
        toReturn.set(TestEnum.THIRD);
        assertEquals(toReturn.get(), TestData.call_methodWithCallbackTestEnumReturn(closure));
        closure.free();
    }

    @Test
    public void testArgEnumClosure() {
        AtomicReference<TestEnum> returned = new AtomicReference<>();
        ClosureObject<TestData.methodWithCallbackTestEnumArg> closure = ClosureObject.fromClosure(returned::set);
        TestData.call_methodWithCallbackTestEnumArg(closure);
        assertEquals(TestEnum.SECOND, returned.get());
        closure.free();
    }
}
