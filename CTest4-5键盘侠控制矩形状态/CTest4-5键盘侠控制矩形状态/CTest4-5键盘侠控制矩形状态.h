
// CTest4-5���������ƾ���״̬.h : CTest4-5���������ƾ���״̬ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest45���������ƾ���״̬App:
// �йش����ʵ�֣������ CTest4-5���������ƾ���״̬.cpp
//

class CCTest45���������ƾ���״̬App : public CWinApp
{
public:
	CCTest45���������ƾ���״̬App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest45���������ƾ���״̬App theApp;
