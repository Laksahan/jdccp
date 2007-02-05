package com.leandrosales.jdccp;
import java.net.SocketImpl;
import java.net.SocketImplFactory;


public class DCCPSocketImplFactory implements SocketImplFactory {
	
	public SocketImpl createSocketImpl() {
		return new DCCPSocketImpl();
	}

}
