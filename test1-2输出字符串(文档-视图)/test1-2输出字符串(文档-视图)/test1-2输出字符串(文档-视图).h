
// test1-2����ַ���(�ĵ�-��ͼ).h : test1-2����ַ���(�ĵ�-��ͼ) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Ctest12����ַ����ĵ���ͼApp:
// �йش����ʵ�֣������ test1-2����ַ���(�ĵ�-��ͼ).cpp
//

class Ctest12����ַ����ĵ���ͼApp : public CWinApp
{
public:
	Ctest12����ַ����ĵ���ͼApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest12����ַ����ĵ���ͼApp theApp;
