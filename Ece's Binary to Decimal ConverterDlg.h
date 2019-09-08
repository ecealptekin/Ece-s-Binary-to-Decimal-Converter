
// Ece's Binary to Decimal ConverterDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CEcesBinarytoDecimalConverterDlg dialog
class CEcesBinarytoDecimalConverterDlg : public CDialogEx
{
// Construction
public:
	CEcesBinarytoDecimalConverterDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_ECESBINARYTODECIMALCONVERTER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit input;
	CButton checkbox;
	CButton button1;
	CButton button0;
	CButton calculate;
	CButton clear;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnLbnSelchangeList1();
	CListBox output;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton2();
};
