#pragma once
using namespace std;
#include "Ventas.h";
#include "Cliente.h";
#include "Empleados.h";
#include "Marcas.h";
#include "Productos.h";
#include "Proveedores.h";
#include "Puestos.h";



namespace ProyectoFinalprogramacion1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyMenu
	/// </summary>
	public ref class MyMenu : public System::Windows::Forms::Form
	{
	public:
		MyMenu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelLateral;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panelMargen;
	private: System::Windows::Forms::Panel^ panelContenedor;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyMenu::typeid));
			this->panelLateral = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelMargen = (gcnew System::Windows::Forms::Panel());
			this->panelContenedor = (gcnew System::Windows::Forms::Panel());
			this->panelLateral->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelLateral
			// 
			this->panelLateral->Controls->Add(this->button7);
			this->panelLateral->Controls->Add(this->button6);
			this->panelLateral->Controls->Add(this->button5);
			this->panelLateral->Controls->Add(this->button4);
			this->panelLateral->Controls->Add(this->button3);
			this->panelLateral->Controls->Add(this->button2);
			this->panelLateral->Controls->Add(this->label1);
			this->panelLateral->Controls->Add(this->button1);
			this->panelLateral->Controls->Add(this->panelMargen);
			this->panelLateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelLateral->Location = System::Drawing::Point(0, 0);
			this->panelLateral->Name = L"panelLateral";
			this->panelLateral->Size = System::Drawing::Size(200, 385);
			this->panelLateral->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Top;
			this->button7->Location = System::Drawing::Point(0, 262);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(200, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Marcas";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->Location = System::Drawing::Point(0, 239);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(200, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Proveedores";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->Location = System::Drawing::Point(0, 216);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Productos";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyMenu::button5_Click);
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->Location = System::Drawing::Point(0, 193);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Puesto";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyMenu::button4_Click);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->Location = System::Drawing::Point(0, 170);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Empleados";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyMenu::button3_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Location = System::Drawing::Point(0, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Cliente";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyMenu::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(0, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L" Sistema Administrativo";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Location = System::Drawing::Point(0, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ventas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyMenu::button1_Click);
			// 
			// panelMargen
			// 
			this->panelMargen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelMargen.BackgroundImage")));
			this->panelMargen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelMargen->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelMargen->Location = System::Drawing::Point(0, 0);
			this->panelMargen->Name = L"panelMargen";
			this->panelMargen->Size = System::Drawing::Size(200, 111);
			this->panelMargen->TabIndex = 0;
			// 
			// panelContenedor
			// 
			this->panelContenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelContenedor->Location = System::Drawing::Point(200, 0);
			this->panelContenedor->Name = L"panelContenedor";
			this->panelContenedor->Size = System::Drawing::Size(647, 385);
			this->panelContenedor->TabIndex = 1;
			// 
			// MyMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 385);
			this->Controls->Add(this->panelContenedor);
			this->Controls->Add(this->panelLateral);
			this->Name = L"MyMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyMenu::MyMenu_Load);
			this->panelLateral->ResumeLayout(false);
			this->panelLateral->PerformLayout();
			this->ResumeLayout(false);

		}


#pragma endregion
		template<class T>
		void AbrirContenedor(T^ FormHijo) {
			if (this->panelContenedor->Controls->Count > 0)
				this->panelContenedor->Controls->Clear();

			FormHijo->TopLevel = false; // Establecer el formulario hijo como no de nivel superior
			FormHijo->Dock = DockStyle::Fill; // Rellenar el panel con el formulario hijo
			this->panelContenedor->Controls->Add(FormHijo); // Agregar el formulario hijo al panel
			this->panelContenedor->Tag = FormHijo; // Establecer el formulario hijo como "tag" del panel
			FormHijo->Show(); // Mostrar el formulario hijo
		}
	private: System::Void MyMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirContenedor(gcnew ProyectoFinalprogramacion1::Ventas);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirContenedor(gcnew ProyectoFinalprogramacion1::Cliente);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirContenedor(gcnew ProyectoFinalprogramacion1::Empleados);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirContenedor(gcnew ProyectoFinalprogramacion1::Puestos);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirContenedor(gcnew ProyectoFinalprogramacion1::Productos);
	}
};
}
