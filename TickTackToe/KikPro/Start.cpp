#include "Gra.h"

using namespace System::Windows::Forms;
using namespace System;

[STAThreadAttribute]

int main(array<String^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    KikPro::Gra forma;
    Application::Run(%forma);
    return 0;
}
