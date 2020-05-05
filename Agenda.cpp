#include "Agenda.h"

void Agenda::push(Abonat_Skype *nou){
    abonati.push_back(nou);
}

void Agenda::insert(int i, Abonat_Skype *nou){
    abonati.insert(abonati.cbegin()+i,nou);
}

void Agenda::remove(int i){
    abonati.erase( abonati.cbegin()+i);
}
void Agenda::afisare(){

}

Abonat_Skype* Agenda :: get_abonat(int i){
    return abonati.at(i);
}