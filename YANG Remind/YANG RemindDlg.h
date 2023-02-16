﻿
// YANG RemindDlg.h: 头文件
//

#pragma once


// CYANGRemindDlg 对话框
class CYANGRemindDlg : public CDialogEx
{
// 构造
public:
	CYANGRemindDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_YANG_REMIND_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	void TZ();
	DECLARE_MESSAGE_MAP()
public:
	CButton PowerBootButton;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton1();
	void ToTray();
	void DeleteTray();
	LRESULT OnShowtask(WPARAM wParam, LPARAM lParam);
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton8();
	CString UTF8ToUnicode(char* UTF8);
	void netlist();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedPowerboot();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
};
