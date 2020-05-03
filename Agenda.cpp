#include "Agenda.h"

Agenda :: Agenda() = default;

void Agenda :: addAbonat(int poz, Abonat_Skype *nou) {
    array[poz] = nou;
}

