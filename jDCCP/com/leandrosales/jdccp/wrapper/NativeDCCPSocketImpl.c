#include <stdio.h>
#include "NativeDCCPSocketImpl.h"
/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    accept
 * Signature: (III)V
 */

JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_accept (JNIEnv *env, jobject thisObj, jint socketId, jint addr, jint addrLen) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    available
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_available
  (JNIEnv *env, jobject thisObj) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    bind
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_bind
  (JNIEnv *env, jobject thisObj, jstring host, jint port) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_close
  (JNIEnv *env, jobject thisObj) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    connect
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_connect
  (JNIEnv *env, jobject thisObj, jstring host, jint port) {
  	printf ("connection!");
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    create
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_create
  (JNIEnv *env, jobject thisObj, jboolean stream) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    getInputStream
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_getInputStream
  (JNIEnv *env, jobject thisObj) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    getOutputStream
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_getOutputStream
  (JNIEnv *env, jobject thisObj) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    listen
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_listen
  (JNIEnv *env, jobject thisObj, jint backLog) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    sendUrgentData
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_sendUrgentData
  (JNIEnv *env, jobject thisObj, jint data) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    getOption
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_getOption
  (JNIEnv *env, jobject thisObj, jint optID) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl
 * Method:    setOption
 * Signature: (ILjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_NativeDCCPSocketImpl_setOption
  (JNIEnv *env, jobject thisObj, jint optID, jobject value) {
  	
}
