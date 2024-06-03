#pragma once
#include "DB.h"
#include "factura.h"

using namespace std;

namespace ProyectoFinalprogramacion1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ventas
	/// </summary>
	public ref class Ventas : public System::Windows::Forms::Form
	{
	public:
		Ventas(void)
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
		~Ventas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ NITClientetxt;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: DB^ data;










	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ correo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ crear;

	private: System::Windows::Forms::TextBox^ genero;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ nit;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ apellido;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ nombre;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ productosList;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NITClientetxt = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->correo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->crear = (gcnew System::Windows::Forms::Button());
			this->genero = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->nit = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->apellido = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->nombre = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->productosList = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(317, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Modulo de ventas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(119, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Buscar Nit:";
			// 
			// NITClientetxt
			// 
			this->NITClientetxt->Location = System::Drawing::Point(181, 15);
			this->NITClientetxt->Name = L"NITClientetxt";
			this->NITClientetxt->Size = System::Drawing::Size(100, 20);
			this->NITClientetxt->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(126, 188);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(508, 136);
			this->dataGridView1->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 23);
			this->label8->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(287, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ventas::button1_Click);
			// 
			// correo
			// 
			this->correo->Location = System::Drawing::Point(359, 84);
			this->correo->Name = L"correo";
			this->correo->Size = System::Drawing::Size(115, 20);
			this->correo->TabIndex = 25;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(308, 87);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 13);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Correo:";
			// 
			// crear
			// 
			this->crear->Enabled = false;
			this->crear->Location = System::Drawing::Point(492, 81);
			this->crear->Name = L"crear";
			this->crear->Size = System::Drawing::Size(75, 23);
			this->crear->TabIndex = 23;
			this->crear->Text = L"Crear";
			this->crear->UseVisualStyleBackColor = true;
			this->crear->Click += gcnew System::EventHandler(this, &Ventas::crear_Click);
			// 
			// genero
			// 
			this->genero->Location = System::Drawing::Point(181, 84);
			this->genero->Name = L"genero";
			this->genero->Size = System::Drawing::Size(115, 20);
			this->genero->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(128, 87);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"genero";
			// 
			// nit
			// 
			this->nit->Location = System::Drawing::Point(521, 43);
			this->nit->Name = L"nit";
			this->nit->Size = System::Drawing::Size(115, 20);
			this->nit->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(495, 46);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Nit";
			// 
			// apellido
			// 
			this->apellido->Location = System::Drawing::Point(359, 42);
			this->apellido->Name = L"apellido";
			this->apellido->Size = System::Drawing::Size(115, 20);
			this->apellido->TabIndex = 18;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(308, 46);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Apellidos";
			// 
			// nombre
			// 
			this->nombre->Location = System::Drawing::Point(181, 42);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(115, 20);
			this->nombre->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(128, 45);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(47, 13);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Nombre:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(481, 133);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Venta";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Ventas::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(119, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Producto";
			// 
			// productosList
			// 
			this->productosList->FormattingEnabled = true;
			this->productosList->Location = System::Drawing::Point(175, 136);
			this->productosList->Name = L"productosList";
			this->productosList->Size = System::Drawing::Size(121, 21);
			this->productosList->TabIndex = 28;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(367, 136);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(310, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Cantidad:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(562, 133);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 31;
			this->button3->Text = L"Imprimir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Ventas::button3_Click);
			// 
			// Ventas
			// 
			this->ClientSize = System::Drawing::Size(646, 375);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->productosList);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->correo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->crear);
			this->Controls->Add(this->genero);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->nit);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->apellido);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->NITClientetxt);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Ventas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Ventas::Ventas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	String^ venta = "0";
	private: System::Void Ventas_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consultar();
	}

	public: void Consultar() {
		this->data->AbrirConexion();
		this->dataGridView1->DataSource = this->data->getVentaCliente(venta);
		this->productosList->DataSource = this->data->getAllProductos();
		this->productosList->DisplayMember = "Ventas";
		this->productosList->ValueMember = "IdProducto";
		this->data->CerrarConexion();
	}
	public: bool validateNITFormat(String^ nit) {
		if (nit->Length != 9) {
			return false;
		}
		for (int i = 0; i < 7; i++) {
			if (!Char::IsDigit(nit[i])) {
				return false;
			}
		}

		if (nit[7] != '-') {
			return false;
		}

		if (!Char::IsDigit(nit[8])) {
			return false;
		}

		return true;
		  }

	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		if (this->validateNITFormat(NITClientetxt->Text)) {
			DataTable^ clienteTable = this->data->getValidateCliente(NITClientetxt->Text);
			if (clienteTable->Rows->Count > 0) {
				DataRow^ row = clienteTable->Rows[0];
				nombre->Text = Convert::ToString(row["nombres"]);
				apellido->Text = Convert::ToString(row["apellidos"]);
				nit->Text = Convert::ToString(row["nit"]);
				genero->Text = Convert::ToString(row["genero"]);
				correo->Text = Convert::ToString(row["correo_electronico"]);
				

				this->data->crearVentaGEnerica(Convert::ToString(row["idCliente"]));
				DataTable^ ventateTable = this->data->getUltimaVenta();
				DataRow^ rowVenta = ventateTable->Rows[0];
				venta = Convert::ToString(rowVenta["idVenta"]);

				MessageBox::Show("Hola.. Que gusto tenerte de vuelta iniciemos con tu compra: " + row["nombres"]);
			}
			else {
				MessageBox::Show("El cliente no exite, se habilitara el boton CREAR para que pueda crearlo");
				crear->Enabled = true;
			}
		}
		else
		{
			MessageBox::Show("mal formato de cliente favor de validar");
		}
		
		this->data->CerrarConexion();
	}

	
	private: System::Void crear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->createCliente(nombre->Text, apellido->Text, nit->Text, genero->Text, correo->Text);
		DataTable^ clienteTable = this->data->getUltimoCliente();
		DataRow^ row = clienteTable->Rows[0];
		this->data->crearVentaGEnerica(Convert::ToString(row["idCliente"]));
		DataTable^ ventateTable = this->data->getUltimaVenta();
		DataRow^ rowVenta = ventateTable->Rows[0];
		venta = Convert::ToString(rowVenta["idVenta"]);
		this->data->CerrarConexion();
		crear->Enabled = false;
		nombre->Text = "";
		apellido->Text = "";
		nit->Text = "";
		genero->Text = "";
		correo->Text = "";

		//this->Consultar();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->crearVentaDetalle(venta, Convert::ToString(productosList->SelectedValue), textBox1->Text);
		textBox1->Text = "";
		this->data->CerrarConexion();
		this->Consultar();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		//DataTable^ clienteTable = this->data->getVentaCliente(venta);
		DataTable^ clienteTable = this->data->getCliente(venta);
		DataRow^ rowVenta = clienteTable->Rows[0];

		DataTable^ totalTable = this->data->getTotal(venta);
		DataRow^ rowTotal = totalTable->Rows[0];
		
		//String^ correo = Convert::ToString(dataCliente->SelectedRows[0]->Cells[5]->Value);

		ProyectoFinalprogramacion1::factura^ form = gcnew ProyectoFinalprogramacion1::factura();
		form->dataGridView1->DataSource = this->data->getVentaCliente(venta);
		form->nombre->Text = Convert::ToString(rowVenta["nombres"]) + Convert::ToString(rowVenta["apellidos"]);
		form->nit->Text = Convert::ToString(rowVenta["nit"]);
		form->f->Text = Convert::ToString(rowVenta["nofactura"]);
		form->total->Text = Convert::ToString(rowTotal["total_precio_venta"]);
		form->ShowDialog();
	}
};
}