#pragma once
#include <iostream>

class FIO
{
public:
    std::string name{};
    std::string surname{};
    std::string patronymic{};
    FIO();
    FIO(std::string _name, std::string _surname, std::string _patronymic);

    // Print method
    void Print() const;
};
