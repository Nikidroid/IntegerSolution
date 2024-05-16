#include "Integer.h"

int Integer::getValue() {
    return value;
}

void Integer::setValue(int value) {
    this->value = value;
}

Integer Integer::add(Integer integer) {
    return Integer(value + integer.getValue());
}

Integer Integer::sub(Integer integer) {
    return Integer(value - integer.getValue());
}

Integer Integer::mul(Integer integer) {
    return Integer(value * integer.getValue());
}

Integer Integer::div(Integer integer) {
    return Integer(value / integer.getValue());
}

Integer Integer::mod(Integer integer) {
    return Integer(value % integer.getValue());
}

Integer Integer::pow(int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= value;
    }
    return Integer(result);
}

Integer Integer::opp() {
    return Integer(-value);
}