#pragma once
#include <vector>
#include <string>
#include "../Lab1/lab2_1_data.h"

namespace Coursach2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ?????? ??? lab1
	/// </summary>
	public ref class lab1 : public System::Windows::Forms::Form
	{
	public:
		lab1(void)
		{
			InitializeComponent();
			//
			//TODO: ???????? ??? ????????????
			//
		}

	protected:
		/// <summary>
		/// ?????????? ??? ???????????? ???????.
		/// </summary>
		~lab1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label8;
	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ reloadBtn;
	private: System::Windows::Forms::TextBox^ tbFilterGroupNum;
	private: System::Windows::Forms::Button^ saveBtn;
	private: System::Windows::Forms::MaskedTextBox^ tbMarks;
	private: System::Windows::Forms::MaskedTextBox^ tbGroupNum;
	private: System::Windows::Forms::MaskedTextBox^ tbGroup;
	private: System::Windows::Forms::ComboBox^ cbTime;
	private: System::Windows::Forms::Button^ timeFilterBtn;
	private: System::Windows::Forms::Button^ dateBtn;
	private: System::Windows::Forms::MonthCalendar^ calendar;
	private: System::Windows::Forms::ComboBox^ cbMarks;
	private: System::Windows::Forms::Button^ marksFilterBtn;
	private: System::Windows::Forms::Button^ fellowshipBtn;
	private: System::Windows::Forms::Button^ topBtn;
	private: System::Windows::Forms::Button^ genderBtn;
	private: System::Windows::Forms::Button^ groupBtn;
	private: System::Windows::Forms::TextBox^ tbId;
	private: System::Windows::Forms::Button^ editBtn;
	private: System::Windows::Forms::Button^ addBtn;
	private: System::Windows::Forms::ComboBox^ cbEdForm;
	private: System::Windows::Forms::ComboBox^ cbSex;
	private: System::Windows::Forms::TextBox^ tbFio;
	private: System::Windows::Forms::DataGridView^ dataTable;
	private: System::Windows::Forms::Button^ btnSaveFile;
	private: System::Windows::Forms::Button^ fileReadingBtn;
	private: System::Windows::Forms::Panel^ topPanel;
	private: System::Windows::Forms::Button^ btnCloseForm;
	private: System::Windows::Forms::Button^ browseBtn;
	private: System::Windows::Forms::Panel^ workingPanel;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private:
		/// <summary>
		/// ???????????? ?????????? ????????????.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ????????? ????? ??? ????????? ???????????? ? ?? ????????? 
		/// ?????????? ????? ?????? ? ??????? ????????? ????.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(lab1::typeid));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->reloadBtn = (gcnew System::Windows::Forms::Button());
			this->tbFilterGroupNum = (gcnew System::Windows::Forms::TextBox());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->tbMarks = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbGroupNum = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbGroup = (gcnew System::Windows::Forms::MaskedTextBox());
			this->cbTime = (gcnew System::Windows::Forms::ComboBox());
			this->timeFilterBtn = (gcnew System::Windows::Forms::Button());
			this->dateBtn = (gcnew System::Windows::Forms::Button());
			this->calendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->cbMarks = (gcnew System::Windows::Forms::ComboBox());
			this->marksFilterBtn = (gcnew System::Windows::Forms::Button());
			this->fellowshipBtn = (gcnew System::Windows::Forms::Button());
			this->topBtn = (gcnew System::Windows::Forms::Button());
			this->genderBtn = (gcnew System::Windows::Forms::Button());
			this->groupBtn = (gcnew System::Windows::Forms::Button());
			this->tbId = (gcnew System::Windows::Forms::TextBox());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->cbEdForm = (gcnew System::Windows::Forms::ComboBox());
			this->cbSex = (gcnew System::Windows::Forms::ComboBox());
			this->tbFio = (gcnew System::Windows::Forms::TextBox());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->btnSaveFile = (gcnew System::Windows::Forms::Button());
			this->fileReadingBtn = (gcnew System::Windows::Forms::Button());
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->btnCloseForm = (gcnew System::Windows::Forms::Button());
			this->browseBtn = (gcnew System::Windows::Forms::Button());
			this->workingPanel = (gcnew System::Windows::Forms::Panel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->topPanel->SuspendLayout();
			this->workingPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(623, 239);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 13);
			this->label8->TabIndex = 77;
			this->label8->Text = L"????? ??????";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(223, 276);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 13);
			this->label7->TabIndex = 76;
			this->label7->Text = L"??????? Id ????????";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(223, 187);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 13);
			this->label6->TabIndex = 75;
			this->label6->Text = L"????? ????????";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 13);
			this->label5->TabIndex = 74;
			this->label5->Text = L"??????? ?????? ????? ??????";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(312, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 73;
			this->label4->Text = L"????? ? ??????";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(223, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 13);
			this->label3->TabIndex = 72;
			this->label3->Text = L"????? ??????";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 71;
			this->label2->Text = L"???";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 70;
			this->label1->Text = L"??????? ???";
			// 
			// reloadBtn
			// 
			this->reloadBtn->AutoSize = true;
			this->reloadBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->reloadBtn->FlatAppearance->BorderSize = 0;
			this->reloadBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reloadBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reloadBtn->ForeColor = System::Drawing::Color::White;
			this->reloadBtn->Location = System::Drawing::Point(12, 345);
			this->reloadBtn->Name = L"reloadBtn";
			this->reloadBtn->Size = System::Drawing::Size(196, 35);
			this->reloadBtn->TabIndex = 69;
			this->reloadBtn->Text = L"??????? ?????? ??????";
			this->reloadBtn->UseVisualStyleBackColor = false;
			this->reloadBtn->Click += gcnew System::EventHandler(this, &lab1::reloadBtn_Click);
			// 
			// tbFilterGroupNum
			// 
			this->tbFilterGroupNum->Location = System::Drawing::Point(707, 236);
			this->tbFilterGroupNum->Name = L"tbFilterGroupNum";
			this->tbFilterGroupNum->Size = System::Drawing::Size(79, 20);
			this->tbFilterGroupNum->TabIndex = 68;
			this->tbFilterGroupNum->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &lab1::tbFilterGroupNum_MouseDown);
			// 
			// saveBtn
			// 
			this->saveBtn->AutoSize = true;
			this->saveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->saveBtn->Enabled = false;
			this->saveBtn->FlatAppearance->BorderSize = 0;
			this->saveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->saveBtn->ForeColor = System::Drawing::Color::White;
			this->saveBtn->Location = System::Drawing::Point(226, 345);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(201, 35);
			this->saveBtn->TabIndex = 67;
			this->saveBtn->Text = L"????????? ?????????";
			this->saveBtn->UseVisualStyleBackColor = false;
			this->saveBtn->Click += gcnew System::EventHandler(this, &lab1::saveBtn_Click);
			// 
			// tbMarks
			// 
			this->tbMarks->Location = System::Drawing::Point(10, 204);
			this->tbMarks->Mask = L"0 0 0 0 0 0 0 0";
			this->tbMarks->Name = L"tbMarks";
			this->tbMarks->Size = System::Drawing::Size(198, 20);
			this->tbMarks->TabIndex = 5;
			this->tbMarks->ValidatingType = System::Int32::typeid;
			this->tbMarks->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &lab1::tbMarks_MouseDown);
			// 
			// tbGroupNum
			// 
			this->tbGroupNum->Location = System::Drawing::Point(338, 149);
			this->tbGroupNum->Mask = L"09";
			this->tbGroupNum->Name = L"tbGroupNum";
			this->tbGroupNum->Size = System::Drawing::Size(89, 20);
			this->tbGroupNum->TabIndex = 4;
			this->tbGroupNum->ValidatingType = System::Int32::typeid;
			this->tbGroupNum->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &lab1::tbGroupNum_MouseDown);
			// 
			// tbGroup
			// 
			this->tbGroup->Location = System::Drawing::Point(226, 149);
			this->tbGroup->Mask = L"0000";
			this->tbGroup->Name = L"tbGroup";
			this->tbGroup->Size = System::Drawing::Size(90, 20);
			this->tbGroup->TabIndex = 3;
			this->tbGroup->ValidatingType = System::Int32::typeid;
			this->tbGroup->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &lab1::tbGroup_MouseDown);
			// 
			// cbTime
			// 
			this->cbTime->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cbTime->FormattingEnabled = true;
			this->cbTime->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"?? ???????", L"????? ???????" });
			this->cbTime->Location = System::Drawing::Point(446, 104);
			this->cbTime->Name = L"cbTime";
			this->cbTime->Size = System::Drawing::Size(164, 21);
			this->cbTime->TabIndex = 65;
			this->cbTime->Text = L"?? ???????";
			// 
			// timeFilterBtn
			// 
			this->timeFilterBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->timeFilterBtn->AutoSize = true;
			this->timeFilterBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->timeFilterBtn->FlatAppearance->BorderSize = 0;
			this->timeFilterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->timeFilterBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeFilterBtn->ForeColor = System::Drawing::Color::White;
			this->timeFilterBtn->Location = System::Drawing::Point(446, 131);
			this->timeFilterBtn->Name = L"timeFilterBtn";
			this->timeFilterBtn->Size = System::Drawing::Size(164, 37);
			this->timeFilterBtn->TabIndex = 64;
			this->timeFilterBtn->Text = L"?????? ?? ???????";
			this->timeFilterBtn->UseVisualStyleBackColor = false;
			this->timeFilterBtn->Click += gcnew System::EventHandler(this, &lab1::timeFilterBtn_Click);
			// 
			// dateBtn
			// 
			this->dateBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateBtn->AutoSize = true;
			this->dateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->dateBtn->FlatAppearance->BorderSize = 0;
			this->dateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dateBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateBtn->ForeColor = System::Drawing::Color::White;
			this->dateBtn->Location = System::Drawing::Point(446, 342);
			this->dateBtn->Name = L"dateBtn";
			this->dateBtn->Size = System::Drawing::Size(164, 37);
			this->dateBtn->TabIndex = 63;
			this->dateBtn->Text = L"?????? ?? ????";
			this->dateBtn->UseVisualStyleBackColor = false;
			this->dateBtn->Click += gcnew System::EventHandler(this, &lab1::dateBtn_Click);
			// 
			// calendar
			// 
			this->calendar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->calendar->Location = System::Drawing::Point(446, 174);
			this->calendar->Name = L"calendar";
			this->calendar->TabIndex = 62;
			// 
			// cbMarks
			// 
			this->cbMarks->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cbMarks->FormattingEnabled = true;
			this->cbMarks->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"??? ?????????", L"?????????", L"?????????" });
			this->cbMarks->Location = System::Drawing::Point(626, 315);
			this->cbMarks->Name = L"cbMarks";
			this->cbMarks->Size = System::Drawing::Size(160, 21);
			this->cbMarks->TabIndex = 59;
			this->cbMarks->Text = L"??? ?????????";
			// 
			// marksFilterBtn
			// 
			this->marksFilterBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->marksFilterBtn->AutoSize = true;
			this->marksFilterBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->marksFilterBtn->FlatAppearance->BorderSize = 0;
			this->marksFilterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->marksFilterBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->marksFilterBtn->ForeColor = System::Drawing::Color::White;
			this->marksFilterBtn->Location = System::Drawing::Point(624, 342);
			this->marksFilterBtn->Name = L"marksFilterBtn";
			this->marksFilterBtn->Size = System::Drawing::Size(162, 37);
			this->marksFilterBtn->TabIndex = 57;
			this->marksFilterBtn->Text = L"?????? ?? ???????";
			this->marksFilterBtn->UseVisualStyleBackColor = false;
			this->marksFilterBtn->Click += gcnew System::EventHandler(this, &lab1::marksFilterBtn_Click);
			// 
			// fellowshipBtn
			// 
			this->fellowshipBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->fellowshipBtn->AutoSize = true;
			this->fellowshipBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->fellowshipBtn->FlatAppearance->BorderSize = 0;
			this->fellowshipBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fellowshipBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fellowshipBtn->ForeColor = System::Drawing::Color::White;
			this->fellowshipBtn->Location = System::Drawing::Point(622, 145);
			this->fellowshipBtn->Name = L"fellowshipBtn";
			this->fellowshipBtn->Size = System::Drawing::Size(164, 35);
			this->fellowshipBtn->TabIndex = 56;
			this->fellowshipBtn->Text = L"?????????";
			this->fellowshipBtn->UseVisualStyleBackColor = false;
			this->fellowshipBtn->Click += gcnew System::EventHandler(this, &lab1::fellowshipBtn_Click);
			// 
			// topBtn
			// 
			this->topBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->topBtn->AutoSize = true;
			this->topBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->topBtn->FlatAppearance->BorderSize = 0;
			this->topBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->topBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->topBtn->ForeColor = System::Drawing::Color::White;
			this->topBtn->Location = System::Drawing::Point(622, 104);
			this->topBtn->Name = L"topBtn";
			this->topBtn->Size = System::Drawing::Size(164, 35);
			this->topBtn->TabIndex = 55;
			this->topBtn->Text = L"????? ????";
			this->topBtn->UseVisualStyleBackColor = false;
			this->topBtn->Click += gcnew System::EventHandler(this, &lab1::topBtn_Click);
			// 
			// genderBtn
			// 
			this->genderBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->genderBtn->AutoSize = true;
			this->genderBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->genderBtn->FlatAppearance->BorderSize = 0;
			this->genderBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->genderBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->genderBtn->ForeColor = System::Drawing::Color::White;
			this->genderBtn->Location = System::Drawing::Point(622, 187);
			this->genderBtn->Name = L"genderBtn";
			this->genderBtn->Size = System::Drawing::Size(164, 37);
			this->genderBtn->TabIndex = 54;
			this->genderBtn->Text = L"????? ?/?";
			this->genderBtn->UseVisualStyleBackColor = false;
			this->genderBtn->Click += gcnew System::EventHandler(this, &lab1::genderBtn_Click);
			// 
			// groupBtn
			// 
			this->groupBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBtn->AutoSize = true;
			this->groupBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->groupBtn->FlatAppearance->BorderSize = 0;
			this->groupBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBtn->ForeColor = System::Drawing::Color::White;
			this->groupBtn->Location = System::Drawing::Point(624, 262);
			this->groupBtn->Name = L"groupBtn";
			this->groupBtn->Size = System::Drawing::Size(162, 35);
			this->groupBtn->TabIndex = 53;
			this->groupBtn->Text = L"?????? ?? ??????";
			this->groupBtn->UseVisualStyleBackColor = false;
			this->groupBtn->Click += gcnew System::EventHandler(this, &lab1::groupBtn_Click);
			// 
			// tbId
			// 
			this->tbId->Location = System::Drawing::Point(338, 273);
			this->tbId->Name = L"tbId";
			this->tbId->Size = System::Drawing::Size(89, 20);
			this->tbId->TabIndex = 52;
			this->tbId->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &lab1::tbId_MouseDown);
			// 
			// editBtn
			// 
			this->editBtn->AutoSize = true;
			this->editBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->editBtn->FlatAppearance->BorderSize = 0;
			this->editBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->editBtn->ForeColor = System::Drawing::Color::White;
			this->editBtn->Location = System::Drawing::Point(226, 302);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(201, 35);
			this->editBtn->TabIndex = 33;
			this->editBtn->Text = L"????????? ??????";
			this->editBtn->UseVisualStyleBackColor = false;
			this->editBtn->Click += gcnew System::EventHandler(this, &lab1::editBtn_Click);
			// 
			// addBtn
			// 
			this->addBtn->AutoSize = true;
			this->addBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->addBtn->FlatAppearance->BorderSize = 0;
			this->addBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addBtn->ForeColor = System::Drawing::Color::White;
			this->addBtn->Location = System::Drawing::Point(12, 302);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(196, 35);
			this->addBtn->TabIndex = 32;
			this->addBtn->Text = L"???????? ??????";
			this->addBtn->UseVisualStyleBackColor = false;
			this->addBtn->Click += gcnew System::EventHandler(this, &lab1::addBtn_Click);
			// 
			// cbEdForm
			// 
			this->cbEdForm->FormattingEnabled = true;
			this->cbEdForm->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"?????", L"????????", L"???????" });
			this->cbEdForm->Location = System::Drawing::Point(226, 203);
			this->cbEdForm->Name = L"cbEdForm";
			this->cbEdForm->Size = System::Drawing::Size(201, 21);
			this->cbEdForm->TabIndex = 13;
			this->cbEdForm->Text = L"?????";
			// 
			// cbSex
			// 
			this->cbSex->FormattingEnabled = true;
			this->cbSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"???????", L"???????" });
			this->cbSex->Location = System::Drawing::Point(10, 149);
			this->cbSex->Name = L"cbSex";
			this->cbSex->Size = System::Drawing::Size(198, 21);
			this->cbSex->TabIndex = 2;
			this->cbSex->Text = L"???????";
			// 
			// tbFio
			// 
			this->tbFio->Location = System::Drawing::Point(10, 105);
			this->tbFio->Name = L"tbFio";
			this->tbFio->Size = System::Drawing::Size(417, 20);
			this->tbFio->TabIndex = 51;
			this->tbFio->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &lab1::tbFio_MouseDown);
			// 
			// dataTable
			// 
			this->dataTable->AllowUserToAddRows = false;
			this->dataTable->AllowUserToDeleteRows = false;
			this->dataTable->AllowUserToResizeColumns = false;
			this->dataTable->AllowUserToResizeRows = false;
			this->dataTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataTable->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataTable->BackgroundColor = System::Drawing::Color::White;
			this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataTable->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataTable->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataTable->Location = System::Drawing::Point(10, 396);
			this->dataTable->MultiSelect = false;
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataTable->ShowEditingIcon = false;
			this->dataTable->Size = System::Drawing::Size(776, 172);
			this->dataTable->TabIndex = 66;
			// 
			// btnSaveFile
			// 
			this->btnSaveFile->BackColor = System::Drawing::Color::Orange;
			this->btnSaveFile->FlatAppearance->BorderColor = System::Drawing::Color::Orange;
			this->btnSaveFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveFile->ForeColor = System::Drawing::Color::White;
			this->btnSaveFile->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSaveFile->Location = System::Drawing::Point(578, 26);
			this->btnSaveFile->Margin = System::Windows::Forms::Padding(2);
			this->btnSaveFile->Name = L"btnSaveFile";
			this->btnSaveFile->Size = System::Drawing::Size(208, 32);
			this->btnSaveFile->TabIndex = 71;
			this->btnSaveFile->Text = L"????????? ????????? ? ?????";
			this->btnSaveFile->UseVisualStyleBackColor = false;
			this->btnSaveFile->Click += gcnew System::EventHandler(this, &lab1::btnSaveFile_Click);
			// 
			// fileReadingBtn
			// 
			this->fileReadingBtn->AutoSize = true;
			this->fileReadingBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->fileReadingBtn->FlatAppearance->BorderSize = 0;
			this->fileReadingBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fileReadingBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fileReadingBtn->ForeColor = System::Drawing::Color::White;
			this->fileReadingBtn->Location = System::Drawing::Point(52, 23);
			this->fileReadingBtn->Name = L"fileReadingBtn";
			this->fileReadingBtn->Size = System::Drawing::Size(127, 35);
			this->fileReadingBtn->TabIndex = 31;
			this->fileReadingBtn->Text = L"????????? ????";
			this->fileReadingBtn->UseVisualStyleBackColor = false;
			this->fileReadingBtn->Visible = false;
			this->fileReadingBtn->Click += gcnew System::EventHandler(this, &lab1::fileReadingBtn_Click);
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::Color::White;
			this->topPanel->Controls->Add(this->browseBtn);
			this->topPanel->Controls->Add(this->btnCloseForm);
			this->topPanel->Controls->Add(this->btnSaveFile);
			this->topPanel->Controls->Add(this->fileReadingBtn);
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(800, 76);
			this->topPanel->TabIndex = 56;
			// 
			// btnCloseForm
			// 
			this->btnCloseForm->FlatAppearance->BorderSize = 0;
			this->btnCloseForm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCloseForm->Location = System::Drawing::Point(768, 0);
			this->btnCloseForm->Name = L"btnCloseForm";
			this->btnCloseForm->Size = System::Drawing::Size(32, 23);
			this->btnCloseForm->TabIndex = 72;
			this->btnCloseForm->Text = L"x";
			this->btnCloseForm->UseVisualStyleBackColor = true;
			this->btnCloseForm->Click += gcnew System::EventHandler(this, &lab1::btnCloseForm_Click);
			// 
			// browseBtn
			// 
			this->browseBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->browseBtn->FlatAppearance->BorderSize = 0;
			this->browseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->browseBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"browseBtn.Image")));
			this->browseBtn->Location = System::Drawing::Point(10, 23);
			this->browseBtn->Name = L"browseBtn";
			this->browseBtn->Size = System::Drawing::Size(37, 35);
			this->browseBtn->TabIndex = 68;
			this->browseBtn->UseVisualStyleBackColor = true;
			this->browseBtn->Click += gcnew System::EventHandler(this, &lab1::browseBtn_Click);
			// 
			// workingPanel
			// 
			this->workingPanel->BackColor = System::Drawing::Color::White;
			this->workingPanel->Controls->Add(this->label8);
			this->workingPanel->Controls->Add(this->label7);
			this->workingPanel->Controls->Add(this->label6);
			this->workingPanel->Controls->Add(this->label5);
			this->workingPanel->Controls->Add(this->label4);
			this->workingPanel->Controls->Add(this->label3);
			this->workingPanel->Controls->Add(this->label2);
			this->workingPanel->Controls->Add(this->label1);
			this->workingPanel->Controls->Add(this->reloadBtn);
			this->workingPanel->Controls->Add(this->tbFilterGroupNum);
			this->workingPanel->Controls->Add(this->saveBtn);
			this->workingPanel->Controls->Add(this->tbMarks);
			this->workingPanel->Controls->Add(this->tbGroupNum);
			this->workingPanel->Controls->Add(this->tbGroup);
			this->workingPanel->Controls->Add(this->cbTime);
			this->workingPanel->Controls->Add(this->timeFilterBtn);
			this->workingPanel->Controls->Add(this->dateBtn);
			this->workingPanel->Controls->Add(this->calendar);
			this->workingPanel->Controls->Add(this->cbMarks);
			this->workingPanel->Controls->Add(this->marksFilterBtn);
			this->workingPanel->Controls->Add(this->fellowshipBtn);
			this->workingPanel->Controls->Add(this->topBtn);
			this->workingPanel->Controls->Add(this->genderBtn);
			this->workingPanel->Controls->Add(this->groupBtn);
			this->workingPanel->Controls->Add(this->tbId);
			this->workingPanel->Controls->Add(this->editBtn);
			this->workingPanel->Controls->Add(this->addBtn);
			this->workingPanel->Controls->Add(this->cbEdForm);
			this->workingPanel->Controls->Add(this->cbSex);
			this->workingPanel->Controls->Add(this->tbFio);
			this->workingPanel->Controls->Add(this->dataTable);
			this->workingPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->workingPanel->Location = System::Drawing::Point(0, 0);
			this->workingPanel->Name = L"workingPanel";
			this->workingPanel->Size = System::Drawing::Size(800, 580);
			this->workingPanel->TabIndex = 57;
			this->workingPanel->Visible = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// lab1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 580);
			this->Controls->Add(this->topPanel);
			this->Controls->Add(this->workingPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"lab1";
			this->Text = L"lab1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->topPanel->ResumeLayout(false);
			this->topPanel->PerformLayout();
			this->workingPanel->ResumeLayout(false);
			this->workingPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCloseForm_Click(System::Object^ sender, System::EventArgs^ e);
		   int checkFileErr1(int numOfLines, int numFields);
		   private: void showForm();												//????? ???????
	private: void getData(std::string filename, std::vector<Student>(&db));	//?????? ?????? ?? ????? ? ??????
	private: void showHeader();												//????? ????? ???????? ???????
	private: void showData(std::vector<Student>(&arr));												//?????????? ????? ???????? ???????
	private: void reloadForm(std::vector<Student>(&arr));												//?????????? ???????
	private: void saveFile(std::string filename, std::vector<Student>(&db));												//?????????? ?????
	private: int getInputNumberData(TextBox^ tb);												//?????? ?? ??????
	private: void loadDataWithId(int id);												//????????? ?????? ?? id
	private: bool getDataFromForm(Student& temp);												//????????? ?????? ?? ?????
	private: double averageScore(short* arr);												//??????? ???????? ????? ????????
	private: void insertSortAS(int arrayWidth, std::vector<Student>(&arr));					//?????????? ????????? ?? ???????? ?????
	private: bool isFellow(short* arr, short edForm);											//????????, ???????? ?? ??? ?????????
	private: bool minMarks(short* arr, short min);											//????????, ???????? ?? ??? ?????????
	private: bool isOneDate(DateTime start, DateTime end, String^ d);				//???????? ?? ????
	private: bool isOneTime(DateTime^ timeStart, DateTime^ timeEnd, String^ d);				//???????? ?? ?????
	private: void clearForm();																//??????? ?????



	private: System::Void browseBtn_Click(System::Object^ sender, System::EventArgs^ e);		//???? ?? ?????? ?????? ?????
	private: System::Void fileReadingBtn_Click(System::Object^ sender, System::EventArgs^ e);		//???? ?? ?????? ????????? ????
	private: System::Void btnSaveFile_Click(System::Object^ sender, System::EventArgs^ e);		//?????????? ?????
	private: System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e);		//???? ?? ?????? "???????? ??????"		
	private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e);		//???? ?? ?????? "???????? ??????"
	private: System::Void saveBtn_Click(System::Object^ sender, System::EventArgs^ e);		//???? ?? ?????? "????????? ?????????"

private: System::Void genderBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void groupBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void topBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void reloadBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void fellowshipBtn_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void marksFilterBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dateBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void timeFilterBtn_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void tbFio_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbFio->BackColor = Color::White;
}
private: System::Void tbGroup_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbGroup->BackColor = Color::White;
}
private: System::Void tbGroupNum_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbGroupNum->BackColor = Color::White;
}
private: System::Void tbMarks_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbMarks->BackColor = Color::White;
}

private: System::Void tbId_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbId->BackColor = Color::White;
}

private: System::Void tbFilterGroupNum_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbFilterGroupNum->BackColor = Color::White;
}
};
}
