#include "Abonat.h"
#ifndef UNTITLED7_ABONAT_SKYPE_H
#define UNTITLED7_ABONAT_SKYPE_H


class Abonat_Skype:public Abonat{
private:
    std::string id_skype;
    Abonat abon{};
public:
    Abonat_Skype(std::string ida){
        this->id_skype=ida;
    }

    Abonat_Skype(){
    }

    void set_id_skype(std::string newId){
        this->id_skype=newId;
    }
};


#endif //UNTITLED7_ABONAT_SKYPE_H
