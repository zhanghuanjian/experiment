
// CTest2-11�һ���ʾ��������.h : CTest2-11�һ���ʾ�������� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest211�һ���ʾ��������App:
// �йش����ʵ�֣������ CTest2-11�һ���ʾ��������.cpp
//

class CCTest211�һ���ʾ��������App : public CWinApp
{
public:
	CCTest211�һ���ʾ��������App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest211�һ���ʾ��������App theApp;
