
// Exp5-2-1����˵�����ʾ����.h : Exp5-2-1����˵�����ʾ���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CExp521����˵�����ʾ����App:
// �йش����ʵ�֣������ Exp5-2-1����˵�����ʾ����.cpp
//

class CExp521����˵�����ʾ����App : public CWinApp
{
public:
	CExp521����˵�����ʾ����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CExp521����˵�����ʾ����App theApp;
