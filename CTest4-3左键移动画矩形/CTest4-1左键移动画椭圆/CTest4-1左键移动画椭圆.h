
// CTest4-1����ƶ�����Բ.h : CTest4-1����ƶ�����Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest41����ƶ�����ԲApp:
// �йش����ʵ�֣������ CTest4-1����ƶ�����Բ.cpp
//

class CCTest41����ƶ�����ԲApp : public CWinApp
{
public:
	CCTest41����ƶ�����ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest41����ƶ�����ԲApp theApp;
