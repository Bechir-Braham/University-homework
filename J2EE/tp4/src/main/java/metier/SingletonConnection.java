package metier;

import java.sql.*;

public class SingletonConnection {
	private static Connection conn;

	public static Connection getConnection() {
		if (conn == null) {
			String password ="samirsp6";
			String user = "bb";
			try {
				Class.forName("com.mysql.cj.jdbc.Driver");
				conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/DB_CAT", user, password);
			} catch (Exception e) {
				System.out.println("degls fsfs notTTTTTTTT");
				e.printStackTrace();
			}

		}
		return conn;
	}
}
