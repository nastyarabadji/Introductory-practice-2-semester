#pragma once
#include <iostream>
#include "FIO.h"

class Guest
{
public:
    FIO fio;
    std::string phoneNumber{}; // потом исправить!!!
    std::string wishes{};
    Guest();

    // Parameterized constructor
    Guest(FIO _fio, std::string _phoneNumber, std::string _wishes);

    // Print method
    void Print() const;
};
