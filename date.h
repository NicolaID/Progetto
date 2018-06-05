//
// Created by Nicola on 19/04/2018.
//

#ifndef LAB5_ES1_DATE_H
#define LAB5_ES1_DATE_H

#include <iostream>
#include <string>
using namespace std;


class Date {
public:
    // Dafault Constructor , set the date to the actual date
    Date();
    // Constructor , pass the date in the form of dd,mm,yyyy
    // Note that the program crashes if the date is not valid...
    Date(int d, int m, int y);
    // Copy Constructor
    Date(const Date & to_copy);
    // Getters
    int year() const;
    int month() const;
    int day() const;
    // return the year from the date d, if d it not passed , it returns the year from now.
    // Usefull to compute the age of a person , where this is the person’s birth date
    float yearsFrom(Date d = Date()) const;
    // return the date as a string in the form dd/mm/yyyy
    // Useful to print on the screen
    string str() const;
    // overload of the << operator for the Data class.
    // the friend keyword is mandatory to define the overload
    friend ostream& operator << (ostream& stream , const Date& d);
    friend bool operator < (Date d1,Date d2);
    friend bool operator == (Date d1,Date d2);
    bool _isValid() const;
private:
    int _year;
    int _month;
    int _day;
};


#endif //LAB5_ES1_DATE_H
