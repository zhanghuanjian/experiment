
// CTest2-3��ʾ����.h : CTest2-3��ʾ���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest23��ʾ����App:
// �йش����ʵ�֣������ CTest2-3��ʾ����.cpp
//

class CCTest23��ʾ����App : public CWinApp
{
public:
	CCTest23��ʾ����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest23��ʾ����App theApp;
