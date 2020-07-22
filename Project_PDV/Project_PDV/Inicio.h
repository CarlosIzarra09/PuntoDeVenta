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
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
		SqlConnection^cn;
	    SqlConnectionStringBuilder^str;
		int contador;
	public:
		Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			contador = 0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblA;
	private: System::Windows::Forms::Label^  lblP;
	private: System::Windows::Forms::Label^  lblM;
	private: System::Windows::Forms::Label^  lblPE;
	private: System::Windows::Forms::Label^  lblF;
	private: System::Windows::Forms::Label^  lblHP;
	private: System::Windows::Forms::Label^  lblHC;
	private: System::Windows::Forms::Label^  lblBB;
	private: System::Windows::Forms::Label^  lblS;






	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblA = (gcnew System::Windows::Forms::Label());
			this->lblP = (gcnew System::Windows::Forms::Label());
			this->lblM = (gcnew System::Windows::Forms::Label());
			this->lblPE = (gcnew System::Windows::Forms::Label());
			this->lblF = (gcnew System::Windows::Forms::Label());
			this->lblHP = (gcnew System::Windows::Forms::Label());
			this->lblHC = (gcnew System::Windows::Forms::Label());
			this->lblBB = (gcnew System::Windows::Forms::Label());
			this->lblS = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(171, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(440, 82);
			this->label1->TabIndex = 0;
			this->label1->Text = L"05:31:05 PM";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Inicio::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(101, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(562, 49);
			this->label2->TabIndex = 1;
			this->label2->Text = L"martes, 21 de julio de 2020";
			this->label2->Click += gcnew System::EventHandler(this, &Inicio::label2_Click);
			// 
			// lblA
			// 
			this->lblA->AutoSize = true;
			this->lblA->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblA->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA->ForeColor = System::Drawing::SystemColors::Control;
			this->lblA->Location = System::Drawing::Point(61, 260);
			this->lblA->Name = L"lblA";
			this->lblA->Size = System::Drawing::Size(113, 33);
			this->lblA->TabIndex = 2;
			this->lblA->Text = L"3 Alitas";
			this->lblA->Click += gcnew System::EventHandler(this, &Inicio::lblA_Click);
			// 
			// lblP
			// 
			this->lblP->AutoSize = true;
			this->lblP->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblP->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblP->ForeColor = System::Drawing::SystemColors::Control;
			this->lblP->Location = System::Drawing::Point(205, 260);
			this->lblP->Name = L"lblP";
			this->lblP->Size = System::Drawing::Size(156, 33);
			this->lblP->TabIndex = 3;
			this->lblP->Text = L"3 Piernitas";
			// 
			// lblM
			// 
			this->lblM->AutoSize = true;
			this->lblM->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblM->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblM->ForeColor = System::Drawing::SystemColors::Control;
			this->lblM->Location = System::Drawing::Point(383, 260);
			this->lblM->Name = L"lblM";
			this->lblM->Size = System::Drawing::Size(153, 33);
			this->lblM->TabIndex = 4;
			this->lblM->Text = L"3 Muslitos";
			// 
			// lblPE
			// 
			this->lblPE->AutoSize = true;
			this->lblPE->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblPE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblPE->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPE->ForeColor = System::Drawing::SystemColors::Control;
			this->lblPE->Location = System::Drawing::Point(556, 260);
			this->lblPE->Name = L"lblPE";
			this->lblPE->Size = System::Drawing::Size(138, 33);
			this->lblPE->TabIndex = 5;
			this->lblPE->Text = L"3 Pechos";
			// 
			// lblF
			// 
			this->lblF->AutoSize = true;
			this->lblF->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblF->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblF->ForeColor = System::Drawing::SystemColors::Control;
			this->lblF->Location = System::Drawing::Point(35, 322);
			this->lblF->Name = L"lblF";
			this->lblF->Size = System::Drawing::Size(127, 33);
			this->lblF->TabIndex = 6;
			this->lblF->Text = L"3 Filetes";
			this->lblF->Click += gcnew System::EventHandler(this, &Inicio::label6_Click);
			// 
			// lblHP
			// 
			this->lblHP->AutoSize = true;
			this->lblHP->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblHP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblHP->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHP->ForeColor = System::Drawing::SystemColors::Control;
			this->lblHP->Location = System::Drawing::Point(406, 322);
			this->lblHP->Name = L"lblHP";
			this->lblHP->Size = System::Drawing::Size(142, 33);
			this->lblHP->TabIndex = 7;
			this->lblHP->Text = L"3 H. Pollo";
			this->lblHP->Click += gcnew System::EventHandler(this, &Inicio::label7_Click);
			// 
			// lblHC
			// 
			this->lblHC->AutoSize = true;
			this->lblHC->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblHC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblHC->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHC->ForeColor = System::Drawing::SystemColors::Control;
			this->lblHC->Location = System::Drawing::Point(565, 322);
			this->lblHC->Name = L"lblHC";
			this->lblHC->Size = System::Drawing::Size(155, 33);
			this->lblHC->TabIndex = 8;
			this->lblHC->Text = L"3 H. Carne";
			// 
			// lblBB
			// 
			this->lblBB->AutoSize = true;
			this->lblBB->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblBB->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBB->ForeColor = System::Drawing::SystemColors::Control;
			this->lblBB->Location = System::Drawing::Point(268, 379);
			this->lblBB->Name = L"lblBB";
			this->lblBB->Size = System::Drawing::Size(191, 33);
			this->lblBB->TabIndex = 9;
			this->lblBB->Text = L"3 H. Broaster";
			// 
			// lblS
			// 
			this->lblS->AutoSize = true;
			this->lblS->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblS->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblS->ForeColor = System::Drawing::SystemColors::Control;
			this->lblS->Location = System::Drawing::Point(188, 322);
			this->lblS->Name = L"lblS";
			this->lblS->Size = System::Drawing::Size(200, 33);
			this->lblS->TabIndex = 10;
			this->lblS->Text = L"3 Salchipapas";
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 470);
			this->Controls->Add(this->lblS);
			this->Controls->Add(this->lblBB);
			this->Controls->Add(this->lblHC);
			this->Controls->Add(this->lblHP);
			this->Controls->Add(this->lblF);
			this->Controls->Add(this->lblPE);
			this->Controls->Add(this->lblM);
			this->Controls->Add(this->lblP);
			this->Controls->Add(this->lblA);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inicio";
			this->Text = L"INICIO";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Inicio::Inicio_SizeChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		//DateTime::Now.ToLongDateString();
		//DateTime::Now.
		label1->Text = DateTime::Now.ToString("hh:mm:ss tt", System::Globalization::CultureInfo::InvariantCulture);
		label2->Text = DateTime::Now.ToLongDateString();
	
		contador++;
		if (contador ==50 )
		{
			Asignar_Stocks();
			contador = 0;
		}
	}

	private: void Asignar_Stocks()
	{
		cn->Open();
		for (int i = 1; i < 10; i++)
		{
			SqlCommand^cmd = gcnew SqlCommand("Select p.UnitInStock From Product p where p.ProductID = "+i.ToString(), cn);
			
			int stock = Convert::ToInt32(cmd->ExecuteScalar());
			
			switch (i)
			{
			case 1:lblA->Text = stock.ToString()+" Alitas"; break;
			case 2:lblP->Text = stock.ToString()+" Piernitas"; break;
			case 3:lblM->Text = stock.ToString()+" Muslitos"; break;
			case 4:lblPE->Text = stock.ToString() + " Pechos"; break;
			case 5:lblF->Text = stock.ToString() + " Filetes"; break;
			case 6:lblS->Text = stock.ToString() + " Salchipapas"; break;
			case 7:lblHP->Text = stock.ToString() + " H. Pollo"; break;
			case 8:lblHC->Text = stock.ToString() + " H. Carne"; break;
			case 9:lblBB->Text = stock.ToString() + " H. Broaster"; break;
			}
		}
		cn->Close();
	}

	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	public: void LoadTheme(Color primary, Color secondary)
	{
		lblA->BackColor = primary;
		lblP->BackColor = primary;
		lblM->BackColor = primary;
		lblPE->BackColor = primary;
		lblF->BackColor = primary;
		lblS->BackColor = primary;
		lblHP->BackColor = primary;
		lblHC->BackColor = primary;
		lblBB->BackColor = primary;
	}
	private: System::Void Inicio_Load(System::Object^  sender, System::EventArgs^  e)
	{
		label1->Location = Point(Width / 2 - label1->Width / 2, 40);
		label2->Location = Point(Width / 2 - label2->Width / 2, 130);

		//Inicializamos conexion con la base de datos
		str = gcnew SqlConnectionStringBuilder();
		str->DataSource = "EDUARDO-PC\\SQLEXPRESS";
		str->InitialCatalog = "DSONIA_BD";
		str->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(str));

		Asignar_Stocks();
	}
	
private: System::Void lblA_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Inicio_SizeChanged(System::Object^  sender, System::EventArgs^  e) 
{
	label1->Location =  Point(Width/2-label1->Width/2, 40);
	label2->Location = Point(Width / 2 - label2->Width / 2, 130);
}
};
}
