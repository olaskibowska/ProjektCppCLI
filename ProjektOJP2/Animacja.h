#pragma once

namespace ProjektOJP2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Animacja
	/// </summary>
	public ref class Animacja : public System::Windows::Forms::Form
	{
	public:
		Animacja(Int32 a,Int32 b, Int32 c)
		{
			InitializeComponent();

			O2Predkosc->Text = a.ToString();
			O2Kat->Text = b.ToString();
			O2Wysokosc->Text = c.ToString();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Animacja()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  O2Predkosc;
	private: System::Windows::Forms::Label^  O2Kat;
	private: System::Windows::Forms::Label^  O2Wysokosc;
	private: System::Windows::Forms::Label^  O2zasieg;
	private: System::Windows::Forms::Label^  O2hmax;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->O2Predkosc = (gcnew System::Windows::Forms::Label());
			this->O2Kat = (gcnew System::Windows::Forms::Label());
			this->O2Wysokosc = (gcnew System::Windows::Forms::Label());
			this->O2zasieg = (gcnew System::Windows::Forms::Label());
			this->O2hmax = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(31, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(591, 431);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Animacja::panel1_Paint);
			// 
			// O2Predkosc
			// 
			this->O2Predkosc->AutoSize = true;
			this->O2Predkosc->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O2Predkosc->ForeColor = System::Drawing::Color::Navy;
			this->O2Predkosc->Location = System::Drawing::Point(804, 56);
			this->O2Predkosc->Name = L"O2Predkosc";
			this->O2Predkosc->Size = System::Drawing::Size(16, 16);
			this->O2Predkosc->TabIndex = 2;
			this->O2Predkosc->Text = L"0";
			// 
			// O2Kat
			// 
			this->O2Kat->AutoSize = true;
			this->O2Kat->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O2Kat->ForeColor = System::Drawing::Color::Navy;
			this->O2Kat->Location = System::Drawing::Point(804, 80);
			this->O2Kat->Name = L"O2Kat";
			this->O2Kat->Size = System::Drawing::Size(16, 16);
			this->O2Kat->TabIndex = 3;
			this->O2Kat->Text = L"0";
			// 
			// O2Wysokosc
			// 
			this->O2Wysokosc->AutoSize = true;
			this->O2Wysokosc->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O2Wysokosc->ForeColor = System::Drawing::Color::Navy;
			this->O2Wysokosc->Location = System::Drawing::Point(804, 106);
			this->O2Wysokosc->Name = L"O2Wysokosc";
			this->O2Wysokosc->Size = System::Drawing::Size(16, 16);
			this->O2Wysokosc->TabIndex = 4;
			this->O2Wysokosc->Text = L"0";
			// 
			// O2zasieg
			// 
			this->O2zasieg->AutoSize = true;
			this->O2zasieg->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O2zasieg->ForeColor = System::Drawing::Color::Navy;
			this->O2zasieg->Location = System::Drawing::Point(804, 135);
			this->O2zasieg->Name = L"O2zasieg";
			this->O2zasieg->Size = System::Drawing::Size(15, 14);
			this->O2zasieg->TabIndex = 5;
			this->O2zasieg->Text = L"0";
			// 
			// O2hmax
			// 
			this->O2hmax->AutoSize = true;
			this->O2hmax->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->O2hmax->ForeColor = System::Drawing::Color::Navy;
			this->O2hmax->Location = System::Drawing::Point(804, 170);
			this->O2hmax->Name = L"O2hmax";
			this->O2hmax->Size = System::Drawing::Size(16, 16);
			this->O2hmax->TabIndex = 6;
			this->O2hmax->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(31, 461);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(606, 461);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"6";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(315, 461);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(115, 461);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(216, 461);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(415, 461);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(516, 461);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(9, 332);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(9, 233);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(9, 137);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(9, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 16);
			this->label11->TabIndex = 17;
			this->label11->Text = L"4";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->ForeColor = System::Drawing::Color::Navy;
			this->label12->Location = System::Drawing::Point(644, 13);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(146, 18);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Parametry rzutu:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label13->ForeColor = System::Drawing::Color::Navy;
			this->label13->Location = System::Drawing::Point(644, 56);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(114, 16);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Prêdkoœæ [m/s]:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->ForeColor = System::Drawing::Color::Navy;
			this->label14->Location = System::Drawing::Point(644, 80);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(101, 16);
			this->label14->TabIndex = 20;
			this->label14->Text = L"K¹t [stopnie]:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->ForeColor = System::Drawing::Color::Navy;
			this->label15->Location = System::Drawing::Point(644, 106);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(108, 16);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Wysokoœæ [m]:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label16->ForeColor = System::Drawing::Color::Navy;
			this->label16->Location = System::Drawing::Point(644, 135);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(85, 16);
			this->label16->TabIndex = 22;
			this->label16->Text = L"Zasiêg [m]:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label17->ForeColor = System::Drawing::Color::Navy;
			this->label17->Location = System::Drawing::Point(644, 167);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(144, 16);
			this->label17->TabIndex = 23;
			this->label17->Text = L"Wysokoœæ max. [m]:";
			// 
			// Animacja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(932, 521);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->O2hmax);
			this->Controls->Add(this->O2zasieg);
			this->Controls->Add(this->O2Wysokosc);
			this->Controls->Add(this->O2Kat);
			this->Controls->Add(this->O2Predkosc);
			this->Controls->Add(this->panel1);
			this->Name = L"Animacja";
			this->Text = L"Animacja";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		float ymax = panel1->Height;
		float xmax = panel1->Width;

		Int32 v0 = Double::Parse(O2Predkosc->Text) * 100;
		Int32 t = 0;
		double alfa = System::Math::PI *Double::Parse(O2Kat->Text) / 180;
		float g = 1000;
		float h = ymax - Double::Parse(O2Wysokosc->Text) * 100;
		float y1, y2=0;
		float x = 0;
		float hmax = 0;
		double a = (v0/100)*(v0/100)*System::Math::Sin(2*alfa) / 10;



		Graphics^ grafika = e->Graphics;
		grafika->SmoothingMode = Drawing2D::SmoothingMode::HighQuality;
		for (int i = 0;i < 590;i=i+10) {
			for (int j = 0;j < 430;j = j + 10) {
				grafika->DrawRectangle(Pens::Silver, 0 + i, 0 + j, 10, 10);
			}	
		}

		grafika->DrawLine(Pens::Black,0,0,0,430);
		grafika->DrawLine(Pens::Black, 0, 430, 590, 430);

		//podzialki y
		grafika->DrawLine(Pens::Black, 0, 330, 10, 330);
		grafika->DrawLine(Pens::Black, 0, 230, 10, 230);
		grafika->DrawLine(Pens::Black, 0, 130, 10, 130);
		grafika->DrawLine(Pens::Black, 0, 30, 10, 30);

		//podzialki x
		grafika->DrawLine(Pens::Black, 100, 430, 100, 420);
		grafika->DrawLine(Pens::Black, 200, 430, 200, 420);
		grafika->DrawLine(Pens::Black, 300, 430, 300, 420);
		grafika->DrawLine(Pens::Black, 400, 430, 400, 420);
		grafika->DrawLine(Pens::Black, 500, 430, 500, 420);

		
		//czas uspienia 
		switch (v0) {
			case 100:
				t = 50; 
				break;
			case 200:
				t = 40;
				break;
			case 300:
				t = 30;
				break;
			case 400:
				t = 20;
				break;
			case 500:
				t = 10;
				break;

		}

		while (y2 < ymax + 1) {
			y1 = -(-(h + 1) + (x - 1)*System::Math::Tan(alfa) - g / (2 * v0*v0*System::Math::Cos(alfa)*System::Math::Cos(alfa))*(x - 1)*(x - 1));
			y2 = -(-h + x*System::Math::Tan(alfa) - g / (2 * v0*v0*System::Math::Cos(alfa)*System::Math::Cos(alfa))*x*x);
			grafika->DrawLine(Pens::Blue, x, y1, 1 + x, y2);
			
			if ((ymax-y2) > hmax) {
				hmax = (ymax-y2);
			}
			x++;
			System::Threading::Thread::Sleep(t);

		}
		O2zasieg->Text = (x / 100).ToString();
		O2hmax->Text = (hmax / 100).ToString();
	}
	};
}
