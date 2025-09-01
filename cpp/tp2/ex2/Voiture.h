#ifndef VOITURE_H
#define VOITURE_H

class Voiture {
private:
    int roues = 0;
    int portes = 0;

public:
    int get_roues();
    void set_roues(int);
    int get_portes();
    void set_portes(int);
};
#endif
