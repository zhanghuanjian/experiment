
// Ctest3-5���������.h : Ctest3-5��������� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCtest35���������App:
// �йش����ʵ�֣������ Ctest3-5���������.cpp
//

class CCtest35���������App : public CWinApp
{
public:
	CCtest35���������App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCtest35���������App theApp;
