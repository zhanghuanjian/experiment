
// 04.14ʵ��-2.h : 04.14ʵ��-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0414ʵ��2App:
// �йش����ʵ�֣������ 04.14ʵ��-2.cpp
//

class CMy0414ʵ��2App : public CWinApp
{
public:
	CMy0414ʵ��2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0414ʵ��2App theApp;
