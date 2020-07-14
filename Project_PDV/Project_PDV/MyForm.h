#pragma once
#include "ThemeColor.h"

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
	private: System::Windows::Forms::Button^  btnConfg;

	private: System::Windows::Forms::Button^  btnResults;

	private: System::Windows::Forms::Button^  btnClient;

	private: System::Windows::Forms::Button^  btnPersonal;

	private: System::Windows::Forms::Button^  btnOrders;

	private: System::Windows::Forms::Button^  btnProducts;
	private: System::Windows::Forms::Panel^  panelLogo;
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
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->panelMenu->SuspendLayout();
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
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(220, 581);
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
			this->btnConfg->Location = System::Drawing::Point(0, 380);
			this->btnConfg->Name = L"btnConfg";
			this->btnConfg->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnConfg->Size = System::Drawing::Size(220, 60);
			this->btnConfg->TabIndex = 6;
			this->btnConfg->Text = L"   Configuración";
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
			this->btnResults->Location = System::Drawing::Point(0, 320);
			this->btnResults->Name = L"btnResults";
			this->btnResults->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnResults->Size = System::Drawing::Size(220, 60);
			this->btnResults->TabIndex = 5;
			this->btnResults->Text = L"   Resultados";
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
			this->btnClient->Location = System::Drawing::Point(0, 260);
			this->btnClient->Name = L"btnClient";
			this->btnClient->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnClient->Size = System::Drawing::Size(220, 60);
			this->btnClient->TabIndex = 4;
			this->btnClient->Text = L"   Clientes";
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
			this->btnPersonal->Location = System::Drawing::Point(0, 200);
			this->btnPersonal->Name = L"btnPersonal";
			this->btnPersonal->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnPersonal->Size = System::Drawing::Size(220, 60);
			this->btnPersonal->TabIndex = 3;
			this->btnPersonal->Text = L"   Personal";
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
			this->btnOrders->Location = System::Drawing::Point(0, 140);
			this->btnOrders->Name = L"btnOrders";
			this->btnOrders->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnOrders->Size = System::Drawing::Size(220, 60);
			this->btnOrders->TabIndex = 2;
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
			this->btnProducts->Location = System::Drawing::Point(0, 80);
			this->btnProducts->Name = L"btnProducts";
			this->btnProducts->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnProducts->Size = System::Drawing::Size(220, 60);
			this->btnProducts->TabIndex = 1;
			this->btnProducts->Text = L"   Productos";
			this->btnProducts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProducts->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnProducts->UseVisualStyleBackColor = true;
			this->btnProducts->Click += gcnew System::EventHandler(this, &MyForm::btnProducts_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(220, 80);
			this->panelLogo->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(968, 581);
			this->Controls->Add(this->panelMenu);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Button ^currentButton = (gcnew System::Windows::Forms::Button());
	private: int tempIndex;
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




	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnProducts_Click(System::Object^  sender, System::EventArgs^  e) 
{
	ActivateButton(sender);
}

private: System::Void btnOrders_Click(System::Object^  sender, System::EventArgs^  e) 
{
	ActivateButton(sender);
}
private: System::Void btnPersonal_Click(System::Object^  sender, System::EventArgs^  e) 
{
	ActivateButton(sender);
}

private: System::Void btnClient_Click(System::Object^  sender, System::EventArgs^  e) 
{
	ActivateButton(sender);
}
private: System::Void btnResults_Click(System::Object^  sender, System::EventArgs^  e) 
{
	ActivateButton(sender);
}
private: System::Void btnConfg_Click(System::Object^  sender, System::EventArgs^  e) 
{
	ActivateButton(sender);
}
};
}
