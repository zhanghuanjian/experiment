
// CTest2-ShowNumber.h : CTest2-ShowNumber Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest2ShowNumberApp:
// �йش����ʵ�֣������ CTest2-ShowNumber.cpp
//

class CCTest2ShowNumberApp : public CWinApp
{
public:
	CCTest2ShowNumberApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest2ShowNumberApp theApp;
