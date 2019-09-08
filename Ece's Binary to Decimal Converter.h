
// Ece's Binary to Decimal Converter.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CEcesBinarytoDecimalConverterApp:
// See Ece's Binary to Decimal Converter.cpp for the implementation of this class
//

class CEcesBinarytoDecimalConverterApp : public CWinApp
{
public:
	CEcesBinarytoDecimalConverterApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CEcesBinarytoDecimalConverterApp theApp;