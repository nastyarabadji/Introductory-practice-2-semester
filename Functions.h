#pragma once

#include "Reservation.h"
#include "InfoAboutRooms.h"
#include "Rooms.h"

using namespace System;

void RemovingTheReservation(Reservation* (&), int&);

void SortV(Reservation*, int);
void SortU(Reservation*, int);
void SortAZ(Reservation*, int);
void SortZA(Reservation*, int);

void searchForOccupiedRooms(Reservation*, int, InfoAboutRooms*, std::string*);

void swap(Reservation* (&), int, int);
int differenceOfDate(const Date&, const Date&);
int datecmp(const Date&, const Date&);
Date GetCurrentDate();

bool IsLeapYear(int);
int NumberOfDaysInAMonths(int, int);
int GetAmountOfDays(Date, Date);
bool IsIntersectionOfDates(Reservation*, int, int, Date, Date, int);

int SearchOfMaxId(Reservation*, const int&);

void SaveTxt(Reservation*, int);
void ReadTextFileToStructArray(const char*, Reservation* (&), int&);
void ReportFromDeletedRecords(Reservation*, int&);

std::string& Convert_String_to_string(String^ s, std::string& os); //������������ System::string^ � std::string
String^ Convert_string_to_String(std::string& os, String^ s); //������������ std::string � System::string^
std::string Convert_String_to_string(String^ s); //������������ System::string^ � std::string
String^ Convert_string_to_String(std::string& os); //������������ std::string � System::string^
System::String^ Convert_char_to_String(char* ch); //������������ char* � System::string^
char* Convert_String_to_char(System::String^ string); //������������ System::string^ � char*

