#include "MyForm.h"
#include "Reservation.h"
#include "Functions.h"
#include "AddForm.h"
#include "MyFormEdit1.h"
#include "MyFormEdit2.h"
#include "MyFormSearch1.h"
#include "MyFormSearch2.h"
#include "MyFormSearch3.h"
#include <sstream>

Reservation* reservations = nullptr;
int count{};

int const numberRoomTypes = 3;

int const countOfStandardRooms = 9;
int const countOfJuniorSuiteRooms = 7;
int const countOfSuitRooms = 5;

// ��� ��������� ���������� � ���� �������
InfoAboutRooms infoAboutRooms[numberRoomTypes] = { {"��������", 3000, 2, countOfStandardRooms},
{"��������", 6000, 4, countOfJuniorSuiteRooms}, {"����", 12000, 6, countOfSuitRooms} };

// ������� � �������� ������������� � ���������� ������������ ��� ������� �� 3 �����
Rooms standardRooms[countOfStandardRooms]{};
Rooms juniorSuiteRooms[countOfJuniorSuiteRooms]{};
Rooms suiteRooms[countOfSuitRooms]{};


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	OP2sem2::MyForm form;
	

	Application::Run(% form);

}

System::Void OP2sem2::MyForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void OP2sem2::MyForm::���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void OP2sem2::MyForm::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void OP2sem2::MyForm::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	//dataGridView1->Sort(dataGridView1->Columns["���� ���������"], System::ComponentModel::ListSortDirection::Ascending);
	//MessageBox::Show("������ �������������!", "��������!");
	int buffCount{};
	Reservation* buff = new Reservation[buffCount];
	ReadTextFileToStructArray("Reservations.txt", buff, buffCount);
	SortV(buff, buffCount);
	SaveTxt(buff, buffCount);
	ReadTextFileToStructArray("Reservations.txt", reservations, count);
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();
	dataGridView1->RowCount = buffCount + 1;
	dataGridView1->ColumnCount = 10;

	Show();
	//dataGridView1->Height = dataGridView1->RowCount + 5 * dataGridView1->RowTemplate->Height;
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
	dataGridView1->Rows->RemoveAt(dataGridView1->Rows->Count - 1);
	dataGridView1->BorderStyle = BorderStyle::None;

	MessageBox::Show("������ �������������!", "��������!");

	return System::Void();
}

System::Void OP2sem2::MyForm::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	int buffCount{};
	Reservation* buff = new Reservation[buffCount];
	ReadTextFileToStructArray("Reservations.txt", buff, buffCount);
	SortU(buff, buffCount);
	SaveTxt(buff, buffCount);
	ReadTextFileToStructArray("Reservations.txt", reservations, count);
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();
	dataGridView1->RowCount = buffCount + 1;
	dataGridView1->ColumnCount = 10;

	Show();
	//dataGridView1->Height = dataGridView1->RowCount + 5 * dataGridView1->RowTemplate->Height;
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
	dataGridView1->Rows->RemoveAt(dataGridView1->Rows->Count - 1);
	dataGridView1->BorderStyle = BorderStyle::None;

	MessageBox::Show("������ �������������!", "��������!");

	return System::Void();
}

System::Void OP2sem2::MyForm::��ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	int buffCount{};
	Reservation* buff = new Reservation[buffCount];
	ReadTextFileToStructArray("Reservations.txt", buff, buffCount);
	SortAZ(buff, buffCount);
	SaveTxt(buff, buffCount);
	ReadTextFileToStructArray("Reservations.txt", reservations, count);
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();
	dataGridView1->RowCount = buffCount + 1;
	dataGridView1->ColumnCount = 10;

	Show();
	//dataGridView1->Height = dataGridView1->RowCount + 5 * dataGridView1->RowTemplate->Height;
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
	dataGridView1->Rows->RemoveAt(dataGridView1->Rows->Count - 1);
	dataGridView1->BorderStyle = BorderStyle::None;

	MessageBox::Show("������ �������������!", "��������!");

	return System::Void();
}

System::Void OP2sem2::MyForm::��ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	int buffCount{};
	Reservation* buff = new Reservation[buffCount];
	ReadTextFileToStructArray("Reservations.txt", buff, buffCount);
	SortZA(buff, buffCount);
	SaveTxt(buff, buffCount);
	ReadTextFileToStructArray("Reservations.txt", reservations, count);
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();
	dataGridView1->RowCount = buffCount + 1;
	dataGridView1->ColumnCount = 10;

	Show();
	//dataGridView1->Height = dataGridView1->RowCount + 5 * dataGridView1->RowTemplate->Height;
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
	dataGridView1->Rows->RemoveAt(dataGridView1->Rows->Count - 1);
	dataGridView1->BorderStyle = BorderStyle::None;

	MessageBox::Show("������ �������������!", "��������!");

	return System::Void();

	return System::Void();
}

