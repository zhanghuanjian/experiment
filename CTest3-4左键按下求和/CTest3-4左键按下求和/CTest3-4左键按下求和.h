
// CTest3-4����������.h : CTest3-4���������� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest34����������App:
// �йش����ʵ�֣������ CTest3-4����������.cpp
//

class CCTest34����������App : public CWinApp
{
public:
	CCTest34����������App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest34����������App theApp;
