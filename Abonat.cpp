#include "Abonat.h"

Abonat :: Abonat() =  default;

Abonat :: Abonat(std::string nr) {
    this->nr_telefon = nr;
}
void  Abonat :: set_nr_telefon(std::string newNr){
    this->nr_telefon = newNr;
}
std::string Abonat :: get_nr_telefon(){
    return nr_telefon;
}