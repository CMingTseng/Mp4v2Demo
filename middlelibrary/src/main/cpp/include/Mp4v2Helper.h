/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_seuic_jni_Mp4v2Helper */

#ifndef _Included_com_seuic_jni_Mp4v2Helper
#define _Included_com_seuic_jni_Mp4v2Helper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_seuic_jni_Mp4v2Helper
 * Method:    initMp4Encoder
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_seuic_jni_Mp4v2Helper_initMp4Encoder
        (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     com_seuic_jni_Mp4v2Helper
 * Method:    mp4VEncode
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_seuic_jni_Mp4v2Helper_mp4VEncode
        (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     com_seuic_jni_Mp4v2Helper
 * Method:    mp4AEncode
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_seuic_jni_Mp4v2Helper_mp4AEncode
        (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     com_seuic_jni_Mp4v2Helper
 * Method:    closeMp4Encoder
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_seuic_jni_Mp4v2Helper_closeMp4Encoder
        (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
