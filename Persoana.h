#include<string>
#include<iostream>
#ifndef UNTITLED7_PERSOANA_H
#define UNTITLED7_PERSOANA_H


class Persoana {
private:
    int id;
    std::string nume;

public:
    Persoana(int id, std::string nume){
        this->id=id;
        this->nume=nume;
    }

    Persoana(){
    }

    int get_id(){
        return this->id;
    }

    std::string get_nume(){
        return this->nume;
    }

    void set_id(int newId){
        this->id=newId;
    }

    void set_nume(std::string newName){
        this->nume=newName;
    }

};


#endif //UNTITLED7_PERSOANA_H
