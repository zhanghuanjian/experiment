
// Exp5-1�����˵��ڿͻ�����Բ.h : Exp5-1�����˵��ڿͻ�����Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CExp51�����˵��ڿͻ�����ԲApp:
// �йش����ʵ�֣������ Exp5-1�����˵��ڿͻ�����Բ.cpp
//

class CExp51�����˵��ڿͻ�����ԲApp : public CWinApp
{
public:
	CExp51�����˵��ڿͻ�����ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CExp51�����˵��ڿͻ�����ԲApp theApp;
