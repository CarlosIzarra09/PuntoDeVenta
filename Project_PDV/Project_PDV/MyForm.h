#pragma once
#include "ThemeColor.h"
#include "FormProduct.h"
#include "Clientes.h"
#include "Empleados.h"
#include "Inicio.h"
#include "Ordenes.h"
#include "Pagos.h"
#include "Reportes.h"


namespace ProjectPDV {

	using namespace System;
	using namespace System::ComponentModel;
	
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		ThemeColor*object;
		Color primary;
		Color secondary;
	public:
		MyForm(void)
		{
			object = new ThemeColor();
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panelMenu;
	private: System::Windows::Forms::Button^  btnResults;
			 
	private: System::Windows::Forms::Button^  btnClient;


	private: System::Windows::Forms::Button^  btnPersonal;


	private: System::Windows::Forms::Button^  btnOrders;


	private: System::Windows::Forms::Button^  btnProducts;


	private: System::Windows::Forms::Button^  btnHome;


	private: System::Windows::Forms::Panel^  panelLogo;
	private: System::Windows::Forms::Panel^  panelTitleBar;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panelDesktopPanel;
	private: System::Windows::Forms::Button^  btnConfg;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Button^  btnMin;

	private: System::Windows::Forms::Button^  btnMax;
	private: System::Windows::Forms::Panel^  panel1;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->btnConfg = (gcnew System::Windows::Forms::Button());
			this->btnResults = (gcnew System::Windows::Forms::Button());
			this->btnClient = (gcnew System::Windows::Forms::Button());
			this->btnPersonal = (gcnew System::Windows::Forms::Button());
			this->btnOrders = (gcnew System::Windows::Forms::Button());
			this->btnProducts = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->btnMax = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->panelDesktopPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelMenu->SuspendLayout();
			this->panelLogo->SuspendLayout();
			this->panelTitleBar->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panelMenu->Controls->Add(this->btnConfg);
			this->panelMenu->Controls->Add(this->btnResults);
			this->panelMenu->Controls->Add(this->btnClient);
			this->panelMenu->Controls->Add(this->btnPersonal);
			this->panelMenu->Controls->Add(this->btnOrders);
			this->panelMenu->Controls->Add(this->btnProducts);
			this->panelMenu->Controls->Add(this->btnHome);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 30);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(220, 551);
			this->panelMenu->TabIndex = 0;
			// 
			// btnConfg
			// 
			this->btnConfg->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnConfg->FlatAppearance->BorderSize = 0;
			this->btnConfg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConfg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnConfg->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnConfg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnConfg.Image")));
			this->btnConfg->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnConfg->Location = System::Drawing::Point(0, 440);
			this->btnConfg->Name = L"btnConfg";
			this->btnConfg->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->btnConfg->Size = System::Drawing::Size(220, 60);
			this->btnConfg->TabIndex = 7;
			this->btnConfg->Text = L" Pagos";
			this->btnConfg->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnConfg->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnConfg->UseVisualStyleBackColor = true;
			this->btnConfg->Click += gcnew System::EventHandler(this, &MyForm::btnConfg_Click);
			// 
			// btnResults
			// 
			this->btnResults->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnResults->FlatAppearance->BorderSize = 0;
			this->btnResults->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResults->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnResults->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnResults->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnResults.Image")));
			this->btnResults->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnResults->Location = System::Drawing::Point(0, 380);
			this->btnResults->Name = L"btnResults";
			this->btnResults->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnResults->Size = System::Drawing::Size(220, 60);
			this->btnResults->TabIndex = 6;
			this->btnResults->Text = L"   Reportes";
			this->btnResults->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnResults->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnResults->UseVisualStyleBackColor = true;
			this->btnResults->Click += gcnew System::EventHandler(this, &MyForm::btnResults_Click);
			// 
			// btnClient
			// 
			this->btnClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnClient->FlatAppearance->BorderSize = 0;
			this->btnClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnClient->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClient.Image")));
			this->btnClient->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnClient->Location = System::Drawing::Point(0, 320);
			this->btnClient->Name = L"btnClient";
			this->btnClient->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnClient->Size = System::Drawing::Size(220, 60);
			this->btnClient->TabIndex = 5;
			this->btnClient->Text = L" Clientes";
			this->btnClient->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnClient->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnClient->UseVisualStyleBackColor = true;
			this->btnClient->Click += gcnew System::EventHandler(this, &MyForm::btnClient_Click);
			// 
			// btnPersonal
			// 
			this->btnPersonal->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnPersonal->FlatAppearance->BorderSize = 0;
			this->btnPersonal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPersonal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnPersonal->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnPersonal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPersonal.Image")));
			this->btnPersonal->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPersonal->Location = System::Drawing::Point(0, 260);
			this->btnPersonal->Name = L"btnPersonal";
			this->btnPersonal->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnPersonal->Size = System::Drawing::Size(220, 60);
			this->btnPersonal->TabIndex = 4;
			this->btnPersonal->Text = L"   Empleados";
			this->btnPersonal->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPersonal->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnPersonal->UseVisualStyleBackColor = true;
			this->btnPersonal->Click += gcnew System::EventHandler(this, &MyForm::btnPersonal_Click);
			// 
			// btnOrders
			// 
			this->btnOrders->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnOrders->FlatAppearance->BorderSize = 0;
			this->btnOrders->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOrders->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnOrders->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnOrders->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOrders.Image")));
			this->btnOrders->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnOrders->Location = System::Drawing::Point(0, 200);
			this->btnOrders->Name = L"btnOrders";
			this->btnOrders->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnOrders->Size = System::Drawing::Size(220, 60);
			this->btnOrders->TabIndex = 3;
			this->btnOrders->Text = L"   Ordenes";
			this->btnOrders->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnOrders->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnOrders->UseVisualStyleBackColor = true;
			this->btnOrders->Click += gcnew System::EventHandler(this, &MyForm::btnOrders_Click);
			// 
			// btnProducts
			// 
			this->btnProducts->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnProducts->FlatAppearance->BorderSize = 0;
			this->btnProducts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProducts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnProducts->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnProducts->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnProducts.Image")));
			this->btnProducts->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProducts->Location = System::Drawing::Point(0, 140);
			this->btnProducts->Name = L"btnProducts";
			this->btnProducts->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnProducts->Size = System::Drawing::Size(220, 60);
			this->btnProducts->TabIndex = 2;
			this->btnProducts->Text = L"   Inventario";
			this->btnProducts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProducts->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnProducts->UseVisualStyleBackColor = true;
			this->btnProducts->Click += gcnew System::EventHandler(this, &MyForm::btnProducts_Click);
			// 
			// btnHome
			// 
			this->btnHome->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnHome->FlatAppearance->BorderSize = 0;
			this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnHome->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHome.Image")));
			this->btnHome->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnHome->Location = System::Drawing::Point(0, 80);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnHome->Size = System::Drawing::Size(220, 60);
			this->btnHome->TabIndex = 1;
			this->btnHome->Text = L"   Inicio";
			this->btnHome->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnHome->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &MyForm::btnHome_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panelLogo->Controls->Add(this->label1);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(220, 80);
			this->panelLogo->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bukhari Script", 16));
			this->label1->ForeColor = System::Drawing::Color::LightGray;
			this->label1->Location = System::Drawing::Point(54, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"D \'Sonia \r\nBroaster ";
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->panelTitleBar->Controls->Add(this->lblTitle);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(220, 30);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(748, 80);
			this->panelTitleBar->TabIndex = 1;
			this->panelTitleBar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panelTitleBar_MouseDown);
			this->panelTitleBar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panelTitleBar_MouseMove);
			this->panelTitleBar->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panelTitleBar_MouseUp);
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::White;
			this->lblTitle->Location = System::Drawing::Point(375, 29);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(71, 25);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Inicio";
			this->lblTitle->TextChanged += gcnew System::EventHandler(this, &MyForm::lblTitle_TextChanged);
			this->lblTitle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lblTitle_MouseDown);
			this->lblTitle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lblTitle_MouseMove);
			this->lblTitle->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lblTitle_MouseUp);
			// 
			// btnMin
			// 
			this->btnMin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMin->FlatAppearance->BorderSize = 0;
			this->btnMin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMin->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMin->ForeColor = System::Drawing::Color::Gold;
			this->btnMin->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnMin->Location = System::Drawing::Point(878, 0);
			this->btnMin->Margin = System::Windows::Forms::Padding(0);
			this->btnMin->Name = L"btnMin";
			this->btnMin->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnMin->Size = System::Drawing::Size(30, 30);
			this->btnMin->TabIndex = 3;
			this->btnMin->Text = L"O";
			this->btnMin->UseVisualStyleBackColor = true;
			this->btnMin->Click += gcnew System::EventHandler(this, &MyForm::btnMin_Click);
			// 
			// btnMax
			// 
			this->btnMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMax->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMax->FlatAppearance->BorderSize = 0;
			this->btnMax->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMax->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMax->ForeColor = System::Drawing::Color::LimeGreen;
			this->btnMax->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnMax->Location = System::Drawing::Point(908, 0);
			this->btnMax->Margin = System::Windows::Forms::Padding(0);
			this->btnMax->Name = L"btnMax";
			this->btnMax->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnMax->Size = System::Drawing::Size(30, 30);
			this->btnMax->TabIndex = 2;
			this->btnMax->Text = L"O";
			this->btnMax->UseVisualStyleBackColor = true;
			this->btnMax->Click += gcnew System::EventHandler(this, &MyForm::btnMax_Click);
			// 
			// btnClose
			// 
			this->btnClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::Color::Red;
			this->btnClose->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnClose->Location = System::Drawing::Point(938, 0);
			this->btnClose->Margin = System::Windows::Forms::Padding(0);
			this->btnClose->Name = L"btnClose";
			this->btnClose->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnClose->Size = System::Drawing::Size(30, 30);
			this->btnClose->TabIndex = 1;
			this->btnClose->Text = L"O";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// panelDesktopPanel
			// 
			this->panelDesktopPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktopPanel->Location = System::Drawing::Point(220, 110);
			this->panelDesktopPanel->Name = L"panelDesktopPanel";
			this->panelDesktopPanel->Size = System::Drawing::Size(748, 471);
			this->panelDesktopPanel->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->panel1->Controls->Add(this->btnMin);
			this->panel1->Controls->Add(this->btnClose);
			this->panel1->Controls->Add(this->btnMax);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(968, 30);
			this->panel1->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(968, 581);
			this->Controls->Add(this->panelDesktopPanel);
			this->Controls->Add(this->panelTitleBar);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelMenu->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			this->panelLogo->PerformLayout();
			this->panelTitleBar->ResumeLayout(false);
			this->panelTitleBar->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Button ^currentButton = (gcnew System::Windows::Forms::Button());
	private: int tempIndex;
	private: Form^activateForm;
	private: bool clic;
	private: Point punto;
	
	private: Color SelectThemeColor() {
	

		int index = rand() % object->Get_List().size();
		while (tempIndex == index) {
			index = rand() % object->Get_List().size();
		}
		tempIndex = index;
		std::string color = object->Get_List()[index];
		String^CColor = gcnew String(color.c_str());

		return ColorTranslator::FromHtml(CColor);
	}
	private: void ActivateButton(Object ^btnSender)
	{
		if (btnSender != nullptr)
		{
			if (currentButton != ((Button^)btnSender))
			{
				DisableButton();
				Color color = SelectThemeColor();
				currentButton = ((Button^)btnSender);
				currentButton->BackColor = color;
				currentButton->ForeColor = Color::White;
				currentButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5));
				panelTitleBar->BackColor = color;
				panelLogo->BackColor = object->ChangeColorBrightness(color, -0.3);
				primary = color;
				secondary = object->ChangeColorBrightness(color, -0.3);
			}
		}
	}

	private: void DisableButton()
	{
		for (int i = 0; i < panelMenu->Controls->Count; i++)
		{
			if (panelMenu->Controls[i] == currentButton)
			{
				((Button^)panelMenu->Controls[i])->BackColor = Color::FromArgb(51, 51, 76);
				((Button^)panelMenu->Controls[i])->ForeColor = Color::Gainsboro;
				((Button^)panelMenu->Controls[i])->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			}
		}
	}

	private: void OpenChildForm(Form^ childForm, Object ^btnSender)
	{
		if (activateForm != nullptr)
		{
			activateForm->Close();
		}
		ActivateButton(btnSender);
		activateForm = childForm;
		childForm->TopLevel = false;
		childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		childForm->Dock = System::Windows::Forms::DockStyle::Fill;
		panelDesktopPanel->Controls->Add(childForm);
		panelDesktopPanel->Tag = childForm;
		childForm->BringToFront();
		childForm->Show();
		lblTitle->Text = childForm->Text;
		
	}


	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		btnHome->PerformClick();
		this->ControlBox = false;

		
	}
