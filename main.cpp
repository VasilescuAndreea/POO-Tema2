#include <iostream>
#include <fstream>

#include "Abonat_Skype_Romania.h"
#include "Abonat_Skype_Extern.h"
#include "Agenda.h"

using namespace std;

ifstream in("date.in");
int main() {

    //Abonat_Skype_Extern ase;
    //cin >> ase;

    Abonat_Skype_Romania *asr;
    //cin >> (Abonat_Skype_Romania &) asr;
    Agenda a = Agenda();

    int n, i;
    bool x;
    cin >> n;
    Abonat_Skype_Romania k;
    for ( i = 1; i<= n; i++)
    {
        cin >> k;
        asr = &k;
        a.addAbonat(i, dynamic_cast<Abonat_Skype*>(asr));
    }
}
