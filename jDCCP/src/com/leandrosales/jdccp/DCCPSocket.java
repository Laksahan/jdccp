package com.leandrosales.jdccp;
import java.io.IOException;
import java.net.Socket;

public class DCCPSocket {

	private Socket socket;
	
	public DCCPSocket() {
		
	}
	
	public void createDCCPSocket() {
		DCCPSocketImplFactory aDCCPSocketImplFactory = new DCCPSocketImplFactory();
		this.socket = new Socket();
		try {
			Socket.setSocketImplFactory(aDCCPSocketImplFactory);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
}
