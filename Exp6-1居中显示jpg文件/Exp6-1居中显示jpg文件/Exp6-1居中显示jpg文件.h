
// Exp6-1������ʾjpg�ļ�.h : Exp6-1������ʾjpg�ļ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CExp61������ʾjpg�ļ�App:
// �йش����ʵ�֣������ Exp6-1������ʾjpg�ļ�.cpp
//

class CExp61������ʾjpg�ļ�App : public CWinApp
{
public:
	CExp61������ʾjpg�ļ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CExp61������ʾjpg�ļ�App theApp;
