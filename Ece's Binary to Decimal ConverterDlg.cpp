
// Ece's Binary to Decimal ConverterDlg.cpp : implementation file
//Ece Alptekin
//24156
//Homework 8 – Binary to Decimal Converter with GUI

#include "stdafx.h"
#include "Ece's Binary to Decimal Converter.h"
#include "Ece's Binary to Decimal ConverterDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CEcesBinarytoDecimalConverterDlg dialog



CEcesBinarytoDecimalConverterDlg::CEcesBinarytoDecimalConverterDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CEcesBinarytoDecimalConverterDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEcesBinarytoDecimalConverterDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, input);
	DDX_Control(pDX, IDC_CHECK1, checkbox);
	DDX_Control(pDX, IDC_BUTTON1, button1);
	DDX_Control(pDX, IDC_BUTTON3, button0);
	DDX_Control(pDX, IDC_BUTTON2, calculate);
	DDX_Control(pDX, IDC_BUTTON4, clear);
	DDX_Control(pDX, IDC_LIST1, output);
}

BEGIN_MESSAGE_MAP(CEcesBinarytoDecimalConverterDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CEcesBinarytoDecimalConverterDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_CHECK1, &CEcesBinarytoDecimalConverterDlg::OnBnClickedCheck1)
	ON_LBN_SELCHANGE(IDC_LIST1, &CEcesBinarytoDecimalConverterDlg::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON3, &CEcesBinarytoDecimalConverterDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CEcesBinarytoDecimalConverterDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON2, &CEcesBinarytoDecimalConverterDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CEcesBinarytoDecimalConverterDlg message handlers

BOOL CEcesBinarytoDecimalConverterDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CEcesBinarytoDecimalConverterDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CEcesBinarytoDecimalConverterDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CEcesBinarytoDecimalConverterDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CEcesBinarytoDecimalConverterDlg::OnBnClickedButton1() //button: 1
{
	// TODO: Add your control notification handler code here
	CString num, content;
	input.GetWindowTextW(content);
	num.Format(_T("%d"), 1);
	content += num;
	input.SetWindowTextW(content);
}

void CEcesBinarytoDecimalConverterDlg::OnBnClickedCheck1() //checkbox-buttonsonly
{
	// TODO: Add your control notification handler code here
	if(checkbox.GetCheck())
	{
		input.SetReadOnly(true);
	}
	else
	{
		input.SetReadOnly(false);
	}
}

void CEcesBinarytoDecimalConverterDlg::OnLbnSelchangeList1() //output 
{
	// TODO: Add your control notification handler code here
	
}

void CEcesBinarytoDecimalConverterDlg::OnBnClickedButton3() //button: 0
{
	// TODO: Add your control notification handler code here
	CString num, content;
	input.GetWindowTextW(content);
	num.Format(_T("%d"), 0);
	content += num;
	input.SetWindowTextW(content);
}

void CEcesBinarytoDecimalConverterDlg::OnBnClickedButton4() //button: clear
{
	// TODO: Add your control notification handler code here
	CString temp;
	temp = "";
	input.SetWindowTextW(temp);
} 

void CEcesBinarytoDecimalConverterDlg::OnBnClickedButton2() //button: calculate
{
	// TODO: Add your control notification handler code here
	bool isValid = true;
	CString input1,result;
	input.GetWindowTextW(input1); //read input from the input box

	if(input1.GetLength() < 2) //smaller than 2-bits
	{
		result = _T("Please insert minimum of 2 bits in the input box        ");
		output.AddString(result);
	}

	else if(input1.GetLength() > 32) //bigger than 32-bits
	{
		result = _T("Please insert maximum of 32 bits in the input box        ");
		output.AddString(result);
	}

	else
	{

	for(int i=0; i<input1.GetLength()-1; i++)
	{
		char a;
		a = input1[i];
		if(a != '1' && a != '0')
		{
			isValid = false; //it means that it contains an illegal character
		}
	}

	if(!isValid)
	{
		result = _T("You have entered an illegal character        ");
		output.AddString(result);
	}

	else
	{
		char sign = input1[0]; //store the Most Significiant Bit
	    CString in = input1;
		
		if(sign == '1') //convert negative to positive in 2's complement
		{
			int j = input1.GetLength()-1;
			CString line;

			while(input1[j] != '1')
			{
				line = input1[j] + line;
				j--;
			}

			if(input1[j] == '1')
			{
			line = input1[j] + line;
			j--;
			}
		     
			while(j >= 0)
			{
				if(input1[j] == '0')
				{
					line = '1' + line;
				}
				else if(input1[j] == '1')
				{
					line = '0' + line;
				}
				j--;
			}
			input1 = line; //positive binary representation of the corresponding negative binary number
		}
		
		int num;
		num = _ttof(input1);

		int rem, dec = 0, base = 1;
        while (num > 0)
        { 
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
        }

		if(sign == '0')
		{
		CString format,format2;
		format.Format(_T("%d"),dec);
		result = _T("The number ") + in + _T(" in binary is ") + format + _T(" in decimal           ");
		output.AddString(result);
		}

		else if(sign == '1')
		{
		dec = -dec; //since it is negative because of the MSB
		CString format;
		format.Format(_T("%d"),dec);
		result = _T("The number ") + in + _T(" in binary is ") + format + _T(" in decimal           ");
		output.AddString(result);
		}
	}
}
	CDC *pDC = GetDC(); 
	CFont * pOldFont = pDC->SelectObject(GetFont());
	CSize cz;
	cz = pDC->GetTextExtent(result);
	int length = cz.cx;
	output.SetHorizontalExtent(length); //horizontally scrollable
}
