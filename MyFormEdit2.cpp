#include "MyFormEdit2.h"
#include "Reservation.h"
#include "Functions.h"

System::Void OP2sem2::MyFormEdit2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count{};
	Reservation* dates = new Reservation[count];
	ReadTextFileToStructArray("Reservations.txt", dates, count);
	String^ str = textBox1->Text;
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
	int indexRow{};
	for (int i = 0; i < count; i++)
	{
		if (value == dates[i].GetIdReservation())
		{
			indexRow = i;
		}
	}

	dataGridView1->Rows[indexRow]->Cells[9]->Value = str;

	Guest guest = { dates[indexRow].GetGuest().fio, dates[indexRow].GetGuest().phoneNumber, Convert_String_to_string(str) };
	dates[indexRow].SetGuest(guest);
	SaveTxt(dates, count);
	this->Close();
	MessageBox::Show("Данные изменены!", "Внимание!");


	//return System::Void();
}
