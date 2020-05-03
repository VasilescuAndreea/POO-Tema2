#ifndef UNTITLED7_ENTITIES_H
#define UNTITLED7_ENTITIES_H

#endif //UNTITLED7_ENTITIES_H
#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


class Persoana{
private:
    int id;
    string nume;

public:
    Persoana(int id, string nume){
        this->id=id;
        this->nume=nume;
    }

    Persoana(){
    }

    int get_id(){
        return this->id;
    }

    string get_nume(){
        return this->nume;
    }

    void set_id(int newId){
        this->id=newId;
    }

    void set_nume(string newName){
        this->nume=newName;
    }

};

//class Abonat{
//    friend class Persoana;
//private:
//    Persoana pers{};
//    string nr_telefon;
//
//public:
//    Abonat(Persoana p, string nr){
//        this->pers=p;
//        this->nr_telefon=nr;
//    }
//
//    Abonat(){
//        this->nr_telefon="";
//    }
//};
//
//
//class Abonat_skype

class Abonat:public Persoana{
private:
    string nr_telefon;
public:
    Abonat(string nr){
        this->nr_telefon=nr;
    }

    Abonat(){
    }

    void set_nr_telefon(string newNr){
        this->nr_telefon=newNr;

    }
};



class Abonat_skype:public Abonat{
private:
    string id_skype;
    Abonat abon{};
public:
    Abonat_skype(string ida){
        this->id_skype=ida;
    }

    Abonat_skype(){
    }

    void set_id_skype(string newId){
        this->id_skype=newId;
    }
};



class Abonat_skype_romania:public Abonat_skype{
private:
    string mail;
    Abonat_skype abs_ro;
public:
    Abonat_skype_romania(string m){
        this->mail=m;
    }

    Abonat_skype_romania(){
    }

    void set_mail(string newMail){
        this->mail=newMail;
    }
};

class Abonat_skype_extern:public Abonat_skype{
private:
    string tara;
    Abonat_skype abs_ext;
public:
    Abonat_skype_extern(string t){
        this->tara=t;
    }

    Abonat_skype_extern(){

    }

    void set_tara(string newTara){
        this->tara=newTara;
    }
};
