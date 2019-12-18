#pragma once
#include"MyForm.h"
#include"Altera_Filme.h"
#include"Altera_Diretor.h"
#include <string> 

namespace Teste2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Pesquisa
	/// </summary>
	public ref class Pesquisa : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Pesquisa(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		Pesquisa(Form^ obj1)
		{
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
		~Pesquisa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::RadioButton^ pesquisafilme;
	private: System::Windows::Forms::RadioButton^ pesquisadiretor;
	private: System::Windows::Forms::Button^ pesquisar;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ nome_titulo;
	private: System::Windows::Forms::RadioButton^ id_select;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id_Filme;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Titulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Diretor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id_Diretor;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Alterar;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Deletar;
	private: System::Windows::Forms::CheckBox^ mostar_filmes;
	private: System::Windows::Forms::Label^ label1;












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
			this->Id_Filme = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Titulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Diretor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Id_Diretor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Alterar = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Deletar = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pesquisafilme = (gcnew System::Windows::Forms::RadioButton());
			this->pesquisadiretor = (gcnew System::Windows::Forms::RadioButton());
			this->pesquisar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->nome_titulo = (gcnew System::Windows::Forms::RadioButton());
			this->id_select = (gcnew System::Windows::Forms::RadioButton());
			this->mostar_filmes = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id_Filme,
					this->Titulo, this->Diretor, this->Id_Diretor, this->Alterar, this->Deletar
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 186);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(357, 219);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Pesquisa::dataGridView1_CellContentClick);
			// 
			// Id_Filme
			// 
			this->Id_Filme->HeaderText = L"Id_Filme";
			this->Id_Filme->Name = L"Id_Filme";
			// 
			// Titulo
			// 
			this->Titulo->HeaderText = L"Titulo";
			this->Titulo->Name = L"Titulo";
			// 
			// Diretor
			// 
			this->Diretor->HeaderText = L"Diretor";
			this->Diretor->Name = L"Diretor";
			// 
			// Id_Diretor
			// 
			this->Id_Diretor->HeaderText = L"Id_Diretor";
			this->Id_Diretor->Name = L"Id_Diretor";
			// 
			// Alterar
			// 
			this->Alterar->HeaderText = L"Alterar";
			this->Alterar->Name = L"Alterar";
			this->Alterar->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Alterar->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// Deletar
			// 
			this->Deletar->HeaderText = L"Deletar";
			this->Deletar->Name = L"Deletar";
			this->Deletar->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Deletar->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Nome";
			this->Nome->Name = L"Nome";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(357, 20);
			this->textBox1->TabIndex = 1;
			// 
			// pesquisafilme
			// 
			this->pesquisafilme->AutoSize = true;
			this->pesquisafilme->Location = System::Drawing::Point(0, 24);
			this->pesquisafilme->Name = L"pesquisafilme";
			this->pesquisafilme->Size = System::Drawing::Size(49, 17);
			this->pesquisafilme->TabIndex = 3;
			this->pesquisafilme->TabStop = true;
			this->pesquisafilme->Text = L"Filme";
			this->pesquisafilme->UseVisualStyleBackColor = true;
			// 
			// pesquisadiretor
			// 
			this->pesquisadiretor->AutoSize = true;
			this->pesquisadiretor->Location = System::Drawing::Point(55, 24);
			this->pesquisadiretor->Name = L"pesquisadiretor";
			this->pesquisadiretor->Size = System::Drawing::Size(56, 17);
			this->pesquisadiretor->TabIndex = 4;
			this->pesquisadiretor->TabStop = true;
			this->pesquisadiretor->Text = L"Diretor";
			this->pesquisadiretor->UseVisualStyleBackColor = true;
			// 
			// pesquisar
			// 
			this->pesquisar->Location = System::Drawing::Point(146, 414);
			this->pesquisar->Name = L"pesquisar";
			this->pesquisar->Size = System::Drawing::Size(75, 23);
			this->pesquisar->TabIndex = 5;
			this->pesquisar->Text = L"Pesquisar";
			this->pesquisar->UseVisualStyleBackColor = true;
			this->pesquisar->Click += gcnew System::EventHandler(this, &Pesquisa::pesquisar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pesquisafilme);
			this->groupBox1->Controls->Add(this->pesquisadiretor);
			this->groupBox1->Location = System::Drawing::Point(12, 58);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 51);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleção de Pesquisa";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Pesquisa::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->nome_titulo);
			this->groupBox2->Controls->Add(this->id_select);
			this->groupBox2->Location = System::Drawing::Point(12, 115);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 51);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Pesquisar por\?";
			// 
			// nome_titulo
			// 
			this->nome_titulo->AutoSize = true;
			this->nome_titulo->Location = System::Drawing::Point(6, 19);
			this->nome_titulo->Name = L"nome_titulo";
			this->nome_titulo->Size = System::Drawing::Size(84, 17);
			this->nome_titulo->TabIndex = 3;
			this->nome_titulo->TabStop = true;
			this->nome_titulo->Text = L"Nome/Titulo";
			this->nome_titulo->UseVisualStyleBackColor = true;
			// 
			// id_select
			// 
			this->id_select->AutoSize = true;
			this->id_select->Location = System::Drawing::Point(96, 19);
			this->id_select->Name = L"id_select";
			this->id_select->Size = System::Drawing::Size(34, 17);
			this->id_select->TabIndex = 4;
			this->id_select->TabStop = true;
			this->id_select->Text = L"Id";
			this->id_select->UseVisualStyleBackColor = true;
			// 
			// mostar_filmes
			// 
			this->mostar_filmes->AutoSize = true;
			this->mostar_filmes->Location = System::Drawing::Point(227, 83);
			this->mostar_filmes->Name = L"mostar_filmes";
			this->mostar_filmes->Size = System::Drawing::Size(142, 17);
			this->mostar_filmes->TabIndex = 9;
			this->mostar_filmes->Text = L"Mostrar Filmes do Diretor";
			this->mostar_filmes->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nome ou ID:";
			// 
			// Pesquisa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 452);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->mostar_filmes);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pesquisar);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Pesquisa";
			this->Text = L"Pesquisa";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Recarregar(System::Object^ sender, System::EventArgs^ e) {
		this->pesquisar_Click(sender, e);
	}

