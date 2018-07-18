#include "Gra.h"

namespace zmienne
{
    bool start = false;
    bool koniec = false;
    int losowa;
    bool wygralX = false;
    bool wygralO = false;
    bool blokada = false;
    int licznikGracza = 0;
    int licznikRemis = 0;
    int licznikPC_ = 0;
    bool razGracz = false;
    bool razPC = false;
    bool razRemis = false;
}

void KikPro::Gra::ruchPC()
{
    srand(time(0));
    if (zmienne::start == false)
    {
        if ((A1->Tag == "?" && ((B1->Tag == C1->Tag) && B1->Tag != "?")) ||
            (A1->Tag == "?" && ((A2->Tag == A3->Tag) && A2->Tag != "?")) ||
            (A1->Tag == "?" && ((B2->Tag == C3->Tag) && B2->Tag != "?")))
        {
            Sleep(500);
            A1->Image = obrazki->Images[0];
            A1->Enabled = false;
            A1->Tag = "O";
            zmienne::blokada = true;
        }
        else if ((A2->Tag == "?" && ((B2->Tag == C2->Tag) && B2->Tag != "?")) ||
            (A2->Tag == "?" && ((A1->Tag == A3->Tag) && A1->Tag != "?")))
        {
            Sleep(500);
            A2->Image = obrazki->Images[0];
            A2->Enabled = false;
            A2->Tag = "O";
            zmienne::blokada = true;
        }
        else if ((A3->Tag == "?" && ((B3->Tag == C3->Tag) && B3->Tag != "?")) ||
            (A3->Tag == "?" && ((A2->Tag == A1->Tag) && A2->Tag != "?")) ||
            (A3->Tag == "?" && ((B2->Tag == C1->Tag) && B2->Tag != "?")))
        {
            Sleep(500);
            A3->Image = obrazki->Images[0];
            A3->Enabled = false;
            A3->Tag = "O";
            zmienne::blokada = true;
        }
        else if ((B1->Tag == "?" && ((A1->Tag == C1->Tag) && A1->Tag != "?")) ||
            (B1->Tag == "?" && ((B2->Tag == B3->Tag) && B2->Tag != "?")))
        {
            Sleep(500);
            B1->Image = obrazki->Images[0];
            B1->Enabled = false;
            B1->Tag = "O";
            zmienne::blokada = true;
        }
        else if ((B2->Tag == "?" && ((A2->Tag == C2->Tag) && A2->Tag != "?")) ||
            (B2->Tag == "?" && ((B1->Tag == B3->Tag) && B1->Tag != "?")) ||
            (B2->Tag == "?" && ((A1->Tag == C3->Tag) && A1->Tag != "?")) ||
            (B2->Tag == "?" && ((A3->Tag == C1->Tag) && A3->Tag != "?")))
        {
            Sleep(500);
            B2->Image = obrazki->Images[0];
            B2->Enabled = false;
            B2->Tag = "O";
            zmienne::blokada = true;
        }
        else if ((B3->Tag == "?" && ((A3->Tag == C3->Tag) && A3->Tag != "?")) ||
            (B3->Tag == "?" && ((B2->Tag == B1->Tag) && B2->Tag != "?")))
        {
            Sleep(500);
            B3->Image = obrazki->Images[0];
            B3->Enabled = false;
            B3->Tag = "O";
            zmienne::blokada = true;
        }
        else if ((C1->Tag == "?" && ((A1->Tag == B1->Tag) && A1->Tag != "?")) ||
            (C1->Tag == "?" && ((C2->Tag == C3->Tag) && C2->Tag != "?")) ||
            (C1->Tag == "?" && ((B2->Tag == A3->Tag) && B2->Tag != "?")))
        {
            Sleep(500);
            C1->Image = obrazki->Images[0];
            C1->Enabled = false;
            C1->Tag = "O";
            zmienne::blokada = true;
        }
        else if ((C2->Tag == "?" && ((A2->Tag == B2->Tag) && A2->Tag != "?")) ||
            (C2->Tag == "?" && ((C1->Tag == C3->Tag) && C1->Tag != "?")))
        {
            Sleep(500);
            C2->Image = obrazki->Images[0];
            C2->Enabled = false;
            C2->Tag = "O";
            zmienne::blokada = true;
        }
        else if ((C3->Tag == "?" && ((A3->Tag == B3->Tag) && A3->Tag != "?")) ||
            (C3->Tag == "?" && ((C2->Tag == C1->Tag) && C2->Tag != "?")) ||
            (C3->Tag == "?" && ((A1->Tag == B2->Tag) && A1->Tag != "?")))
        {
            Sleep(500);
            C3->Image = obrazki->Images[0];
            C3->Enabled = false;
            C3->Tag = "O";
            zmienne::blokada = true;
        }
        if (zmienne::blokada == false)
        {
            do
            {
                zmienne::losowa = (std::rand() % 9) + 1;
                if (zmienne::losowa == 1)
                {
                    if (A1->Tag == "?")
                    {
                        Sleep(500);
                        A1->Image = obrazki->Images[0];
                        A1->Enabled = false;
                        A1->Tag = "O";
                        zmienne::koniec = true;
                    }
                }
                if (zmienne::losowa == 2)
                {
                    if (A2->Tag == "?")

                    {
                        Sleep(500);
                        A2->Image = obrazki->Images[0];
                        A2->Enabled = false;
                        A2->Tag = "O";
                        zmienne::koniec = true;
                    }
                }
                if (zmienne::losowa == 3)
                {
                    if (A3->Tag == "?")
                    {
                        Sleep(500);
                        A3->Image = obrazki->Images[0];
                        A3->Enabled = false;
                        A3->Tag = "O";
                        zmienne::koniec = true;
                    }
                }
                if (zmienne::losowa == 4)
                {
                    if (B1->Tag == "?")
                    {
                        Sleep(500);
                        B1->Image = obrazki->Images[0];
                        B1->Enabled = false;
                        B1->Tag = "O";
                        zmienne::koniec = true;
                    }
                }
                if (zmienne::losowa == 5)
                {
                    if (B2->Tag == "?")
                    {
                        Sleep(500);
                        B2->Image = obrazki->Images[0];
                        B2->Enabled = false;
                        B2->Tag = "O";
                        zmienne::koniec = true;
                    }
                }
                if (zmienne::losowa == 6)
                {
                    if (B3->Tag == "?")
                    {
                        Sleep(500);
                        B3->Image = obrazki->Images[0];
                        B3->Enabled = false;
                        B3->Tag = "O";
                        zmienne::koniec = true;
                    }
                }
                if (zmienne::losowa == 7)
                {
                    if (C1->Tag == "?")
                    {
                        Sleep(500);
                        C1->Image = obrazki->Images[0];
                        C1->Enabled = false;
                        C1->Tag = "O";
                        zmienne::koniec = true;
                    }
                }
                if (zmienne::losowa == 8)
                {
                    if (C2->Tag == "?")
                    {
                        Sleep(500);
                        C2->Image = obrazki->Images[0];
                        C2->Enabled = false;
                        C2->Tag = "O";
                        zmienne::koniec = true;
                    }
                }
                if (zmienne::losowa == 9)
                {
                    if (C3->Tag == "?")
                    {
                        Sleep(500);
                        C3->Image = obrazki->Images[0];
                        C3->Enabled = false;
                        C3->Tag = "O";
                        zmienne::koniec = true;
                    }
                }
            } while (zmienne::koniec != true);
        }
    }
}

