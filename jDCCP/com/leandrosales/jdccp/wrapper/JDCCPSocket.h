/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <netdb.h>

/* Header for class JDCCPSocket */

#ifndef _Included_JDCCPSocket
#define _Included_JDCCPSocket
#ifdef __cplusplus
extern "C" {
#endif

#define MAXLINE 4096
#define SOCK_DCCP 6
#define SOL_DCCP 269
#define DCCP_SOCKOPT_PACKET_SIZE 1
#define DCCP_SOCKOPT_SERVICE 2
#define IPPROTO_DCCP 33

int alreadyBind = 0;
int socketId = -1;
struct addrinfo *hostinfo;

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    accept
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_accept
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    available
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_available
  (JNIEnv *, jobject);

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    bind
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_bind
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_close
  (JNIEnv *, jobject);

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    connect
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT jint JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_connect
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    create
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_create
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    getInputStream
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_getInputStream
  (JNIEnv *, jobject);

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    getOutputStream
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_getOutputStream
  (JNIEnv *, jobject);

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    listen
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_listen
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    sendUrgentData
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_sendUrgentData
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    getOption
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_getOption
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    setOption
 * Signature: (ILjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_setOption
  (JNIEnv *, jobject, jint, jobject);

//---------------------------------
void socket_options(int);
void printerrno(char *);

ssize_t writen(int fd, const void *vptr, size_t n);

#ifdef __cplusplus
}
#endif
#endif
