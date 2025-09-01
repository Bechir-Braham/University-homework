#ifndef COMPTE_H
#define COMPTE_H
class Compte {
public:
    Compte();
	Compte(double,double);
    void affiche();
    void ajout(double);
    void retire(double);
    double solde();

private:
    int id;
    double debit, credit;
    static int max_id;
};
#endif
