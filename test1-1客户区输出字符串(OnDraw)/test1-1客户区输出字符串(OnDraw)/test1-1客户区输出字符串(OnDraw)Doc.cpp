
// test1-1�ͻ�������ַ���(OnDraw)Doc.cpp : Ctest11�ͻ�������ַ���OnDrawDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test1-1�ͻ�������ַ���(OnDraw).h"
#endif

#include "test1-1�ͻ�������ַ���(OnDraw)Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// Ctest11�ͻ�������ַ���OnDrawDoc

IMPLEMENT_DYNCREATE(Ctest11�ͻ�������ַ���OnDrawDoc, CDocument)

BEGIN_MESSAGE_MAP(Ctest11�ͻ�������ַ���OnDrawDoc, CDocument)
END_MESSAGE_MAP()


// Ctest11�ͻ�������ַ���OnDrawDoc ����/����

Ctest11�ͻ�������ַ���OnDrawDoc::Ctest11�ͻ�������ַ���OnDrawDoc()
{
	// TODO: �ڴ����һ���Թ������

}

Ctest11�ͻ�������ַ���OnDrawDoc::~Ctest11�ͻ�������ַ���OnDrawDoc()
{
}

BOOL Ctest11�ͻ�������ַ���OnDrawDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// Ctest11�ͻ�������ַ���OnDrawDoc ���л�

void Ctest11�ͻ�������ַ���OnDrawDoc::Serialize(CArchive& ar)
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
void Ctest11�ͻ�������ַ���OnDrawDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void Ctest11�ͻ�������ַ���OnDrawDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void Ctest11�ͻ�������ַ���OnDrawDoc::SetSearchContent(const CString& value)
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

// Ctest11�ͻ�������ַ���OnDrawDoc ���

#ifdef _DEBUG
void Ctest11�ͻ�������ַ���OnDrawDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void Ctest11�ͻ�������ַ���OnDrawDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Ctest11�ͻ�������ַ���OnDrawDoc ����
