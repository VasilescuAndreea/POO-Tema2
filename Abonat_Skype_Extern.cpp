#include "Abonat_Skype_Extern.h"

Abonat_Skype_Extern :: Abonat_Skype_Extern(){

}
Abonat_Skype_Extern :: Abonat_Skype_Extern(int id, std::string nume, std::string telefon, std::string id_skype, std::string tara){
    this->set_id(id);
    this->set_nume(nume);
    this->set_nr_telefon(telefon);
    this->set_tara(tara);
    this->set_id_skype(id_skype);

}
void Abonat_Skype_Extern :: set_tara(std::string newTara){
    this->tara=newTara;
}

std::string Abonat_Skype_Extern :: get_tara(){
    return this->tara;
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

std::ostream& operator << (std::ostream &out, Abonat_Skype_Extern *ase){
    std::cout<<"ID: ";
    std::cout<<ase->get_id()<<std::endl;

    std::cout<<"Nume: ";
    std::cout<<ase->get_nume()<<std::endl;

    std::cout<<"Telefon: ";
    std::cout<<ase->get_nr_telefon()<<std::endl;

    std::cout<<"ID Skype: ";
    std::cout<<ase->get_id_skype()<<std::endl;

    std::cout<<"Tara: ";
    std::cout<<ase->get_tara()<<std::endl;

    return out;
}
