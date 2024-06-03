#pragma once

namespace ProyectoFinalprogramacion1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ModificarCliente
	/// </summary>
	public ref class ModificarCliente : public System::Windows::Forms::Form
	{
	public:
		ModificarCliente(void)
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
		~ModificarCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ mcorreo;
	protected:

	protected:
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::TextBox^ mgenero;

	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ mnit;

	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ mapellido;

	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ mnombre;

	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Button^ button2;

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
			this->mcorreo = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->mgenero = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->mnit = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->mapellido = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->mnombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// mcorreo
			// 
			this->mcorreo->Location = System::Drawing::Point(281, 114);
			this->mcorreo->Name = L"mcorreo";
			this->mcorreo->Size = System::Drawing::Size(115, 20);
			this->mcorreo->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(230, 117);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Correo:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(149, 167);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarCliente::button1_Click);
			// 
			// mgenero
			// 
			this->mgenero->Location = System::Drawing::Point(103, 114);
			this->mgenero->Name = L"mgenero";
			this->mgenero->Size = System::Drawing::Size(115, 20);
			this->mgenero->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"genero";
			// 
			// mnit
			// 
			this->mnit->Location = System::Drawing::Point(443, 73);
			this->mnit->Name = L"mnit";
			this->mnit->Size = System::Drawing::Size(115, 20);
			this->mnit->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(417, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Nit";
			// 
			// mapellido
			// 
			this->mapellido->Location = System::Drawing::Point(281, 72);
			this->mapellido->Name = L"mapellido";
			this->mapellido->Size = System::Drawing::Size(115, 20);
			this->mapellido->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(230, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Apellidos";
			// 
			// mnombre
			// 
			this->mnombre->Location = System::Drawing::Point(103, 72);
			this->mnombre->Name = L"mnombre";
			this->mnombre->Size = System::Drawing::Size(115, 20);
			this->mnombre->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Nombre:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(245, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarCliente::button2_Click);
			// 
			// ModificarCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 346);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->mcorreo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->mgenero);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->mnit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->mapellido);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->mnombre);
			this->Controls->Add(this->label1);
			this->Name = L"ModificarCliente";
			this->Text = L"ModificarCliente";
			this->Load += gcnew System::EventHandler(this, &ModificarCliente::ModificarCliente_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ModificarCliente_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Dato Actualizado");
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
