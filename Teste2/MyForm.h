#pragma once
#include <iostream>
#include <iostream>
//#include "stdAfx.h"
#include "Altera_Filme.h"
#include"Pesquisa.h"
#include"Altera_Diretor.h"


namespace Teste2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->Carregar();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ Inserir;

	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Button^ inserir_diretor;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::ComboBox^ selecao;





	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ pesquisarToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ lista_filmes;
	private: System::Windows::Forms::RadioButton^ lista_diretor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id_Diretor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewButtonColumn^ alterar_botao;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Deletar;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Inserir = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->selecao = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->inserir_diretor = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->pesquisarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lista_filmes = (gcnew System::Windows::Forms::RadioButton());
			this->lista_diretor = (gcnew System::Windows::Forms::RadioButton());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Id_Diretor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->alterar_botao = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Deletar = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Id_Diretor, this->Column3, this->alterar_botao, this->Deletar
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 89);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->RowTemplate->Height = 25;
			this->dataGridView1->Size = System::Drawing::Size(480, 305);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(219, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Recarregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Inserir
			// 
			this->Inserir->Location = System::Drawing::Point(44, 172);
			this->Inserir->Name = L"Inserir";
			this->Inserir->Size = System::Drawing::Size(75, 47);
			this->Inserir->TabIndex = 2;
			this->Inserir->Text = L"Inserir";
			this->Inserir->UseVisualStyleBackColor = true;
			this->Inserir->Click += gcnew System::EventHandler(this, &MyForm::Inserir_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Diretor";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->selecao);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->Inserir);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(498, 125);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(160, 230);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Inserir Filme";
			// 
			// selecao
			// 
			this->selecao->FormattingEnabled = true;
			this->selecao->Location = System::Drawing::Point(32, 146);
			this->selecao->Name = L"selecao";
			this->selecao->Size = System::Drawing::Size(121, 21);
			this->selecao->TabIndex = 11;
			this->selecao->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::selecao_SelectedIndexChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->inserir_diretor);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Location = System::Drawing::Point(664, 125);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(155, 230);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Inserir Diretor";
			// 
			// inserir_diretor
			// 
			this->inserir_diretor->Location = System::Drawing::Point(27, 172);
			this->inserir_diretor->Name = L"inserir_diretor";
			this->inserir_diretor->Size = System::Drawing::Size(75, 47);
			this->inserir_diretor->TabIndex = 9;
			this->inserir_diretor->Text = L"Inserir";
			this->inserir_diretor->UseVisualStyleBackColor = true;
			this->inserir_diretor->Click += gcnew System::EventHandler(this, &MyForm::inserir_diretor_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Nome";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(26, 107);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 10;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->pesquisarToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(831, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// pesquisarToolStripMenuItem
			// 
			this->pesquisarToolStripMenuItem->Name = L"pesquisarToolStripMenuItem";
			this->pesquisarToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->pesquisarToolStripMenuItem->Text = L"Pesquisar";
			this->pesquisarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pesquisarToolStripMenuItem_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lista_filmes);
			this->groupBox3->Controls->Add(this->lista_diretor);
			this->groupBox3->Location = System::Drawing::Point(153, 32);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 51);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Listagem ";
			// 
			// lista_filmes
			// 
			this->lista_filmes->AutoSize = true;
			this->lista_filmes->Location = System::Drawing::Point(6, 19);
			this->lista_filmes->Name = L"lista_filmes";
			this->lista_filmes->Size = System::Drawing::Size(54, 17);
			this->lista_filmes->TabIndex = 3;
			this->lista_filmes->TabStop = true;
			this->lista_filmes->Text = L"Filmes";
			this->lista_filmes->UseVisualStyleBackColor = true;
			this->lista_filmes->CheckedChanged += gcnew System::EventHandler(this, &MyForm::lista_filmes_CheckedChanged);
			// 
			// lista_diretor
			// 
			this->lista_diretor->AutoSize = true;
			this->lista_diretor->Location = System::Drawing::Point(66, 19);
			this->lista_diretor->Name = L"lista_diretor";
			this->lista_diretor->Size = System::Drawing::Size(67, 17);
			this->lista_diretor->TabIndex = 4;
			this->lista_diretor->TabStop = true;
			this->lista_diretor->Text = L"Diretores";
			this->lista_diretor->UseVisualStyleBackColor = true;
			this->lista_diretor->CheckedChanged += gcnew System::EventHandler(this, &MyForm::lista_diretor_CheckedChanged);
			// 
			// Column1
			// 
			this->Column1->FillWeight = 53.85728F;
			this->Column1->HeaderText = L"Id";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->FillWeight = 128.6293F;
			this->Column2->HeaderText = L"Titulo";
			this->Column2->Name = L"Column2";
			// 
			// Id_Diretor
			// 
			this->Id_Diretor->FillWeight = 128.6293F;
			this->Id_Diretor->HeaderText = L"Id_DIretor";
			this->Id_Diretor->Name = L"Id_Diretor";
			// 
			// Column3
			// 
			this->Column3->FillWeight = 128.6293F;
			this->Column3->HeaderText = L"Diretor";
			this->Column3->Name = L"Column3";
			// 
			// alterar_botao
			// 
			this->alterar_botao->FillWeight = 84.11285F;
			this->alterar_botao->HeaderText = L"Alterar";
			this->alterar_botao->Name = L"alterar_botao";
			this->alterar_botao->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Deletar
			// 
			this->Deletar->FillWeight = 76.14214F;
			this->Deletar->HeaderText = L"Deletar";
			this->Deletar->Name = L"Deletar";
			this->Deletar->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 435);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView1->Refresh();

		if (this->lista_filmes->Checked) {
			this->lista_filmes_CheckedChanged(sender, e);
		}
		else {
			this->lista_diretor_CheckedChanged(sender, e);}

	}
	private: System::Void Carregar() {


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


		System::EventArgs^ e;
		this->lista_filmes->Checked = true;
		this->Recarregar(this,e);


	}
	private: System::Void Recarregar(System::Object^ sender, System::EventArgs^ e) {

		String^ constring1 = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase1 = gcnew  MySqlConnection(constring1);
		MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("select * from mydb.diretor", conDatabase1);
		MySqlDataReader^ myreader1;
		this->dataGridView1->Rows->Clear();
		this->selecao->Items->Clear();


		try
		{
			conDatabase1->Open();
			myreader1 = cmdDataBase1->ExecuteReader();
			int i = 0;
			while (myreader1->Read()) {

				this->selecao->Items->Add(myreader1->GetString(1));
				i += 1;
			}
			conDatabase1->Close();

		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
		
		if (this->lista_filmes->Checked) {
			this->lista_filmes_CheckedChanged(sender, e);
		}
		else {
			this->lista_diretor_CheckedChanged(sender, e);
		}



	}

	private: System::Void Inserir_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring1 = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase1 = gcnew  MySqlConnection(constring1);
		MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("select idDiretor from mydb.diretor where nome=('"+this->selecao->Text +"');", conDatabase1);
		MySqlDataReader^ myreader1;
		int autoid = 0;

		try
		{
		conDatabase1->Open(); 
		myreader1 = cmdDataBase1->ExecuteReader();
		myreader1->Read();


		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into mydb.filme (idFilme,titulo,Diretor_idDiretor)" +
			"values('" +autoid+ "','" + this->textBox2->Text + "','" + myreader1->GetUInt32(0) + "');", conDatabase);
		MySqlDataReader^ myreader;
		conDatabase1->Close();


		try
		{
			conDatabase->Open();
			myreader = cmdDataBase->ExecuteReader();
			int i = 0;
			while (myreader->Read()) {


			}
			conDatabase->Close();

		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}



		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}




		this->Recarregar(sender,e);

		
		




	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if ((e->ColumnIndex == 4) && (e->RowIndex > -1)) {
			int linha = e->RowIndex;
			int coluna = e->ColumnIndex;
			//int id = this->dataGridView1->Rows[linha]->Cells[0]->Value;
			if (this->lista_filmes->Checked) {
				try
				{
					String^ id = this->dataGridView1->Rows[linha]->Cells[0]->Value->ToString();
					String^ diretor = this->dataGridView1->Rows[linha]->Cells[3]->Value->ToString();

					String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
					MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
					MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from mydb.filme where mydb.filme.idFilme =" +
						" '" + id + "' ;", conDatabase);
					MySqlDataReader^ myreader;


					try
					{
						conDatabase->Open();
						myreader = cmdDataBase->ExecuteReader();
						myreader->Read();
						//this->erro->AppendText(myreader->GetString(1));

						String^ s = myreader->GetString(1);

						Altera_Filme^ af = gcnew Altera_Filme(this);
						af->setfilme(myreader->GetString(0), myreader->GetString(1), diretor);
						af->ShowDialog();
						conDatabase->Close();
						//this->Close();

					}
					catch (Exception ^ ex) {
						MessageBox::Show(ex->Message);
					}

				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);

				}
			}
			else {
				String^ id = this->dataGridView1->Rows[linha]->Cells[2]->Value->ToString();
				String^ diretor = this->dataGridView1->Rows[linha]->Cells[3]->Value->ToString();
				Altera_Diretor^ df = gcnew Altera_Diretor(this);
				df->setfilme(id, diretor);
				df->ShowDialog();



			}

		}
		if ((e->ColumnIndex == 5) && (e->RowIndex>-1)){
			int linha = e->RowIndex;
			int coluna = e->ColumnIndex;
			if (this->lista_filmes->Checked) {
				String^ id = this->dataGridView1->Rows[linha]->Cells[0]->Value->ToString();
				String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
				MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from mydb.filme where mydb.filme.idFilme = '" + id + "';", conDatabase);
				MySqlDataReader^ myreader;


				try
				{
					conDatabase->Open();
					myreader = cmdDataBase->ExecuteReader();
					conDatabase->Close();
					
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);

				}

			}
			else {
			
					String^ id = this->dataGridView1->Rows[linha]->Cells[2]->Value->ToString();
					String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
					MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
					MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from mydb.diretor where mydb.diretor.idDiretor = '" + id + "';", conDatabase);
					MySqlDataReader^ myreader;


					try
					{
						conDatabase->Open();
						myreader = cmdDataBase->ExecuteReader();
						conDatabase->Close();
				
					}
					catch (Exception ^ ex) {
						String^ Mensagem = "Diretor est� associado a um ou mais filmes, � necessario primeiro desvinculado destes filmes";
						MessageBox::Show(Mensagem);

					}



				}




			}
			this->Recarregar(sender, e);
			
		}
	
