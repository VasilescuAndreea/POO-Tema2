#include "Abonat_Skype.h"
#include "Abonat.h"
#include<vector>

#ifndef UNTITLED7_AGENDA_H
#define UNTITLED7_AGENDA_H

class Agenda {
private:
    std::vector<Abonat_Skype*> abonati;
public:
    void push(Abonat_Skype* nou);
    void insert(int i, Abonat_Skype *nou);
    void remove(int i);
    void afisare();
    int get_size();
    Abonat_Skype* get_abonat(int i);

};

#endif //UNTITLED7_AGENDA_H
