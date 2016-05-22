#pragma once
#include"Animacja.h"

namespace ProjektOJP2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  O1Start;
	private: System::Windows::Forms::TrackBar^  Predkosc;
	private: System::Windows::Forms::TrackBar^  kat;
	private: System::Windows::Forms::TrackBar^  wysokosc;
	private: System::Windows::Forms::Label^  O1Predkosc;
	private: System::Windows::Forms::Label^  O1PredkoscMin;
	private: System::Windows::Forms::Label^  O1PredkoscMax;
	private: System::Windows::Forms::Label^  O1PredkoscWybrana;
	private: System::Windows::Forms::Label^  O1KatMin;
	private: System::Windows::Forms::Label^  O1KatMax;
	private: System::Windows::Forms::Label^  O1WysokoscMin;
	private: System::Windows::Forms::Label^  O1WysokoscMax;
	private: System::Windows::Forms::Label^  O1KatAktualny;
	private: System::Windows::Forms::Label^  O1WysokoscAktualna;
	private: System::Windows::Forms::Label^  O1Kat;
	private: System::Windows::Forms::Label^  O1Wysokosc;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  koniecToolStripMenuItem;





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
			this->O1Start = (gcnew System::Windows::Forms::Button());
			this->Predkosc = (gcnew System::Windows::Forms::TrackBar());
			this->kat = (gcnew System::Windows::Forms::TrackBar());
			this->wysokosc = (gcnew System::Windows::Forms::TrackBar());
			this->O1Predkosc = (gcnew System::Windows::Forms::Label());
			this->O1PredkoscMin = (gcnew System::Windows::Forms::Label());
			this->O1PredkoscMax = (gcnew System::Windows::Forms::Label());
			this->O1PredkoscWybrana = (gcnew System::Windows::Forms::Label());
			this->O1KatMin = (gcnew System::Windows::Forms::Label());
			this->O1KatMax = (gcnew System::Windows::Forms::Label());
			this->O1WysokoscMin = (gcnew System::Windows::Forms::Label());
			this->O1WysokoscMax = (gcnew System::Windows::Forms::Label());
			this->O1KatAktualny = (gcnew System::Windows::Forms::Label());
			this->O1WysokoscAktualna = (gcnew System::Windows::Forms::Label());
			this->O1Kat = (gcnew System::Windows::Forms::Label());
			this->O1Wysokosc = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->koniecToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Predkosc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wysokosc))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// O1Start
			// 
			this->O1Start->BackColor = System::Drawing::Color::CornflowerBlue;
			this->O1Start->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1Start->Location = System::Drawing::Point(443, 313);
			this->O1Start->Name = L"O1Start";
			this->O1Start->Size = System::Drawing::Size(110, 39);
			this->O1Start->TabIndex = 0;
			this->O1Start->Text = L"START";
			this->O1Start->UseVisualStyleBackColor = false;
			this->O1Start->Click += gcnew System::EventHandler(this, &Form1::O1Start_Click);
			// 
			// Predkosc
			// 
			this->Predkosc->Location = System::Drawing::Point(12, 71);
			this->Predkosc->Maximum = 5;
			this->Predkosc->Minimum = 1;
			this->Predkosc->Name = L"Predkosc";
			this->Predkosc->Size = System::Drawing::Size(298, 45);
			this->Predkosc->TabIndex = 1;
			this->Predkosc->Value = 1;
			this->Predkosc->ValueChanged += gcnew System::EventHandler(this, &Form1::Predkosc_ValueChanged);
			// 
			// kat
			// 
			this->kat->Location = System::Drawing::Point(15, 161);
			this->kat->Maximum = 89;
			this->kat->Minimum = -89;
			this->kat->Name = L"kat";
			this->kat->Size = System::Drawing::Size(298, 45);
			this->kat->TabIndex = 2;
			this->kat->TickFrequency = 10;
			this->kat->ValueChanged += gcnew System::EventHandler(this, &Form1::kat_ValueChanged);
			// 
			// wysokosc
			// 
			this->wysokosc->Location = System::Drawing::Point(12, 274);
			this->wysokosc->Maximum = 3;
			this->wysokosc->Name = L"wysokosc";
			this->wysokosc->Size = System::Drawing::Size(298, 45);
			this->wysokosc->TabIndex = 3;
			this->wysokosc->ValueChanged += gcnew System::EventHandler(this, &Form1::wysokosc_ValueChanged);
			// 
			// O1Predkosc
			// 
			this->O1Predkosc->AutoSize = true;
			this->O1Predkosc->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1Predkosc->ForeColor = System::Drawing::Color::Navy;
			this->O1Predkosc->Location = System::Drawing::Point(12, 36);
			this->O1Predkosc->Name = L"O1Predkosc";
			this->O1Predkosc->Size = System::Drawing::Size(160, 16);
			this->O1Predkosc->TabIndex = 4;
			this->O1Predkosc->Text = L"Ustaw prêdkoœæ (m/s):";
			// 
			// O1PredkoscMin
			// 
			this->O1PredkoscMin->AutoSize = true;
			this->O1PredkoscMin->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1PredkoscMin->ForeColor = System::Drawing::Color::Navy;
			this->O1PredkoscMin->Location = System::Drawing::Point(16, 103);
			this->O1PredkoscMin->Name = L"O1PredkoscMin";
			this->O1PredkoscMin->Size = System::Drawing::Size(15, 14);
			this->O1PredkoscMin->TabIndex = 5;
			this->O1PredkoscMin->Text = L"1";
			// 
			// O1PredkoscMax
			// 
			this->O1PredkoscMax->AutoSize = true;
			this->O1PredkoscMax->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1PredkoscMax->ForeColor = System::Drawing::Color::Navy;
			this->O1PredkoscMax->Location = System::Drawing::Point(287, 103);
			this->O1PredkoscMax->Name = L"O1PredkoscMax";
			this->O1PredkoscMax->Size = System::Drawing::Size(15, 14);
			this->O1PredkoscMax->TabIndex = 6;
			this->O1PredkoscMax->Text = L"5";
			// 
			// O1PredkoscWybrana
			// 
			this->O1PredkoscWybrana->AutoSize = true;
			this->O1PredkoscWybrana->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1PredkoscWybrana->ForeColor = System::Drawing::Color::Navy;
			this->O1PredkoscWybrana->Location = System::Drawing::Point(333, 71);
			this->O1PredkoscWybrana->Name = L"O1PredkoscWybrana";
			this->O1PredkoscWybrana->Size = System::Drawing::Size(16, 16);
			this->O1PredkoscWybrana->TabIndex = 7;
			this->O1PredkoscWybrana->Text = L"0";
			// 
			// O1KatMin
			// 
			this->O1KatMin->AutoSize = true;
			this->O1KatMin->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1KatMin->ForeColor = System::Drawing::Color::Navy;
			this->O1KatMin->Location = System::Drawing::Point(16, 209);
			this->O1KatMin->Name = L"O1KatMin";
			this->O1KatMin->Size = System::Drawing::Size(28, 14);
			this->O1KatMin->TabIndex = 8;
			this->O1KatMin->Text = L"-89";
			// 
			// O1KatMax
			// 
			this->O1KatMax->AutoSize = true;
			this->O1KatMax->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1KatMax->ForeColor = System::Drawing::Color::Navy;
			this->O1KatMax->Location = System::Drawing::Point(287, 209);
			this->O1KatMax->Name = L"O1KatMax";
			this->O1KatMax->Size = System::Drawing::Size(23, 14);
			this->O1KatMax->TabIndex = 9;
			this->O1KatMax->Text = L"89";
			// 
			// O1WysokoscMin
			// 
			this->O1WysokoscMin->AutoSize = true;
			this->O1WysokoscMin->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1WysokoscMin->ForeColor = System::Drawing::Color::Navy;
			this->O1WysokoscMin->Location = System::Drawing::Point(16, 313);
			this->O1WysokoscMin->Name = L"O1WysokoscMin";
			this->O1WysokoscMin->Size = System::Drawing::Size(15, 14);
			this->O1WysokoscMin->TabIndex = 10;
			this->O1WysokoscMin->Text = L"0";
			// 
			// O1WysokoscMax
			// 
			this->O1WysokoscMax->AutoSize = true;
			this->O1WysokoscMax->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1WysokoscMax->ForeColor = System::Drawing::Color::Navy;
			this->O1WysokoscMax->Location = System::Drawing::Point(287, 305);
			this->O1WysokoscMax->Name = L"O1WysokoscMax";
			this->O1WysokoscMax->Size = System::Drawing::Size(15, 14);
			this->O1WysokoscMax->TabIndex = 11;
			this->O1WysokoscMax->Text = L"3";
			// 
			// O1KatAktualny
			// 
			this->O1KatAktualny->AutoSize = true;
			this->O1KatAktualny->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1KatAktualny->ForeColor = System::Drawing::Color::Navy;
			this->O1KatAktualny->Location = System::Drawing::Point(333, 161);
			this->O1KatAktualny->Name = L"O1KatAktualny";
			this->O1KatAktualny->Size = System::Drawing::Size(16, 16);
			this->O1KatAktualny->TabIndex = 12;
			this->O1KatAktualny->Text = L"0";
			// 
			// O1WysokoscAktualna
			// 
			this->O1WysokoscAktualna->AutoSize = true;
			this->O1WysokoscAktualna->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1WysokoscAktualna->ForeColor = System::Drawing::Color::Navy;
			this->O1WysokoscAktualna->Location = System::Drawing::Point(333, 274);
			this->O1WysokoscAktualna->Name = L"O1WysokoscAktualna";
			this->O1WysokoscAktualna->Size = System::Drawing::Size(16, 16);
			this->O1WysokoscAktualna->TabIndex = 13;
			this->O1WysokoscAktualna->Text = L"0";
			// 
			// O1Kat
			// 
			this->O1Kat->AutoSize = true;
			this->O1Kat->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1Kat->ForeColor = System::Drawing::Color::Navy;
			this->O1Kat->Location = System::Drawing::Point(16, 132);
			this->O1Kat->Name = L"O1Kat";
			this->O1Kat->Size = System::Drawing::Size(146, 16);
			this->O1Kat->TabIndex = 14;
			this->O1Kat->Text = L"Ustaw k¹t (stopnie):";
			// 
			// O1Wysokosc
			// 
			this->O1Wysokosc->AutoSize = true;
			this->O1Wysokosc->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O1Wysokosc->ForeColor = System::Drawing::Color::Navy;
			this->O1Wysokosc->Location = System::Drawing::Point(16, 237);
			this->O1Wysokosc->Name = L"O1Wysokosc";
			this->O1Wysokosc->Size = System::Drawing::Size(152, 16);
			this->O1Wysokosc->TabIndex = 15;
			this->O1Wysokosc->Text = L"Ustaw wysokoœæ (m):";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::AliceBlue;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(663, 24);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->BackColor = System::Drawing::Color::AliceBlue;
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->koniecToolStripMenuItem });
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// koniecToolStripMenuItem
			// 
			this->koniecToolStripMenuItem->Name = L"koniecToolStripMenuItem";
			this->koniecToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->koniecToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->koniecToolStripMenuItem->Text = L"Koniec";
			this->koniecToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::koniecToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(663, 381);
			this->Controls->Add(this->O1Wysokosc);
			this->Controls->Add(this->O1Kat);
			this->Controls->Add(this->O1WysokoscAktualna);
			this->Controls->Add(this->O1KatAktualny);
			this->Controls->Add(this->O1WysokoscMax);
			this->Controls->Add(this->O1WysokoscMin);
			this->Controls->Add(this->O1KatMax);
			this->Controls->Add(this->O1KatMin);
			this->Controls->Add(this->O1PredkoscWybrana);
			this->Controls->Add(this->O1PredkoscMax);
			this->Controls->Add(this->O1PredkoscMin);
			this->Controls->Add(this->O1Predkosc);
			this->Controls->Add(this->wysokosc);
			this->Controls->Add(this->kat);
			this->Controls->Add(this->Predkosc);
			this->Controls->Add(this->O1Start);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Rzut ukoœny";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Predkosc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wysokosc))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void O1Start_Click(System::Object^  sender, System::EventArgs^  e) {
		Animacja^ animacja = gcnew Animacja(Predkosc->Value, kat->Value, wysokosc->Value);
		animacja->ShowDialog();
	}
	private: System::Void wysokosc_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		O1WysokoscAktualna->Text = wysokosc->Value.ToString();
	}
private: System::Void kat_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	O1KatAktualny->Text = kat->Value.ToString();
}
private: System::Void Predkosc_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	O1PredkoscWybrana->Text = Predkosc->Value.ToString();
}
private: System::Void koniecToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void oProgramieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
}


};
}

