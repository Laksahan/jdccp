package com.leandrosales.jdccp;
import java.io.IOException;
import java.net.Socket;

public class DCCPSocket extends Socket {

	public DCCPSocket() {
		super();
		this.createDCCPSocket();
	}
	
	public void createDCCPSocket() {
		DCCPSocketImplFactory aDCCPSocketImplFactory = new DCCPSocketImplFactory();
		try {
			this.setSocketImplFactory(aDCCPSocketImplFactory);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
}
