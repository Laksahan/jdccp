package com.leandrosales.jdccp;
import java.io.IOException;
import java.net.InetAddress;
import java.net.Socket;

public class DCCPSocket extends Socket {

	static {
		DCCPSocketImplFactory aDCCPSocketImplFactory = new DCCPSocketImplFactory();
		try {
			Socket.setSocketImplFactory(aDCCPSocketImplFactory);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	public DCCPSocket(String host, int port) throws IOException {
		super(host, port);
	}
	
}
