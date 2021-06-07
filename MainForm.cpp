#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Coursach2::MainForm form;
	Application::Run(% form);
}

System::Void Coursach2::MainForm::btnCloseApp_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Coursach2::MainForm::btnLab1_Click(System::Object^ sender, System::EventArgs^ e)
{
	lab1^ form = gcnew lab1();
	form->MdiParent = this;
	form->Dock = System::Windows::Forms::DockStyle::Fill;
	form->Show();
	welcomeHide();
}

System::Void Coursach2::MainForm::btnLab2_Click(System::Object^ sender, System::EventArgs^ e)
{
	lab2^ form = gcnew lab2();
	form->MdiParent = this;
	form->Dock = System::Windows::Forms::DockStyle::Fill;
	form->Show();
	welcomeHide();
}

System::Void Coursach2::MainForm::btnLab3_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Coursach2::MainForm::btnLab4_Click(System::Object^ sender, System::EventArgs^ e)
{
	lab4^ form = gcnew lab4();
	form->MdiParent = this;
	form->Dock = System::Windows::Forms::DockStyle::Fill;
	form->Show();
	welcomeHide();
}

void Coursach2::MainForm::welcomeHide()
{
	if (welcomePanel->Visible == true) {
		welcomePanel->Visible = false;
	}
}
