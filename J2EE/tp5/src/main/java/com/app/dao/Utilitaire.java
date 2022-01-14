package com.app.dao;

import java.sql.*;

public class Utilitaire {
	private static Connection conn;

	public static Connection getConnection() {
		if (conn == null) {
			try {
				String password = "samirsp6";
				String user = "bb";
				Class.forName("com.mysql.jdbc.Driver");
				conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/BaseUsers", user, password);
			} catch (Exception e) {
				System.out.println("degls fsfs not");
				e.printStackTrace();
			}

		}
		return conn;
	}

	public static void main(String[] args) {
		Connection c = Utilitaire.getConnection();
	}
}
