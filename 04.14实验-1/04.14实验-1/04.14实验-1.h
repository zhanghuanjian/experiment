
// 04.14ʵ��-1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy0414ʵ��1App: 
// �йش����ʵ�֣������ 04.14ʵ��-1.cpp
//

class CMy0414ʵ��1App : public CWinApp
{
public:
	CMy0414ʵ��1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy0414ʵ��1App theApp;