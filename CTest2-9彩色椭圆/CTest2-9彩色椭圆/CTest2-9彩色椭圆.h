
// CTest2-9��ɫ��Բ.h : CTest2-9��ɫ��Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest29��ɫ��ԲApp:
// �йش����ʵ�֣������ CTest2-9��ɫ��Բ.cpp
//

class CCTest29��ɫ��ԲApp : public CWinApp
{
public:
	CCTest29��ɫ��ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest29��ɫ��ԲApp theApp;
