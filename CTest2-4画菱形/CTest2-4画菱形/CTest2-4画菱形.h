
// CTest2-4������.h : CTest2-4������ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest24������App:
// �йش����ʵ�֣������ CTest2-4������.cpp
//

class CCTest24������App : public CWinApp
{
public:
	CCTest24������App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest24������App theApp;
