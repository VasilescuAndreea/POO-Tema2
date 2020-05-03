#include "Persoana.h"
#ifndef UNTITLED7_ABONAT_H
#define UNTITLED7_ABONAT_H

class Abonat:public Persoana{
private:
    std::string nr_telefon;
public:
    Abonat();
    Abonat(std::string nr);
    void set_nr_telefon(std::string newNr);
};


#endif //UNTITLED7_ABONAT_H
