
// CTest3-2�������������Բ.h : CTest3-2�������������Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest32�������������ԲApp:
// �йش����ʵ�֣������ CTest3-2�������������Բ.cpp
//

class CCTest32�������������ԲApp : public CWinApp
{
public:
	CCTest32�������������ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest32�������������ԲApp theApp;
