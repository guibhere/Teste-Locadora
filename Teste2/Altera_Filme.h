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
	public ref class Altera_Filme : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		String^ oldid;
		Altera_Filme(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}
		Altera_Filme(Form^ obj1){
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
		~Altera_Filme()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ selecao;
	private: System::Windows::Forms::Label^ label3;
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
			this->selecao = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox1->Controls->Add(this->selecao);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->Alterar);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(160, 305);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Alterar Filme";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// selecao
			// 
			this->selecao->FormattingEnabled = true;
			this->selecao->Location = System::Drawing::Point(32, 146);
			this->selecao->Name = L"selecao";
			this->selecao->Size = System::Drawing::Size(121, 21);
			this->selecao->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Diretor";
			// 
			// Alterar
			// 
			this->Alterar->Location = System::Drawing::Point(44, 172);
			this->Alterar->Name = L"Alterar";
			this->Alterar->Size = System::Drawing::Size(75, 47);
			this->Alterar->TabIndex = 2;
			this->Alterar->Text = L"Alterar";
			this->Alterar->UseVisualStyleBackColor = true;
			this->Alterar->Click += gcnew System::EventHandler(this, &Altera_Filme::Inserir_Click);
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
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Altera_Filme::textBox1_TextChanged);
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
			// Altera_Filme
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(180, 274);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Altera_Filme";
			this->Text = L"Alterar Filme";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Inserir_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring1 = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase1 = gcnew  MySqlConnection(constring1);
		MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("select idDiretor from mydb.diretor where nome=('" + this->selecao->Text + "');", conDatabase1);
		MySqlDataReader^ myreader1;


		try
		{
			conDatabase1->Open();
			myreader1 = cmdDataBase1->ExecuteReader();
			myreader1->Read();
			String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
			MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update mydb.filme set mydb.filme.titulo=(" +
				"'" +this->textBox2->Text+ "'), mydb.filme.Diretor_idDiretor=("+
				"'" +myreader1->GetUInt32(0)+ "'), mydb.filme.idFilme=("+
			    "'" +this->textBox1->Text+"') where mydb.filme.idFilme=(" +
				"'" +this->oldid+ "');", conDatabase);
			MySqlDataReader^ myreader;
			conDatabase1->Close();


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



		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}

		
		
		//obj->ShowDialog();
		this->Hide();


	}
	public: void  setfilme(String^ id, String^ nome, String^ diretor) {

		this->textBox1->Text = id;
		this->textBox2->Text = nome;
		this->oldid = id;
		String^ constring1 = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase1 = gcnew  MySqlConnection(constring1);
		MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("select * from mydb.diretor", conDatabase1);
		MySqlDataReader^ myreader1;


		try
		{
			conDatabase1->Open();
			myreader1 = cmdDataBase1->ExecuteReader();
			int i = 0;
			while (myreader1->Read()) {

				this->selecao->Items->Add(myreader1->GetString(1));
				i += 1;
			}

		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
		this->selecao->SelectedItem = diretor;
		
	}
	};
	}

