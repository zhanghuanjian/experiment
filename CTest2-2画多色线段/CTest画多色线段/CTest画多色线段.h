
// CTest����ɫ�߶�.h : CTest����ɫ�߶� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest����ɫ�߶�App:
// �йش����ʵ�֣������ CTest����ɫ�߶�.cpp
//

class CCTest����ɫ�߶�App : public CWinApp
{
public:
	CCTest����ɫ�߶�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest����ɫ�߶�App theApp;
