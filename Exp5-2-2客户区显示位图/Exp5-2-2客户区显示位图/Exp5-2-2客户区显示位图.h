
// Exp5-2-2�ͻ�����ʾλͼ.h : Exp5-2-2�ͻ�����ʾλͼ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CExp522�ͻ�����ʾλͼApp:
// �йش����ʵ�֣������ Exp5-2-2�ͻ�����ʾλͼ.cpp
//

class CExp522�ͻ�����ʾλͼApp : public CWinApp
{
public:
	CExp522�ͻ�����ʾλͼApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CExp522�ͻ�����ʾλͼApp theApp;
