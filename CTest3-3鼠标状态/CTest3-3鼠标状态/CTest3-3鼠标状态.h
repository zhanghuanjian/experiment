
// CTest3-3���״̬.h : CTest3-3���״̬ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest33���״̬App:
// �йش����ʵ�֣������ CTest3-3���״̬.cpp
//

class CCTest33���״̬App : public CWinApp
{
public:
	CCTest33���״̬App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest33���״̬App theApp;
