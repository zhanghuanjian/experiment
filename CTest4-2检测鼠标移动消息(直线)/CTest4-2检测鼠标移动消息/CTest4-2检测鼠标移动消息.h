
// CTest4-2�������ƶ���Ϣ.h : CTest4-2�������ƶ���Ϣ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest42�������ƶ���ϢApp:
// �йش����ʵ�֣������ CTest4-2�������ƶ���Ϣ.cpp
//

class CCTest42�������ƶ���ϢApp : public CWinApp
{
public:
	CCTest42�������ƶ���ϢApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest42�������ƶ���ϢApp theApp;
