#include "Abonat_Skype.h"
#ifndef UNTITLED7_ABONAT_SKYPE_ROMANIA_H
#define UNTITLED7_ABONAT_SKYPE_ROMANIA_H


class Abonat_Skype_Romania:public Abonat_Skype{
private:
    std::string mail;
    Abonat_Skype abs_ro;
public:
    Abonat_Skype_Romania();
    Abonat_Skype_Romania(int id, std::string nume, std::string telefon, std::string id_skype, std::string mail);
    void set_mail(std::string newMail);
    std::string get_mail();
    friend void operator >> (std :: istream& in, Abonat_Skype_Romania &asr);

    friend std::ostream &operator << (std::ostream &out, Abonat_Skype_Romania *asr);
};



#endif //UNTITLED7_ABONAT_SKYPE_ROMANIA_H
