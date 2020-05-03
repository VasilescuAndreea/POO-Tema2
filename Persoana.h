#include<string>
#include<iostream>
#ifndef UNTITLED7_PERSOANA_H
#define UNTITLED7_PERSOANA_H


class Persoana {
private:
    int id;
    std::string nume;

public:
    Persoana();

    Persoana(int id, std::string nume);

    int get_id();
    std::string get_nume();
    void set_id(int newId);
    void set_nume(std::string newName);
};


#endif //UNTITLED7_PERSOANA_H
