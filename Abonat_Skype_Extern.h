#include "Abonat_Skype.h"
#ifndef UNTITLED7_ABONAT_SKYPE_EXTERN_H
#define UNTITLED7_ABONAT_SKYPE_EXTERN_H


class Abonat_Skype_Extern:public Abonat_Skype{
private:
    std::string tara;
    Abonat_Skype abs_ext;
public:
    Abonat_Skype_Extern();
    Abonat_Skype_Extern(int id, std::string nume, std::string telefon, std::string id_skype, std::string tara);

    void set_tara(std::string newTara);
    std::string get_tara();
    friend std::ostream& operator << (std::ostream& out , Abonat_Skype_Extern *ase);
    friend void operator >> (std :: istream& in, Abonat_Skype_Extern& ase);
};

#endif //UNTITLED7_ABONAT_SKYPE_EXTERN_H
