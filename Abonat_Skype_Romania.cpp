#include "Abonat_Skype_Romania.h"

Abonat_Skype_Romania :: Abonat_Skype_Romania() = default;
Abonat_Skype_Romania :: Abonat_Skype_Romania(std::string m){
this->mail=m;
}
void Abonat_Skype_Romania :: set_mail(std::string newMail) {
    this->mail = newMail;
}

std::string Abonat_Skype_Romania :: get_mail()
{
    return this->mail;
}

void operator>>(std::istream &in, Abonat_Skype_Romania &asr) {
    int value;
    std::string text;

    std::cout << "ID: ";
    in >> value;
    asr.set_id(value);

    std::cout << "Nume: ";
    in >> text;
    asr.set_nume(text);

    std::cout << "Tel: ";
    in >> text;
    asr.set_nr_telefon(text);

    std::cout << "ID Skype: ";
    in >> text;
    asr.set_id_skype(text);

    std::cout << "Mail: ";
    in >> text;
    asr.set_mail(text);
}
