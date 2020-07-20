#pragma once
#include "ThemeColor.h"
namespace ProjectPDV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Resumen de Ordenes
	/// </summary>
	public ref class Ordenes : public System::Windows::Forms::Form
	{
		double T_Order;
		SqlConnection^cn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;




			 SqlConnectionStringBuilder^str;
	public:
		Ordenes(void)
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
		~Ordenes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnRegist;
	protected:
	private: System::Windows::Forms::Button^  btnEdit;

	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::TextBox^  TBcliente;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  TBcel;
	private: System::Windows::Forms::TextBox^  TBdireccion;


	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::ComboBox^  CBB1;
	private: System::Windows::Forms::RichTextBox^  richTBcomment;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;







	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lblPrecio;


	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::ComboBox^  CBB2;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  CBB3;


	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Label^  lblprecioU;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Ordenes::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnRegist = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->TBcliente = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TBcel = (gcnew System::Windows::Forms::TextBox());
			this->TBdireccion = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->CBB1 = (gcnew System::Windows::Forms::ComboBox());
			this->richTBcomment = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblPrecio = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->CBB2 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CBB3 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblprecioU = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRegist
			// 
			this->btnRegist->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnRegist->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRegist->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRegist->FlatAppearance->BorderSize = 0;
			this->btnRegist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegist->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegist->ForeColor = System::Drawing::Color::White;
			this->btnRegist->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegist.Image")));
			this->btnRegist->Location = System::Drawing::Point(577, 50);
			this->btnRegist->Name = L"btnRegist";
			this->btnRegist->Size = System::Drawing::Size(159, 42);
			this->btnRegist->TabIndex = 2;
			this->btnRegist->Text = L"  Registrar";
			this->btnRegist->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegist->UseVisualStyleBackColor = false;
			this->btnRegist->Click += gcnew System::EventHandler(this, &Ordenes::btnRegist_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnEdit->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEdit->FlatAppearance->BorderSize = 0;
			this->btnEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEdit->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEdit->ForeColor = System::Drawing::Color::White;
			this->btnEdit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEdit.Image")));
			this->btnEdit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEdit->Location = System::Drawing::Point(577, 103);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(159, 42);
			this->btnEdit->TabIndex = 3;
			this->btnEdit->Text = L"  Corregir";
			this->btnEdit->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnEdit->UseVisualStyleBackColor = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(12, 366);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->Size = System::Drawing::Size(724, 169);
			this->dataGridView2->TabIndex = 5;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->Location = System::Drawing::Point(26, 50);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(80, 24);
			this->lbl1->TabIndex = 6;
			this->lbl1->Text = L"Cliente";
			// 
			// TBcliente
			// 
			this->TBcliente->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBcliente->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBcliente->Location = System::Drawing::Point(112, 54);
			this->TBcliente->Name = L"TBcliente";
			this->TBcliente->Size = System::Drawing::Size(181, 20);
			this->TBcliente->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Celular";
			this->label1->Click += gcnew System::EventHandler(this, &Ordenes::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 24);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Dirección";
			// 
			// TBcel
			// 
			this->TBcel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBcel->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBcel->Location = System::Drawing::Point(112, 86);
			this->TBcel->Name = L"TBcel";
			this->TBcel->Size = System::Drawing::Size(181, 20);
			this->TBcel->TabIndex = 11;
			// 
			// TBdireccion
			// 
			this->TBdireccion->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBdireccion->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBdireccion->Location = System::Drawing::Point(138, 152);
			this->TBdireccion->Name = L"TBdireccion";
			this->TBdireccion->Size = System::Drawing::Size(243, 20);
			this->TBdireccion->TabIndex = 12;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(122, 122);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(43, 23);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"SI";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Ordenes::checkBox1_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 24);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Delivery";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(171, 122);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(54, 23);
			this->checkBox2->TabIndex = 15;
			this->checkBox2->Text = L"NO";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Ordenes::checkBox2_CheckedChanged);
			// 
			// CBB1
			// 
			this->CBB1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CBB1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CBB1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CBB1->FormattingEnabled = true;
			this->CBB1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Bladi", L"Gabriel" });
			this->CBB1->Location = System::Drawing::Point(231, 117);
			this->CBB1->Name = L"CBB1";
			this->CBB1->Size = System::Drawing::Size(150, 28);
			this->CBB1->TabIndex = 16;
			// 
			// richTBcomment
			// 
			this->richTBcomment->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTBcomment->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTBcomment->Location = System::Drawing::Point(161, 183);
			this->richTBcomment->Name = L"richTBcomment";
			this->richTBcomment->Size = System::Drawing::Size(220, 127);
			this->richTBcomment->TabIndex = 17;
			this->richTBcomment->Text = L"";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(577, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 42);
			this->button1->TabIndex = 18;
			this->button1->Text = L" Eliminar";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 24);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Comentario";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(387, 125);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 24);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Cant.";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(457, 125);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(59, 20);
			this->textBox5->TabIndex = 26;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 20));
			this->label8->Location = System::Drawing::Point(616, 240);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 33);
			this->label8->TabIndex = 27;
			this->label8->Text = L"TOTAL";
			// 
			// lblPrecio
			// 
			this->lblPrecio->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lblPrecio->AutoSize = true;
			this->lblPrecio->Font = (gcnew System::Drawing::Font(L"Montserrat", 22));
			this->lblPrecio->ForeColor = System::Drawing::Color::DarkRed;
			this->lblPrecio->Location = System::Drawing::Point(639, 273);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Size = System::Drawing::Size(88, 37);
			this->lblPrecio->TabIndex = 28;
			this->lblPrecio->Text = L"0.00";
			// 
			// lbl2
			// 
			this->lbl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->Location = System::Drawing::Point(387, 90);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(64, 24);
			this->lbl2->TabIndex = 31;
			this->lbl2->Text = L"Prod.";
			this->lbl2->Click += gcnew System::EventHandler(this, &Ordenes::lbl2_Click);
			// 
			// CBB2
			// 
			this->CBB2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->CBB2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CBB2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CBB2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CBB2->FormattingEnabled = true;
			this->CBB2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Broaster", L"Burgers", L"Gaseosas", L"Bebidas", L"Postres",
					L"Extras"
			});
			this->CBB2->Location = System::Drawing::Point(457, 50);
			this->CBB2->Name = L"CBB2";
			this->CBB2->Size = System::Drawing::Size(114, 28);
			this->CBB2->TabIndex = 30;
			this->CBB2->SelectedIndexChanged += gcnew System::EventHandler(this, &Ordenes::CBB2_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(375, 54);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 24);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Categ.";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(391, 159);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 27);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Añadir";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Ordenes::button2_Click);
			// 
			// CBB3
			// 
			this->CBB3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->CBB3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CBB3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CBB3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CBB3->FormattingEnabled = true;
			this->CBB3->Location = System::Drawing::Point(457, 86);
			this->CBB3->Name = L"CBB3";
			this->CBB3->Size = System::Drawing::Size(114, 28);
			this->CBB3->TabIndex = 34;
			this->CBB3->SelectedIndexChanged += gcnew System::EventHandler(this, &Ordenes::CBB3_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(485, 159);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 27);
			this->button3->TabIndex = 35;
			this->button3->Text = L"Quitar";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Ordenes::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(391, 192);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(180, 156);
			this->dataGridView1->TabIndex = 36;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ID";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 25;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Cant.";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 40;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 50;
			// 
			// lblprecioU
			// 
			this->lblprecioU->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lblprecioU->AutoSize = true;
			this->lblprecioU->BackColor = System::Drawing::Color::Transparent;
			this->lblprecioU->Font = (gcnew System::Drawing::Font(L"Montserrat", 22));
			this->lblprecioU->ForeColor = System::Drawing::Color::DarkRed;
			this->lblprecioU->Location = System::Drawing::Point(595, 273);
			this->lblprecioU->Name = L"lblprecioU";
			this->lblprecioU->Size = System::Drawing::Size(50, 37);
			this->lblprecioU->TabIndex = 37;
			this->lblprecioU->Text = L"s/";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(157, 324);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 24);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Paga con";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(267, 327);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(74, 23);
			this->checkBox3->TabIndex = 39;
			this->checkBox3->Text = L"YAPE ";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Ordenes::checkBox3_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(26, 323);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 24);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Envio s/";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(122, 324);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(29, 20);
			this->textBox1->TabIndex = 41;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(299, 51);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(28, 27);
			this->button4->TabIndex = 42;
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// Ordenes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 470);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lblprecioU);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->CBB3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->CBB2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lblPrecio);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTBcomment);
			this->Controls->Add(this->CBB1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->TBdireccion);
			this->Controls->Add(this->TBcel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TBcliente);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->btnRegist);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Ordenes";
			this->Text = L"ORDENES";
			this->Load += gcnew System::EventHandler(this, &Ordenes::Ordenes_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Ordenes::Ordenes_SizeChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	public: void LoadTheme(Color primary, Color secondary)
	{
		lblPrecio->ForeColor = primary;
		lblprecioU->ForeColor = secondary;
	}
	
	private: System::Void Ordenes_Load(System::Object^  sender, System::EventArgs^  e)
	{
		//dateTimePicker1->Value = DateTime::Now;

		checkBox1->Checked = true;
		CBB1->SelectedIndex = 0;
		CBB2->SelectedIndex = 0;
		CBB3->SelectedIndex = 0;

		//Inicializamos conexion con la base de datos
		str = gcnew SqlConnectionStringBuilder();
		str->DataSource = "EDUARDO-PC\\SQLEXPRESS";
		str->InitialCatalog = "DSONIA_BD";
		str->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(str));
		Actualizar_DGV();
		//CargarRegistros("Select*from dbo.Product");
	}
	private: void CargarRegistros(String^Comando)
	{
		SqlCommand^cmdDatabase = gcnew SqlCommand(Comando, cn);

		try
		{
			SqlDataAdapter^ sda = gcnew SqlDataAdapter();

			if (Comando->Substring(0, 6) == "Select")
			{
				sda->SelectCommand = cmdDatabase;


				DataTable^ dbaDataSet = gcnew DataTable();
				sda->Fill(dbaDataSet);
				BindingSource^ bSource = gcnew BindingSource();
				bSource->DataSource = dbaDataSet;
				dataGridView2->DataSource = bSource;

				sda->Update(dbaDataSet);
			}
			if (Comando->Substring(0, 6) == "Update")
			{
				cn->Open();
				cmdDatabase->ExecuteNonQuery();
				cn->Close();
			}
			if (Comando->Substring(0, 6) == "Insert")
			{
				//Insert into Client (FirstName,Phone,C_Address) values(@nombre,@phone,@direccion)
				cn->Open();
				cmdDatabase->ExecuteNonQuery();
				cn->Close();
			}

		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: String^ fecha_actual()
	{
		int ano = DateTime::Now.Year;
		int mes = DateTime::Now.Month;
		int dia = DateTime::Now.Day;
		String^fecha = ano.ToString() + "-" + mes.ToString() + "-" + dia.ToString();
		return fecha;
	}

	private: String^ hora_actual()
	{
		int hh = DateTime::Now.Hour;
		int mm = DateTime::Now.Minute;
		int ss = DateTime::Now.Second;
		String^hora = hh.ToString() + ":" + mm.ToString() + ":" + ss.ToString()+".000";
		return hora;
	}


	private: void Actualizar_DGV()
	{
		CargarRegistros("Select * from dbo.FN_Productos_hoy_dia('"+fecha_actual()+"')");
		dataGridView2->Columns[0]->HeaderText = "ID";
		dataGridView2->Columns[1]->HeaderText = "Cliente";
		dataGridView2->Columns[2]->HeaderText = "Teléfono";
		dataGridView2->Columns[3]->HeaderText = "Hora ordenada";
		dataGridView2->Columns[4]->HeaderText = "Hora entregada";
		dataGridView2->Columns[5]->HeaderText = "Direccion";
		dataGridView2->Columns[6]->HeaderText = "Comentario";
	}


	private: System::Void Ordenes_SizeChanged(System::Object^  sender, System::EventArgs^  e)
	{
		this->dataGridView2->Height = this->Height - 240;
		this->dataGridView1->Columns[1]->Width = (dataGridView1->Width - 80) / 2;
		this->dataGridView1->Columns[2]->Width = (dataGridView1->Width - 80) / 2;
	}
	private: System::Void lbl2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		double precio;
		int ID;
		if (CBB3->Text == "Alita") { precio = 4.50; ID = 1; }
		else if (CBB3->Text == "Piernita") { precio = 5.00; ID = 2; }
		else if (CBB3->Text == "Muslito") { precio = 6.00; ID = 3; }
		else if (CBB3->Text == "Pecho") { precio = 7.00; ID = 4; }
		else if (CBB3->Text == "Filete de pollo") {precio = 6.50; ID = 5;}
		else if (CBB3->Text == "Salchipapa") { precio = 4.00; ID = 6; }
	


		else if (CBB3->Text == "H. de pollo") {precio = 3.00; ID = 7;}
		else if (CBB3->Text == "H. de carne") {precio = 3.00; ID = 8;}
		else if (CBB3->Text == "Broaster Burger") {precio = 5.50; ID = 9;}

		else if (CBB3->Text == "1 1/2 L INKA") {precio = 6.50; ID = 10;}
		else if (CBB3->Text == "1 1/2 L COCA") {precio = 6.50; ID =11;}
		else if (CBB3->Text == "1 L INKA") {precio = 5.50; ID = 12;}
		else if (CBB3->Text == "1 L COCA") {precio = 5.50; ID = 13;}
		else if (CBB3->Text == "1/2 L INKA") { precio = 2.50; ID = 14; }
		else if (CBB3->Text == "1/2 L COCA") {precio = 2.50; ID = 15;}
		else if (CBB3->Text == "1/2 L Fanta R.") {precio = 2.00; ID = 16;}
		else if (CBB3->Text == "1/2 L Fanta N.") {precio = 2.00; ID = 17;}
		else if (CBB3->Text == "1/2 L Pepsi") {precio = 2.00; ID = 18;}
		else if (CBB3->Text == "1/2 L Guarana") {precio = 2.00; ID = 19;}
		else if (CBB3->Text == "Pepsi J.") {precio = 3.00; ID = 20;}
		else if (CBB3->Text == "Esporade") {precio = 2.50; ID = 21;}
		else if (CBB3->Text == "Agua Cielo") {precio = 1.50; ID = 22;}

		else if (CBB3->Text == "Emoliente Vaso") {precio = 1.00; ID = 23;}
		else if (CBB3->Text == "Emoliente 1/2 Litro") {precio = 2.50; ID = 24;}
		else if (CBB3->Text == "Emoliente 1 Litro") {precio = 4.00; ID = 25;}

		else if (CBB3->Text == "Gelatina") {precio = 1.00; ID = 26;}
		else if (CBB3->Text == "Gelatina con flan") {precio = 1.50; ID = 27;}

		else if (CBB3->Text == "Porcion Papa") {precio = 3.00; ID = 28;}
		else if (CBB3->Text == "Arroz adicional") {precio = 0.50; ID = 29;}
		else if (CBB3->Text == "Porcion Arroz") { precio = 2.00; ID = 30;}

		double total = Convert::ToDouble(textBox5->Text)*precio;

		int rowEscribir = dataGridView1->Rows->Count;
		dataGridView1->Rows->Add(1);
		dataGridView1->Rows[rowEscribir]->Cells[0]->Value =ID.ToString();
		dataGridView1->Rows[rowEscribir]->Cells[1]->Value = textBox5->Text;
		dataGridView1->Rows[rowEscribir]->Cells[2]->Value = CBB3->Text;
		dataGridView1->Rows[rowEscribir]->Cells[3]->Value = total.ToString();


		T_Order = Convert::ToDouble(lblPrecio->Text);
		T_Order += total;

		lblPrecio->Text = T_Order.ToString();
	}
	private: System::Void CBB2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		CBB3->Items->Clear();
		switch (CBB2->SelectedIndex)
		{
		case 0:
			CBB3->Items->Add(L"Alita");
			CBB3->Items->Add(L"Piernita");
			CBB3->Items->Add(L"Muslito");
			CBB3->Items->Add(L"Pecho");
			CBB3->Items->Add(L"Filete de pollo");
			CBB3->Items->Add(L"Salchipapa");
			break;
		case 1:
			CBB3->Items->Add(L"H. de pollo");
			CBB3->Items->Add(L"H. de carne");
			CBB3->Items->Add(L"Broaster Burger");
			break;
		case 2:
			CBB3->Items->Add("1 1/2 L INKA");
			CBB3->Items->Add("1 1/2 L COCA");
			CBB3->Items->Add("1 L INKA");
			CBB3->Items->Add("1 L COCA");
			CBB3->Items->Add("1/2 L INKA");
			CBB3->Items->Add("1/2 L COCA");
			CBB3->Items->Add("1/2 L Fanta R.");
			CBB3->Items->Add("1/2 L Fanta N.");
			CBB3->Items->Add("1/2 L Pepsi");
			CBB3->Items->Add("1/2 L Guaraná");
			CBB3->Items->Add("Pepsi J.");
			CBB3->Items->Add("Esporade");
			CBB3->Items->Add("Agua Cielo");
			break;
		case 3:
			CBB3->Items->Add(L"Emoliente Vaso");
			CBB3->Items->Add(L"Emoliente 1/2 Litro");
			CBB3->Items->Add(L"Emoliente 1 Litro");
			break;
		case 4:
			CBB3->Items->Add(L"Gelatina");
			CBB3->Items->Add(L"Gelatina con flan");
			break;
		case 5:
			CBB3->Items->Add(L"Arroz adicional");
			CBB3->Items->Add(L"Porcion Papa");
			CBB3->Items->Add(L"Porcion Arroz");
			break;
		}
		CBB3->SelectedIndex = 0;
		textBox5->Focus();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (dataGridView1->Rows->Count > 0)
		{
			double precio = 0.0;
			precio = Convert::ToDouble(dataGridView1->CurrentRow->Cells[3]->Value);
			T_Order -= precio;

			lblPrecio->Text = T_Order.ToString();
			dataGridView1->Rows->RemoveAt(dataGridView1->CurrentRow->Index);
		}

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (checkBox1->Checked == true)
		{
			checkBox2->Checked = false;
			TBdireccion->Enabled = true;
			CBB1->Enabled = true;
			CBB1->SelectedIndex = 0;
			label2->Visible = true;
			label5->Visible = true;
			textBox1->Enabled = true;
		}
		else
		{
			checkBox2->Checked = true;
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (checkBox2->Checked == true)
		{
			checkBox1->Checked = false;
			TBdireccion->Text = "";
			TBdireccion->Enabled = false;
			CBB1->SelectedIndex = -1;
			CBB1->Enabled = false;
			label2->Visible = false;
			label5->Visible = false;
			textBox1->Enabled = false;
		}
		else
		{
			checkBox1->Checked = true;
		}
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void CBB3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		textBox5->Focus();
	}
	private: System::Void btnRegist_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try {



			//el mejor caso
			CargarRegistros("Insert into Client values('" + TBcliente->Text + "'," + TBcel->Text + ",'" + TBdireccion->Text + "')");
			//Buscar ID cliente antes de insertar su orden;
			SqlCommand^cmdDatabase = gcnew SqlCommand("Select IDENT_CURRENT('Client')", cn);
			cn->Open();
			int idC = Convert::ToInt32(cmdDatabase->ExecuteScalar());
			cn->Close();

			CargarRegistros("Insert into Orders values('" + fecha_actual() + "','" + hora_actual() + "',null,'" + TBdireccion->Text + "',0,'" + richTBcomment->Text + "',0," + textBox1->Text + "," + (CBB1->SelectedIndex + 1).ToString() + "," + idC.ToString() + ")");
			//Buscar ID Orden antes de insertar sus productos;
			SqlCommand^cmdDatabase2 = gcnew SqlCommand("Select IDENT_CURRENT('Orders')", cn);
			cn->Open();
			int idO = Convert::ToInt32(cmdDatabase2->ExecuteScalar());
			cn->Close();

			int idP;
			for (int i = 0; i < dataGridView1->Rows->Count; i++)
			{
				idP = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
				for (int j = 0; j < Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value); j++)
					CargarRegistros("Insert into Order_Details values (" + (Convert::ToInt16(checkBox1->Checked)).ToString() + "," + (Convert::ToInt16(checkBox3->Checked)).ToString() + "," + idO.ToString() + "," + idP.ToString() + ")");
			}

			Actualizar_DGV();

		}
		catch (Exception^e)
		{
			MessageBox::Show(e->Message);
		}
	}
	};
}
