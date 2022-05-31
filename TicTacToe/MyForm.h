#pragma once
namespace Project8 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;








	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ playerLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button10;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->playerLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TIC TAC TOE!";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GrayText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button1->Location = System::Drawing::Point(60, 110);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 60);
			this->button1->TabIndex = 1;
			this->button1->TabStop = false;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GrayText;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button2->Location = System::Drawing::Point(132, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 60);
			this->button2->TabIndex = 2;
			this->button2->TabStop = false;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GrayText;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button3->Location = System::Drawing::Point(204, 110);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 60);
			this->button3->TabIndex = 3;
			this->button3->TabStop = false;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GrayText;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button4->Location = System::Drawing::Point(60, 176);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 60);
			this->button4->TabIndex = 4;
			this->button4->TabStop = false;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::GrayText;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button5->Location = System::Drawing::Point(132, 176);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(66, 60);
			this->button5->TabIndex = 5;
			this->button5->TabStop = false;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GrayText;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button6->Location = System::Drawing::Point(204, 176);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(66, 60);
			this->button6->TabIndex = 6;
			this->button6->TabStop = false;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::GrayText;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button7->Location = System::Drawing::Point(60, 242);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(66, 60);
			this->button7->TabIndex = 7;
			this->button7->TabStop = false;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::GrayText;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button8->Location = System::Drawing::Point(132, 242);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(66, 60);
			this->button8->TabIndex = 8;
			this->button8->TabStop = false;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::GrayText;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button9->Location = System::Drawing::Point(204, 242);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(66, 60);
			this->button9->TabIndex = 9;
			this->button9->TabStop = false;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(317, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 10;
			// 
			// playerLabel
			// 
			this->playerLabel->AutoSize = true;
			this->playerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerLabel->Location = System::Drawing::Point(154, 74);
			this->playerLabel->Name = L"playerLabel";
			this->playerLabel->Size = System::Drawing::Size(0, 20);
			this->playerLabel->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(132, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"PLAYER";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GrayText;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button10->Location = System::Drawing::Point(3, 342);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(66, 21);
			this->button10->TabIndex = 13;
			this->button10->TabStop = false;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->ClientSize = System::Drawing::Size(341, 369);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->playerLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TikiTakiToe";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ currentPlayerSymbolski = "X";
		int counter;
		bool isWinner() {
			if (!(button1->Text == "" && button2->Text == "" && button3->Text == "") && button1->Text == button2->Text && button1->Text == button3->Text)
				return true;
			else if (!(button4->Text == "" && button5->Text == "" && button6->Text == "") && button4->Text == button5->Text && button4->Text == button6->Text)
				return true;
			else if (!(button7->Text == "" && button8->Text == "" && button9->Text == "") && button7->Text == button8->Text && button7->Text == button9->Text)
				return true;
			else if (!(button1->Text == "" && button4->Text == "" && button7->Text == "") && button1->Text == button4->Text && button1->Text == button7->Text)
				return true;
			else if (!(button2->Text == "" && button5->Text == "" && button8->Text == "") && button2->Text == button5->Text && button2->Text == button8->Text)
				return true;
			else if (!(button3->Text == "" && button6->Text == "" && button9->Text == "") && button3->Text == button6->Text && button3->Text == button9->Text)
				return true;
			else if (!(button1->Text == "" && button5->Text == "" && button9->Text == "") && button1->Text == button5->Text && button1->Text == button9->Text)
				return true;
			else if (!(button3->Text == "" && button5->Text == "" && button7->Text == "") && button3->Text == button5->Text && button3->Text == button7->Text)
				return true;
			else
			return false;
		}
private: System::Void ButtonClick(System::Object^ sender, System::EventArgs^ e) {

	Button^ b = dynamic_cast<Button^>(sender);
	label2->Focus();
	b->Text = currentPlayerSymbolski;
	b->Enabled = false;
	counter++;
	bool hey = isWinner();
	if (hey) {
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		if (MessageBox::Show("Player " + currentPlayerSymbolski + " wins!\n\n Try Again?", "WINNER", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			button6->Enabled = true;
			button7->Enabled = true;
			button8->Enabled = true;
			button9->Enabled = true;
			button1->Text = "";
			button2->Text = "";
			button3->Text = "";
			button4->Text = "";
			button5->Text = "";
			button6->Text = "";
			button7->Text = "";
			button8->Text = "";
			button9->Text = "";
		}
		
	}
	if (currentPlayerSymbolski == "X") {
		currentPlayerSymbolski = "O";
	}
	else {
		currentPlayerSymbolski = "X";
	}

	playerLabel->Text = currentPlayerSymbolski;

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->Focus();
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;
	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";
}
};
}
