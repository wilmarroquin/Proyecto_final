#include "DB.h"
using namespace std;

DB::DB() { 
	this->connectionString = "datasource=localhost; username=root; password=admin; database=db_supermercado_proga1";
	this->conn = gcnew MySqlConnection(this->connectionString);
}

void DB::AbrirConexion() {
	this->conn->Open();
}

void DB::CerrarConexion() {
	this->conn->Close();
}


DataTable^ DB::getVentas() {
	String^ sql = "SELECT V.idVenta, V.noFactura, V.serie, C.nombres AS nombreCliente, E.nombres AS nombreEmpleado,  V.fechaFactura FROM ventas V INNER JOIN clientes C ON V.idCliente = C.idCliente INNER JOIN empleados E ON V.idEmpleado = E.idEmpleado;";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}



DataTable^ DB::getEmpleados() {
	String^ sql = "SELECT * FROM empleados";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}
DataTable^ DB::getValidateCliente(String^ NIT) {
	String^ sql = "SELECT * FROM clientes  where nit = '"+ NIT +"';";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cursor);
	DataTable^ dataTable = gcnew DataTable();
	adapter->Fill(dataTable);
	return dataTable;
}

void DB::createVenta(String^ n, String^ s, String^ ff, String^ ic, String^ ie, String^ fi) {
	String^ sql = "INSERT INTO Ventas (nofactura, serie, fechaFactura, idCliente, idEmpleado, fecha_ingreso) VALUES (´" + Convert::ToInt32(n) + "´, '" + s + "', ´" + ff + "´,´" + Convert::ToInt32(ic) + "´, ´" + Convert::ToInt32(ie) + "´, NOW())";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); 

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::getAllClientes() {
	String^ sql = "SELECT * FROM clientes";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}
void DB::createCliente(String^ n, String^ a, String^ ni, String^ ge, String^ cr) {
	String^ sql = "INSERT INTO clientes (nombres, apellidos, nit, genero, correo_electronico, fecha_ingreso) VALUES ('" + n + "', '" + a + "', '" + ni + "','" + Convert::ToInt32(ge) + "','"+cr+"', NOW())";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message + sql);
	}
}
void DB::modificarCliente(String^ ref,String^ n, String^ a, String^ ni, String^ ge, String^ cr) {
	String^ sql = "UPDATE clientes SET nombres = '"+ n+"', apellidos = '"+a+"', nit = '"+ni+"', genero = '" + Convert::ToInt32(ge) + "', correo_electronico = '" + cr + "' WHERE (idCliente = '" + Convert::ToInt32(ref) + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message + sql);
	}
}
void DB::deleteCliente(String^ ref) {
	String^ sql = "DELETE FROM clientes WHERE (idCliente = '"+ ref+ "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message + sql);
	}
}


DataTable^ DB::getAllEmpleados() {
	String^ sql = "SELECT * FROM empleados";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}
void DB::createEmpleados(String^ nombres, String^ apellidos, String^ direccion, String^ telefono, String^ genero, String^ fecha_nacimiento, String^ idPuesto, String^ fecha_inicio_labores) {
	String^ sql = "INSERT INTO Empleados (nombres, apellidos, direccion, telefono, genero, fecha_nacimiento, idPuesto, fecha_inicio_labores, fecha_ingreso) VALUES" +
		"('" + nombres + "', '" + apellidos + "', '" + direccion + "',  '" + telefono + "', '" + Convert::ToInt32(genero) + "','" + fecha_nacimiento + "', '" + Convert::ToInt32(idPuesto) + "','" + fecha_inicio_labores + "', NOW())";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message);
	}
}
void DB::modificarEmpleados(String^ ref, String^ n, String^ a, String^ ni, String^ ge, String^ cr) {
	String^ sql = "UPDATE clientes SET nombres = '" + n + "', apellidos = '" + a + "', nit = '" + ni + "', genero = '" + Convert::ToInt32(ge) + "', correo_electronico = '" + cr + "' WHERE (idCliente = '" + Convert::ToInt32(ref) + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message + sql);
	}
}
void DB::deleteEmpleados(String^ ref) {
	String^ sql = "DELETE FROM Empleados WHERE (idEmpleado = '" + ref + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message + sql);
	}
}

DataTable^ DB::getAllPuestos() {
	String^ sql = "SELECT * FROM puestos";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}
void DB::createPuestos(String^ puesto) {
	String^ sql = "INSERT INTO puestos (puesto) VALUES ('" + puesto + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message);
	}
}
void DB::modificarPuestos(String^ ref, String^ n, String^ a, String^ ni, String^ ge, String^ cr) {
	String^ sql = "UPDATE clientes SET nombres = '" + n + "', apellidos = '" + a + "', nit = '" + ni + "', genero = '" + Convert::ToInt32(ge) + "', correo_electronico = '" + cr + "' WHERE (idCliente = '" + Convert::ToInt32(ref) + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message + sql);
	}
}
void DB::deletePuestos(String^ ref) {
	String^ sql = "DELETE FROM puestos WHERE (idPuesto = '" + ref + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message + sql);
	}
}


