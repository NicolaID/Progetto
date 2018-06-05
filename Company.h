//
// Created by Nicola on 05/06/2018.
//

#ifndef PROGETTO_COMPANY_H
#define PROGETTO_COMPANY_H

#include <iostream>
#include <string>
#include "date.h"
using namespace std;

class Company {
public:
    Company();
    void set_Name(string Name);
    void set_Birth_date(Date D);
    void set_Tax_Office(string adress);
    void set_Operational_Headquarters(string adress);
    void set_Section(string section);
    virtual void Print_Info();

private:
    string _Name;
    Date _Birth_Date;
    string _Tax_Office_Adress;
    string _Operational_Headquarters_Adress;
};


#endif //PROGETTO_COMPANY_H
