
// CTest2-8��Բ.h : CTest2-8��Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest28��ԲApp:
// �йش����ʵ�֣������ CTest2-8��Բ.cpp
//

class CCTest28��ԲApp : public CWinApp
{
public:
	CCTest28��ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest28��ԲApp theApp;
