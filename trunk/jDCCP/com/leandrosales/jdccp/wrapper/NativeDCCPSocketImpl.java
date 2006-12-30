package com.leandrosales.jdccp.wrapper;

public class NativeDCCPSocketImpl {

	static {
		System.loadLibrary("NativeDCCPSocketImpl");
	}
	
	public native void accept(int socketId, int addr, int addrLen);

	public native int available();

	public native void bind(String host, int port);

	public native void close();

	public native void connect(String host, int port);

	public native void create(boolean stream);
	
	public native String getInputStream();

	public native String getOutputStream();

	public native void listen(int backlog);

	public native void sendUrgentData(int data);

	public native String getOption(int optID);

	public native void setOption(int optID, Object value);
	
	public static void main(String[] args) {
		NativeDCCPSocketImpl dccpSock = new NativeDCCPSocketImpl();
		dccpSock.connect("", 0);
	}
}
