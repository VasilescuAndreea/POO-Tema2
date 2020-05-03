#include "Abonat_Skype.h"
#ifndef UNTITLED7_ABONAT_SKYPE_ROMANIA_H
#define UNTITLED7_ABONAT_SKYPE_ROMANIA_H


class Abonat_Skype_Romania:public Abonat_Skype{
private:
    std::string mail;
    Abonat_Skype abs_ro;
public:
    Abonat_Skype_Romania(std::string m){
        this->mail=m;
    }

    Abonat_Skype_Romania(){
    }

    void set_mail(std::string newMail){
        this->mail=newMail;
    }
};



#endif //UNTITLED7_ABONAT_SKYPE_ROMANIA_H