System::Void OP2sem2::MyForm::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DialogResult result = MessageBox::Show("�� ����� ������ ������� ��� ���������� ������?", "��������!", MessageBoxButtons::OKCancel);

	// ���������, ����� ������ ����� ������������
	if (result == System::Windows::Forms::DialogResult::OK) {
		// ��� ��� ��������� ������� ������ "��"
			//int size{};
	//Reservation* dates = new Reservation[size];
		ReadTextFileToStructArray("Reservations.txt", reservations, count);
		RemovingTheReservation(reservations, count);
		ReadTextFileToStructArray("Reservations.txt", reservations, count);
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();

		Header();
		dataGridView1->RowCount = count + 1;
		dataGridView1->ColumnCount = 10;

		Show();
		//dataGridView1->Height = dataGridView1->RowCount + 5 * dataGridView1->RowTemplate->Height;
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoResizeColumns();
		dataGridView1->Rows->RemoveAt(dataGridView1->Rows->Count - 1);
		dataGridView1->BorderStyle = BorderStyle::None;

		MessageBox::Show("������ �������!", "��������!");

	}
	return System::Void();
}

System::Void OP2sem2::MyForm::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1^ add = gcnew MyForm1(reservations, count, dataGridView1);
	add->Show();
	//return System::Void();
}

System::Void OP2sem2::MyForm::�����������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	int buffCount{};
	Reservation* buff = new Reservation[buffCount];
	ReadTextFileToStructArray("Reservations.txt", buff, buffCount);
	std::string line[3];
	searchForOccupiedRooms(buff, count, infoAboutRooms, line);
	std::string str = line[0] + '\n' + line[1] + '\n' + line[2];
	MessageBox::Show(Convert_string_to_String(str), "������� ������ �� ������� ������ �������");
	return System::Void();
}

System::Void OP2sem2::MyForm::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormSearch2^ search2 = gcnew MyFormSearch2(dataGridView1);
	search2->Show();

	return System::Void();
}

System::Void OP2sem2::MyForm::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormSearch1^ search1 = gcnew MyFormSearch1(dataGridView1);
	search1->Show();

	return System::Void();
}

System::Void OP2sem2::MyForm::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormSearch3^ search3 = gcnew MyFormSearch3(dataGridView1);
	search3->Show();

	return System::Void();
}

System::Void OP2sem2::MyForm::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	int buffCount{};
	Reservation* buff = new Reservation[buffCount];
	ReadTextFileToStructArray("Reservations.txt", buff, buffCount);
	Form^ form = gcnew Form();
	form->Text = "���������� ������������ ������� ������� ����";
	form->Size = System::Drawing::Size(500, 400);
	form->ShowIcon = false;
	form->StartPosition = FormStartPosition::CenterScreen;

	Chart^ chart = gcnew Chart();
	chart->Dock = DockStyle::Fill;

	form->Controls->Add(chart);

	chart->ChartAreas->Add("ChartArea");
	chart->Series->Add("���-�� ������");
	chart->Series["���-�� ������"]->ChartType = SeriesChartType::Column;

	int countStandard{}, countJuniorSuite{}, countSuite{};

	std::ifstream file("Report.txt");

	std::string line;

	// ������ ������ �� �����
	while (std::getline(file, line)) {
		std::istringstream iss(line); // ������� ����� ��� ������ �� �������
		std::string firstWord;
		iss >> firstWord; // ��������� ������ ����� �� ������
		if (firstWord == "��������")
		{
			countStandard++;
		}
		else if (firstWord == "��������")
		{
			countJuniorSuite++;
		}
		if (firstWord == "����")
		{
			countSuite++;
		}
		// ����� �� �����, ���� �� ����� ��������� ������ ������ �����
	}
	file.close();

	for (int i = 0; i < buffCount; i++)
	{
		if (buff[i].GetRoomType() == "��������")
		{
			countStandard++;
		}
		else if (buff[i].GetRoomType() == "��������")
		{
			countJuniorSuite++;
		}
		else if (buff[i].GetRoomType() == "����")
		{
			countSuite++;
		}
	}

	chart->Series["���-�� ������"]->Points->AddXY("��������", countStandard);
	chart->Series["���-�� ������"]->Points->AddXY("��������", countJuniorSuite);
	chart->Series["���-�� ������"]->Points->AddXY("����", countSuite);
	
	chart->ChartAreas["ChartArea"]->AxisX->Title = "���� �������";
	chart->ChartAreas["ChartArea"]->AxisY->Title = "����������";
	chart->Legends->Add("Legend");

	form->MaximizeBox = false;
	form->MinimizeBox = false;
	form->ShowDialog(); 	
	return System::Void();
}

System::Void OP2sem2::MyForm::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::ifstream file("Report.txt");
	if (!file.is_open()) {
		std::cout << "�� ������� ������� ����" << std::endl;
		return;
	}
	std::string fileContent;
	std::string line;
	while (std::getline(file, line)) {
		fileContent += line + '\n'; // ��������� ���������� ������ ������ � ����������
	}

	file.close();
	String^ str = Convert_string_to_String(fileContent);
	MessageBox::Show(str, "�������� ������");
	return System::Void();
}

