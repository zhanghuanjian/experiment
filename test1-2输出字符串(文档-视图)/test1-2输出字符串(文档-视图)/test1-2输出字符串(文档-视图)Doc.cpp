
// test1-2����ַ���(�ĵ�-��ͼ)Doc.cpp : Ctest12����ַ����ĵ���ͼDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test1-2����ַ���(�ĵ�-��ͼ).h"
#endif

#include "test1-2����ַ���(�ĵ�-��ͼ)Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// Ctest12����ַ����ĵ���ͼDoc

IMPLEMENT_DYNCREATE(Ctest12����ַ����ĵ���ͼDoc, CDocument)

BEGIN_MESSAGE_MAP(Ctest12����ַ����ĵ���ͼDoc, CDocument)
END_MESSAGE_MAP()


// Ctest12����ַ����ĵ���ͼDoc ����/����

Ctest12����ַ����ĵ���ͼDoc::Ctest12����ַ����ĵ���ͼDoc()
{
	// TODO: �ڴ����һ���Թ������
	s = _T("hello world!");

}

Ctest12����ַ����ĵ���ͼDoc::~Ctest12����ַ����ĵ���ͼDoc()
{
}

BOOL Ctest12����ַ����ĵ���ͼDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// Ctest12����ַ����ĵ���ͼDoc ���л�

void Ctest12����ַ����ĵ���ͼDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void Ctest12����ַ����ĵ���ͼDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void Ctest12����ַ����ĵ���ͼDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void Ctest12����ַ����ĵ���ͼDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// Ctest12����ַ����ĵ���ͼDoc ���

#ifdef _DEBUG
void Ctest12����ַ����ĵ���ͼDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void Ctest12����ַ����ĵ���ͼDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Ctest12����ַ����ĵ���ͼDoc ����
