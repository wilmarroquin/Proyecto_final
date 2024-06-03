#include "MyMenu.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
void main (array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProyectoFinalprogramacion1::MyMenu from;
	Application::Run(%from);
}