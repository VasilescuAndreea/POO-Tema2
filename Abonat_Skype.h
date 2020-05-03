#include "Abonat.h"
#include <iostream>
#ifndef UNTITLED7_ABONAT_SKYPE_H
#define UNTITLED7_ABONAT_SKYPE_H

class Abonat_Skype:public Abonat{
private:
    std::string id_skype;
    Abonat abon{};
public:
    Abonat_Skype();
    Abonat_Skype(std::string ida);
    void set_id_skype(std::string newId);
    std::string get_id_skype();
};


#endif //UNTITLED7_ABONAT_SKYPE_H
