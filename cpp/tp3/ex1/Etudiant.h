#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <iostream>
#include <string>
using namespace std;

class Etudiant
{
    public:
    static int max_code;
    Etudiant ();
    Etudiant (string nom, int nbr_notes);
    ~Etudiant ();

    void set_code (int c);
    void set_nom (string);
    void set_nbr_notes (int);
    int get_code ();
    int get_nbr_notes ();
    string get_nom ();

    void saisie ();
    void affichage ();
    float moyenne ();
    bool admis ();
    bool comparer (Etudiant *);


    private:
    int code;
    string nom;
    int nbr_notes;
    int *tab_notes;
};

#endif
