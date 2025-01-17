#pragma once
#include <iostream>
#include <fstream>

namespace Darbas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ failasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ atidarytiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ išsaugotiKaipToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uždarytiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pagalbaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;
	private: System::Collections::Generic::List<String^>^ data = gcnew System::Collections::Generic::List<String^>();
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->failasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atidarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->išsaugotiKaipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uždarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pagalbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->failasToolStripMenuItem,
					this->pagalbaToolStripMenuItem, this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(855, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// failasToolStripMenuItem
			// 
			this->failasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->atidarytiToolStripMenuItem,
					this->išsaugotiKaipToolStripMenuItem, this->uždarytiToolStripMenuItem
			});
			this->failasToolStripMenuItem->Name = L"failasToolStripMenuItem";
			this->failasToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->failasToolStripMenuItem->Text = L"Failas";
			// 
			// atidarytiToolStripMenuItem
			// 
			this->atidarytiToolStripMenuItem->Name = L"atidarytiToolStripMenuItem";
			this->atidarytiToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->atidarytiToolStripMenuItem->Text = L"Atidaryti";
			this->atidarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::atidarytiToolStripMenuItem_Click);
			// 
			// išsaugotiKaipToolStripMenuItem
			// 
			this->išsaugotiKaipToolStripMenuItem->Name = L"išsaugotiKaipToolStripMenuItem";
			this->išsaugotiKaipToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->išsaugotiKaipToolStripMenuItem->Text = L"Išsaugoti kaip";
			this->išsaugotiKaipToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::išsaugotiKaipToolStripMenuItem_Click);
			// 
			// uždarytiToolStripMenuItem
			// 
			this->uždarytiToolStripMenuItem->Name = L"uždarytiToolStripMenuItem";
			this->uždarytiToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->uždarytiToolStripMenuItem->Text = L"Uždaryti";
			this->uždarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::uždarytiToolStripMenuItem_Click);
			// 
			// pagalbaToolStripMenuItem
			// 
			this->pagalbaToolStripMenuItem->Name = L"pagalbaToolStripMenuItem";
			this->pagalbaToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->pagalbaToolStripMenuItem->Text = L"Pagalba";
			this->pagalbaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pagalbaToolStripMenuItem_Click);
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->apieToolStripMenuItem->Text = L"Apie";
			this->apieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::apieToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(17, 34);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Vardas Pavardė";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(411, 34);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Pažymiai";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(729, 34);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Egzamino balas";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 55);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(384, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(411, 55);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(313, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(735, 55);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(47, 20);
			this->textBox3->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 89);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 37);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Įvesti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(216, 89);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(187, 37);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Atnaujinti";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(411, 89);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(213, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Pažymiai įvedami atskiriant tarpais";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(17, 150);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Esami studentai ir rezultatai";
			// 
			// radioButton1
			// 
			this->radioButton1->Location = System::Drawing::Point(573, 142);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(76, 20);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->Text = L"Vidurkis";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(664, 142);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(81, 20);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Mediana";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(17, 170);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(819, 160);
			this->listBox1->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(17, 343);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(300, 43);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Kopijuoti visus";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(325, 343);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(300, 43);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Kopijuoti pažymėtą";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(21, 459);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(280, 16);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Laukelis kopijavimui, saugojimui ir pastaboms";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(25, 479);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(811, 277);
			this->textBox4->TabIndex = 17;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(25, 766);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(171, 28);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Atidaryti";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(204, 766);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(171, 28);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Išsaugoti kaip";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(383, 766);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(171, 28);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Spausdinti";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(708, 766);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(129, 28);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Valyti";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(855, 808);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void atidarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void išsaugotiKaipToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void uždarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		AtnaujintiListBox();
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		AtnaujintiListBox();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "") {
				throw gcnew System::Exception("Visi laukeliai turi buti uzpildyti!");
			}

			String^ vardasPavarde = textBox1->Text;
			String^ pazymiaiText = textBox2->Text;
			String^ egzBalasText = textBox3->Text;

			array<String^>^ pazymiaiArray = pazymiaiText->Split(' ');
			array<int>^ pazymiai = gcnew array<int>(pazymiaiArray->Length);

			int suma = 0;
			for (int i = 0; i < pazymiaiArray->Length; i++) {
				try {
					pazymiai[i] = Convert::ToInt32(pazymiaiArray[i]);
					if (pazymiai[i] < 0 || pazymiai[i] > 10) {
						throw gcnew System::Exception("Pazymiai turi buti tarp 0 ir 10.");
					}
					suma += pazymiai[i];
				}
				catch (FormatException^) {
					throw gcnew System::Exception("Visi pazymiai turi buti sveikieji skaiciai.");
				}
			}

			int egzBalas;
			try {
				egzBalas = Convert::ToInt32(egzBalasText);
				if (egzBalas < 0 || egzBalas > 10) {
					throw gcnew System::Exception("Egzaminu balas turi buti tarp 0 ir 10.");
				}
			}
			catch (FormatException^) {
				throw gcnew System::Exception("Egzaminu balas turi buti sveikasis skaicius.");
			}

			double vidurkis = (double)suma / pazymiai->Length;

			Array::Sort(pazymiai);
			double mediana;
			if (pazymiai->Length % 2 == 0) {
				mediana = (pazymiai[pazymiai->Length / 2 - 1] + pazymiai[pazymiai->Length / 2]) / 2.0;
			}
			else {
				mediana = pazymiai[pazymiai->Length / 2];
			}

			data->Add(vardasPavarde + "|" + pazymiaiText + "|" + egzBalas.ToString() + "|" + vidurkis.ToString("0.00") + "|" + mediana.ToString("0.00"));

			AtnaujintiListBox();

			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox4->Text = "";
		for (int i = 0; i < listBox1->Items->Count; i++)
		{
			textBox4->Text += listBox1->Items[i]->ToString() + "\r\n";
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (listBox1->SelectedIndex != -1) {
				String^ selectedStudent = listBox1->SelectedItem->ToString();

				if (String::IsNullOrEmpty(textBox4->Text)) {
					textBox4->Text = selectedStudent;
				}
				else {
					textBox4->Text += "\r\n" + selectedStudent;
				}
			}
			else {
				MessageBox::Show("Nepasirinktas studentas!", "Error", MessageBoxButtons::OK);
			}
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Ivyko klaida: " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
			saveFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
			saveFileDialog->Title = "Issaugoti kaip";

			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ filePath = saveFileDialog->FileName;

				if (String::IsNullOrWhiteSpace(textBox4->Text)) {
					throw gcnew System::ArgumentException("Tekstas negali buti tuscias!");
				}

				System::IO::File::WriteAllText(filePath, textBox4->Text);

				MessageBox::Show("Duomenys issaugoti!", "Info", MessageBoxButtons::OK);
			}
		}
		catch (System::ArgumentException^ argEx) {
			MessageBox::Show(argEx->Message, "Error", MessageBoxButtons::OK);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Ivyko klaida issaugant faila: " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();

		listBox1->Items->Clear();
	}

	private: System::Void AtnaujintiListBox() {
		listBox1->Items->Clear();

		for each(String ^ student in data) {
			array<String^>^ details = student->Split('|');
			String^ vardasPavarde = details[0];
			String^ pazymiai = details[1];
			String^ egzBalas = details[2];
			String^ vidurkis = details[3];
			String^ mediana = details[4];

			if (radioButton1->Checked) {
				listBox1->Items->Add(vardasPavarde + " Pazymiai: " + pazymiai + " Egzamino balas: " + egzBalas + " Vidurkis: " + vidurkis);
			}
			else if (radioButton2->Checked) {
				listBox1->Items->Add(vardasPavarde + " Pazymiai: " + pazymiai + " Egzamino balas: " + egzBalas + " Mediana: " + mediana);
			}
		}
	}
	private: System::Void pagalbaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Text::StringBuilder^ helpTextBuilder = gcnew System::Text::StringBuilder();

		helpTextBuilder->AppendLine("Programa leidžia:");
		helpTextBuilder->AppendLine("1. Ivesti studento varda ir pavarde.");
		helpTextBuilder->AppendLine("2. Prideti pazymius ir egzamino bala.");
		helpTextBuilder->AppendLine("3. Apskaiciuoti vidurki arba mediana.");
		helpTextBuilder->AppendLine("4. Rodyti studentu sarasa.");
		helpTextBuilder->AppendLine("5. Kopijuoti visus arba pasirinktus irasus.");

		String^ helpText = helpTextBuilder->ToString();

		MessageBox::Show(helpText, "Pagalba", MessageBoxButtons::OK);
	}

	private: System::Void apieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Antras savarankiskas darbas", "Apie", MessageBoxButtons::OK);
	}

	};
}
