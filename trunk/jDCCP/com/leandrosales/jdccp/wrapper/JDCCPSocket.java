package com.leandrosales.jdccp.wrapper;

public class JDCCPSocket {

	static {
		System.loadLibrary("JDCCPSocket");
		//String AbsolutePath = "/opt/sun-jdk-1.5.0.09/jre/lib/i386/client/";
		//String libName = System.mapLibraryName("JDCCPSocket");
		//System.load(AbsolutePath+libName);
	}
	
	public native void accept(int socketId, int addr, int addrLen);

	public native int available();

	public native void bind(String host, String port);

	public native void close();

	public native int connect(String host, int port);

	public native void create(boolean stream);
	
	public native String getInputStream();

	public native String getOutputStream();

	public native void listen(int backlog);

	public native void sendUrgentData(int data);

	public native String getOption(int optID);

	public native void setOption(int optID, Object value);
	
	public static void main(String[] args) {
		JDCCPSocket dccpSock = new JDCCPSocket();
		//dccpSock.bind("localhost", 5001);
	}
}
