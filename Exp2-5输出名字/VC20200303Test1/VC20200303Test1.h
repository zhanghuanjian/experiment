
// VC20200303Test1.h : VC20200303Test1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CVC20200303Test1App:
// �йش����ʵ�֣������ VC20200303Test1.cpp
//

class CVC20200303Test1App : public CWinApp
{
public:
	CVC20200303Test1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVC20200303Test1App theApp;