private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pesquisar_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
	this->dataGridView1->Rows->Clear();
	this->dataGridView1->Refresh();
	this->dataGridView1->Columns["Id_Filme"]->Visible = true;
	this->dataGridView1->Columns["Titulo"]->Visible = true;
	this->dataGridView1->Columns["Diretor"]->Visible = true;
	this->dataGridView1->Columns["Id_Diretor"]->Visible = true;
	this->dataGridView1->Columns["Alterar"]->Visible = true;
	this->dataGridView1->Columns["Deletar"]->Visible = true;
	


	if (this->pesquisadiretor->Checked) {
	
		if (this->nome_titulo->Checked) {
			if (!mostar_filmes->Checked) {
				MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from mydb.diretor " +
					" where mydb.diretor.nome like ('" + this->textBox1->Text + "');", conDatabase);
				MySqlDataReader^ myreader;
				this->dataGridView1->Columns["Id_Filme"]->Visible = false;
				this->dataGridView1->Columns["Titulo"]->Visible = false;

				try
				{
					conDatabase->Open();
					myreader = cmdDataBase->ExecuteReader();
					int i = 0;
					//this->dataGridView1->Columns["Diretor"]->Visible = false;

					while (myreader->Read()) {

						this->dataGridView1->Rows->Add(1);
						this->dataGridView1->Rows[i]->SetValues(myreader->GetString(0), myreader->GetString(1), myreader->GetString(1), myreader->GetString(0));

						i += 1;
					}

				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
			}
			else {

				MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from mydb.filme inner join mydb.diretor on " +
					"mydb.filme.Diretor_idDiretor = mydb.diretor.idDiretor" +
					" where mydb.diretor.nome like ('" + this->textBox1->Text + "');", conDatabase);
				MySqlDataReader^ myreader;

				try
				{
					conDatabase->Open();
					myreader = cmdDataBase->ExecuteReader();
					int i = 0;
					this->dataGridView1->Columns["Diretor"]->Visible = false;

					while (myreader->Read()) {

						this->dataGridView1->Rows->Add(1);
						this->dataGridView1->Rows[i]->SetValues(myreader->GetString(0), myreader->GetString(1), myreader->GetString(4), myreader->GetString(2));

						i += 1;
					}

				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}

			}
			
			
		}
		else {
			if (!mostar_filmes->Checked) {
				MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from mydb.diretor " +
					" where mydb.diretor.idDiretor like ('" + this->textBox1->Text + "');", conDatabase);
				MySqlDataReader^ myreader;
				this->dataGridView1->Columns["Id_Filme"]->Visible = false;
				this->dataGridView1->Columns["Titulo"]->Visible = false;

				try
				{
					conDatabase->Open();
					myreader = cmdDataBase->ExecuteReader();
					int i = 0;
					//this->dataGridView1->Columns["Diretor"]->Visible = false;

					while (myreader->Read()) {

						this->dataGridView1->Rows->Add(1);
						this->dataGridView1->Rows[i]->SetValues(myreader->GetString(0), myreader->GetString(1), myreader->GetString(1), myreader->GetString(0));

						i += 1;
					}

				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
			}
			else {
				MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from mydb.filme inner join mydb.diretor on " +
					"mydb.filme.Diretor_idDiretor = mydb.diretor.idDiretor" +
					" where mydb.diretor.idDiretor like ('" + this->textBox1->Text + "');", conDatabase);
				MySqlDataReader^ myreader;
				try
				{
					conDatabase->Open();
					myreader = cmdDataBase->ExecuteReader();
					int i = 0;
					this->dataGridView1->Columns["Id_Diretor"]->Visible = false;
					while (myreader->Read()) {

						this->dataGridView1->Rows->Add(1);
						this->dataGridView1->Rows[i]->SetValues(myreader->GetString(0), myreader->GetString(1), myreader->GetString(4), myreader->GetString(2));

						i += 1;
					}

				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
			}
		}

	}
	else {
		if (this->nome_titulo->Checked) {
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from mydb.filme inner join mydb.diretor on "+
			"mydb.filme.Diretor_idDiretor = mydb.diretor.idDiretor" +
			" where titulo like('" + this->textBox1->Text + "');", conDatabase);
			MySqlDataReader^ myreader;
			try
			{
				conDatabase->Open();
				myreader = cmdDataBase->ExecuteReader();
				int i = 0;
				this->dataGridView1->Columns["Titulo"]->Visible = false;
				while (myreader->Read()) {

					this->dataGridView1->Rows->Add(1);
					this->dataGridView1->Rows[i]->SetValues(myreader->GetString(0), myreader->GetString(1), myreader->GetString(4), myreader->GetString(2));

					i += 1;
				}

			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}
			
		}
		else {
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from mydb.filme inner join mydb.diretor on " +
				"mydb.filme.Diretor_idDiretor = mydb.diretor.idDiretor" +
				" where filme.idFilme like('" + this->textBox1->Text + "');", conDatabase);
			MySqlDataReader^ myreader;
			try
			{
				conDatabase->Open();
				myreader = cmdDataBase->ExecuteReader();
				int i = 0;
				this->dataGridView1->Columns["Id_Filme"]->Visible = false;
				while (myreader->Read()) {

					this->dataGridView1->Rows->Add(1);
					this->dataGridView1->Rows[i]->SetValues(myreader->GetString(0), myreader->GetString(1), myreader->GetString(4), myreader->GetString(2));

					i += 1;
				}

			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}
			
		}
		
	}
	
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int linha = e->RowIndex;
	int coluna = e->ColumnIndex;
	//this->debug->Text = " '"+linha+"'  '"+coluna+"' ";
	
	
	if ((e->ColumnIndex == 4) && (e->RowIndex > -1)) {
		int linha = e->RowIndex;
		int coluna = e->ColumnIndex;
		//int id = this->dataGridView1->Rows[linha]->Cells[0]->Value;
		if (this->pesquisafilme->Checked) {
			try
			{
				String^ id = this->dataGridView1->Rows[linha]->Cells[0]->Value->ToString();
				String^ diretor = this->dataGridView1->Rows[linha]->Cells[2]->Value->ToString();

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
			String^ id = this->dataGridView1->Rows[linha]->Cells[3]->Value->ToString();
			String^ diretor = this->dataGridView1->Rows[linha]->Cells[2]->Value->ToString();
			Altera_Diretor^ df = gcnew Altera_Diretor(this);
			df->setfilme(id, diretor);
			df->ShowDialog();



		}

	}
	if ((e->ColumnIndex == 5) && (e->RowIndex > -1)) {
		int linha = e->RowIndex;
		int coluna = e->ColumnIndex;
		if (this->pesquisafilme->Checked) {
			String^ id = this->dataGridView1->Rows[linha]->Cells[0]->Value->ToString();
			String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
			MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from mydb.filme where mydb.filme.idFilme = '" + id + "';", conDatabase);
			MySqlDataReader^ myreader;


			try
			{
				conDatabase->Open();
				myreader = cmdDataBase->ExecuteReader();

			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);

			}

		}
		else {

			String^ id = this->dataGridView1->Rows[linha]->Cells[3]->Value->ToString();
			String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
			MySqlConnection^ conDatabase = gcnew  MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from mydb.diretor where mydb.diretor.idDiretor = '" + id + "';", conDatabase);
			MySqlDataReader^ myreader;


			try
			{
				conDatabase->Open();
				myreader = cmdDataBase->ExecuteReader();

			}
			catch (Exception ^ ex) {
				String^ Mensagem = "Diretor está associado a um ou mais filmes, é necessario primeiro desvinculado destes filmes";
				MessageBox::Show(Mensagem);

			}



		}




	}
	this->Recarregar(sender, e);
}
};
}
