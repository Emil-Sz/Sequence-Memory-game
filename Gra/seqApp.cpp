/***************************************************************
 * Name:      seqApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2024-01-26
 * Copyright:  ()
 * License:
 **************************************************************/

#include "seqApp.h"

//(*AppHeaders
#include "seqMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(seqApp);

bool seqApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	seqDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
