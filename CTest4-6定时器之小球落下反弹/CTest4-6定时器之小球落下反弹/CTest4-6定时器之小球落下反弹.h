
// CTest4-6��ʱ��֮С�����·���.h : CTest4-6��ʱ��֮С�����·��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest46��ʱ��֮С�����·���App:
// �йش����ʵ�֣������ CTest4-6��ʱ��֮С�����·���.cpp
//

class CCTest46��ʱ��֮С�����·���App : public CWinApp
{
public:
	CCTest46��ʱ��֮С�����·���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest46��ʱ��֮С�����·���App theApp;
