/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_misgood_lplayer_Player */

#ifndef _Included_com_misgood_lplayer_Player
#define _Included_com_misgood_lplayer_Player
#ifdef __cplusplus
extern "C" {
#endif
#undef com_misgood_lplayer_Player_SOURCE_LOCAL
#define com_misgood_lplayer_Player_SOURCE_LOCAL 0L
#undef com_misgood_lplayer_Player_SOURCE_REMOTE
#define com_misgood_lplayer_Player_SOURCE_REMOTE 1L
#undef com_misgood_lplayer_Player_SOURCE_LIVE
#define com_misgood_lplayer_Player_SOURCE_LIVE 2L
/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naInit
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_misgood_lplayer_Player_naInit
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naSetup
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_misgood_lplayer_Player_naSetup
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naSetSurface
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_misgood_lplayer_Player_naSetSurface
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naGetVideoRes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_com_misgood_lplayer_Player_naGetVideoRes
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naGetFps
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_misgood_lplayer_Player_naGetFps
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naGetSampleRate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_misgood_lplayer_Player_naGetSampleRate
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naGetChannels
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_misgood_lplayer_Player_naGetChannels
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naDecode
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_misgood_lplayer_Player_naDecode
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naGetAudioData
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_misgood_lplayer_Player_naGetAudioData
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naDisplay
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_misgood_lplayer_Player_naDisplay
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naStopDecode
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_misgood_lplayer_Player_naStopDecode
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naRelease
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_misgood_lplayer_Player_naRelease
  (JNIEnv *, jobject);

/*
 * Class:     com_misgood_lplayer_Player
 * Method:    naTest
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_misgood_lplayer_Player_naTest
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_misgood_lplayer_Player_DecodeTask */

#ifndef _Included_com_misgood_lplayer_Player_DecodeTask
#define _Included_com_misgood_lplayer_Player_DecodeTask
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_misgood_lplayer_Player_DisplayTask */

#ifndef _Included_com_misgood_lplayer_Player_DisplayTask
#define _Included_com_misgood_lplayer_Player_DisplayTask
#ifdef __cplusplus
extern "C" {
#endif
#undef com_misgood_lplayer_Player_DisplayTask_VIRGIN
#define com_misgood_lplayer_Player_DisplayTask_VIRGIN 0L
#undef com_misgood_lplayer_Player_DisplayTask_SCHEDULED
#define com_misgood_lplayer_Player_DisplayTask_SCHEDULED 1L
#undef com_misgood_lplayer_Player_DisplayTask_EXECUTED
#define com_misgood_lplayer_Player_DisplayTask_EXECUTED 2L
#undef com_misgood_lplayer_Player_DisplayTask_CANCELLED
#define com_misgood_lplayer_Player_DisplayTask_CANCELLED 3L
#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_misgood_lplayer_Player_OnPreparedListener */

#ifndef _Included_com_misgood_lplayer_Player_OnPreparedListener
#define _Included_com_misgood_lplayer_Player_OnPreparedListener
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_misgood_lplayer_Player_PrepareTask */

#ifndef _Included_com_misgood_lplayer_Player_PrepareTask
#define _Included_com_misgood_lplayer_Player_PrepareTask
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_misgood_lplayer_Player_WriteAudioTask */

#ifndef _Included_com_misgood_lplayer_Player_WriteAudioTask
#define _Included_com_misgood_lplayer_Player_WriteAudioTask
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif