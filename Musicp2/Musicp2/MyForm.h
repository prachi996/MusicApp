#pragma once

namespace Musicp2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

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
	private: System::Windows::Forms::Panel^  panel1;
	protected:

	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;



	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::Button^  button8;


	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::OpenFileDialog^  ofd;
	private: System::Windows::Forms::Panel^  panel3;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Sienna;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 552);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1210, 106);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(447, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(333, 100);
			this->panel3->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Sienna;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(136, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 59);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Sienna;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(241, 25);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 59);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Sienna;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(40, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 59);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Sienna;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(35, 22);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(176, 66);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Open file";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::Sienna;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(936, 22);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(223, 66);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Add to favorate";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Sienna;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(51, 27);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 53);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Home";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Sienna;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->Location = System::Drawing::Point(35, 116);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(171, 54);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Favorate";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Sienna;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->Location = System::Drawing::Point(35, 205);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(164, 72);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Delete";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Sienna;
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(241, 552);
			this->panel2->TabIndex = 1;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Sienna;
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(12, 393);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(194, 77);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Search";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button10->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Sienna;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(17, 283);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(194, 81);
			this->button8->TabIndex = 8;
			this->button8->Text = L"List";
			this->button8->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// ofd
			// 
			this->ofd->FileName = L"ofd";
			this->ofd->Filter = L"\"WAV|*.wav|MP3|*.map3\"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1210, 658);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::Black;
			this->MinimumSize = System::Drawing::Size(1210, 658);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		array<String^>^ files;
		String^path;
		int currentIndex;
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 SoundPlayer^sound = gcnew SoundPlayer;
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		sound->SoundLocation = ofd->FileName;
		sound->Load();
		sound->Play();
		path = System::IO::Path::GetDirectoryName(ofd->FileName);
		files = System::IO::Directory::GetFiles(path);
		for (int i = 0; i < files->Length; i++)
		{
			if (files[i] == ofd->FileName) {
				currentIndex = i;
				break;
		    }

		}
		
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (currentIndex != 0) {
		currentIndex--;
	}
	else
	{
		currentIndex = files->Length - 1;
	}
	sound->SoundLocation = files[currentIndex];
	sound->Load();
	sound->Play();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (currentIndex != files->Length - 1) {
		currentIndex++;
	}
	else {
		currentIndex = 0;
	}
	sound->SoundLocation = files[currentIndex];
	sound->Load();
	sound->Play();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}