private: System::Void btnProducts_Click(System::Object^  sender, System::EventArgs^  e) 
{
	OpenChildForm(gcnew FormProduct(), sender);
	
}

private: System::Void btnOrders_Click(System::Object^  sender, System::EventArgs^  e)
{
	
	OpenChildForm(gcnew Ordenes(), sender);
   ((Ordenes^)activateForm)->LoadTheme(primary, secondary);
}
private: System::Void btnPersonal_Click(System::Object^  sender, System::EventArgs^  e) 
{
	OpenChildForm(gcnew Empleados(), sender);
	
}

private: System::Void btnClient_Click(System::Object^  sender, System::EventArgs^  e) 
{
	OpenChildForm(gcnew Clientes(), sender);
	
}
private: System::Void btnResults_Click(System::Object^  sender, System::EventArgs^  e) 
{
	OpenChildForm(gcnew Reportes(), sender);
	
}
private: System::Void btnConfg_Click(System::Object^  sender, System::EventArgs^  e) 
{
	OpenChildForm(gcnew Pagos(), sender);
	
}
private: System::Void btnHome_Click(System::Object^  sender, System::EventArgs^  e)
{
	OpenChildForm(gcnew Inicio(), sender);
	((Inicio^)activateForm)->LoadTheme(primary, secondary);
}
private: System::Void lblTitle_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	lblTitle->Location = System::Drawing::Point(panelTitleBar->Width/2 - lblTitle->Width/2, 29);
}



private: System::Void panelTitleBar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	clic = true;
	punto =  Point(e->X, e->Y);
	Cursor = Cursors::SizeAll;
}
private: System::Void panelTitleBar_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	clic = false;
	Cursor = Cursors::Default;
}
private: System::Void panelTitleBar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	if (clic)
	{
		this->Location = System::Drawing::Point(this->Location.X + (e->Location.X - punto.X), this->Location.Y + (e->Location.Y - punto.Y));
		
	}
}
private: System::Void lblTitle_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
private: System::Void lblTitle_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
private: System::Void lblTitle_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Close();
}
private: System::Void btnMax_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->WindowState == System::Windows::Forms::FormWindowState::Normal)
	{
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
	}
	else
	{
		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
	}
}
private: System::Void btnMin_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}

};
}
