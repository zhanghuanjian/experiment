
// CTest2-7�ػ��������Բ.h : CTest2-7�ػ��������Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest27�ػ��������ԲApp:
// �йش����ʵ�֣������ CTest2-7�ػ��������Բ.cpp
//

class CCTest27�ػ��������ԲApp : public CWinApp
{
public:
	CCTest27�ػ��������ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest27�ػ��������ԲApp theApp;
