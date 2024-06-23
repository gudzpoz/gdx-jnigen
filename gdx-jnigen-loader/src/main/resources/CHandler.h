/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_badlogic_gdx_jnigen_CHandler */

#ifndef _Included_com_badlogic_gdx_jnigen_CHandler
#define _Included_com_badlogic_gdx_jnigen_CHandler
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    getPointerSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_jnigen_CHandler_getPointerSize
  (JNIEnv *, jclass);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    init
 * Signature: (Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljava/lang/Class;Ljava/lang/Class;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_jnigen_CHandler_init
  (JNIEnv *, jclass, jobject, jobject, jclass, jclass);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    testIllegalArgumentExceptionThrowable
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_jnigen_CHandler_testIllegalArgumentExceptionThrowable
  (JNIEnv *, jclass);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    testCXXExceptionThrowable
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_jnigen_CHandler_testCXXExceptionThrowable
  (JNIEnv *, jclass);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    setDisableCXXExceptionMessage
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_jnigen_CHandler_setDisableCXXExceptionMessage
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    reExportSymbolsGlobally
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_jnigen_CHandler_reExportSymbolsGlobally
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    nativeCreateCif
 * Signature: (JLjava/nio/ByteBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogic_gdx_jnigen_CHandler_nativeCreateCif
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    createClosureForObject
 * Signature: (JLcom/badlogic/gdx/jnigen/ffi/ClosureInfo;Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogic_gdx_jnigen_CHandler_createClosureForObject
  (JNIEnv *, jclass, jlong, jobject, jobject);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    getOffsetForField
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_jnigen_CHandler_getOffsetForField
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    getStackElementField
 * Signature: (JJIZ)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogic_gdx_jnigen_CHandler_getStackElementField
  (JNIEnv *, jclass, jlong, jlong, jint, jboolean);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    setStackElement_internal
 * Signature: (JJIJZ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_jnigen_CHandler_setStackElement_1internal
  (JNIEnv *, jclass, jlong, jlong, jint, jlong, jboolean);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    getPointerPart
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogic_gdx_jnigen_CHandler_getPointerPart
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    setPointerPart
 * Signature: (JIIJ)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_jnigen_CHandler_setPointerPart
  (JNIEnv *, jclass, jlong, jint, jint, jlong);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    setPointerAsString
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_jnigen_CHandler_setPointerAsString
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    getPointerAsString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_badlogic_gdx_jnigen_CHandler_getPointerAsString
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    getSizeFromFFIType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_jnigen_CHandler_getSizeFromFFIType
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    getSignFromFFIType
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_jnigen_CHandler_getSignFromFFIType
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    isStruct
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_jnigen_CHandler_isStruct
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    isVoid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_jnigen_CHandler_isVoid
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    freeClosure
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_jnigen_CHandler_freeClosure
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    malloc
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogic_gdx_jnigen_CHandler_malloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_jnigen_CHandler_free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    memcpy
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_jnigen_CHandler_memcpy
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_badlogic_gdx_jnigen_CHandler
 * Method:    clone
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogic_gdx_jnigen_CHandler_clone
  (JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
