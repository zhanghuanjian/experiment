
// CTest9-3��̬����(����).h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCTest93��̬���ؾ���App: 
// �йش����ʵ�֣������ CTest9-3��̬����(����).cpp
//

class CCTest93��̬���ؾ���App : public CWinApp
{
public:
	CCTest93��̬���ؾ���App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCTest93��̬���ؾ���App theApp;