#pragma once
#include "Forms/lab1.h"
#include "Forms/lab4.h"
#include "Forms/lab2.h"
#include "Forms/lab3.h"

namespace Coursach2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ?????? ??? MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ welcomePanel;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ MenuPanel;
	private: System::Windows::Forms::Button^ btnLab4;
	private: System::Windows::Forms::Button^ btnLab3;
	private: System::Windows::Forms::Button^ btnLab2;
	private: System::Windows::Forms::Button^ btnLab1;
	private: System::Windows::Forms::Panel^ logoWrapper;
	private: System::Windows::Forms::PictureBox^ logo;
	private: System::Windows::Forms::Button^ btnCloseApp;

	protected:













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->welcomePanel = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MenuPanel = (gcnew System::Windows::Forms::Panel());
			this->btnLab4 = (gcnew System::Windows::Forms::Button());
			this->btnLab3 = (gcnew System::Windows::Forms::Button());
			this->btnLab2 = (gcnew System::Windows::Forms::Button());
			this->btnLab1 = (gcnew System::Windows::Forms::Button());
			this->logoWrapper = (gcnew System::Windows::Forms::Panel());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->btnCloseApp = (gcnew System::Windows::Forms::Button());
			this->welcomePanel->SuspendLayout();
			this->MenuPanel->SuspendLayout();
			this->logoWrapper->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			this->SuspendLayout();
			// 
			// welcomePanel
			// 
			this->welcomePanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"welcomePanel.BackgroundImage")));
			this->welcomePanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->welcomePanel->Controls->Add(this->label4);
			this->welcomePanel->Controls->Add(this->label3);
			this->welcomePanel->Controls->Add(this->label2);
			this->welcomePanel->Controls->Add(this->label1);
			this->welcomePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->welcomePanel->Location = System::Drawing::Point(250, 0);
			this->welcomePanel->Name = L"welcomePanel";
			this->welcomePanel->Size = System::Drawing::Size(800, 580);
			this->welcomePanel->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(37, 540);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"????????? ???????";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(37, 511);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"?????? ????????? ?????? 0323";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(36, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(463, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"???????? ???? ?? ????????????, ????? ??????";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(32, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(353, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"????? ??????????";
			// 
			// MenuPanel
			// 
			this->MenuPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->MenuPanel->Controls->Add(this->btnLab4);
			this->MenuPanel->Controls->Add(this->btnLab3);
			this->MenuPanel->Controls->Add(this->btnLab2);
			this->MenuPanel->Controls->Add(this->btnLab1);
			this->MenuPanel->Controls->Add(this->logoWrapper);
			this->MenuPanel->Controls->Add(this->btnCloseApp);
			this->MenuPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->MenuPanel->Location = System::Drawing::Point(0, 0);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(250, 580);
			this->MenuPanel->TabIndex = 7;
			// 
			// btnLab4
			// 
			this->btnLab4->BackColor = System::Drawing::Color::Transparent;
			this->btnLab4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLab4->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnLab4->FlatAppearance->BorderSize = 0;
			this->btnLab4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnLab4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnLab4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLab4->ForeColor = System::Drawing::Color::White;
			this->btnLab4->Location = System::Drawing::Point(0, 217);
			this->btnLab4->Name = L"btnLab4";
			this->btnLab4->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnLab4->Size = System::Drawing::Size(250, 45);
			this->btnLab4->TabIndex = 7;
			this->btnLab4->Text = L"?????????????? ???????";
			this->btnLab4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLab4->UseVisualStyleBackColor = false;
			this->btnLab4->Click += gcnew System::EventHandler(this, &MainForm::btnLab4_Click);
			// 
			// btnLab3
			// 
			this->btnLab3->BackColor = System::Drawing::Color::Transparent;
			this->btnLab3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLab3->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnLab3->FlatAppearance->BorderSize = 0;
			this->btnLab3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnLab3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnLab3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLab3->ForeColor = System::Drawing::Color::White;
			this->btnLab3->Location = System::Drawing::Point(0, 172);
			this->btnLab3->Name = L"btnLab3";
			this->btnLab3->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnLab3->Size = System::Drawing::Size(250, 45);
			this->btnLab3->TabIndex = 6;
			this->btnLab3->Text = L"???????????? ?????? 3";
			this->btnLab3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLab3->UseVisualStyleBackColor = false;
			this->btnLab3->Click += gcnew System::EventHandler(this, &MainForm::btnLab3_Click);
			// 
			// btnLab2
			// 
			this->btnLab2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btnLab2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLab2->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnLab2->FlatAppearance->BorderSize = 0;
			this->btnLab2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnLab2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnLab2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLab2->ForeColor = System::Drawing::Color::White;
			this->btnLab2->Location = System::Drawing::Point(0, 127);
			this->btnLab2->Name = L"btnLab2";
			this->btnLab2->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnLab2->Size = System::Drawing::Size(250, 45);
			this->btnLab2->TabIndex = 5;
			this->btnLab2->Text = L"???????????? ?????? 2";
			this->btnLab2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLab2->UseVisualStyleBackColor = false;
			this->btnLab2->Click += gcnew System::EventHandler(this, &MainForm::btnLab2_Click);
			// 
			// btnLab1
			// 
			this->btnLab1->BackColor = System::Drawing::Color::Transparent;
			this->btnLab1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLab1->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnLab1->FlatAppearance->BorderSize = 0;
			this->btnLab1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnLab1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnLab1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLab1->ForeColor = System::Drawing::Color::White;
			this->btnLab1->Location = System::Drawing::Point(0, 82);
			this->btnLab1->Name = L"btnLab1";
			this->btnLab1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnLab1->Size = System::Drawing::Size(250, 45);
			this->btnLab1->TabIndex = 4;
			this->btnLab1->Text = L"???????????? ?????? 1";
			this->btnLab1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLab1->UseVisualStyleBackColor = false;
			this->btnLab1->Click += gcnew System::EventHandler(this, &MainForm::btnLab1_Click);
			// 
			// logoWrapper
			// 
			this->logoWrapper->Controls->Add(this->logo);
			this->logoWrapper->Dock = System::Windows::Forms::DockStyle::Top;
			this->logoWrapper->Location = System::Drawing::Point(0, 0);
			this->logoWrapper->Name = L"logoWrapper";
			this->logoWrapper->Padding = System::Windows::Forms::Padding(6);
			this->logoWrapper->Size = System::Drawing::Size(250, 82);
			this->logoWrapper->TabIndex = 3;
			// 
			// logo
			// 
			this->logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.BackgroundImage")));
			this->logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->logo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->logo->Location = System::Drawing::Point(6, 6);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(238, 70);
			this->logo->TabIndex = 0;
			this->logo->TabStop = false;
			// 
			// btnCloseApp
			// 
			this->btnCloseApp->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnCloseApp->FlatAppearance->BorderSize = 0;
			this->btnCloseApp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnCloseApp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnCloseApp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCloseApp->ForeColor = System::Drawing::Color::White;
			this->btnCloseApp->Location = System::Drawing::Point(0, 540);
			this->btnCloseApp->Name = L"btnCloseApp";
			this->btnCloseApp->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnCloseApp->Size = System::Drawing::Size(250, 40);
			this->btnCloseApp->TabIndex = 2;
			this->btnCloseApp->Text = L"?????";
			this->btnCloseApp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCloseApp->UseVisualStyleBackColor = true;
			this->btnCloseApp->Click += gcnew System::EventHandler(this, &MainForm::btnCloseApp_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 580);
			this->Controls->Add(this->welcomePanel);
			this->Controls->Add(this->MenuPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->IsMdiContainer = true;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->welcomePanel->ResumeLayout(false);
			this->welcomePanel->PerformLayout();
			this->MenuPanel->ResumeLayout(false);
			this->logoWrapper->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCloseApp_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnLab1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnLab2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnLab3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnLab4_Click(System::Object^ sender, System::EventArgs^ e);
	private: void welcomeHide();
};
}
