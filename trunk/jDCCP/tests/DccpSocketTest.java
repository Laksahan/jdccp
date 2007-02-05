package tests;

import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.net.SocketAddress;

import javax.net.SocketFactory;

import com.leandrosales.jdccp.DCCPSocket;

public class DccpSocketTest {
	public static void main(String[] args) throws IOException {
		Socket dccpSocket = new DCCPSocket("localhost", 5001);
		/*SocketAddress epoint = new InetSocketAddress("localhost", 5001);
		dccpSocket.connect(epoint);*/
		
	}
}
