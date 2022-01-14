package com;

import java.util.*;

public class GestionEtudiants {
	private static ArrayList<Etudiant> etudiants = new ArrayList<Etudiant>();
	public static void addStudent(String username, String password, int age, int cin) {
		etudiants.add(new Etudiant(username, password, age, cin));
	}
	public static ArrayList<Etudiant> getEtudiants(){
		return etudiants;
	}
	public static void deleteEtudiant(int cin) {
		for(int i = 0; i < etudiants.size(); i++) {
			if(etudiants.get(i).getCin() == cin) {
				etudiants.remove(i);
				break;
			}
		}
	}
}