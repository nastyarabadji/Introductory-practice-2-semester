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
	if (s == "��������")
	{
		label3->Text = "3000 ������";
	}
	else if (s == "��������")
	{
		label3->Text = "6000 ������";
	}
	else if (s == "����")
	{
		label3->Text = "12000 ������";
	}

    return System::Void();
}
