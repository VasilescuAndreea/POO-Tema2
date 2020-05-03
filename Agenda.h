#include "Abonat_Skype.h"
#include "Abonat.h"

#ifndef UNTITLED7_AGENDA_H
#define UNTITLED7_AGENDA_H

class Agenda {
    Abonat_Skype *array[123];
public:
    Agenda();
    void addAbonat(int poz, Abonat_Skype *nou);
};


#endif //UNTITLED7_AGENDA_H