DataTable^ DB::getAllProductos() {
	String^ sql = "SELECT * FROM productos";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}
void DB::createProductos(String^ producto, String^ idMarca, String^ descripcion, String^ precio_costo, String^ precio_venta, String^ existencia) {
	String^ sql = "INSERT INTO Productos (producto, idMarca, descripcion, imagen, precio_costo, precio_venta, existencia, fecha_ingreso) VALUES " +
		"('" + producto + "', " + Convert::ToInt32(idMarca) + ", '" + descripcion + "', '" + producto + ".jpg', " + Convert::ToDecimal(precio_costo) + ", " + Convert::ToDecimal(precio_venta) + ", " + Convert::ToInt32(existencia) + ", NOW())";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message);
	}
}
void DB::modificarProductos(String^ ref, String^ n, String^ a, String^ ni, String^ ge, String^ cr) {
	String^ sql = "UPDATE clientes SET nombres = '" + n + "', apellidos = '" + a + "', nit = '" + ni + "', genero = '" + Convert::ToInt32(ge) + "', correo_electronico = '" + cr + "' WHERE (idCliente = '" + Convert::ToInt32(ref) + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message + sql);
	}
}
void DB::deleteProductos(String^ ref) {
	String^ sql = "DELETE FROM productos WHERE (idProducto = '" + ref + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message + sql);
	}
}

DataTable^ DB::getTotal(String^ ref) {
	String^ sql = "SELECT v.nofactura, v.fechafactura, c.nombres, c.nit, GROUP_CONCAT(p.producto SEPARATOR ', ') AS productos, SUM(vd.cantidad * p.precio_venta) AS total_precio_venta FROM  ventas_detalle vd INNER JOIN ventas v ON v.idVenta = vd.idVenta INNER JOIN clientes c ON c.idCliente = v.idCliente INNER JOIN productos p ON p.idProducto = vd.idProducto WHERE vd.idVenta = "+ ref +" GROUP BY  v.nofactura, v.fechafactura, c.nombres, c.nit";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cursor);
	DataTable^ dataTable = gcnew DataTable();
	adapter->Fill(dataTable);
	return dataTable;
}
DataTable^ DB::getCliente(String^ ref) {
	String^ sql = "SELECT v.nofactura, v.fechafactura, c.nombres, c.apellidos,c.nit, p.producto, vd.cantidad, p.precio_venta FROM db_supermercado_proga1.ventas_detalle vd" +
		" inner join ventas v on v.idVenta = vd.idVenta" +
		" inner join clientes c on c.idCliente = v.idCliente" +
		" INNER JOIN productos p on p.idProducto = vd.idProducto" +
		" where vd.idVenta = '" +ref+ "' limit 1; ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cursor);
	DataTable^ dataTable = gcnew DataTable();
	adapter->Fill(dataTable);
	return dataTable;
}
DataTable^ DB::getVentaCliente(String^ ref) {
	String^ sql = "SELECT p.producto, vd.cantidad, p.precio_venta FROM db_supermercado_proga1.ventas_detalle vd INNER JOIN productos p on p.idProducto = vd.idProducto where vd.idVenta = "+ ref+"; ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cursor);
	DataTable^ dataTable = gcnew DataTable();
	adapter->Fill(dataTable);
	return dataTable;
}
DataTable^ DB::getUltimoCliente() {
	String^ sql = "SELECT * FROM clientes order by idCliente desc limit 1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cursor);
	DataTable^ dataTable = gcnew DataTable();
	adapter->Fill(dataTable);
	return dataTable;
}
DataTable^ DB::getUltimaVenta() {
	String^ sql = "SELECT * FROM ventas order by idVenta desc limit 1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cursor);
	DataTable^ dataTable = gcnew DataTable();
	adapter->Fill(dataTable);
	return dataTable;
}
void DB::crearVentaGEnerica(String^ idCliente) {
	String^ sql = "INSERT INTO Ventas (nofactura, serie, fechaFactura, idCliente, idEmpleado, fecha_ingreso) VALUES" +
		"('1000"+ Convert::ToInt32(idCliente)+"' , 'A', '2024-02-06',  '" + Convert::ToInt32(idCliente) + "', 1 , NOW())";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message + sql);
	}
}
void DB::crearVentaDetalle(String^ idVenta, String^ idProducto, String^ cantidad) {
	String^ sql = "INSERT INTO Ventas_detalle (idVenta, idProducto, cantidad, precio_unitario) VALUES " +
		"('" + Convert::ToInt32(idVenta) + "', '" + Convert::ToInt32(idProducto) + "', '" + Convert::ToInt32(cantidad) + "', 0)";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message + sql);
	}
}
