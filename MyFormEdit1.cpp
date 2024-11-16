#include "MyFormEdit1.h"
#include "Reservation.h"
#include "Functions.h"

System::Void OP2sem2::MyFormEdit1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count{};
	Reservation* dates = new Reservation[count];
	ReadTextFileToStructArray("Reservations.txt", dates, count);
	int value = static_cast<int>(numericUpDown1->Value);
	int temp{};
	for (int i = 0; i < count; i++)
	{
		if (dates[i].GetIdReservation() == value)
		{
			temp++;
		}
	}
	if (temp == 0)
	{
		MessageBox::Show("Такого id не существует", "Внимание!");
		return;
	}
	int checkOutDay = dateTimePicker1->Value.Day;
	int checkOutMonth = dateTimePicker1->Value.Month;
	int checkOutYear = dateTimePicker1->Value.Year;
	String^ checkOut = String::Format("{0}.{1}.{2}", checkOutDay, checkOutMonth, checkOutYear);

	int indexRow{};
	for (int i = 0; i < count; i++)
	{
		if (value == dates[i].GetIdReservation())
		{
			indexRow = i;
		}
	}

	if (differenceOfDate(GetCurrentDate(), { checkOutDay, checkOutMonth, checkOutYear }) > 0 || differenceOfDate(dates[indexRow].GetCheckIn(), { checkOutDay, checkOutMonth, checkOutYear }) > 0
		|| differenceOfDate(dates[indexRow].GetCheckIn(), { checkOutDay, checkOutMonth, checkOutYear }) > 0)
	{
		MessageBox::Show("Дата заселения позже даты выселения, совпадает с ней или дата заселения идёт раньше текущей даты!!", "Внимание!");
		return;
	}
	if ((IsIntersectionOfDates(dates, size, dates[indexRow].GetRoomNumber(), dates[indexRow].GetCheckIn(), {checkOutDay, checkOutMonth, checkOutYear}, indexRow)) == false)
	{
		MessageBox::Show("Введённый номер занят на данный период!", "Внимание!");
		return;
	}


	dataGridView1->Rows[indexRow]->Cells[2]->Value = checkOut;
	array<String^>^ dateComponents = checkOut->Split('.');
	int day = Int32::Parse(dateComponents[0]);
	int month = Int32::Parse(dateComponents[1]);
	int year = Int32::Parse(dateComponents[2]);

	if (dates[indexRow].GetRoomType() == "Стандарт")
	{
		dataGridView1->Rows[indexRow]->Cells[6]->Value = GetAmountOfDays(dates[indexRow].GetCheckIn(), { day, month, year }) * 3000;

	}
	else if (dates[indexRow].GetRoomType() == "Полулюкс")
	{
		dataGridView1->Rows[indexRow]->Cells[6]->Value = GetAmountOfDays(dates[indexRow].GetCheckIn(), { day, month, year }) * 6000;

	}
	else if (dates[indexRow].GetRoomType() == "Люкс")
	{
		dataGridView1->Rows[indexRow]->Cells[6]->Value = GetAmountOfDays(dates[indexRow].GetCheckIn(), { day, month, year }) * 12000;

	}

		// Выводим результат
	dates[indexRow].SetCheckOut({day, month, year});
	SaveTxt(dates, count);
	this->Close();
	MessageBox::Show("Данные изменены!", "Внимание!");
	//this->Close();

	//return System::Void();
}
