
// CTest3-1�ͻ��������Բ.h : CTest3-1�ͻ��������Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest31�ͻ��������ԲApp:
// �йش����ʵ�֣������ CTest3-1�ͻ��������Բ.cpp
//

class CCTest31�ͻ��������ԲApp : public CWinApp
{
public:
	CCTest31�ͻ��������ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest31�ͻ��������ԲApp theApp;
