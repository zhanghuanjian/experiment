
// 04.14ʵ��-3.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy0414ʵ��3App: 
// �йش����ʵ�֣������ 04.14ʵ��-3.cpp
//

class CMy0414ʵ��3App : public CWinApp
{
public:
	CMy0414ʵ��3App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy0414ʵ��3App theApp;