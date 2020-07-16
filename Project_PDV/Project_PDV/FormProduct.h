#pragma once

namespace ProjectPDV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Resumen de FormProduct
	/// </summary>
	public ref class FormProduct : public System::Windows::Forms::Form
	{
		
		SqlConnection^cnlocal;
	public:
		FormProduct(void)
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
		~FormProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lbl3;
	private: System::Windows::Forms::TextBox^  textBox1;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormProduct::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(30, 228);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(690, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 200;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Categoría";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 200;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Stock ";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 50;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(594, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"  Editar";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->Location = System::Drawing::Point(26, 50);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(108, 24);
			this->lbl1->TabIndex = 2;
			this->lbl1->Text = L"Categoría";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Broasters", L"Burgers", L"Gaseosas", L"Postres" });
			this->comboBox1->Location = System::Drawing::Point(157, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(140, 28);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FormProduct::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Broasters", L"Burgers", L"Gaseosas", L"Bebidas",
					L"Postres"
			});
			this->comboBox2->Location = System::Drawing::Point(157, 97);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(140, 28);
			this->comboBox2->TabIndex = 5;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &FormProduct::comboBox2_SelectedIndexChanged);
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->Location = System::Drawing::Point(26, 100);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(104, 24);
			this->lbl2->TabIndex = 4;
			this->lbl2->Text = L"Producto";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl3->Location = System::Drawing::Point(26, 150);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(101, 24);
			this->lbl3->TabIndex = 6;
			this->lbl3->Text = L"Cantidad";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(157, 147);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 20);
			this->textBox1->TabIndex = 7;
			// 
			// FormProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(748, 470);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormProduct";
			this->Text = L"INVENTARIO";
			this->MaximizedBoundsChanged += gcnew System::EventHandler(this, &FormProduct::FormProduct_MaximizedBoundsChanged);
			this->Load += gcnew System::EventHandler(this, &FormProduct::FormProduct_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &FormProduct::FormProduct_SizeChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormProduct_MaximizedBoundsChanged(System::Object^  sender, System::EventArgs^  e) 
	{

	}
private: System::Void FormProduct_SizeChanged(System::Object^  sender, System::EventArgs^  e) 
{
	
	this->dataGridView1->Width = this->Width - 60;
	this->dataGridView1->Columns[0]->Width = (this->dataGridView1->Width*100)/690;
	this->dataGridView1->Columns[1]->Width = (this->dataGridView1->Width * 200) / 690;
	this->dataGridView1->Columns[2]->Width = (this->dataGridView1->Width * 100) / 690;
	this->dataGridView1->Columns[3]->Width = (this->dataGridView1->Width * 200) / 690;
	this->dataGridView1->Columns[4]->Width = (this->dataGridView1->Width * 70) / 690;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
	button1->Focus();
	comboBox2->Items->Clear();
	switch (comboBox1->SelectedIndex)
	{
	case 0:
		comboBox2->Items->Add(L"Alita");
		comboBox2->Items->Add(L"Piernita");
		comboBox2->Items->Add(L"Pecho");
		comboBox2->Items->Add(L"Filete de pollo");
		comboBox2->Items->Add(L"Salchipapa"); break;
	case 1:
		comboBox2->Items->Add(L"De Pollo");
		comboBox2->Items->Add(L"De Carne");
		comboBox2->Items->Add(L"Broaster"); break;
	case 2:
		comboBox2->Items->Add("1 1/2 L INKA");
		comboBox2->Items->Add("1 1/2 L COCA");
		comboBox2->Items->Add("1 L INKA");
		comboBox2->Items->Add("1 L COCA");
		comboBox2->Items->Add("1/2 L INKA");
		comboBox2->Items->Add("1/2 L COCA");
		comboBox2->Items->Add("1/2 L Fanta R.");
		comboBox2->Items->Add("1/2 L Fanta N.");
		comboBox2->Items->Add("1/2 L Pepsi");
		comboBox2->Items->Add("1/2 L Guaraná");
		comboBox2->Items->Add("Pepsi J.");
		comboBox2->Items->Add("Esporade");
		comboBox2->Items->Add("Agua Cielo"); break;
		case 3:
		comboBox2->Items->Add(L"Gelatina");
		comboBox2->Items->Add(L"Gelatina con flan");break;
	}

}

public: void Get_DB(SqlConnection^cn)
{
	cnlocal = cn;
}

private: System::Void FormProduct_Load(System::Object^  sender, System::EventArgs^  e) 
{
	comboBox1->SelectedIndex = 0;
	comboBox2->SelectedIndex = 0;

}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	textBox1->Focus();
}
};
}
