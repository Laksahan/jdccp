package com.leandrosales.jdccp;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.SocketAddress;
import java.net.SocketException;
import java.net.SocketImpl;

import com.leandrosales.jdccp.wrapper.JDCCPSocket;


public class DCCPSocketImpl extends SocketImpl {
	
	private InputStream inputStream;
	private OutputStream outputStream;
	
	private JDCCPSocket dccpSocket;
	
	public DCCPSocketImpl() {
		this.inputStream  = new DCCPInputStream();
		this.outputStream = new DCCPOutputStream();
		this.dccpSocket = new JDCCPSocket();
	}

	@Override
	protected void accept(SocketImpl s) throws IOException {
		// TODO Auto-generated method stub
		System.out.println("accept");
	}

	@Override
	protected int available() throws IOException {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	protected void bind(InetAddress host, int port) throws IOException {
		this.dccpSocket.bind(host.getHostAddress(), Integer.toString(port));
	}

	@Override
	protected void close() throws IOException {
		// TODO Auto-generated method stub
		System.out.println("close");
	}

	@Override
	protected void connect(String host, int port) throws IOException {
		this.dccpSocket.connect(host, port);
	}

	@Override
	protected void connect(InetAddress address, int port) throws IOException {
		// TODO Auto-generated method stub
		System.out.println("teste connect inetaddress");
	}

	@Override
	protected void connect(SocketAddress address, int timeout) throws IOException {
		// TODO Auto-generated method stub
		
	}

	@Override
	protected void create(boolean stream) throws IOException {
		// TODO Auto-generated method stub
		
	}

	@Override
	protected InputStream getInputStream() throws IOException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	protected OutputStream getOutputStream() throws IOException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	protected void listen(int backlog) throws IOException {
		// TODO Auto-generated method stub
		
	}

	@Override
	protected void sendUrgentData(int data) throws IOException {
		// TODO Auto-generated method stub
		
	}

	public Object getOption(int optID) throws SocketException {
		// TODO Auto-generated method stub
		return null;
	}

	public void setOption(int optID, Object value) throws SocketException {
		// TODO Auto-generated method stub
		
	}

}
