#include "Persoana.h"
#ifndef UNTITLED7_ABONAT_H
#define UNTITLED7_ABONAT_H

class Abonat:public Persoana{
private:
    std::string nr_telefon;
public:
    Abonat(std::string nr){
        this->nr_telefon=nr;
    }

    Abonat(){
    }

    void set_nr_telefon(std::string newNr){
        this->nr_telefon=newNr;

    }
};


#endif //UNTITLED7_ABONAT_H
