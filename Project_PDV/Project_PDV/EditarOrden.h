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
	/// Resumen de EditarOrden
	/// </summary>
	public ref class EditarOrden : public System::Windows::Forms::Form
	{
		int id;
		double T_Order;
		SqlConnection^cn;
		SqlConnectionStringBuilder^str;
		DataTable^ dbaDataSet;
		BindingSource^ bSource;
		DataTable^ Resp_dbaDataSet;
		BindingSource^ Resp_bSource;
	public:
		EditarOrden(int ID)
		{
			id = ID;
			dbaDataSet = gcnew DataTable();
			bSource = gcnew BindingSource();
			Resp_dbaDataSet= gcnew DataTable();
			Resp_bSource= gcnew BindingSource();

			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EditarOrden()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblprecioU;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;




	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  CBB3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::ComboBox^  CBB2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  lblPrecio;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  btnRegist;
	private: System::Windows::Forms::Button^  button1;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditarOrden::typeid));
			this->lblprecioU = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->CBB3 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->CBB2 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lblPrecio = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnRegist = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblprecioU
			// 
			this->lblprecioU->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lblprecioU->AutoSize = true;
			this->lblprecioU->BackColor = System::Drawing::Color::Transparent;
			this->lblprecioU->Font = (gcnew System::Drawing::Font(L"Montserrat", 22));
			this->lblprecioU->ForeColor = System::Drawing::Color::DarkRed;
			this->lblprecioU->Location = System::Drawing::Point(125, 321);
			this->lblprecioU->Name = L"lblprecioU";
			this->lblprecioU->Size = System::Drawing::Size(50, 37);
			this->lblprecioU->TabIndex = 49;
			this->lblprecioU->Text = L"s/";
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
			this->dataGridView1->Location = System::Drawing::Point(19, 179);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(224, 133);
			this->dataGridView1->TabIndex = 48;
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
			this->button3->Location = System::Drawing::Point(146, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 27);
			this->button3->TabIndex = 47;
			this->button3->Text = L"  Quitar";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &EditarOrden::button3_Click);
			// 
			// CBB3
			// 
			this->CBB3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->CBB3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CBB3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CBB3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CBB3->FormattingEnabled = true;
			this->CBB3->Location = System::Drawing::Point(129, 62);
			this->CBB3->Name = L"CBB3";
			this->CBB3->Size = System::Drawing::Size(114, 28);
			this->CBB3->TabIndex = 46;
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
			this->button2->Location = System::Drawing::Point(19, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 27);
			this->button2->TabIndex = 45;
			this->button2->Text = L"  Añadir";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EditarOrden::button2_Click);
			// 
			// lbl2
			// 
			this->lbl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->Location = System::Drawing::Point(15, 66);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(104, 24);
			this->lbl2->TabIndex = 44;
			this->lbl2->Text = L"Producto";
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
			this->CBB2->Location = System::Drawing::Point(129, 22);
			this->CBB2->Name = L"CBB2";
			this->CBB2->Size = System::Drawing::Size(114, 28);
			this->CBB2->TabIndex = 43;
			this->CBB2->SelectedIndexChanged += gcnew System::EventHandler(this, &EditarOrden::CBB2_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(15, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 24);
			this->label10->TabIndex = 42;
			this->label10->Text = L"Categoría";
			// 
			// lblPrecio
			// 
			this->lblPrecio->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lblPrecio->AutoSize = true;
			this->lblPrecio->Font = (gcnew System::Drawing::Font(L"Montserrat", 22));
			this->lblPrecio->ForeColor = System::Drawing::Color::DarkRed;
			this->lblPrecio->Location = System::Drawing::Point(176, 323);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Size = System::Drawing::Size(67, 37);
			this->lblPrecio->TabIndex = 41;
			this->lblPrecio->Text = L"0.0";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 20));
			this->label8->Location = System::Drawing::Point(17, 325);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 33);
			this->label8->TabIndex = 40;
			this->label8->Text = L"TOTAL";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(129, 106);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(59, 20);
			this->textBox5->TabIndex = 39;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(15, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 24);
			this->label7->TabIndex = 38;
			this->label7->Text = L"Cantidad";
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(397, 29);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(43, 23);
			this->checkBox1->TabIndex = 50;
			this->checkBox1->Text = L"SI";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &EditarOrden::checkBox1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(276, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 24);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Entregado";
			// 
			// checkBox2
			// 
			this->checkBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(446, 29);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(54, 23);
			this->checkBox2->TabIndex = 52;
			this->checkBox2->Text = L"NO";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &EditarOrden::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(446, 69);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(54, 23);
			this->checkBox3->TabIndex = 55;
			this->checkBox3->Text = L"NO";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &EditarOrden::checkBox3_CheckedChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(304, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 24);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Pagado";
			// 
			// checkBox4
			// 
			this->checkBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(397, 69);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(43, 23);
			this->checkBox4->TabIndex = 53;
			this->checkBox4->Text = L"SI";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &EditarOrden::checkBox4_CheckedChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(325, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 24);
			this->label3->TabIndex = 56;
			this->label3->Text = L"Envio s/";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(430, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(59, 20);
			this->textBox1->TabIndex = 57;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(327, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 24);
			this->label4->TabIndex = 58;
			this->label4->Text = L"Debe s/";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(430, 150);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(59, 20);
			this->textBox2->TabIndex = 59;
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
			this->btnRegist->Location = System::Drawing::Point(330, 210);
			this->btnRegist->Name = L"btnRegist";
			this->btnRegist->Size = System::Drawing::Size(159, 42);
			this->btnRegist->TabIndex = 60;
			this->btnRegist->Text = L"  Guardar";
			this->btnRegist->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegist->UseVisualStyleBackColor = false;
			this->btnRegist->Click += gcnew System::EventHandler(this, &EditarOrden::btnRegist_Click);
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
			this->button1->Location = System::Drawing::Point(330, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 42);
			this->button1->TabIndex = 61;
			this->button1->Text = L"  Cancelar";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EditarOrden::button1_Click);
			// 
			// EditarOrden
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(525, 364);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnRegist);
			this->Controls->Add(this->lblPrecio);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->lblprecioU);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->CBB3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->CBB2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EditarOrden";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditarOrden";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &EditarOrden::EditarOrden_FormClosed);
			this->Load += gcnew System::EventHandler(this, &EditarOrden::EditarOrden_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditarOrden_Load(System::Object^  sender, System::EventArgs^  e)
	{
		CBB2->SelectedIndex = 0;

		str = gcnew SqlConnectionStringBuilder();
		str->DataSource = "EDUARDO-PC\\SQLEXPRESS";
		str->InitialCatalog = "DSONIA_BD";
		str->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(str));
		cn->Open();

		bool C1, C3 = false;

		SqlCommand^cmd = gcnew SqlCommand("Select o.ShipTime From Orders o  where o.OrderID = " + id.ToString(), cn);
		C1 = (Convert::ToString(cmd->ExecuteScalar())=="") ;
		(C1 == true) ? checkBox2->Checked = true : checkBox1->Checked = true;

		SqlCommand^cmd1 = gcnew SqlCommand("Select o.Paid_out From Orders o  where o.OrderID = "+id.ToString(), cn);
		C3 = Convert::ToBoolean(cmd1->ExecuteScalar());
		(C3 == true) ? checkBox4->Checked = true : checkBox3->Checked = true;
		
		SqlCommand^cmd2 = gcnew SqlCommand("Select o.ShipPrice From Orders o  where o.OrderID = " + id.ToString(), cn);
		textBox1->Text = Convert::ToString(cmd2->ExecuteScalar())->Replace(",",".");

		SqlCommand^cmd3 = gcnew SqlCommand("Select o.Debt From Orders o  where o.OrderID = " + id.ToString(), cn);
		textBox2->Text = Convert::ToString(cmd3->ExecuteScalar())->Replace(",", ".");

		CargarRegistros("Select* from dbo.detalle_orden("+id.ToString()+")");

		dataGridView1->Columns[0]->Width = 30;
		dataGridView1->Columns[1]->Width = 40;
		dataGridView1->Columns[2]->Width = 80;
		dataGridView1->Columns[3]->Width = 80;


		for (int i = 0; i < dataGridView1->Rows->Count; i++)
		{
			T_Order += Convert::ToDouble(dataGridView1->Rows[i]->Cells[3]->Value);
		}

		lblPrecio->Text = T_Order.ToString();

		cn->Close();
	}
	private: void CargarRegistros(String^Comando)
	{
		SqlCommand^cmdDatabase = gcnew SqlCommand(Comando, cn);

		SqlDataAdapter^ sda = gcnew SqlDataAdapter();

		if (Comando->Substring(0, 6) == "Select")
		{
			sda->SelectCommand = cmdDatabase;

			sda->Fill(Resp_dbaDataSet);
			sda->Fill(dbaDataSet);
			bSource->DataSource = dbaDataSet;
			Resp_bSource->DataSource = Resp_dbaDataSet;
			dataGridView1->DataSource = bSource;
			sda->Update(dbaDataSet);
			sda->Update(Resp_dbaDataSet);
		}
		if (Comando->Substring(0, 6) == "Update" || Comando->Substring(0, 6) == "Insert"
			|| Comando->Substring(0, 6) == "Delete")
		{
			cn->Open();
			cmdDatabase->ExecuteNonQuery();
			cn->Close();
		}
	}

	public: System::Void EditarOrden_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
	{



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
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		double precio;
		int ID;
		if (CBB3->Text == "Alita") { precio = 4.50; ID = 1; }
		else if (CBB3->Text == "Piernita") { precio = 5.00; ID = 2; }
		else if (CBB3->Text == "Muslito") { precio = 6.00; ID = 3; }
		else if (CBB3->Text == "Pecho") { precio = 7.00; ID = 4; }
		else if (CBB3->Text == "Filete de pollo") { precio = 6.50; ID = 5; }
		else if (CBB3->Text == "Salchipapa") { precio = 4.00; ID = 6; }



		else if (CBB3->Text == "H. de pollo") { precio = 3.00; ID = 7; }
		else if (CBB3->Text == "H. de carne") { precio = 3.00; ID = 8; }
		else if (CBB3->Text == "Broaster Burger") { precio = 5.50; ID = 9; }

		else if (CBB3->Text == "1 1/2 L INKA") { precio = 6.50; ID = 10; }
		else if (CBB3->Text == "1 1/2 L COCA") { precio = 6.50; ID = 11; }
		else if (CBB3->Text == "1 L INKA") { precio = 5.50; ID = 12; }
		else if (CBB3->Text == "1 L COCA") { precio = 5.50; ID = 13; }
		else if (CBB3->Text == "1/2 L INKA") { precio = 2.50; ID = 14; }
		else if (CBB3->Text == "1/2 L COCA") { precio = 2.50; ID = 15; }
		else if (CBB3->Text == "1/2 L Fanta R.") { precio = 2.00; ID = 16; }
		else if (CBB3->Text == "1/2 L Fanta N.") { precio = 2.00; ID = 17; }
		else if (CBB3->Text == "1/2 L Pepsi") { precio = 2.00; ID = 18; }
		else if (CBB3->Text == "1/2 L Guarana") { precio = 2.00; ID = 19; }
		else if (CBB3->Text == "Pepsi J.") { precio = 3.00; ID = 20; }
		else if (CBB3->Text == "Esporade") { precio = 2.50; ID = 21; }
		else if (CBB3->Text == "Agua Cielo") { precio = 1.50; ID = 22; }

		else if (CBB3->Text == "Emoliente Vaso") { precio = 1.00; ID = 23; }
		else if (CBB3->Text == "Emoliente 1/2 Litro") { precio = 2.50; ID = 24; }
		else if (CBB3->Text == "Emoliente 1 Litro") { precio = 4.00; ID = 25; }

		else if (CBB3->Text == "Gelatina") { precio = 1.00; ID = 26; }
		else if (CBB3->Text == "Gelatina con flan") { precio = 1.50; ID = 27; }

		else if (CBB3->Text == "Porcion Papa") { precio = 3.00; ID = 28; }
		else if (CBB3->Text == "Arroz adicional") { precio = 0.50; ID = 29; }
		else if (CBB3->Text == "Porcion Arroz") { precio = 2.00; ID = 30; }

		double total = Convert::ToDouble(textBox5->Text)*precio;


		DataRow ^row = dbaDataSet->NewRow();
		row["ID"] = ID;
		row["Cant."] = textBox5->Text;
		row["Nombre"] = CBB3->Text;
		row["Precio"] = total.ToString();
		dbaDataSet->Rows->Add(row);

		bSource->DataSource = dbaDataSet;
		dataGridView1->DataSource = bSource;

		
		T_Order = Convert::ToDouble(lblPrecio->Text);
		T_Order += total;

		lblPrecio->Text = T_Order.ToString();
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
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Close();
	}
