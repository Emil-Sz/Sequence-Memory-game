/***************************************************************
 * Name:      seqMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2024-01-26
 * Copyright:  ()
 * License:
 **************************************************************/

#include "seqMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(seqDialog)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

#undef _
#define _(s) wxString::FromUTF8(s)

//(*IdInit(seqDialog)
const long seqDialog::ID_STATICTEXT1 = wxNewId();
const long seqDialog::ID_STATICBITMAP1 = wxNewId();
const long seqDialog::ID_STATICBITMAP2 = wxNewId();
const long seqDialog::ID_STATICBITMAP3 = wxNewId();
const long seqDialog::ID_STATICTEXT2 = wxNewId();
const long seqDialog::ID_CHOICE1 = wxNewId();
const long seqDialog::ID_STATICTEXT3 = wxNewId();
const long seqDialog::ID_CHOICE2 = wxNewId();
const long seqDialog::ID_STATICTEXT4 = wxNewId();
const long seqDialog::ID_BUTTON3 = wxNewId();
const long seqDialog::ID_BUTTON1 = wxNewId();
const long seqDialog::ID_BUTTON2 = wxNewId();
const long seqDialog::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(seqDialog,wxDialog)
    //(*EventTable(seqDialog)
    //*)
END_EVENT_TABLE()

seqDialog::seqDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(seqDialog)
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;
    wxFlexGridSizer* FlexGridSizer3;

    Create(parent, wxID_ANY, _("Sequence memory"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxMINIMIZE_BOX, _T("wxID_ANY"));
    FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    FlexGridSizer3 = new wxFlexGridSizer(0, 4, 0, 0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("WYBIERZ USTAWIENIA"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    FlexGridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    FlexGridSizer3->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBitmap2 = new wxStaticBitmap(this, ID_STATICBITMAP2, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP2"));
    FlexGridSizer3->Add(StaticBitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBitmap3 = new wxStaticBitmap(this, ID_STATICBITMAP3, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP3"));
    FlexGridSizer3->Add(StaticBitmap3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer2 = new wxFlexGridSizer(0, 2, 0, 0);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Poziom trudności"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    FlexGridSizer2->Add(StaticText2, 1, wxALL|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 5);
    Choice1 = new wxChoice(this, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    Choice1->SetSelection( Choice1->Append(_("Łatwy")) );
    Choice1->Append(_("Średni"));
    Choice1->Append(_("Trudny"));
    Choice1->SetMinSize(wxSize(100,35));
    FlexGridSizer2->Add(Choice1, 1, wxALL|wxEXPAND, 5);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Liczba żyć"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    wxFont StaticText3Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    FlexGridSizer2->Add(StaticText3, 1, wxALL|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 5);
    Choice2 = new wxChoice(this, ID_CHOICE2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    Choice2->SetSelection( Choice2->Append(_("1")) );
    Choice2->Append(_("2"));
    Choice2->Append(_("3"));
    Choice2->SetMinSize(wxSize(100,35));
    FlexGridSizer2->Add(Choice2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Jak grać\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    wxFont StaticText4Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    FlexGridSizer2->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(this, ID_BUTTON3, _("Zasady"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button3->SetMinSize(wxSize(100,30));
    FlexGridSizer2->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxEXPAND, 5);
    Button1 = new wxButton(this, ID_BUTTON1, _("START"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetMinSize(wxSize(-1,50));
    Button1->SetBackgroundColour(wxColour(128,128,255));
    FlexGridSizer1->Add(Button1, 1, wxALL|wxEXPAND, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("MENU"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button2->SetMinSize(wxSize(-1,50));
    Button2->SetBackgroundColour(wxColour(128,128,255));
    FlexGridSizer1->Add(Button2, 1, wxALL|wxEXPAND, 5);
    SetSizer(FlexGridSizer1);
    Timer1.SetOwner(this, ID_TIMER1);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&seqDialog::PrzyciskZasady);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&seqDialog::PrzyciskStart);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&seqDialog::PrzyciskMenu);
    Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&seqDialog::OnTimer);
    //*)

    Button2->Show(false);
    serce = wxBitmap(wxImage("serce.png"));
    kolory[0] = wxColour(200, 150, 255); // jaśniejszy kolor początkowy
    kolory[1] = wxColour(171, 32, 253);  // kolor na który wyœeitlaj¹ siê pola
    kolory[2] = wxColour(255,0,0); // czerwony
    kolory[3] = wxColour(0,200,0); // zielony

    // utworzenie nowej gry;
    gra = nullptr;
    srand(time(0));

    //tworzenie nowego sizera na przechowywanie pol gry
    sizer = new wxFlexGridSizer(3, 3, 0, 0);

    // zmień rozmiar aplikacji
    UstawRozmiar(240,240);


    // tlo aplikacji na fioletoey
     backgroundColor = wxColour(230, 230, 250);

    // Ustawianie tła panelu
    SetBackgroundColour(backgroundColor);
    this->FlexGridSizer2 = FlexGridSizer2;

    SetIcon(wxICON(aaaa));
}

seqDialog::~seqDialog(){}

void seqDialog::PrzyciskStart(wxCommandEvent& event)
{
    // pobierz poziom trudnosci i liczbe zyc
    poziom_trudnosci = Choice1->GetCurrentSelection();
    zycia = Choice2->GetCurrentSelection()+1;

    // Wyczyszczenie wczeœniejszej gry
    if (gra != nullptr){
        delete gra;
        gra = nullptr;
    }

    // Przygotowanie nowej gry
    gra = new Sequence();
    gra->addElement();
    gra->set_rozmiar_kwadratu(poziom_trudnosci+3);
    gra->set_liczba_zyc(zycia);

    // ukrycie ustawien
    CzyMenu(false);

    // ustawienie rozmiaru sizera z polami do gry
    sizer->SetCols(gra->get_rozmiar_kwadratu());
    sizer->SetRows(gra->get_rozmiar_kwadratu());

    //tworzenie pol gry
    for (int i = 0; i < gra->get_rozmiar_kwadratu() * gra->get_rozmiar_kwadratu(); i++)
    {
        wxButton* nowe_pole = new wxButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxString::Format("ID_BUTTON%d", i));
        nowe_pole->SetSize(wxSize(100, 100));
        nowe_pole->Disable();
        sizer->Add(nowe_pole, 1, wxEXPAND | wxFIXED_MINSIZE, 5);
        Connect(nowe_pole->GetId(), wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&seqDialog::PrzyciskPole);

        pola.push_back(nowe_pole);
    }

    // zmiana id na numer każdego pola
    for(int i = 0; i<gra->get_rozmiar_kwadratu()*gra->get_rozmiar_kwadratu(); i++){
        id2nr[pola[i]->GetId()]=i;
    }

    // nadanie wszystkim polom koloru początkowego, wyłączenie ich
    StanPoczatkowyPola(pola, kolory[0], false);

    // dodanie nowego sizera do poprzednego
    if (!sizer_ustawiony)
        FlexGridSizer2->Add(sizer, 1, wxEXPAND);
    sizer_ustawiony= true;
    // szerokość i wysokość planszy w zależności od liczby przycisków
    int szerokosc = gra->get_rozmiar_kwadratu() * 100;
    int wysokosc = gra->get_rozmiar_kwadratu() * 100 + 120;

    // Wyœwietlanie numeru rund
    w.Clear();
    liczba_rund = 1;
    w<<"Runda ";
    w<<liczba_rund;
    StaticText1->SetLabel(w);

    // Dodanie serc w zależności od liczby życ
    if(zycia>=1){
        StaticBitmap1->SetBitmap(serce);
    }
    if(zycia>=2){
        StaticBitmap2->SetBitmap(serce);
    }
    if(zycia>=3){
        StaticBitmap3->SetBitmap(serce);
    }


    // Wyczyszczenie sekwencji któr¹ wprowadzi³ u¿ytkownik i wiadomoœci koñcowej
    userSeq.clear();
    w.Clear();

    //Podświetl kwadrat na chwile, ciągle wyłączonych
    StanPoczatkowyPola(pola, kolory[1], false);

    // Ustawienie timera do przywrócenia pierwotnego stanu po pewnym czasie
    wxTimer* timer = new wxTimer(this, wxID_ANY);
    timer->StartOnce(500);
    Connect(timer->GetId(), wxEVT_TIMER, wxTimerEventHandler(seqDialog::OnTimer));

    // zmień rozmiar aplikacji
    UstawRozmiar(szerokosc, wysokosc);
}

void seqDialog::PrzyciskMenu(wxCommandEvent& event)
{
    // Zwolnienie pamięci dla obiektu gry
    if (gra != nullptr){
        delete gra;
        gra = nullptr;
    }


    // Usunięcie przycisków z pola gry
    for(auto pole : pola){
        pole->Destroy();
    }
    pola.clear();
    // Ukrycie pola gry
    sizer->Clear();
    //FlexGridSizer2->Remove(6);



    // Pokaż ponownie elementy menu
    CzyMenu(true);

    // Resetuj serca
    StaticBitmap1->SetBitmap(wxNullBitmap);
    StaticBitmap2->SetBitmap(wxNullBitmap);
    StaticBitmap3->SetBitmap(wxNullBitmap);

    // zmien napis
    w.clear();
    w << "WYBIERZ USTAWIENIA";
    StaticText1->SetLabel(w);

    // Ustaw rozmiar okna dialogowego z powrotem na początkowy
    UstawRozmiar(240,240);
}

void seqDialog::PrzyciskPole(wxCommandEvent& event)
{
    // wprowadz nr pola, który został kliknięty
    int numer_pola = id2nr[event.GetId()];
    userSeq.push_back(numer_pola);

    // sprawdzanie sekwencji
    if (userSeq.size() <= gra->seq.size()) {
        // Jeœli nast¹pi³a pomy³ka
        int index = userSeq.size() - 1;
        if (userSeq[index] != gra->seq[index]) {
            // Uaktualnij liczbê ¿yæ
            gra->set_liczba_zyc(zycia--);
            //zmien kolor na czerwony
            StanPoczatkowyPola(pola, kolory[2], false);
            if (zycia > 0) {
                // U¿ytkownik wybra³ niepoprawny kwadrat, ale ma jeszcze ¿ycia
                if(zycia==2){
                    StaticBitmap1->SetBitmap(wxNullBitmap);
                }
                if (zycia==1){
                    StaticBitmap2->SetBitmap(wxNullBitmap);
                }
                Sleep(500);
                RepeatUserSequence();
            } else {
                StaticBitmap3->SetBitmap(wxNullBitmap);
                // Koniec gry, wyœwietl komunikat
                w.Clear();

                w << L"Przegrałeś Osiągnięto limit błędów. \nZakończyłeś na rundzie " << liczba_rund;
                wxMessageBox(w, wxString("Koniec gry"));
            }
        } else if (userSeq.size() == gra->seq.size()) {
            // Poprawna sekwencja
            // dodanie nowego elementu do sekwencji
            gra->addElement();

            // zmiana liczby rund
            w.Clear();
            liczba_rund++;
            w << "Runda " << liczba_rund;
            StaticText1->SetLabel(w);

            // Uruchom timer do podœwietlania sekwencji
            wxTimer* timer = new wxTimer(this, wxID_ANY);
            Connect(timer->GetId(), wxEVT_TIMER, wxTimerEventHandler(seqDialog::OnTimer));
            timer->SetClientData(reinterpret_cast<void*>(0));  // Zainicjowanie indeksu
            timer->Start(500, wxTIMER_ONE_SHOT);

            // Wyczyszczenie sekwencji wprowadzonej przez u¿ytkownika
            userSeq.clear();
            //zmien kolor na zielony
            StanPoczatkowyPola(pola, kolory[3], false);
        }
    }
}

void seqDialog::RepeatUserSequence()
{
    // Przywróæ pierwotny stan obrazków po zakoñczeniu sekwencji
    StanPoczatkowyPola(pola, kolory[0], false);

    // Ponownie podœwietl sekwencjê, na której zakoñczy³ u¿ytkownik
    wxTimer* timer = new wxTimer(this, wxID_ANY);
    Connect(timer->GetId(), wxEVT_TIMER, wxTimerEventHandler(seqDialog::OnTimer));
    timer->SetClientData(reinterpret_cast<void*>(0));  // Zainicjowanie indeksu
    timer->Start(500, wxTIMER_ONE_SHOT);

    // Wyczyszczenie sekwencji wprowadzonej przez u¿ytkownika
    userSeq.clear();
}

void seqDialog::OnTimer(wxTimerEvent& event)
{
    size_t index = reinterpret_cast<size_t>(event.GetTimer().GetClientData());
    if(gra!=nullptr){
        // Przywróæ pierwotny stan obrazków po zakoñczeniu sekwencji
        StanPoczatkowyPola(pola, kolory[0], false);
        if (index < gra->seq.size()) {
            int x = gra->seq[index];
            // Przywróæ pierwotny stan poprzedniego kwadratu
            if (index > 0) {
                int poprzedni = gra->seq[index - 1];
                pola[poprzedni]->SetBackgroundColour(kolory[0]);
                pola[poprzedni]->Refresh();
                pola[x]->Update();
                Sleep(500);
            }

            // Podœwietl aktualny kwadrat
            pola[x]->SetBackgroundColour(kolory[1]);
            pola[x]->Refresh();

            // Uruchom timer ponownie
            wxTimer* timer = new wxTimer(this, wxID_ANY);
            Connect(timer->GetId(), wxEVT_TIMER, wxTimerEventHandler(seqDialog::OnTimer));

            // Przeka¿ informacje o indeksie za pomoc¹ danych klienta
            timer->SetClientData(reinterpret_cast<void*>(index + 1));

            timer->Start(500, wxTIMER_ONE_SHOT);
        } else {
            // W³¹cz przyciski po zakoñczeniu operacji
            StanPoczatkowyPola(pola, kolory[0], true);
        }
    }
}

void seqDialog::PrzyciskZasady(wxCommandEvent& event)
{
    wxString zasady;
    zasady<<L"Test Sekwencji ocenia Twoją pamięć wzrokową i umiejętność powtarzania wzorców.\n\n";
    zasady<<L"Zadaniem jest powtórzenie sekwencji, którą zaprezentuje komputer. Sekwencje będą coraz dłuższe, gdy przechodzisz do kolejnych rund.\n\n";
    zasady<<L"Kliknij na pola w odpowiedniej kolejności, tak jak zostały przedstawione wcześniej. Upewnij się, że klikasz dokładnie w tej samej kolejności.\n\n";
    zasady<<L"Po powtórzeniu sekwencji, plansza zmieni kolor na zielony, jeśli odpowiedź jest poprawna, lub na czerwony, jeśli popełniono błąd.\n\n";
    zasady<<L"Zobaczysz również komunikat o wyniku i rundzie na górze ekranu.\n\n";
    zasady<<L"Postaraj się pamiętać jak najdłuższe sekwencje, aby uzyskać jak najwyższy wynik!\n\n";
    zasady<<L"Możesz wybrać jeden z pośród 3 poziomów, różniących się wielkością planszy.\n\n";
    zasady<<L"Zdecydować możesz też o ilości żyć, symbolizujących liczbę błędów, które możesz popełnić. Gdy ich zabraknie gra się skończy, a na ekranie pojawi się wynik.\n\n";
    zasady<<L"Kliknij przycisk 'START' i zacznij testować swoją pamięć!";
    wxMessageBox(zasady, wxString::FromUTF8("Zasady"));
}

void seqDialog::StanPoczatkowyPola(std::vector<wxButton*> pola, wxColour kolor, bool wlacz){
    for (auto pole : pola) {
        pole->SetBackgroundColour(kolor);
        pole->Enable(wlacz);
    }
}

void seqDialog::CzyMenu(bool tak){
    // Elementy menu
    StaticText2->Show(tak);
    StaticText3->Show(tak);
    StaticText4->Show(tak);
    Choice1->Show(tak);
    Choice2->Show(tak);
    Button1->Show(tak);
    Button3->Show(tak);

    // Przycisk menu
    Button2->Show(!tak);
}

void seqDialog::UstawRozmiar(int szerokosc, int wysokosc){
     // Aktualizacja rozmiaru panelu
    SetClientSize(wxSize(szerokosc, wysokosc));
    // Aktualizacja koloru tła panelu
    SetBackgroundColour(backgroundColor);
    // Ponowne ustawienie układu elementów
    Layout();
}
