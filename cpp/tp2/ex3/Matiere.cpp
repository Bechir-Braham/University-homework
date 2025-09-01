#include "Matiere.h"
Matiere::Matiere(std::string x, double y, double z)
{
	intitule=x;
	coeffecient=y;
	note=z;
}

std::string Matiere::get_intitule()
{
    return intitule;
}
double Matiere::get_coeffecient()
{
    return coeffecient;
}
double Matiere::get_note()
{
    return note;
}

void Matiere::set_intitule(std::string x)
{
    intitule = x;
}
void Matiere::set_note(int x)
{
    note = x;
}
void Matiere::set_coeffecient(int x)
{
    coeffecient = x;
}
