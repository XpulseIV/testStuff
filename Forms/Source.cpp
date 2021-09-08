#include "CreateLogin.h"
#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]//leave this as is
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    auto filePath = IO::Directory::GetCurrentDirectory() + "\\data";


    if (!IO::File::Exists(filePath))
    {
	    Application::Run(gcnew Forms::CreateLogin);
    }
    else
    {
        Application::Run(gcnew Forms::Login);
    }
}