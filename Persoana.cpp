#include "Persoana.h"

Persoana :: Persoana() = default;
Persoana :: Persoana(int id, std::string nume){
    this->id=id;
    this->nume=nume;
}

int Persoana ::  get_id(){
    return this->id;
}

std::string Persoana :: get_nume(){
    return this->nume;
}

void Persoana :: set_id(int newId){
    this->id=newId;
}

void Persoana :: set_nume(std::string newName){
    this->nume=newName;
}
