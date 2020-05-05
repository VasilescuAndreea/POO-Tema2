#include "Abonat_Skype_Romania.h"

Abonat_Skype_Romania :: Abonat_Skype_Romania() = default;
Abonat_Skype_Romania:: Abonat_Skype_Romania(int id, std::string nume, std::string telefon, std::string id_skype, std::string mail){
    this->set_id(id);
    this->set_nume(nume);
    this->set_nr_telefon(telefon);
    this->set_mail(mail);
    this->set_id_skype(id_skype);

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

std::ostream& operator << (std::ostream &out, Abonat_Skype_Romania *asr){
    std::cout<<"ID: ";
    std::cout<<asr->get_id()<<std::endl;

    std::cout<<"Nume: ";
    std::cout<<asr->get_nume()<<std::endl;

    std::cout<<"Telefon: ";
    std::cout<<asr->get_nr_telefon()<<std::endl;

    std::cout<<"ID Skype: ";
    std::cout<<asr->get_id_skype()<<std::endl;

    std::cout<<"Adresa de e-mail: ";
    std::cout<<asr->get_mail()<<std::endl;
}