void OP2sem2::MyForm::Header()
{
	//int numberOfReservations{};
	//Reservation* reservations = new Reservation[numberOfReservations];


	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn;
	c1->Name = "idReservation";
	c1->HeaderText = "ID �����";
	c1->Width = 150;
	dataGridView1->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn;
	c2->Name = "checkIn";
	c2->HeaderText = "���� ���������";
	c2->Width = 150;
	dataGridView1->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn;
	c3->Name = "checkOut";
	c3->HeaderText = "���� ���������";
	c3->Width = 150;
	dataGridView1->Columns->Add(c3);

	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn;
	c4->Name = "numberOfPeople";
	c4->HeaderText = "���������� �����";
	c4->Width = 150;
	dataGridView1->Columns->Add(c4);

	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn;
	c5->Name = "typeOfNumber";
	c5->HeaderText = "��� ������";
	c5->Width = 150;
	dataGridView1->Columns->Add(c5);

	DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn;
	c6->Name = "numberOfRooms";
	c6->HeaderText = "����� �������";
	c6->Width = 150;
	dataGridView1->Columns->Add(c6);

	DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn;
	c7->Name = "cost";
	c7->HeaderText = "���������";
	c7->Width = 150;
	dataGridView1->Columns->Add(c7);

	DataGridViewTextBoxColumn^ c8 = gcnew DataGridViewTextBoxColumn;
	c8->Name = "fio";
	c8->HeaderText = "���";
	c8->Width = 150;
	dataGridView1->Columns->Add(c8);

	DataGridViewTextBoxColumn^ c9 = gcnew DataGridViewTextBoxColumn;
	c9->Name = "phoneNumber";
	c9->HeaderText = "����� ��������";
	c9->Width = 150;
	dataGridView1->Columns->Add(c9);

	DataGridViewTextBoxColumn^ c10 = gcnew DataGridViewTextBoxColumn;
	c10->Name = "wishes";
	c10->HeaderText = "���������";
	c10->Width = 150;
	dataGridView1->Columns->Add(c10);

	//dataGridView1->TopLeftHeaderCell->Value = "������������ �������";
	dataGridView1->AutoResizeColumns();




	//throw gcnew System::NotImplementedException();
}

void OP2sem2::MyForm::Show()
{
	for (int i = 0; i < dataGridView1->RowCount - 1; i++)
	{
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

		dataGridView1->Rows[i]->Cells[0]->Value = reservations[i].GetIdReservation();
		dataGridView1->Rows[i]->Cells[1]->Value = reservations[i].GetCheckIn().day + "." + reservations[i].GetCheckIn().month +
			"." + reservations[i].GetCheckIn().year;
		dataGridView1->Rows[i]->Cells[2]->Value = reservations[i].GetCheckOut().day + "." + reservations[i].GetCheckOut().month +
			"." + reservations[i].GetCheckOut().year;
		dataGridView1->Rows[i]->Cells[3]->Value = reservations[i].GetNumberOfPeople();
		dataGridView1->Rows[i]->Cells[4]->Value = Convert_string_to_String(reservations[i].GetRoomType());
		dataGridView1->Rows[i]->Cells[5]->Value = reservations[i].GetRoomNumber();
		dataGridView1->Rows[i]->Cells[6]->Value = reservations[i].GetCost();
		dataGridView1->Rows[i]->Cells[7]->Value = Convert_string_to_String(reservations[i].GetGuest().fio.surname) + " " + Convert_string_to_String(reservations[i].GetGuest().fio.name) + " " + Convert_string_to_String(reservations[i].GetGuest().fio.patronymic);
		dataGridView1->Rows[i]->Cells[8]->Value = Convert_string_to_String(reservations[i].GetGuest().phoneNumber);
		dataGridView1->Rows[i]->Cells[9]->Value = Convert_string_to_String(reservations[i].GetGuest().wishes);
	}
	//throw gcnew System::NotImplementedException();
}

System::Void OP2sem2::MyForm::label1_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void OP2sem2::MyForm::MyForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	count = 0;
	ReadTextFileToStructArray("Reservations.txt", reservations, count);

	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();
	dataGridView1->RowCount = count + 1;
	dataGridView1->ColumnCount = 10;

	Show();
	//dataGridView1->Height = dataGridView1->RowCount + 5 * dataGridView1->RowTemplate->Height;
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
	dataGridView1->Rows->RemoveAt(dataGridView1->Rows->Count - 1);
	dataGridView1->BorderStyle = BorderStyle::None;
	//dataGridView1->Height = dataGridView1->RowCount * dataGridView1->RowTemplate->Height;


	return System::Void();
}

System::Void OP2sem2::MyForm::�������������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormEdit1^ edit1 = gcnew MyFormEdit1(reservations, count, dataGridView1);
	edit1->Show();
	return System::Void();
}

System::Void OP2sem2::MyForm::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormEdit2^ edit2 = gcnew MyFormEdit2(reservations, count, dataGridView1);
	edit2->Show();
	return System::Void();
}
