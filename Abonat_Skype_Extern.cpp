#include "Abonat_Skype_Extern.h"

Abonat_Skype_Extern :: Abonat_Skype_Extern() = default;
Abonat_Skype_Extern :: Abonat_Skype_Extern(std::string t){
this->tara=t;
}
void Abonat_Skype_Extern :: set_tara(std::string newTara){
    this->tara=newTara;
}

void operator>>(std::istream &in, Abonat_Skype_Extern &ase) {
    int value;
    std::string text;
    std::cout << "ID: ";
    in >> value;
    ase.set_id(value);
    std::cout << "Nume: ";
    in >> text;
    ase.set_nume(text);
    std::cout << "Tel: ";
    in >> text;
    ase.set_nr_telefon(text);
    std::cout << "ID Skype: ";
    in >> text;
    ase.set_id_skype(text);
    std::cout << "Tara: ";
    in >> text;
    ase.set_tara(text);
}
