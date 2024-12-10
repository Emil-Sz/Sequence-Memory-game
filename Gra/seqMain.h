/***************************************************************
 * Name:      seqMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2024-01-26
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef SEQMAIN_H
#define SEQMAIN_H

//(*Headers(seqDialog)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/timer.h>
//*)

#include <vector>
#include "seq.h"
#include <map>

class seqDialog: public wxDialog
{
    public:

        seqDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~seqDialog();
        void RepeatUserSequence();
        void StanPoczatkowyPola(std::vector<wxButton*> pola, wxColour kolor, bool wlacz);
        void CzyMenu(bool tak);
        void UstawRozmiar(int szerokosc, int wysokosc);

    private:

        //(*Handlers(seqDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void PrzyciskStart(wxCommandEvent& event);
        void PrzyciskPole(wxCommandEvent& event);
        void PrzyciskMenu(wxCommandEvent& event);
        void OnTimer1Trigger(wxTimerEvent& event);
        void OnTimes(wxTimerEvent& event);
        void OnTimer(wxTimerEvent& event);
        void PrzyciskZasady(wxCommandEvent& event);
        //*)

        //(*Identifiers(seqDialog)
        static const long ID_STATICTEXT1;
        static const long ID_STATICBITMAP1;
        static const long ID_STATICBITMAP2;
        static const long ID_STATICBITMAP3;
        static const long ID_STATICTEXT2;
        static const long ID_CHOICE1;
        static const long ID_STATICTEXT3;
        static const long ID_CHOICE2;
        static const long ID_STATICTEXT4;
        static const long ID_BUTTON3;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_TIMER1;
        //*)

        //(*Declarations(seqDialog)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxChoice* Choice1;
        wxChoice* Choice2;
        wxStaticBitmap* StaticBitmap1;
        wxStaticBitmap* StaticBitmap2;
        wxStaticBitmap* StaticBitmap3;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxTimer Timer1;
        //*)

        DECLARE_EVENT_TABLE()

        wxFlexGridSizer* FlexGridSizer2;

        std::vector<wxButton*> pola;
        int liczba_pol;
        std::map<int,int> id2nr;
        // zdjêcie serca
        wxBitmap serce;
        //tablica u¿ywanych kolorów
        wxColour kolory[4];
        // tworzenie nowej gry
        Sequence * gra;
        // przechowywanie sekwencji uzytkownika
        vector<int> userSeq;
        // przechowywanie liczby rund
        int liczba_rund = 1;
        // przechowywanie wiadomoœci do uzytkownika
        wxString w;
        int zycia;
        int poziom_trudnosci;

        wxFlexGridSizer* sizer;
        wxColour backgroundColor;
        bool sizer_ustawiony=false;
};

#endif // SEQMAIN_H
