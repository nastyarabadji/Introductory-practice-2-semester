#include "Functions.h"

bool IsIntersectionOfDates(Reservation* reservations, int numberOfReservations, int roomNumber, Date checkIn, Date checkOut, int index)
{
    bool flag = true;
    for (int i = 0; i < numberOfReservations; i++)
    {
        if (roomNumber == reservations[i].GetRoomNumber() && i != index)
        {
            if (differenceOfDate(reservations[i].GetCheckOut(), checkIn) < 0 &&
                differenceOfDate(reservations[i].GetCheckIn(), checkIn) < 0 &&
                differenceOfDate(reservations[i].GetCheckOut(), checkOut) < 0)
            {
                flag = true;
            }
            else if (differenceOfDate(reservations[i].GetCheckIn(), checkOut) > 0 &&
                differenceOfDate(reservations[i].GetCheckIn(), checkIn) > 0 &&
                differenceOfDate(reservations[i].GetCheckOut(), checkOut) > 0)
            {
                flag = true;
            }
            else
            {
                return false;
            }
        }
    }
    return true;;
}

void RemovingTheReservation(Reservation* (&reservations), int& numberOfReservations)
{
    Date current = GetCurrentDate();
    int changingNumberOfReservations{};
    Reservation* changingDates = new Reservation[numberOfReservations];
    for (int i = 0; i < numberOfReservations; i++)
    {
        if (datecmp(reservations[i].GetCheckOut(), current) < 0)
        {
            changingDates[changingNumberOfReservations] = reservations[i];
            changingNumberOfReservations++;
        }
        else
        {
            ReportFromDeletedRecords(reservations, i);
        }
    }
    delete[] reservations;
    reservations = new Reservation[changingNumberOfReservations];
    for (int i = 0; i < changingNumberOfReservations; i++)
    {
        reservations[i] = changingDates[i];
    }
    delete[] changingDates;
    numberOfReservations = changingNumberOfReservations;
    SaveTxt(reservations, numberOfReservations);
}

void SortAZ(Reservation* reservations, int numberOfReservation)
{
    for (int i = 0; i < numberOfReservation - 1; i++) {
        for (int j = 0; j < numberOfReservation - i - 1; j++) {
            if (reservations[j].GetRoomType() > reservations[j + 1].GetRoomType()) {
                swap(reservations, j, j + 1);
            }
        }
    }
}

void SortZA(Reservation* reservations, int numberOfReservation)
{
    for (int i = 0; i < numberOfReservation - 1; i++) {
        for (int j = 0; j < numberOfReservation - i - 1; j++) {
            if (reservations[j].GetRoomType() < reservations[j + 1].GetRoomType()) {
                swap(reservations, j, j + 1);
            }
        }
    }
}

void SortU(Reservation* reservations, int numberOfReservation)
{
            for (int i = 0; i < numberOfReservation - 1; i++) {
                for (int j = 0; j < numberOfReservation - i - 1; j++) {
                    if (datecmp(reservations[j].GetCheckOut(), reservations[j + 1].GetCheckOut()) > 0) {
                        swap(reservations, j, j + 1);
                    }
                }
            }
}

void SortV(Reservation* reservations, int numberOfReservation)
{
    for (int i = 0; i < numberOfReservation - 1; i++) {
        for (int j = 0; j < numberOfReservation - i - 1; j++) {
            if (datecmp(reservations[j].GetCheckOut(), reservations[j + 1].GetCheckOut()) < 0) {
                swap(reservations, j, j + 1);
            }
        }
    }
}

void searchForOccupiedRooms(Reservation* reservations, int numberOfReservation, InfoAboutRooms* infoAboutRooms, std::string* line) {
    Date curr = GetCurrentDate();

    line[0] = "Стандарт - ";
    line[1] = "Полулюкс - ";
    line[2] = "Люкс - ";
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < numberOfReservation; i++) {
            if (reservations[i].GetRoomType() == infoAboutRooms[j].roomType) {
                if (datecmp(reservations[i].GetCheckIn(), curr) >= 0 && datecmp(curr, reservations[i].GetCheckOut()) >= 0) {
                    line[j] += std::to_string(reservations[i].GetRoomNumber()) + ' ';
                }
            }
        }
    }
}


