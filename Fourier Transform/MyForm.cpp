#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(cli::array<String^>^ argv)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FourierTransform::MyForm windowsForm;
	Application::Run(%windowsForm);
}
