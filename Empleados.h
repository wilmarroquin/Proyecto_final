#pragma once
#include "DB.h"
#include "ModificarEmpleados.h"

namespace ProyectoFinalprogramacion1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Empleados
	/// </summary>
	public ref class Empleados : public System::Windows::Forms::Form
	{
	public:
		Empleados(void)
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
		~Empleados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ Puestolb;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataEmpleados;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: DB^ data;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->Puestolb = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataEmpleados = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataEmpleados))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(229, 10);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(188, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(397, 10);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(143, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(339, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Direccion";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(72, 49);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Telefono";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(229, 49);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(188, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Genero";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(440, 49);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(339, 52);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Fechac Nacimiento";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(72, 89);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 13;
			// 
			// Puestolb
			// 
			this->Puestolb->AutoSize = true;
			this->Puestolb->Location = System::Drawing::Point(31, 92);
			this->Puestolb->Name = L"Puestolb";
			this->Puestolb->Size = System::Drawing::Size(40, 13);
			this->Puestolb->TabIndex = 12;
			this->Puestolb->Text = L"Puesto";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(284, 89);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(188, 92);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Fecha In Labores";
			// 
			// dataEmpleados
			// 
			this->dataEmpleados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataEmpleados->Location = System::Drawing::Point(34, 167);
			this->dataEmpleados->Name = L"dataEmpleados";
			this->dataEmpleados->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataEmpleados->Size = System::Drawing::Size(506, 167);
			this->dataEmpleados->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(403, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Empleados::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(403, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Empleados::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(276, 125);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(213, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Empleado:";
			// 
			// Empleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 346);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataEmpleados);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->Puestolb);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Empleados";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Empleados";
			this->Load += gcnew System::EventHandler(this, &Empleados::Empleados_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataEmpleados))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Empleados_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consultar();
	}
	public: void Consultar() {
		this->data->AbrirConexion();
		this->dataEmpleados->DataSource = this->data->getAllEmpleados();
		this->comboBox1->DataSource = this->data->getAllEmpleados();
		this->comboBox1->DisplayMember = "Empleados";
		this->comboBox1->ValueMember = "idEmpleado";
		this->data->CerrarConexion();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->createEmpleados(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text, textBox7->Text, textBox8->Text);
		this->data->CerrarConexion();
		this->Consultar();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion();
	this->data->deleteEmpleados(Convert::ToString(comboBox1->SelectedValue));
	this->data->CerrarConexion();
	this->Consultar();
}
};
}