private: System::Void inserir_diretor_Click(System::Object^ sender, System::EventArgs^ e) {
	int autoid = 0;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into mydb.diretor (idDiretor,nome)" +
		"values('" + autoid + "','" + this->textBox5->Text + "');", conDatabase);
	MySqlDataReader^ myreader;
	

	try
	{
		conDatabase->Open();
		myreader = cmdDataBase->ExecuteReader();
		int i = 0;
		
		while (myreader->Read()) {


		}
		conDatabase->Close();

	}
	catch (Exception ^ ex) {
		MessageBox::Show(ex->Message);
	}
	this->Recarregar(sender, e);
}
private: System::Void selecao_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pesquisarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Pesquisa^ pesq = gcnew Pesquisa(this);
	 
	pesq->ShowDialog();
	this->Recarregar(sender, e);
}




private: System::Void lista_filmes_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from mydb.filme inner join mydb.diretor on " +
		"mydb.filme.Diretor_idDiretor = mydb.diretor.idDiretor", conDatabase);
	MySqlDataReader^ myreader;
	//this->dataGridView1->DataSource = NULL;
	this->dataGridView1->Rows->Clear();
	//this->selecao->Items->Clear();



	try
	{
		conDatabase->Open();
		myreader = cmdDataBase->ExecuteReader();
		int i = 0;
		//this->erro->Text = "Chegou Aqqui";
		this->dataGridView1->Columns["Column1"]->Visible = true;
		this->dataGridView1->Columns["Column2"]->Visible = true;
		this->dataGridView1->Columns["Column3"]->Visible = true;
		this->dataGridView1->Columns["Id_Diretor"]->Visible = false;
		
		while (myreader->Read()) {

			this->dataGridView1->Rows->Add(1);
			this->dataGridView1->Rows[i]->SetValues(myreader->GetString(0),  myreader->GetString(1), myreader->GetString(3), myreader->GetString(4));

			i += 1;
		}
		conDatabase->Close();

	}
	catch (Exception ^ ex) {
		MessageBox::Show(ex->Message);
	}










}
private: System::Void lista_diretor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from mydb.diretor;", conDatabase);
	MySqlDataReader^ myreader;
	//this->dataGridView1->DataSource = NULL;
	this->dataGridView1->Rows->Clear();
	//this->selecao->Items->Clear();



	try
	{
		conDatabase->Open();
		myreader = cmdDataBase->ExecuteReader();
		int i = 0;
		this->dataGridView1->Columns["Column1"]->Visible = false;
		this->dataGridView1->Columns["Column2"]->Visible = false;
		this->dataGridView1->Columns["Column3"]->Visible = true;
		this->dataGridView1->Columns["Id_Diretor"]->Visible = true;
		while (myreader->Read()) {

			this->dataGridView1->Rows->Add(1);
			this->dataGridView1->Rows[i]->SetValues("", "", myreader->GetString(0), myreader->GetString(1));

			i += 1;
		}
		conDatabase->Close();

	}
	catch (Exception ^ ex) {
		MessageBox::Show(ex->Message);
	}














}
};
}
