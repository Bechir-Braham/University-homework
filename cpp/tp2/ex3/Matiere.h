#ifndef MATIERE_H
#define MATIERE
#include <string>
class Matiere {
private:
    std::string intitule;
    double coeffecient;
    double note;

public:
    Matiere(std::string, double, double);
    std::string get_intitule();
    double get_coeffecient();
    double get_note();

    void set_intitule(std::string);
    void set_note(int);
    void set_coeffecient(int);
};
#endif
