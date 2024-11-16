#include "Reservation.h"

Reservation::Reservation() {}

Reservation::Reservation(int _idReservation, const Date& _checkIn, const Date& _checkOut,
    int _numberOfPeople, std::string _roomType, int _roomNumber,
    int _cost, const Guest& _guest)
    : idReservation(_idReservation), checkIn(_checkIn), checkOut(_checkOut), numberOfPeople(_numberOfPeople),
    roomType(_roomType), roomNumber(_roomNumber), cost(_cost), guest(_guest) {}

// Destructor
Reservation::~Reservation() {}

void Reservation::Print() const {
    std::cout << "Reservation ID: " << idReservation << std::endl;
    std::cout << "Check-in: "; checkIn.Print(); std::cout << std::endl;
    std::cout << "Check-out: "; checkOut.Print(); std::cout << std::endl;
    std::cout << "Number of people: " << numberOfPeople << std::endl;
    std::cout << "Room type: " << roomType << std::endl;
    std::cout << "Room number: " << roomNumber << std::endl;
    std::cout << "Cost: " << cost << std::endl;
    std::cout << "Guest: "; guest.Print(); std::cout << std::endl;
}

FIO::FIO() {}

FIO::FIO(std::string _name, std::string _surname, std::string _patronymic)
    : name(_name), surname(_surname), patronymic(_patronymic) {}

// Print method
void FIO::Print() const {
    std::cout << name << " " << surname << " " << patronymic;
}

