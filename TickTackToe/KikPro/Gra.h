#pragma once
#include <cstdlib>
#include <ctime>
#include <windows.h>

namespace KikPro {
    using namespace std;
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    /// <summary>
    /// Summary for Gra
    /// </summary>
    public ref class Gra : public System::Windows::Forms::Form
    {
    private: System::Windows::Forms::Button^  przyciskReset;
    private: System::Windows::Forms::Label^  EtykietaNick;
    private: System::Windows::Forms::Button^  przyciskNewGame;
    private: System::Windows::Forms::TextBox^  textNick;
    private: System::Windows::Forms::Label^  EtykietaPlayer;
    private: System::Windows::Forms::Label^  EtykietaDraw;
    private: System::Windows::Forms::Label^  EtykietaPC;
    private: System::Windows::Forms::Label^  LicznikPlayer;
    private: System::Windows::Forms::Label^  LicznikDraw;
    private: System::Windows::Forms::Label^  LicznikPC;
    public:
        Gra(void)
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
        ~Gra()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::PictureBox^  A1;
    private: System::Windows::Forms::PictureBox^  B1;
    private: System::Windows::Forms::PictureBox^  C1;
    private: System::Windows::Forms::PictureBox^  A2;
    private: System::Windows::Forms::PictureBox^  B2;
    private: System::Windows::Forms::PictureBox^  C2;
    private: System::Windows::Forms::PictureBox^  B3;
    private: System::Windows::Forms::PictureBox^  A3;
    private: System::Windows::Forms::PictureBox^  C3;
    private: System::Windows::Forms::ImageList^  obrazki;
    private: System::ComponentModel::IContainer^  components;
    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Gra::typeid));
            this->A1 = (gcnew System::Windows::Forms::PictureBox());
            this->B1 = (gcnew System::Windows::Forms::PictureBox());
            this->C1 = (gcnew System::Windows::Forms::PictureBox());
            this->A2 = (gcnew System::Windows::Forms::PictureBox());
            this->B2 = (gcnew System::Windows::Forms::PictureBox());
            this->C2 = (gcnew System::Windows::Forms::PictureBox());
            this->B3 = (gcnew System::Windows::Forms::PictureBox());
            this->A3 = (gcnew System::Windows::Forms::PictureBox());
            this->C3 = (gcnew System::Windows::Forms::PictureBox());
            this->obrazki = (gcnew System::Windows::Forms::ImageList(this->components));
            this->przyciskReset = (gcnew System::Windows::Forms::Button());
            this->EtykietaNick = (gcnew System::Windows::Forms::Label());
            this->przyciskNewGame = (gcnew System::Windows::Forms::Button());
            this->textNick = (gcnew System::Windows::Forms::TextBox());
            this->EtykietaPlayer = (gcnew System::Windows::Forms::Label());
            this->EtykietaDraw = (gcnew System::Windows::Forms::Label());
            this->EtykietaPC = (gcnew System::Windows::Forms::Label());
            this->LicznikPlayer = (gcnew System::Windows::Forms::Label());
            this->LicznikDraw = (gcnew System::Windows::Forms::Label());
            this->LicznikPC = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
            this->SuspendLayout();
            // 
            // A1
            // 
            this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
            this->A1->Location = System::Drawing::Point(11, 78);
            this->A1->Name = L"A1";
            this->A1->Size = System::Drawing::Size(48, 60);
            this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->A1->TabIndex = 0;
            this->A1->TabStop = false;
            this->A1->Tag = L"\?";
            this->A1->Click += gcnew System::EventHandler(this, &Gra::graj);
            // 
            // B1
            // 
            this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
            this->B1->Location = System::Drawing::Point(106, 72);
            this->B1->Name = L"B1";
            this->B1->Size = System::Drawing::Size(48, 60);
            this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->B1->TabIndex = 1;
            this->B1->TabStop = false;
            this->B1->Tag = L"\?";
            this->B1->Click += gcnew System::EventHandler(this, &Gra::graj);
            // 
            // C1
            // 
            this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
            this->C1->Location = System::Drawing::Point(213, 70);
            this->C1->Name = L"C1";
            this->C1->Size = System::Drawing::Size(48, 60);
            this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->C1->TabIndex = 2;
            this->C1->TabStop = false;
            this->C1->Tag = L"\?";
            this->C1->Click += gcnew System::EventHandler(this, &Gra::graj);
            // 
            // A2
            // 
            this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
            this->A2->Location = System::Drawing::Point(16, 169);
            this->A2->Name = L"A2";
            this->A2->Size = System::Drawing::Size(48, 60);
            this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->A2->TabIndex = 3;
            this->A2->TabStop = false;
            this->A2->Tag = L"\?";
            this->A2->Click += gcnew System::EventHandler(this, &Gra::graj);
            // 
            // B2
            // 
            this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
            this->B2->Location = System::Drawing::Point(110, 157);
            this->B2->Name = L"B2";
            this->B2->Size = System::Drawing::Size(48, 60);
            this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->B2->TabIndex = 4;
            this->B2->TabStop = false;
            this->B2->Tag = L"\?";
            this->B2->Click += gcnew System::EventHandler(this, &Gra::graj);
            // 
            // C2
            // 
            this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
            this->C2->Location = System::Drawing::Point(219, 158);
            this->C2->Name = L"C2";
            this->C2->Size = System::Drawing::Size(48, 60);
            this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->C2->TabIndex = 5;
            this->C2->TabStop = false;
            this->C2->Tag = L"\?";
            this->C2->Click += gcnew System::EventHandler(this, &Gra::graj);
            // 
            // B3
            // 
            this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
            this->B3->Location = System::Drawing::Point(117, 255);
            this->B3->Name = L"B3";
            this->B3->Size = System::Drawing::Size(48, 60);
            this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->B3->TabIndex = 6;
            this->B3->TabStop = false;
            this->B3->Tag = L"\?";
            this->B3->Click += gcnew System::EventHandler(this, &Gra::graj);
            // 
            // A3
            // 
            this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
            this->A3->Location = System::Drawing::Point(14, 265);
            this->A3->Name = L"A3";
            this->A3->Size = System::Drawing::Size(48, 60);
            this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->A3->TabIndex = 7;
            this->A3->TabStop = false;
            this->A3->Tag = L"\?";
            this->A3->Click += gcnew System::EventHandler(this, &Gra::graj);
            // 
            // C3
            // 
            this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
            this->C3->Location = System::Drawing::Point(211, 251);
            this->C3->Name = L"C3";
            this->C3->Size = System::Drawing::Size(48, 60);
            this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->C3->TabIndex = 8;
            this->C3->TabStop = false;
            this->C3->Tag = L"\?";
            this->C3->Click += gcnew System::EventHandler(this, &Gra::graj);
            // 
            // obrazki
            // 
            this->obrazki->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"obrazki.ImageStream")));
            this->obrazki->TransparentColor = System::Drawing::Color::Transparent;
            this->obrazki->Images->SetKeyName(0, L"kolko.png");
            this->obrazki->Images->SetKeyName(1, L"krzyzyk.png");
            this->obrazki->Images->SetKeyName(2, L"pytajnik.png");
            // 
            // przyciskReset
            // 
            this->przyciskReset->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->przyciskReset->Location = System::Drawing::Point(20, 374);
            this->przyciskReset->Name = L"przyciskReset";
            this->przyciskReset->Size = System::Drawing::Size(94, 36);
            this->przyciskReset->TabIndex = 10;
            this->przyciskReset->Text = L"Reset";
            this->przyciskReset->UseVisualStyleBackColor = true;
            this->przyciskReset->Click += gcnew System::EventHandler(this, &Gra::przyciskReset_Click);
            // 
            // EtykietaNick
            // 
            this->EtykietaNick->AutoSize = true;
            this->EtykietaNick->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EtykietaNick->Location = System::Drawing::Point(21, 345);
            this->EtykietaNick->Name = L"EtykietaNick";
            this->EtykietaNick->Size = System::Drawing::Size(105, 25);
            this->EtykietaNick->TabIndex = 13;
            this->EtykietaNick->Text = L"Your Nick: ";
            // 
            // przyciskNewGame
            // 
            this->przyciskNewGame->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->przyciskNewGame->Location = System::Drawing::Point(164, 374);
            this->przyciskNewGame->Name = L"przyciskNewGame";
            this->przyciskNewGame->Size = System::Drawing::Size(94, 36);
            this->przyciskNewGame->TabIndex = 14;
            this->przyciskNewGame->Text = L"New game";
            this->przyciskNewGame->UseVisualStyleBackColor = true;
            this->przyciskNewGame->Click += gcnew System::EventHandler(this, &Gra::przyciskNewGame_Click);
            // 
            // textNick
            // 
            this->textNick->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textNick->Location = System::Drawing::Point(148, 345);
            this->textNick->Name = L"textNick";
            this->textNick->Size = System::Drawing::Size(110, 25);
            this->textNick->TabIndex = 15;
            // 
            // EtykietaPlayer
            // 
            this->EtykietaPlayer->AutoSize = true;
            this->EtykietaPlayer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
            this->EtykietaPlayer->Location = System::Drawing::Point(19, 5);
            this->EtykietaPlayer->Name = L"EtykietaPlayer";
            this->EtykietaPlayer->Size = System::Drawing::Size(68, 24);
            this->EtykietaPlayer->TabIndex = 16;
            this->EtykietaPlayer->Text = L"Player";
            // 
            // EtykietaDraw
            // 
            this->EtykietaDraw->AutoSize = true;
            this->EtykietaDraw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
            this->EtykietaDraw->Location = System::Drawing::Point(116, 5);
            this->EtykietaDraw->Name = L"EtykietaDraw";
            this->EtykietaDraw->Size = System::Drawing::Size(57, 24);
            this->EtykietaDraw->TabIndex = 17;
            this->EtykietaDraw->Text = L"Draw";
            // 
            // EtykietaPC
            // 
            this->EtykietaPC->AutoSize = true;
            this->EtykietaPC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
            this->EtykietaPC->Location = System::Drawing::Point(211, 5);
            this->EtykietaPC->Name = L"EtykietaPC";
            this->EtykietaPC->Size = System::Drawing::Size(37, 24);
            this->EtykietaPC->TabIndex = 18;
            this->EtykietaPC->Text = L"PC";
            // 
            // LicznikPlayer
            // 
            this->LicznikPlayer->AutoSize = true;
            this->LicznikPlayer->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->LicznikPlayer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
            this->LicznikPlayer->Location = System::Drawing::Point(35, 30);
            this->LicznikPlayer->Name = L"LicznikPlayer";
            this->LicznikPlayer->Size = System::Drawing::Size(29, 31);
            this->LicznikPlayer->TabIndex = 19;
            this->LicznikPlayer->Text = L"0";
            // 
            // LicznikDraw
            // 
            this->LicznikDraw->AutoSize = true;
            this->LicznikDraw->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->LicznikDraw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
            this->LicznikDraw->Location = System::Drawing::Point(130, 30);
            this->LicznikDraw->Name = L"LicznikDraw";
            this->LicznikDraw->Size = System::Drawing::Size(29, 31);
            this->LicznikDraw->TabIndex = 20;
            this->LicznikDraw->Text = L"0";
            // 
            // LicznikPC
            // 
            this->LicznikPC->AutoSize = true;
            this->LicznikPC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->LicznikPC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
            this->LicznikPC->Location = System::Drawing::Point(217, 30);
            this->LicznikPC->Name = L"LicznikPC";
            this->LicznikPC->Size = System::Drawing::Size(29, 31);
            this->LicznikPC->TabIndex = 21;
            this->LicznikPC->Text = L"0";
            // 
            // Gra
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(278, 419);
            this->Controls->Add(this->LicznikPC);
            this->Controls->Add(this->LicznikDraw);
            this->Controls->Add(this->LicznikPlayer);
            this->Controls->Add(this->EtykietaPC);
            this->Controls->Add(this->EtykietaDraw);
            this->Controls->Add(this->EtykietaPlayer);
            this->Controls->Add(this->textNick);
            this->Controls->Add(this->przyciskNewGame);
            this->Controls->Add(this->EtykietaNick);
            this->Controls->Add(this->przyciskReset);
            this->Controls->Add(this->C3);
            this->Controls->Add(this->A3);
            this->Controls->Add(this->B3);
            this->Controls->Add(this->C2);
            this->Controls->Add(this->B2);
            this->Controls->Add(this->A2);
            this->Controls->Add(this->C1);
            this->Controls->Add(this->B1);
            this->Controls->Add(this->A1);
            this->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->Name = L"Gra";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L" Tick Tack Toe ";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: void ruchPC();
    private: void ktoWygral();
    private: void zerowanieUstawien();
    private: System::Void graj(System::Object^  sender, System::EventArgs^  e);
    private: System::Void przyciskNewGame_Click(System::Object^  sender, System::EventArgs^  e);
    private: System::Void przyciskReset_Click(System::Object^  sender, System::EventArgs^  e);
    };
}
