
// CTest4-4������ƶ�����.h : CTest4-4������ƶ����� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest44������ƶ�����App:
// �йش����ʵ�֣������ CTest4-4������ƶ�����.cpp
//

class CCTest44������ƶ�����App : public CWinApp
{
public:
	CCTest44������ƶ�����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest44������ƶ�����App theApp;
