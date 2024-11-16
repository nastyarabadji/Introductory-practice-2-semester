#include "MyFormSearch3.h"
#include "Reservation.h"
#include "Functions.h"

System::Void OP2sem2::MyFormSearch3::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	int buffCount{};
	Reservation* buff = new Reservation[buffCount];
	ReadTextFileToStructArray("Reservations.txt", buff, buffCount);
	bool temp = false;
	String^ s = comboBox1->SelectedItem->ToString();
	if (s == "Стандарт")
	{
		label3->Text = "3000 рублей";
	}
	else if (s == "Полулюкс")
	{
		label3->Text = "6000 рублей";
	}
	else if (s == "Люкс")
	{
		label3->Text = "12000 рублей";
	}

    return System::Void();
}
