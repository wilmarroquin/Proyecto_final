#pragma once

namespace ProyectoFinalprogramacion1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de factura
	/// </summary>
	public ref class factura : public System::Windows::Forms::Form
	{
	public:
		factura(void)
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
		~factura()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ nit;
	protected:
	private: System::Windows::Forms::Label^ label11;


	public: System::Windows::Forms::TextBox^ nombre;
	private: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::TextBox^ f;
	private:

	private:

	private: System::Windows::Forms::Label^ fac;
	public: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	public: System::Windows::Forms::TextBox^ total;

	private: System::Windows::Forms::Label^ label2;



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
			this->nit = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->nombre = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->f = (gcnew System::Windows::Forms::TextBox());
			this->fac = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->total = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// nit
			// 
			this->nit->Location = System::Drawing::Point(90, 38);
			this->nit->Name = L"nit";
			this->nit->Size = System::Drawing::Size(115, 20);
			this->nit->TabIndex = 26;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(64, 41);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Nit";
			// 
			// nombre
			// 
			this->nombre->Location = System::Drawing::Point(117, 69);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(115, 20);
			this->nombre->TabIndex = 22;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(64, 72);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(39, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Cliente";
			// 
			// f
			// 
			this->f->Location = System::Drawing::Point(130, 12);
			this->f->Name = L"f";
			this->f->Size = System::Drawing::Size(115, 20);
			this->f->TabIndex = 28;
			// 
			// fac
			// 
			this->fac->AutoSize = true;
			this->fac->Location = System::Drawing::Point(64, 15);
			this->fac->Name = L"fac";
			this->fac->Size = System::Drawing::Size(60, 13);
			this->fac->TabIndex = 27;
			this->fac->Text = L"No. Facura";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(304, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(115, 20);
			this->textBox2->TabIndex = 30;
			this->textBox2->Text = L"Ciudad de Guatemala";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(251, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Direccion";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(67, 110);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(352, 150);
			this->dataGridView1->TabIndex = 31;
			// 
			// total
			// 
			this->total->Location = System::Drawing::Point(304, 275);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(115, 20);
			this->total->TabIndex = 33;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(251, 278);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Total:";
			// 
			// factura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(630, 336);
			this->Controls->Add(this->total);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->f);
			this->Controls->Add(this->fac);
			this->Controls->Add(this->nit);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->label13);
			this->Name = L"factura";
			this->Text = L"factura";
			this->Load += gcnew System::EventHandler(this, &factura::factura_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void factura_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
