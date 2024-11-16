#include "AddForm.h"
#include "Reservation.h"
#include "Functions.h"
#include "Rooms.h"
#include "InfoAboutRooms.h"


System::Void OP2sem2::MyForm1::button2_Click(System::Object^ sender, System::EventArgs^ e)
{    // Существующий код кнопки "Ок"
    //    //comboBox1_SelectedIndexChanged()
    int const numberRoomTypes = 3;

    int const countOfStandardRooms = 9;
    int const countOfJuniorSuiteRooms = 7;
    int const countOfSuitRooms = 5;

    // для получения информации о типе комнаты
    InfoAboutRooms infoAboutRooms[numberRoomTypes] = { {"Стандарт", 3000, 2, countOfStandardRooms},
    {"Полулюкс", 6000, 4, countOfJuniorSuiteRooms}, {"Люкс", 12000, 6, countOfSuitRooms} };

    // массивы с номерами апаратаментов и занятостью апартаментов для каждого из 3 типов
    Rooms standardRooms[countOfStandardRooms]{};
    Rooms juniorSuiteRooms[countOfJuniorSuiteRooms]{};
    Rooms suiteRooms[countOfSuitRooms]{};


    int size = 0;
    Reservation* dates = new Reservation[size];

    ReadTextFileToStructArray("Reservations.txt", dates, size);

    if (textBox1->Text->Length == 0 || textBox2->Text->Length == 0 || textBox3->Text->Length == 0
        || maskedTextBox1->Text == "" || comboBox1->SelectedIndex == -1 || comboBox1->SelectedIndex == -1 || comboBox2->SelectedIndex == -1
        || comboBox3->SelectedIndex == -1)
    {
        MessageBox::Show("Вы заполнили не все поля!", "Внимание!");
        return;
    }


    int checkInDay = dateTimePicker1->Value.Day;
    int checkInMonth = dateTimePicker1->Value.Month;
    int checkInYear = dateTimePicker1->Value.Year;
    String^ checkIn = String::Format("{0}.{1}.{2}", checkInDay, checkInMonth, checkInYear);

    int checkOutDay = dateTimePicker2->Value.Day;
    int checkOutMonth = dateTimePicker2->Value.Month;
    int checkOutYear = dateTimePicker2->Value.Year;
    String^ checkOut = String::Format("{0}.{1}.{2}", checkOutDay, checkOutMonth, checkOutYear);

    String^ roomType = comboBox1->SelectedItem->ToString();
    String^ numberOfPeopleStr = comboBox2->SelectedItem->ToString();
    int numberOfPeople = int::Parse(numberOfPeopleStr);
    String^ numberOfRoomStr = comboBox3->SelectedItem->ToString();
    int numberOfRoom = int::Parse(numberOfRoomStr);

    String^ surname = textBox1->Text;
    String^ name = textBox2->Text;
    String^ patronymic = textBox3->Text;
    String^ fio = surname + "_" + name + "_" + patronymic;

    fio = fio->Replace("_", " ");
    String^ wishes = textBox4->Text;

    String^ phoneNumber = maskedTextBox1->Text;

    int id = SearchOfMaxId(dates, size) + 1;

    int cost{};
    // Проверка, что пользователь не ввел ничего в textBox

    if (roomType == "Стандарт")
    {
        cost = GetAmountOfDays({ checkInDay, checkInMonth, checkInYear }, { checkOutDay, checkOutMonth, checkOutYear }) * infoAboutRooms[0].pricePerNight;
    }
    else if (roomType == "Полулюкс")
    {
        cost = GetAmountOfDays({ checkInDay, checkInMonth, checkInYear }, { checkOutDay, checkOutMonth, checkOutYear }) * infoAboutRooms[1].pricePerNight;
    }
    if (roomType == "Люкс")
    {
        cost = GetAmountOfDays({ checkInDay, checkInMonth, checkInYear }, { checkOutDay, checkOutMonth, checkOutYear }) * infoAboutRooms[2].pricePerNight;
    }
    
    if (differenceOfDate(GetCurrentDate(), { checkOutDay, checkOutMonth, checkOutYear }) > 0 || differenceOfDate({ checkInDay, checkInMonth, checkInYear }, { checkOutDay, checkOutMonth, checkOutYear }) >= 0
        || differenceOfDate(GetCurrentDate(), {checkInDay, checkInMonth, checkInYear}) > 0 )
    {
        MessageBox::Show("Дата заселения позже даты выселения, совпадает с ней или дата заселения идёт раньше текущей даты!!", "Внимание!");
        return;
    }
    if ((IsIntersectionOfDates(dates, size, numberOfRoom, { checkInDay, checkInMonth, checkInYear }, { checkOutDay, checkOutMonth, checkOutYear }, -1)) == false)
    {
        MessageBox::Show("Введённый номер занят на данный период!", "Внимание!");
        return;
    }
    dataGridView1->Rows->Add(id, checkIn, checkOut, numberOfPeopleStr, roomType, numberOfRoomStr, cost, fio, phoneNumber, wishes);

    this->Close();
    MessageBox::Show("Запись добавлена!", "Внимание!");
    size++;
    Reservation* newDates = new Reservation[size];
    for (int i = 0; i < size - 1; i++)
    {
        newDates[i] = dates[i];
    }
    //delete[] dates;

    std::string roomTypeS = Convert_String_to_string(roomType);

    newDates[size-1].SetIdReservation(id);
    newDates[size-1].SetCheckIn({ checkInDay, checkInMonth, checkInYear });
    newDates[size-1].SetCheckOut({ checkOutDay, checkOutMonth, checkOutYear });
    newDates[size-1].SetNumberOfPeople(numberOfPeople);
    newDates[size-1].SetRoomType(roomTypeS);
    newDates[size-1].SetRoomNumber(numberOfRoom);
    newDates[size-1].SetCost(cost);
    newDates[size-1].SetGuest({ { Convert_String_to_string(surname), Convert_String_to_string(name), Convert_String_to_string(patronymic) }, Convert_String_to_string(phoneNumber), Convert_String_to_string(wishes) } );

    SaveTxt(newDates, size);

    textBox1->Clear();
    textBox2->Clear();
    textBox3->Clear();
    textBox4->Clear();
    maskedTextBox1->Clear();


    return System::Void();

}
System::Void OP2sem2::MyForm1::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    String^ selectedType = comboBox1->SelectedItem->ToString();
    comboBox2->Items->Clear();
    comboBox3->Items->Clear();
    if (selectedType == "Стандарт") {
                comboBox2->Items->Add("1");
        comboBox3->Items->Add("11");
        comboBox3->Items->Add("12");
        comboBox3->Items->Add("13");
        comboBox3->Items->Add("14");
        comboBox3->Items->Add("15");
        comboBox3->Items->Add("16");
        comboBox3->Items->Add("17");
        comboBox3->Items->Add("18");
        comboBox3->Items->Add("19");

        // Код для заполнения comboBox2 и comboBox3 для "Стандарт"    
    }
    else if (selectedType == "Полулюкс") { 
        
                comboBox2->Items->Add("1");
        comboBox2->Items->Add("2");
        comboBox3->Items->Add("21");
        comboBox3->Items->Add("22");
        comboBox3->Items->Add("23");
        comboBox3->Items->Add("24");
        comboBox3->Items->Add("25");
        comboBox3->Items->Add("26");
        comboBox3->Items->Add("27");

    }
    else if (selectedType == "Люкс") {
                 comboBox2->Items->Add("1");
        comboBox2->Items->Add("2");
        comboBox2->Items->Add("3");
        comboBox3->Items->Add("31");
        comboBox3->Items->Add("32");
        comboBox3->Items->Add("33");
        comboBox3->Items->Add("34");
        comboBox3->Items->Add("35");
   
    }
    comboBox2->Enabled = true;    
    comboBox3->Enabled = true;
}
System::Void OP2sem2::MyForm1::Form1_Load(System::Object ^ sender, System::EventArgs ^ e) {
    // Заполняем comboBox1 типами номеров    
    comboBox1->Items->Add("Стандарт");
    comboBox1->Items->Add("Полулюкс");    
    comboBox1->Items->Add("Люкс");
    // Отключаем comboBox2 и comboBox3 на старте
    comboBox2->Enabled = false;    
    comboBox3->Enabled = false;
}