private: void Devolver_Stock(int ID)
{
	CargarRegistros("Update Product Set UnitInStock = UnitInStock+ t.Quantity from Product p, t1 t where p.ProductID = t.ProductID  and t.OrderID =" + ID.ToString());
}

private: String^ hora_actual()
{
 int hh = DateTime::Now.Hour;
 int mm = DateTime::Now.Minute;
 int ss = DateTime::Now.Second;
 String^hora = hh.ToString() + ":" + mm.ToString() + ":" + ss.ToString() + ".000";
 return hora;
}
private: System::Void btnRegist_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (dataGridView1->Rows->Count == 0 || textBox1->Text == "" || textBox2->Text == "")
	{
		MessageBox::Show("Verifique si ingresó todos los datos", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		Devolver_Stock(id);
		CargarRegistros("Delete from Order_Details where Order_Details.OrderID = " + id.ToString());
		String^nombre;
		int idP;
		double precio = 0;
		int cantidad;

		try
		{


			for (int i = 0; i < dataGridView1->Rows->Count; i++)
			{
				nombre = Convert::ToString(dataGridView1->Rows[i]->Cells[2]->Value);
				cantidad = Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value);
				idP = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
				precio = Convert::ToDouble(dataGridView1->Rows[i]->Cells[3]->Value) / Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);

				//actualizamos stock
				CargarRegistros("Update Product Set UnitInStock = UnitInStock - " + cantidad.ToString() + " Where ProductID = " + idP.ToString() + " and CategoryID != 4 and CategoryID != 6"/* and UnitInStock >="+cantidad.ToString()*/);

				CargarRegistros("Insert into Order_Details values (" + (Convert::ToInt16(checkBox1->Checked)).ToString() + "," + (Convert::ToInt16(checkBox3->Checked)).ToString() + "," + (cantidad).ToString() + "," + precio.ToString()->Replace(",", ".") + "," + id.ToString() + "," + idP.ToString() + ")");
			}

			if (checkBox1->Checked == true) { CargarRegistros("Update Orders set ShipTime = '" + hora_actual() + "' where ShipTime is null and OrderID = " + id.ToString()); }
			else { CargarRegistros("Update Orders set ShipTime = null where OrderID = " + id.ToString()); }
			
			double debt = double::Parse(textBox2->Text, System::Globalization::CultureInfo::InvariantCulture);
			double shipprice = double::Parse(textBox1->Text, System::Globalization::CultureInfo::InvariantCulture);

			CargarRegistros("Update Orders set Debt = "+ Convert::ToString(debt)->Replace(",",".") +  "where OrderID = " + id.ToString());
			CargarRegistros("Update Orders set ShipPrice = " + Convert::ToString(shipprice)->Replace(",", ".") + " where OrderID = " + id.ToString());
			


			if(checkBox4->Checked == true) CargarRegistros("Update Orders set Paid_out = 1 where OrderID = " + id.ToString());
			else CargarRegistros("Update Orders set Paid_out = 0 where OrderID = " + id.ToString());

			this->Close();
		}
		catch (System::Exception^e)
		{
			T_Order = 0;
			MessageBox::Show("No hay stock disponible para " + nombre, "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
			cn->Close();
			Devolver_Stock(id);
			CargarRegistros("Delete from Order_Details where Order_Details.OrderID = " + id.ToString());

			//cargamos el respaldo
			dataGridView1->DataSource = Resp_bSource;

			//guardamos los valores defectos
			for (int i = 0; i < dataGridView1->Rows->Count; i++)
			{

				cantidad = Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value);
				idP = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
				precio = Convert::ToDouble(dataGridView1->Rows[i]->Cells[3]->Value) / Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);

				//actualizamos stock
				CargarRegistros("Update Product Set UnitInStock = UnitInStock - " + cantidad.ToString() + " Where ProductID = " + idP.ToString() + " and CategoryID != 4 and CategoryID != 6"/* and UnitInStock >="+cantidad.ToString()*/);
				//
				CargarRegistros("Insert into Order_Details values (" + (Convert::ToInt16(checkBox1->Checked)).ToString() + "," + (Convert::ToInt16(checkBox3->Checked)).ToString() + "," + (cantidad).ToString() + "," + precio.ToString()->Replace(",", ".") + "," + id.ToString() + "," + idP.ToString() + ")");
				T_Order += Convert::ToDouble(dataGridView1->Rows[i]->Cells[3]->Value);
			}

			lblPrecio->Text = T_Order.ToString();


		}
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox1->Checked == true)
	{
		checkBox2->Checked = false;
	}
	else
	{
		checkBox2->Checked = true;
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox4->Checked == true)
	{
		checkBox3->Checked = false;
	}
	else
	{
		checkBox3->Checked = true;
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox2->Checked == true)
	{
		checkBox1->Checked = false;
	}
	else
	{
		checkBox1->Checked = true;
	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox3->Checked == true)
	{
		checkBox4->Checked = false;
	}
	else
	{
		checkBox4->Checked = true;
	}
}
};
}
