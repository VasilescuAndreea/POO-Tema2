#include "Abonat_Skype.h"
#ifndef UNTITLED7_ABONAT_SKYPE_EXTERN_H
#define UNTITLED7_ABONAT_SKYPE_EXTERN_H


class Abonat_Skype_Extern:public Abonat_Skype{
private:
    std:string tara;
    Abonat_Skype abs_ext;
public:
    Abonat_Skype_Extern(std::string t){
        this->tara=t;
    }

    Abonat_Skype_Extern(){

    }

    void set_tara(std::string newTara){
        this->tara=newTara;
    }
};

#endif //UNTITLED7_ABONAT_SKYPE_EXTERN_H