void swap(Reservation* (&data), int a, int b) {
    Reservation temp;
    temp = data[a];
    data[a] = data[b];
    data[b] = temp;
}

int differenceOfDate(const Date& date1, const Date& date2) {
    if (date1.year != date2.year) {
        return date1.year - date2.year;
    }
    if (date1.month != date2.month) {
        return date1.month - date2.month;
    }
    return date1.day - date2.day;
}

int datecmp(const Date& date1, const Date& date2) {
    if (differenceOfDate(date1, date2) < 0) {
        return 1; // дата1 предшедствует дате2
    }
    else if (differenceOfDate(date1, date2) > 0) {
        return -1;
    }
    else {
        return 0;
    }
}

Date GetCurrentDate() {
    time_t t = time(nullptr);
    tm* now = localtime(&t);
    Date currentDate = { now->tm_mday, now->tm_mon + 1, now->tm_year + 1900 };
    return currentDate;
}

void SaveTxt(Reservation* data, int numberOfReservation) {
    std::ofstream fout("Reservations.txt");
    if (fout.is_open()) {
        fout << numberOfReservation << "\n";
        for (int i{}; i < numberOfReservation; i++) {
            Date buffCheckIn = data[i].GetCheckIn();
            Date buffCheckOut = data[i].GetCheckOut();
            Guest buffGuest = data[i].GetGuest();
            fout << data[i].GetIdReservation() << " "
                << buffCheckIn.day << "."
                << buffCheckIn.month << "."
                << buffCheckIn.year << " "
                << buffCheckOut.day << "."
                << buffCheckOut.month << "."
                << buffCheckOut.year << " "
                << data[i].GetNumberOfPeople() << " "
                << data[i].GetRoomType() << " "
                << data[i].GetRoomNumber() << " "
                << data[i].GetCost() << " "
                << buffGuest.fio.surname << " "
                << buffGuest.fio.name << " "
                << buffGuest.fio.patronymic << " "
                << buffGuest.phoneNumber << " "
                << buffGuest.wishes;
            if (i != numberOfReservation - 1) {
                fout << "\n";
            }
        }
    }
    fout.close();
}

void ReadTextFileToStructArray(const char* fileName, Reservation* (&reservations), int& numberOfReservation) {
    std::ifstream inFile(fileName, std::ios::in);
    if (inFile.is_open()) {
        int countRow{};
        inFile >> countRow;
        Reservation* data = new Reservation[countRow];
        for (int i = 0; i < countRow; i++) {
            int buffIdReservation{}, buffNumberOfPeople{}, buffRoomNumber{}, buffCost{};
            std::string buffRoomType{}, buffWishes{};
            Date buffCheckIn, buffCheckOut;
            Guest buffGuest;
            inFile >> buffIdReservation >> buffCheckIn.day;
            inFile.ignore();
            inFile >> buffCheckIn.month;
            inFile.ignore();
            inFile >> buffCheckIn.year >> buffCheckOut.day;
            inFile.ignore();
            inFile >> buffCheckOut.month;
            inFile.ignore();
            inFile >> buffCheckOut.year;
            inFile >> buffNumberOfPeople;
            inFile >> buffRoomType;
            inFile >> buffRoomNumber;
            inFile >> buffCost;
            inFile >> buffGuest.fio.surname;
            inFile >> buffGuest.fio.name;
            inFile >> buffGuest.fio.patronymic;
            inFile >> buffGuest.phoneNumber;
            getline(inFile, buffWishes);
            buffGuest.wishes = buffWishes.substr(1);
            data[i].SetIdReservation(buffIdReservation);
            data[i].SetCheckIn(buffCheckIn);
            data[i].SetCheckOut(buffCheckOut);
            data[i].SetNumberOfPeople(buffNumberOfPeople);
            data[i].SetRoomType(buffRoomType);
            data[i].SetRoomNumber(buffRoomNumber);
            data[i].SetCost(buffCost);
            data[i].SetGuest(buffGuest);
        }

        delete[] reservations;

        reservations = new Reservation[countRow];
        for (int i = 0; i < countRow; i++) {
            reservations[i] = data[i];
        }

        numberOfReservation = countRow;
    }
    inFile.close();
}

