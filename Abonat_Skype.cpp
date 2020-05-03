#include "Abonat_Skype.h"

Abonat_Skype :: Abonat_Skype() = default;

Abonat_Skype :: Abonat_Skype(std::string ida){
    this->id_skype=ida;
}

void Abonat_Skype :: set_id_skype(std::string newId){
    this->id_skype=newId;
}

