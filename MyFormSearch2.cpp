#include "MyFormSearch2.h"
#include "Reservation.h"
#include "Functions.h"

System::Void OP2sem2::MyFormSearch2::button1_Click(System::Object^ sender, System::EventArgs^ e)
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
			std::string str1 = buff[i].GetGuest().fio.surname + ' ' + buff[i].GetGuest().fio.name + ' ' + buff[i].GetGuest().fio.patronymic;
			label4->Text = Convert_string_to_String(str1);
			std::string str2 = buff[i].GetGuest().phoneNumber;
			label5->Text = Convert_string_to_String(str2);
			break;
		}
	}
	if (!temp)
	{
		MessageBox::Show("Данный номер не забронирован!", "Внимание!");
	}
	return System::Void();
}
