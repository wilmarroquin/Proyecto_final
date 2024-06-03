#pragma once
#include "DB.h"
#include "ModificarCliente.h"

using namespace std;

namespace ProyectoFinalprogramacion1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Cliente
	/// </summary>
	public ref class Cliente : public System::Windows::Forms::Form
	{
	public:
		Cliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Cliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nombre;
	private: System::Windows::Forms::TextBox^ apellido;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ nit;

	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::TextBox^ genero;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataCliente;
	private: DB^ data;
	private: System::Windows::Forms::TextBox^ correo;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nombre = (gcnew System::Windows::Forms::TextBox());
			this->apellido = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nit = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->genero = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataCliente = (gcnew System::Windows::Forms::DataGridView());
			this->correo = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataCliente))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// nombre
			// 
			this->nombre->Location = System::Drawing::Point(86, 12);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(115, 20);
			this->nombre->TabIndex = 1;
			// 
			// apellido
			// 
			this->apellido->Location = System::Drawing::Point(264, 12);
			this->apellido->Name = L"apellido";
			this->apellido->Size = System::Drawing::Size(115, 20);
			this->apellido->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(213, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellidos";
			// 
			// nit
			// 
			this->nit->Location = System::Drawing::Point(426, 13);
			this->nit->Name = L"nit";
			this->nit->Size = System::Drawing::Size(115, 20);
			this->nit->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(400, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Nit";
			// 
			// genero
			// 
			this->genero->Location = System::Drawing::Point(86, 54);
			this->genero->Name = L"genero";
			this->genero->Size = System::Drawing::Size(115, 20);
			this->genero->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"genero";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(397, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Cliente::button1_Click);
			// 
			// dataCliente
			// 
			this->dataCliente->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataCliente->Location = System::Drawing::Point(47, 129);
			this->dataCliente->Name = L"dataCliente";
			this->dataCliente->ReadOnly = true;
			this->dataCliente->RowHeadersVisible = false;
			this->dataCliente->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataCliente->Size = System::Drawing::Size(580, 244);
			this->dataCliente->TabIndex = 11;
			this->dataCliente->DoubleClick += gcnew System::EventHandler(this, &Cliente::dataCliente_DoubleClick);
			// 
			// correo
			// 
			this->correo->Location = System::Drawing::Point(264, 54);
			this->correo->Name = L"correo";
			this->correo->Size = System::Drawing::Size(115, 20);
			this->correo->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(213, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Correo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(176, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Codigo Cliente:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(260, 90);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(397, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Cliente::button2_Click);
			// 
			// Cliente
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->ClientSize = System::Drawing::Size(847, 385);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->correo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dataCliente);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->genero);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->nit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->apellido);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Cliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cliente";
			this->Load += gcnew System::EventHandler(this, &Cliente::Cliente_Load);
			this->DoubleClick += gcnew System::EventHandler(this, &Cliente::dataCliente_DoubleClick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataCliente))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cliente_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consultar();
	}
	public: void Consultar() {
		this->data->AbrirConexion();
		this->dataCliente->DataSource = this->data->getAllClientes();
		this->comboBox1->DataSource = this->data->getAllClientes();
		this->comboBox1->DisplayMember = "Clientes";
		this->comboBox1->ValueMember = "idCliente";
		this->data->CerrarConexion();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->createCliente(nombre->Text, apellido->Text, nit->Text, genero->Text, correo->Text);
		this->data->CerrarConexion();
		this->Consultar();
	}
	private: System::Void dataCliente_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ id = Convert::ToString(dataCliente->SelectedRows[0]->Cells[0]->Value);
		String^ nombre = Convert::ToString(dataCliente->SelectedRows[0]->Cells[1]->Value);	
		String^ apellido = Convert::ToString(dataCliente->SelectedRows[0]->Cells[2]->Value);
		String^ nit = Convert::ToString(dataCliente->SelectedRows[0]->Cells[3]->Value);
		String^ genero = Convert::ToString(dataCliente->SelectedRows[0]->Cells[4]->Value);
		String^ correo = Convert::ToString(dataCliente->SelectedRows[0]->Cells[5]->Value);

		ProyectoFinalprogramacion1::ModificarCliente^ form = gcnew ProyectoFinalprogramacion1::ModificarCliente();
		form->mnombre->Text = nombre;
		form->mapellido->Text = apellido;
		form->mnit->Text = nit;
		form->mgenero->Text = genero;
		form->mcorreo->Text = correo;
		form->ShowDialog();

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->modificarCliente(id, form->mnombre->Text, form->mapellido->Text, form->mnit->Text, form->mgenero->Text, form->mcorreo->Text);
		data->CerrarConexion();
		this->Consultar();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->deleteCliente(Convert::ToString(comboBox1->SelectedValue));
		this->data->CerrarConexion();
		this->Consultar();
	}
};
}
