#include "MyFormSearch1.h"
#include "Reservation.h"
#include "Functions.h"

System::Void OP2sem2::MyFormSearch1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	int buffCount{};
	Reservation* buff = new Reservation[buffCount];
	ReadTextFileToStructArray("Reservations.txt", buff, buffCount);
	SortV(buff, buffCount);
	bool temp = false;
	String^ s = comboBox1->SelectedItem->ToString();
	int roomNumber{};
	Int32::TryParse(s, roomNumber);
	for (int i = 0; i < buffCount; i++) {
		if (buff[i].GetRoomNumber() == roomNumber) {
			temp = true;
			std::string str = Convert_String_to_string(buff[i].GetCheckOut().day.ToString()) + '.' + Convert_String_to_string(buff[i].GetCheckOut().month.ToString()) + '.' + Convert_String_to_string(buff[i].GetCheckOut().year.ToString());
			label3->Text = Convert_string_to_String(str);
			break;
		}
	}
	if (!temp)
	{
		MessageBox::Show("Данный номер не забронирован!", "Внимание!");
	}
	return System::Void();
}
