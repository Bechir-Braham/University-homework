package com;

public class Etudiant {
	private String username;
	private String password;
	private int age;
	private int cin;
	Etudiant(String username, String password, int age, int cin){
		this.username = username;
		this.password = password;
		this.age = age;
		this.cin = cin;
	}
	public String getUsername() {
		return username;
		
	}
	public int getAge() {
		return age;
	}
	public int getCin() {
		return cin;
	}
}