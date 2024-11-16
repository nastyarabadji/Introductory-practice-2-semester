#pragma once

class Date {
public:
    int year{};
    int month{};
    int day{};

    Date();

    Date(int _day, int _month, int _year);

    void Print() const;
};
