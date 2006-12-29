package tests;

import java.net.Socket;

import com.leandrosales.jdccp.DCCPSocket;

public class DccpSocketTest {
	public static void main(String[] args) {
		Socket dccpSocket = new DCCPSocket();
		System.out.println(dccpSocket.getLocalAddress());		
	}
}
