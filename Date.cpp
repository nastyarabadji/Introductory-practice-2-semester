#include "Date.h"
#include <iostream>

Date::Date() {}

Date::Date(int _day, int _month, int _year) : day(_day), month(_month), year(_year) {}

void Date::Print() const {
    std::cout << year << "." << month << "." << day;
}
