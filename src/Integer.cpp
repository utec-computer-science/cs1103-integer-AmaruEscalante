#include "Integer.h"

Integer::Integer(){
    this->value = 0;
};

Integer::Integer(int value) {
    this->value = value;
}

Integer::Integer(const Integer &other) {
    this->value = other.value;
}

Integer& Integer::operator=(int other){
    this->value = other;
    return *this;
}

Integer::operator int() {
    return this->value;
}

/*Integer Integer::operator+(const Integer& var) {
    int result = this->value+var.value;
    return Integer(result);
}*/

Integer Integer::operator+( int other){
    return Integer(this->value+other);
}

Integer Integer::operator+=(int other) {
    this->value = this->value + other;
    return *this;
}

Integer Integer::operator-(int other) {
    return Integer(this->value-other);
}

Integer Integer::operator-=(int other) {
    this->value = this->value - other;
    return *this;
}

std::ostream& operator <<(std::ostream& out, const Integer& other){
    out << other.value;
    return out;
}

std::istream& operator >>(std::istream& in, Integer& other){
    in >> other.value;
    return in;
}

Integer Integer::operator/(int other) {
    return Integer(this->value/other);
}

Integer Integer::operator^(int other) {
    this->value = pow(this->value, other);
    return *this;
}

Integer Integer::operator*(int other) {
    return Integer(other*this->value);
}

Integer Integer::operator*=(int other) {
    this->value = other*this->value;
    return *this;
}

bool Integer::operator>(int other) {
    bool temp = this->value > other;
    return temp;
}

bool Integer::operator<(int other) {
    bool temp = this->value < other;
    return temp;
}

bool Integer::operator>=(int other) {
    bool temp = this->value >= other;
    return temp;
}

bool Integer::operator<=(int other) {
    bool temp = this->value <= other;
    return temp;
}

bool Integer::operator!=(int other) {
    bool temp = this->value != other;
    return temp;
}

bool Integer::operator==(int other) {
    bool temp = this->value == other;
    return temp;
}
