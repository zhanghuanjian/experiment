
// CTest4-5���������ƾ���״̬Doc.cpp : CCTest45���������ƾ���״̬Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4-5���������ƾ���״̬.h"
#endif

#include "CTest4-5���������ƾ���״̬Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest45���������ƾ���״̬Doc

IMPLEMENT_DYNCREATE(CCTest45���������ƾ���״̬Doc, CDocument)

BEGIN_MESSAGE_MAP(CCTest45���������ƾ���״̬Doc, CDocument)
END_MESSAGE_MAP()


// CCTest45���������ƾ���״̬Doc ����/����

CCTest45���������ƾ���״̬Doc::CCTest45���������ƾ���״̬Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CCTest45���������ƾ���״̬Doc::~CCTest45���������ƾ���״̬Doc()
{
}

BOOL CCTest45���������ƾ���״̬Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest45���������ƾ���״̬Doc ���л�

void CCTest45���������ƾ���״̬Doc::Serialize(CArchive& ar)
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
void CCTest45���������ƾ���״̬Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest45���������ƾ���״̬Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest45���������ƾ���״̬Doc::SetSearchContent(const CString& value)
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

// CCTest45���������ƾ���״̬Doc ���

#ifdef _DEBUG
void CCTest45���������ƾ���״̬Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest45���������ƾ���״̬Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest45���������ƾ���״̬Doc ����
