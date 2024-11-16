#pragma once

#include "Functions.h"
#include <iostream>
#using <System.Windows.Forms.DataVisualization.dll>
#using <System.Drawing.dll>
#using <System.dll>

using namespace System::Windows::Forms::DataVisualization::Charting;


namespace OP2sem2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
			Header();
			Show();
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíèòüÄàííûåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüÄàííûåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óäàëèòüÄàííûåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîğòèğîâàòüÄàííûåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîÄàòåÂûñåëåíèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîÂîçğàñòàíèşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîÓáûâàíèşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àßToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÿÀToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîèñêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàíÿòûåÍîìåğàÍàÒåêóøèéÌîìåíòÂğåìåíèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èíôîğìàöèşÎÃîñòåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äàòóÂûñåëåíèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öåíóÇàÍî÷üToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ãèñòîãğàììàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îò÷¸òÈçToolStripMenuItem;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ äàòóÂûñåëåíèÿToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîæåëàíèÿToolStripMenuItem;




	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èçìåíèòüÄàííûåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äàòóÂûñåëåíèÿToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîæåëàíèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüÄàííûåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüÄàííûåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîğòèğîâàòüÄàííûåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÄàòåÂûñåëåíèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÂîçğàñòàíèşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÓáûâàíèşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àßToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÿÀToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîèñêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàíÿòûåÍîìåğàÍàÒåêóøèéÌîìåíòÂğåìåíèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíôîğìàöèşÎÃîñòåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äàòóÂûñåëåíèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öåíóÇàÍî÷üToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãèñòîãğàììàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îò÷¸òÈçToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âûõîäToolStripMenuItem,
					this->ãèñòîãğàììàToolStripMenuItem, this->îò÷¸òÈçToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1445, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->èçìåíèòüÄàííûåToolStripMenuItem,
					this->äîáàâèòüÄàííûåToolStripMenuItem, this->óäàëèòüÄàííûåToolStripMenuItem, this->ñîğòèğîâàòüÄàííûåToolStripMenuItem, this->ïîèñêToolStripMenuItem
			});
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->âûõîäToolStripMenuItem->Text = L"Äåéñòâèÿ";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// èçìåíèòüÄàííûåToolStripMenuItem
			// 
			this->èçìåíèòüÄàííûåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->äàòóÂûñåëåíèÿToolStripMenuItem1,
					this->ïîæåëàíèÿToolStripMenuItem
			});
			this->èçìåíèòüÄàííûåToolStripMenuItem->Name = L"èçìåíèòüÄàííûåToolStripMenuItem";
			this->èçìåíèòüÄàííûåToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->èçìåíèòüÄàííûåToolStripMenuItem->Text = L"Èçìåíèòü ";
			this->èçìåíèòüÄàííûåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::èçìåíèòüÄàííûåToolStripMenuItem_Click);
			// 
			// äàòóÂûñåëåíèÿToolStripMenuItem1
			// 
			this->äàòóÂûñåëåíèÿToolStripMenuItem1->Name = L"äàòóÂûñåëåíèÿToolStripMenuItem1";
			this->äàòóÂûñåëåíèÿToolStripMenuItem1->Size = System::Drawing::Size(203, 26);
			this->äàòóÂûñåëåíèÿToolStripMenuItem1->Text = L"Äàòó âûñåëåíèÿ";
			this->äàòóÂûñåëåíèÿToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::äàòóÂûñåëåíèÿToolStripMenuItem1_Click);
			// 
			// ïîæåëàíèÿToolStripMenuItem
			// 
			this->ïîæåëàíèÿToolStripMenuItem->Name = L"ïîæåëàíèÿToolStripMenuItem";
			this->ïîæåëàíèÿToolStripMenuItem->Size = System::Drawing::Size(203, 26);
			this->ïîæåëàíèÿToolStripMenuItem->Text = L"Ïîæåëàíèÿ";
			this->ïîæåëàíèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîæåëàíèÿToolStripMenuItem_Click);
			// 
			// äîáàâèòüÄàííûåToolStripMenuItem
			// 
			this->äîáàâèòüÄàííûåToolStripMenuItem->Name = L"äîáàâèòüÄàííûåToolStripMenuItem";
			this->äîáàâèòüÄàííûåToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->äîáàâèòüÄàííûåToolStripMenuItem->Text = L"Äîáàâèòü äàííûå";
			this->äîáàâèòüÄàííûåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::äîáàâèòüÄàííûåToolStripMenuItem_Click);
			// 
			// óäàëèòüÄàííûåToolStripMenuItem
			// 
			this->óäàëèòüÄàííûåToolStripMenuItem->Name = L"óäàëèòüÄàííûåToolStripMenuItem";
			this->óäàëèòüÄàííûåToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->óäàëèòüÄàííûåToolStripMenuItem->Text = L"Óäàëåíèå óñòàğåâøèõ çàïèñåé";
			this->óäàëèòüÄàííûåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::óäàëèòüÄàííûåToolStripMenuItem_Click);
			// 
			// ñîğòèğîâàòüÄàííûåToolStripMenuItem
			// 
			this->ñîğòèğîâàòüÄàííûåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïîÄàòåÂûñåëåíèÿToolStripMenuItem,
					this->ïToolStripMenuItem
			});
			this->ñîğòèğîâàòüÄàííûåToolStripMenuItem->Name = L"ñîğòèğîâàòüÄàííûåToolStripMenuItem";
			this->ñîğòèğîâàòüÄàííûåToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->ñîğòèğîâàòüÄàííûåToolStripMenuItem->Text = L"Ñîğòèğîâàòü äàííûå";
			// 
			// ïîÄàòåÂûñåëåíèÿToolStripMenuItem
			// 
			this->ïîÄàòåÂûñåëåíèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïîÂîçğàñòàíèşToolStripMenuItem,
					this->ïîÓáûâàíèşToolStripMenuItem
			});
			this->ïîÄàòåÂûñåëåíèÿToolStripMenuItem->Name = L"ïîÄàòåÂûñåëåíèÿToolStripMenuItem";
			this->ïîÄàòåÂûñåëåíèÿToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ïîÄàòåÂûñåëåíèÿToolStripMenuItem->Text = L"ïî äàòå âûñåëåíèÿ";
			this->ïîÄàòåÂûñåëåíèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîÄàòåÂûñåëåíèÿToolStripMenuItem_Click);
			// 
			// ïîÂîçğàñòàíèşToolStripMenuItem
			// 
			this->ïîÂîçğàñòàíèşToolStripMenuItem->Name = L"ïîÂîçğàñòàíèşToolStripMenuItem";
			this->ïîÂîçğàñòàíèşToolStripMenuItem->Size = System::Drawing::Size(206, 26);
			this->ïîÂîçğàñòàíèşToolStripMenuItem->Text = L"ïî âîçğàñòàíèş";
			this->ïîÂîçğàñòàíèşToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîÂîçğàñòàíèşToolStripMenuItem_Click);
			// 
			// ïîÓáûâàíèşToolStripMenuItem
			// 
			this->ïîÓáûâàíèşToolStripMenuItem->Name = L"ïîÓáûâàíèşToolStripMenuItem";
			this->ïîÓáûâàíèşToolStripMenuItem->Size = System::Drawing::Size(206, 26);
			this->ïîÓáûâàíèşToolStripMenuItem->Text = L"ïî óáûâàíèş";
			this->ïîÓáûâàíèşToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîÓáûâàíèşToolStripMenuItem_Click);
			// 
			// ïToolStripMenuItem
			// 
			this->ïToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->àßToolStripMenuItem,
					this->ÿÀToolStripMenuItem
			});
			this->ïToolStripMenuItem->Name = L"ïToolStripMenuItem";
			this->ïToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ïToolStripMenuItem->Text = L"ïî òèïó íîìåğà";
			// 
			// àßToolStripMenuItem
			// 
			this->àßToolStripMenuItem->Name = L"àßToolStripMenuItem";
			this->àßToolStripMenuItem->Size = System::Drawing::Size(117, 26);
			this->àßToolStripMenuItem->Text = L"À-ß";
			this->àßToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::àßToolStripMenuItem_Click);
			// 
			// ÿÀToolStripMenuItem
			// 
			this->ÿÀToolStripMenuItem->Name = L"ÿÀToolStripMenuItem";
			this->ÿÀToolStripMenuItem->Size = System::Drawing::Size(117, 26);
			this->ÿÀToolStripMenuItem->Text = L"ß-À";
			this->ÿÀToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÿÀToolStripMenuItem_Click);
			// 
			// ïîèñêToolStripMenuItem
			// 
			this->ïîèñêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->çàíÿòûåÍîìåğàÍàÒåêóøèéÌîìåíòÂğåìåíèToolStripMenuItem,
					this->èíôîğìàöèşÎÃîñòåToolStripMenuItem, this->äàòóÂûñåëåíèÿToolStripMenuItem, this->öåíóÇàÍî÷üToolStripMenuItem
			});
			this->ïîèñêToolStripMenuItem->Name = L"ïîèñêToolStripMenuItem";
			this->ïîèñêToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->ïîèñêToolStripMenuItem->Text = L"Íàéòè";
			// 
			// çàíÿòûåÍîìåğàÍàÒåêóøèéÌîìåíòÂğåìåíèToolStripMenuItem
			// 
			this->çàíÿòûåÍîìåğàÍàÒåêóøèéÌîìåíòÂğåìåíèToolStripMenuItem->Name = L"çàíÿòûåÍîìåğàÍàÒåêóøèéÌîìåíòÂğåìåíèToolStripMenuItem";
			this->çàíÿòûåÍîìåğàÍàÒåêóøèéÌîìåíòÂğåìåíèToolStripMenuItem->Size = System::Drawing::Size(414, 26);
			this->çàíÿòûåÍîìåğàÍàÒåêóøèéÌîìåíòÂğåìåíèToolStripMenuItem->Text = L"çàíÿòûå íîìåğà íà òåêóùèé ìîìåíò âğåìåíè";
			this->çàíÿòûåÍîìåğàÍàÒåêóøèéÌîìåíòÂğåìåíèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàíÿòûåÍîìåğàÍàÒåêóøèéÌîìåíòÂğåìåíèToolStripMenuItem_Click);
			// 
			// èíôîğìàöèşÎÃîñòåToolStripMenuItem
			// 
			this->èíôîğìàöèşÎÃîñòåToolStripMenuItem->Name = L"èíôîğìàöèşÎÃîñòåToolStripMenuItem";
			this->èíôîğìàöèşÎÃîñòåToolStripMenuItem->Size = System::Drawing::Size(414, 26);
			this->èíôîğìàöèşÎÃîñòåToolStripMenuItem->Text = L"èíôîğìàöèş î ãîñòå";
			this->èíôîğìàöèşÎÃîñòåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::èíôîğìàöèşÎÃîñòåToolStripMenuItem_Click);
			// 
			// äàòóÂûñåëåíèÿToolStripMenuItem
			// 
			this->äàòóÂûñåëåíèÿToolStripMenuItem->Name = L"äàòóÂûñåëåíèÿToolStripMenuItem";
			this->äàòóÂûñåëåíèÿToolStripMenuItem->Size = System::Drawing::Size(414, 26);
			this->äàòóÂûñåëåíèÿToolStripMenuItem->Text = L"äàòó âûñåëåíèÿ";
			this->äàòóÂûñåëåíèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::äàòóÂûñåëåíèÿToolStripMenuItem_Click);
			// 
			// öåíóÇàÍî÷üToolStripMenuItem
			// 
			this->öåíóÇàÍî÷üToolStripMenuItem->Name = L"öåíóÇàÍî÷üToolStripMenuItem";
			this->öåíóÇàÍî÷üToolStripMenuItem->Size = System::Drawing::Size(414, 26);
			this->öåíóÇàÍî÷üToolStripMenuItem->Text = L"öåíó êîìíàòû çà íî÷ü";
			this->öåíóÇàÍî÷üToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öåíóÇàÍî÷üToolStripMenuItem_Click);
			// 
			// ãèñòîãğàììàToolStripMenuItem
			// 
			this->ãèñòîãğàììàToolStripMenuItem->Name = L"ãèñòîãğàììàToolStripMenuItem";
			this->ãèñòîãğàììàToolStripMenuItem->Size = System::Drawing::Size(114, 24);
			this->ãèñòîãğàììàToolStripMenuItem->Text = L"Ãèñòîãğàììà";
			this->ãèñòîãğàììàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ãèñòîãğàììàToolStripMenuItem_Click);
			// 
			// îò÷¸òÈçToolStripMenuItem
			// 
			this->îò÷¸òÈçToolStripMenuItem->Name = L"îò÷¸òÈçToolStripMenuItem";
			this->îò÷¸òÈçToolStripMenuItem->Size = System::Drawing::Size(222, 24);
			this->îò÷¸òÈçToolStripMenuItem->Text = L"Îò÷¸ò èç óäàë¸ííûõ çàïèñåé";
			this->îò÷¸òÈçToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îò÷¸òÈçToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(12, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1421, 479);
			this->dataGridView1->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1445, 548);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Áğîíèğîâàíèå íîìåğîâ";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïîÄàòåÂûñåëåíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void èçìåíèòüÄàííûåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïîÂîçğàñòàíèşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïîÓáûâàíèşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void àßToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÿÀToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void óäàëèòüÄàííûåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void äîáàâèòüÄàííûåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void çàíÿòûåÍîìåğàÍàÒåêóøèéÌîìåíòÂğåìåíèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void èíôîğìàöèşÎÃîñòåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void äàòóÂûñåëåíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void öåíóÇàÍî÷üToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ãèñòîãğàììàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void îò÷¸òÈçToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	   private: void Header();
			  private: void Show();
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void äàòóÂûñåëåíèÿToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïîæåëàíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}