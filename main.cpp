#include <iostream>
#include <string.h>
#include "Abonat_Skype_Romania.h"
#include "Abonat_Skype_Extern.h"
using namespace std;

int citeste_id() {
    int id;
    cout<<"Id-ul este:";
    cin>>id;
    return id;
}

string citeste_nume() {
    string nume;
    cout<<"Numele este:";
    cin>>nume;
    return nume;
}


string citeste_tel() {
    string tel;
    cout<<"Tel este:";
    cin>>tel;
    return tel;
}

string citeste_ids() {
    string ids;
    cout<<"Id-ul skype este:";
    cin>>ids;
    return ids;
}

string citeste_mail() {
    string mail;
    cout<<"Mail-ul este:";
    cin>>mail;
    return mail;
}

string citeste_tara() {
    string tara;
    cout<<"Tara este: ";
    cin>>tara;
    return tara;
}



int main() {

    Abonat_Skype_Romania asr;
    asr.set_id(citeste_id());
    asr.set_nume(citeste_nume());
    asr.set_nr_telefon(citeste_tel());
    asr.set_id_skype(citeste_ids());
    asr.set_mail(citeste_mail());

    Abonat_Skype_Extern ase;
    ase.set_id(citeste_id());
    ase.set_nume(citeste_nume());
    ase.set_nr_telefon(citeste_tel());
    ase.set_id_skype(citeste_ids());
    ase.set_tara(citeste_tara());



}
