#include <stdio.h>
#include "JDCCPSocket.h"
/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    accept
 * Signature: (III)V
 */

JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_accept (JNIEnv *env, jobject thisObj, jint socketId, jint addr, jint addrLen) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    available
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_available
  (JNIEnv *env, jobject thisObj) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    bind
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_bind
  (JNIEnv *env, jobject thisObj, jstring host, jint port) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_close
  (JNIEnv *env, jobject thisObj) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    connect
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT jint JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_connect
  (JNIEnv *env, jobject thisObj, jstring host, jint port) {
  	struct addrinfo *hostinfo;

  	int socketId = (jint)socket(AF_INET, SOCK_DCCP, IPPROTO_DCCP);
  	const char *hostconn = (*env)->GetStringUTFChars(env, host, 0);
    //TODO use port parameter instand hardcode here
	if (getaddrinfo(hostconn, "5001", NULL, &hostinfo)) {
		//printerrno("getaddrinfo");
		return (jint)1;
    }
    (*env)->ReleaseStringUTFChars(env, host, hostconn);
    
    socket_options(socketId);
	if (errno) {
		//printerrno("socket_options");
		printf("teste");
		return 1;
	}
    
    connect(socketId, hostinfo->ai_addr, hostinfo->ai_addrlen);
	if (errno) {
		//printerrno("connect");
		printf("teste1");
		return 1;
	}
	
	writen(socketId, "testando jdccp", strlen("testando jdccp"));
    
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    create
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_create
  (JNIEnv *env, jobject thisObj, jboolean stream) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    getInputStream
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_getInputStream
  (JNIEnv *env, jobject thisObj) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    getOutputStream
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_getOutputStream
  (JNIEnv *env, jobject thisObj) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    listen
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_listen
  (JNIEnv *env, jobject thisObj, jint backLog) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    sendUrgentData
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_sendUrgentData
  (JNIEnv *env, jobject thisObj, jint data) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    getOption
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_getOption
  (JNIEnv *env, jobject thisObj, jint optID) {
  	
}

/*
 * Class:     com_leandrosales_jdccp_wrapper_JDCCPSocket
 * Method:    setOption
 * Signature: (ILjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_leandrosales_jdccp_wrapper_JDCCPSocket_setOption
  (JNIEnv *env, jobject thisObj, jint optID, jobject value) {
  	
}

//---------------------------------

void socket_options(int conn_sock) {
        int pkt_size=256;

		setsockopt(conn_sock, SOL_DCCP, DCCP_SOCKOPT_PACKET_SIZE, (char*)&pkt_size, sizeof(pkt_size));
		setsockopt(conn_sock, SOL_DCCP, DCCP_SOCKOPT_SERVICE, (char*)&pkt_size, sizeof(pkt_size));

        //signal(SIGPIPE, sigpipe);
}

/*void do_transmit(FILE *fp, int sockfd) {
        char sendline[MAXLINE];

        while (fgets(sendline, MAXLINE, fp) != NULL) {
                writen(sockfd,sendline,strlen(sendline));
                if (errno)
                        printf("do_transmit");
        }
}*/

ssize_t writen(int fd, const void *vptr, size_t n) {
        size_t nleft;
        ssize_t nwritten;
        const char *ptr;

        ptr = vptr;
        nleft = n;
        while (nleft > 0) {
                if ((nwritten = write(fd,ptr,nleft)) <= 0) {
                        if (nwritten < 0 && errno == EINTR)
                                nwritten = 0;
                        else
                                return -1;
                }
                
                nleft -= nwritten;
                ptr += nwritten;
        }
        return n;
}
