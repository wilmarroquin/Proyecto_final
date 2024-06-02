#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

ref class DB
{
private :
	String^ connectionString;
	MySqlConnection^ conn;
public :
	DB();
	DataTable^ getVentas();
	DataTable^ getEmpleados();
	DataTable^ getValidateCliente(String^);
	void AbrirConexion();
	void CerrarConexion();
	void createVenta(String^, String^, String^, String^, String^, String^);

	DataTable^ getAllClientes();
	void createCliente(String^, String^, String^, String^, String^);
	void modificarCliente(String^, String^, String^, String^, String^, String^);
	void deleteCliente(String^);

	DataTable^ getAllEmpleados();
	void createEmpleados(String^, String^, String^, String^, String^, String^, String^, String^);
	void modificarEmpleados(String^, String^, String^, String^, String^, String^);
	void deleteEmpleados(String^);

	DataTable^ getAllPuestos();
	void createPuestos(String^);
	void modificarPuestos(String^, String^, String^, String^, String^, String^);
	void deletePuestos(String^);

	DataTable^ getAllProductos();
	void createProductos(String^, String^, String^, String^, String^, String^);
	void modificarProductos(String^, String^, String^, String^, String^, String^);
	void deleteProductos(String^);

	DataTable^ getTotal(String^);
	DataTable^ getVentaCliente(String^);
	DataTable^ getCliente(String^);
	DataTable^ getUltimoCliente();
	DataTable^ getUltimaVenta();
	void crearVentaGEnerica(String^);
	void crearVentaDetalle(String^, String^, String^);
};

