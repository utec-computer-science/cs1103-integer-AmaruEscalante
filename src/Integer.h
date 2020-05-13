//
// Created by amaru on 4/28/20.
//

#ifndef TAREA1_INTEGER_H
#define TAREA1_INTEGER_H

#include "lib.h"

class Integer {
    int value;
public:
    Integer();
    explicit Integer(int value);
    Integer(const Integer& other);
    Integer& operator=(int other);
    explicit operator int(); //cast to int the incoming parameter
    friend std::ostream& operator << (std::ostream& out, const Integer&);
    friend std::istream& operator >> (std::istream& in, Integer&);
    //Integer operator +(const Integer& value);
    Integer operator + (int other);
    Integer operator +=(int other);
    Integer operator - (int other);
    Integer operator -=(int other);
    Integer operator / (int other);
    Integer operator ^ (int other);
    Integer operator * (int other);
    Integer operator *=(int other);
    bool operator >(int other);
    bool operator <(int other);
    bool operator >=(int other);
    bool operator <=(int other);
    bool operator !=(int other);
    bool operator ==(int other);
};


#endif //TAREA1_INTEGER_H