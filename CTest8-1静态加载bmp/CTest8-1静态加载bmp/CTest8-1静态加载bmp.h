
// CTest8-1��̬����bmp.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCTest81��̬����bmpApp: 
// �йش����ʵ�֣������ CTest8-1��̬����bmp.cpp
//

class CCTest81��̬����bmpApp : public CWinApp
{
public:
	CCTest81��̬����bmpApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCTest81��̬����bmpApp theApp;