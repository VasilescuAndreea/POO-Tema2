#include <iostream>
#include <fstream>

#include "Abonat_Skype_Romania.h"
#include "Abonat_Skype_Extern.h"
#include "Agenda.h"

using namespace std;

ifstream in("date.in");
int main() {
    Agenda *arr = new Agenda();
    Abonat_Skype_Extern *ase1 = new Abonat_Skype_Extern(1," Maria", "0725653448", "Maria_01", "Romania");
    Abonat_Skype_Extern *ase2 = new Abonat_Skype_Extern(2," Andreea", "075561554", "Andreea_02", "Romania");

    Abonat_Skype_Romania *asr1 = new Abonat_Skype_Romania(3, "Marian ", "0766535151", "Marian_03", "marian.marian@yahoo.com");
    Abonat_Skype_Romania *asr2 = new Abonat_Skype_Romania(4, "Catalina", "0745335655", "Catalina_04", "catalina_cata@gmail.com");

    cout<< asr1;
}