void KikPro::Gra::ktoWygral()
{
    //sprawdzenie w poziomie dla X
    if ((A1->Tag == B1->Tag) && (B1->Tag == C1->Tag) && (A1->Tag == "X")) zmienne::wygralX = true;
    if ((A2->Tag == B2->Tag) && (B2->Tag == C2->Tag) && (A2->Tag == "X")) zmienne::wygralX = true;
    if ((A3->Tag == B3->Tag) && (B3->Tag == C3->Tag) && (A3->Tag == "X")) zmienne::wygralX = true;
    //sprawdzenie w pionie dla X
    if ((A1->Tag == A2->Tag) && (A2->Tag == A3->Tag) && (A1->Tag == "X")) zmienne::wygralX = true;
    if ((B1->Tag == B2->Tag) && (B2->Tag == B3->Tag) && (B1->Tag == "X")) zmienne::wygralX = true;
    if ((C1->Tag == C2->Tag) && (C2->Tag == C3->Tag) && (C1->Tag == "X")) zmienne::wygralX = true;
    //sprawdzenie po przekatnej dla X
    if ((A1->Tag == B2->Tag) && (B2->Tag == C3->Tag) && (A1->Tag == "X")) zmienne::wygralX = true;
    if ((C1->Tag == B2->Tag) && (B2->Tag == A3->Tag) && (C1->Tag == "X")) zmienne::wygralX = true;
    //sprawdzenie w poziomie dla O
    if ((A1->Tag == B1->Tag) && (B1->Tag == C1->Tag) && (A1->Tag == "O")) zmienne::wygralO = true;
    if ((A2->Tag == B2->Tag) && (B2->Tag == C2->Tag) && (A2->Tag == "O")) zmienne::wygralO = true;
    if ((A3->Tag == B3->Tag) && (B3->Tag == C3->Tag) && (A3->Tag == "O")) zmienne::wygralO = true;
    //sprawdzenie w pionie dla O
    if ((A1->Tag == A2->Tag) && (A2->Tag == A3->Tag) && (A1->Tag == "O")) zmienne::wygralO = true;
    if ((B1->Tag == B2->Tag) && (B2->Tag == B3->Tag) && (B1->Tag == "O")) zmienne::wygralO = true;
    if ((C1->Tag == C2->Tag) && (C2->Tag == C3->Tag) && (C1->Tag == "O")) zmienne::wygralO = true;
    //sprawdzenie po przekatnej dla O
    if ((A1->Tag == B2->Tag) && (B2->Tag == C3->Tag) && (A1->Tag == "O")) zmienne::wygralO = true;
    if ((C1->Tag == B2->Tag) && (B2->Tag == A3->Tag) && (C1->Tag == "O")) zmienne::wygralO = true;

    //wygrana Gracz
    if (zmienne::wygralX && zmienne::razGracz == false)
    {
        for each(Control^ element in this -> Controls)
        {
            if (element->GetType() == PictureBox::typeid)
                element->Enabled = false;
        }
        zmienne::start = true;
        zmienne::razGracz = true;
        MessageBox::Show("Brawo " + textNick->Text + ", wygra³eœ ! :D", "Wynik", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
        zmienne::licznikGracza++;
        LicznikPlayer->Text = Convert::ToString(zmienne::licznikGracza);
        LicznikDraw->ForeColor = System::Drawing::Color::Black;
        LicznikPC->ForeColor = System::Drawing::Color::Black;
        LicznikPlayer->ForeColor = System::Drawing::Color::Red;
    }
    // wygrana PC
    if (zmienne::wygralO && zmienne::razPC == false)
    {
        for each(Control^ element in this -> Controls)
        {
            if (element->GetType() == PictureBox::typeid)
                element->Enabled = false;
        }
        zmienne::start = true;
        zmienne::razPC = true;
        MessageBox::Show("Niestety " + textNick->Text + ", przegra³eœ z komputerem :(", "Wynik", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
        zmienne::licznikPC_++;
        LicznikPC->Text = Convert::ToString(zmienne::licznikPC_);
        LicznikDraw->ForeColor = System::Drawing::Color::Black;
        LicznikPC->ForeColor = System::Drawing::Color::Red;
        LicznikPlayer->ForeColor = System::Drawing::Color::Black;
    }
    // Remis
    if (zmienne::wygralX == false && zmienne::wygralO == false)
    {
        zmienne::blokada = false;
        zmienne::koniec = false;
        if (A1->Tag != "?" && A2->Tag != "?" && A3->Tag != "?" && B1->Tag != "?" && B2->Tag != "?" && B3->Tag != "?"
            && C1->Tag != "?" && C2->Tag != "?" && C3->Tag != "?")
        {
            zmienne::blokada = true;
            zmienne::koniec = true;
            for each(Control^ element in this -> Controls)
            {
                if (element->GetType() == PictureBox::typeid)
                    element->Enabled = false;
            }
            if (zmienne::razRemis == false)
            {
                MessageBox::Show("Pojedynek zakoñczy³ siê remisem", "Wynik", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                zmienne::licznikRemis++;
                LicznikDraw->Text = Convert::ToString(zmienne::licznikRemis);
                LicznikDraw->ForeColor = System::Drawing::Color::Red;
                LicznikPC->ForeColor = System::Drawing::Color::Black;
                LicznikPlayer->ForeColor = System::Drawing::Color::Black;
                zmienne::razRemis = true;
            }
        }
    }
}

void KikPro::Gra::zerowanieUstawien()
{
    for each(Control^ element in this->Controls)
    {
        try
        {
            PictureBox^ zdjecie = (PictureBox^)element;
            zdjecie->Enabled = true;
            zdjecie->Tag = "?";
            zdjecie->Image = obrazki->Images[2];
            zmienne::wygralX = false;
            zmienne::wygralO = false;
            zmienne::blokada = false;
            zmienne::koniec = false;
            zmienne::start = false;
            zmienne::razGracz = false;
            zmienne::razPC = false;
            zmienne::razRemis = false;
        }
        catch (...) {}
    }
}

System::Void KikPro::Gra::graj(System::Object^  sender, System::EventArgs^  e)
{
    if (textNick->Text != "")
    {
        PictureBox^ zdj = (PictureBox^)sender;
        EtykietaPlayer->Text = textNick->Text;
        zdj->Image = obrazki->Images[1];
        zdj->Enabled = false;
        zdj->Tag = "X";
        ktoWygral();
        ruchPC();
        ktoWygral();
        EtykietaNick->Visible = false;
        textNick->Visible = false;
    }
}

System::Void KikPro::Gra::przyciskNewGame_Click(System::Object^  sender, System::EventArgs^  e)
{
    zerowanieUstawien();
}

System::Void KikPro::Gra::przyciskReset_Click(System::Object^  sender, System::EventArgs^  e)
{
    zerowanieUstawien();
    zmienne::licznikGracza = 0;
    zmienne::licznikPC_ = 0;
    zmienne::licznikRemis = 0;
    LicznikPlayer->Text = "0";
    LicznikDraw->Text = "0";
    LicznikPC->Text = "0";
    EtykietaNick->Visible = true;
    textNick->Visible = true;
    LicznikDraw->ForeColor = System::Drawing::Color::Black;
    LicznikPC->ForeColor = System::Drawing::Color::Black;
    LicznikPlayer->ForeColor = System::Drawing::Color::Black;
}