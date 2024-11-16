#include "Guest.h"
#include <iostream>

Guest::Guest() {}

Guest::Guest(FIO _fio, std::string _phoneNumber, std::string _wishes)
    : fio(_fio), phoneNumber(_phoneNumber), wishes(_wishes) {}

// Print method
void Guest::Print() const {
    std::cout << "Guest: ";
    fio.Print();
    std::cout << ", phone number: " << phoneNumber;
    if (!wishes.empty()) {
        std::cout << ", wishes: " << wishes;
    }
    std::cout << std::endl;
}
