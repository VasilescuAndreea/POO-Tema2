#include "Persoana.h"
#ifndef UNTITLED7_ABONAT_H
#define UNTITLED7_ABONAT_H

class Abonat:public Persoana{
private:
    std::string nr_telefon;
public:
    const std::string &getNrTelefon() const;

public:
    Abonat();
    Abonat(std::string nr);

    void set_nr_telefon(std::string newNr);
    std::string get_nr_telefon();

};


#endif //UNTITLED7_ABONAT_H
