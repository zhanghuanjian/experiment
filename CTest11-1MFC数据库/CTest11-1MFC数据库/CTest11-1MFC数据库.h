
// CTest11-1MFC���ݿ�.h : CTest11-1MFC���ݿ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest111MFC���ݿ�App:
// �йش����ʵ�֣������ CTest11-1MFC���ݿ�.cpp
//

class CCTest111MFC���ݿ�App : public CWinApp
{
public:
	CCTest111MFC���ݿ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest111MFC���ݿ�App theApp;
