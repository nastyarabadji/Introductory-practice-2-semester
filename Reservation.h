#pragma once
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>
#include <fstream>
#include <regex>
#include <windows.h>
#include "Date.h"
#include "FIO.h"
#include "Guest.h"

//using namespace std;

class Reservation
{
private:
    int idReservation{};
    Date checkIn{}; // дата заселения
    Date checkOut{}; // дата выселения
    int numberOfPeople{};
    std::string roomType{};
    int roomNumber{};
    int cost{};
    Guest guest;
public:
    Reservation();
    Reservation(int _idReservation, const Date& _checkIn, const Date& _checkOut,
        int _numberOfPeople, std::string _roomType, int _roomNumber,
        int _cost, const Guest& _guest);
    ~Reservation();
    
    void Print() const;
    int GetIdReservation() const { return idReservation; }
    const Date& GetCheckIn() const { return checkIn; }
    const Date& GetCheckOut() const { return checkOut; }
    int GetNumberOfPeople() const { return numberOfPeople; }
    std::string GetRoomType() const { return roomType; }
    int GetRoomNumber() const { return roomNumber; }
    int GetCost() const { return cost; }
    Guest GetGuest() const { return guest; }

    // Setters
    void SetIdReservation(int _idReservation) { idReservation = _idReservation; }
    void SetCheckIn(const Date& _checkIn) { checkIn = _checkIn; }
    void SetCheckOut(const Date& _checkOut) { checkOut = _checkOut; }
    void SetNumberOfPeople(int _numberOfPeople) { numberOfPeople = _numberOfPeople; }
    void SetRoomType(std::string _roomType) { roomType = _roomType; }
    void SetRoomNumber(int _roomNumber) { roomNumber = _roomNumber; }
    void SetCost(int _cost) { cost = _cost; }
    void SetGuest(const Guest& _guest) { guest = _guest; }

};


