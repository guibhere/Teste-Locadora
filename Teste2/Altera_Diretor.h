#pragma once
#include"MyForm.h"
namespace Teste2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Altera_Filme
	/// </summary>
	public ref class Altera_Diretor: public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		String^ oldid;
		Altera_Diretor(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}
		Altera_Diretor(Form^ obj1) {
			obj = obj1;

			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Altera_Diretor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Button^ Alterar;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	public: String^ idfilme;

	public:

	public:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Alterar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->Alterar);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(160, 305);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Alterar Diretor";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// Alterar
			// 
			this->Alterar->Location = System::Drawing::Point(33, 133);
			this->Alterar->Name = L"Alterar";
			this->Alterar->Size = System::Drawing::Size(75, 47);
			this->Alterar->TabIndex = 2;
			this->Alterar->Text = L"Alterar";
			this->Alterar->UseVisualStyleBackColor = true;
			this->Alterar->Click += gcnew System::EventHandler(this, &Altera_Diretor::Inserir_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Nome";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Altera_Diretor::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ID";
			// 
			// Altera_Diretor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(185, 217);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Altera_Diretor";
			this->Text = L"Alterar Diretor";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Inserir_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ antigoid = this->textBox1->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update mydb.diretor set mydb.diretor.nome=(" +
			"'" + this->textBox2->Text + "'), mydb.diretor.idDiretor=(" +
			"'" + this->textBox1->Text + "') where mydb.diretor.idDiretor=(" +
			"'" + this->oldid+ "');", conDatabase);
		MySqlDataReader^ myreader;


			try
			{
				conDatabase->Open();
				myreader = cmdDataBase->ExecuteReader();
				int i = 0;
				while (myreader->Read()) {


				}

			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}



	



		//obj->ShowDialog();
		this->Hide();


	}
	public: void  setfilme(String^ id, String^ nome) {

		this->textBox1->Text = id;
		this->textBox2->Text = nome;
		this->oldid = id;

	}
	};
}

