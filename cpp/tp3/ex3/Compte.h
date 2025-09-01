#ifndef COMPTE_H
#define COMPTE_H

class Compte
{
    public:
    Compte ();
    Compte (int solde);

    void affiche_solde ();
    int get_code ();
    int get_solde ();

    int depot (int);
    int retrait (int);
    static int max_code;

    private:
    int code, solde;
};

#endif
