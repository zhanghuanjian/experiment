
// CTest2-11�һ���ʾ��������Doc.cpp : CCTest211�һ���ʾ��������Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest2-11�һ���ʾ��������.h"
#endif

#include "CTest2-11�һ���ʾ��������Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest211�һ���ʾ��������Doc

IMPLEMENT_DYNCREATE(CCTest211�һ���ʾ��������Doc, CDocument)

BEGIN_MESSAGE_MAP(CCTest211�һ���ʾ��������Doc, CDocument)
END_MESSAGE_MAP()


// CCTest211�һ���ʾ��������Doc ����/����

CCTest211�һ���ʾ��������Doc::CCTest211�һ���ʾ��������Doc()
{
	// TODO: �ڴ����һ���Թ������
	count = 0;

}

CCTest211�һ���ʾ��������Doc::~CCTest211�һ���ʾ��������Doc()
{
}

BOOL CCTest211�һ���ʾ��������Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest211�һ���ʾ��������Doc ���л�

void CCTest211�һ���ʾ��������Doc::Serialize(CArchive& ar)
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
void CCTest211�һ���ʾ��������Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest211�һ���ʾ��������Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest211�һ���ʾ��������Doc::SetSearchContent(const CString& value)
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

// CCTest211�һ���ʾ��������Doc ���

#ifdef _DEBUG
void CCTest211�һ���ʾ��������Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest211�һ���ʾ��������Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest211�һ���ʾ��������Doc ����
