
// test1-1�ͻ�������ַ���(OnDraw).h : test1-1�ͻ�������ַ���(OnDraw) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Ctest11�ͻ�������ַ���OnDrawApp:
// �йش����ʵ�֣������ test1-1�ͻ�������ַ���(OnDraw).cpp
//

class Ctest11�ͻ�������ַ���OnDrawApp : public CWinApp
{
public:
	Ctest11�ͻ�������ַ���OnDrawApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest11�ͻ�������ַ���OnDrawApp theApp;