int SearchOfMaxId(Reservation* reservations, const int& numberOfReservations)
{
    int maxId{};
    for (int i = 0; i < numberOfReservations; i++)
    {
        if (reservations[i].GetIdReservation() > maxId)
        {
            maxId = reservations[i].GetIdReservation();
        }
    }
    return maxId;
}

void ReportFromDeletedRecords(Reservation* reservations, int& index)
{
   std::ofstream fout;
    fout.open("Report.txt", std::ios_base::app);
    Guest buffGuest = reservations[index].GetGuest();
    if (fout.is_open())
    {
        fout << reservations[index].GetRoomType() << " ";
        fout << reservations[index].GetRoomNumber() << " ";
        fout << buffGuest.wishes << '\n';
    }
    else
    {
        std::cout << "Произошла ошибка при сохранении данных в текстовый файл" << std::endl;
    }
    fout.close();
}

bool IsLeapYear(int year)
{
    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0) {
            return true;
        }
    }
    return false;
}

int NumberOfDaysInAMonths(int year, int month)
{
    if (month == 1 || month == 3 || month == 5 || month == 7
        || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    if (IsLeapYear(year))
    {
        if (month == 2)
        {
            return 29;
        }
    }
    else
    {
        if (month == 2)
        {
            return 28;
        }
    }
    return 30;
}

int GetAmountOfDays(Date buffCheckIn, Date buffCheckOut)
{
    if (buffCheckOut.year == buffCheckIn.year)
    {
        if (buffCheckOut.month == buffCheckIn.month)
        {
            return (buffCheckOut.day - buffCheckIn.day);
        }
        else
        {
            int result{};
            for (int i = 0; i <= buffCheckOut.month - buffCheckIn.month; i++)
            {
                if (i == 0)
                {
                    result += NumberOfDaysInAMonths(buffCheckIn.year,
                        buffCheckIn.month) - buffCheckIn.day;
                }
                else if (i == buffCheckOut.month - buffCheckIn.month)
                {
                    result += buffCheckOut.day;
                }
                else
                {
                    result += NumberOfDaysInAMonths(buffCheckOut.year, buffCheckIn.month + i);
                }
            }
            return result;
        }
    }
    else
    {
        int result{};
        for (int i = 0; i <= 12 + buffCheckOut.month - buffCheckIn.month; i++)
        {
            if (i == 0)
            {
                result += NumberOfDaysInAMonths(buffCheckIn.year,
                    buffCheckIn.month) - buffCheckIn.day;
            }
            else if (i == 12 + buffCheckOut.month - buffCheckIn.month)
            {
                result += buffCheckOut.day;
            }
            else
            {
                result += NumberOfDaysInAMonths(buffCheckOut.year, buffCheckIn.month + i);
            }
        }
        return result;
    }
    return 0;
}

//конвертируем System::string^ в std::string
std::string& Convert_String_to_string(String^ s, std::string& os) {
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));

    return os;
}

//конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os, String^ s) {
    s = gcnew System::String(os.c_str());

    return s;
}

//конвертируем System::string^ в std::string
std::string Convert_String_to_string(String^ s) {
    std::string os;
    using namespace Runtime::InteropServices;

    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;

    Marshal::FreeHGlobal(IntPtr((void*)const_cast<char*>(chars)));

    return os;
}

//конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os) {
    System::String^ s = gcnew System::String(os.c_str());

    return s;
}

//конвертируем char в System::string^
System::String^ Convert_char_to_String(char ch) {
    char* chr = new char();
    chr[0] = ch;
    System::String^ str;
    for (int i = 0; chr[i] != '\0'; i++)
        str += wchar_t(ch);
    return str;
}

//конвертируем System::string^ в char*
char* Convert_String_to_char(System::String^ string) {
    using namespace System::Runtime::InteropServices;
    return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}

//конвертируем char* в System::string^
System::String^ Convert_char_to_String(char* ch) {
    char* chr = new char();
    chr = ch;
    System::String^ str;
    for (int i = 0; chr[i] != '\0'; i++)
        str += wchar_t(ch[i]);
    return str;
}
