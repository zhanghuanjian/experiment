
// CTest8-2��̬����ͼ��.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCTest82��̬����ͼ��App: 
// �йش����ʵ�֣������ CTest8-2��̬����ͼ��.cpp
//

class CCTest82��̬����ͼ��App : public CWinApp
{
public:
	CCTest82��̬����ͼ��App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCTest82��̬����ͼ��App theApp;