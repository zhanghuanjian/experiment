
// CTest4-6��ʱ��֮С�����·���Doc.cpp : CCTest46��ʱ��֮С�����·���Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4-6��ʱ��֮С�����·���.h"
#endif

#include "CTest4-6��ʱ��֮С�����·���Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest46��ʱ��֮С�����·���Doc

IMPLEMENT_DYNCREATE(CCTest46��ʱ��֮С�����·���Doc, CDocument)

BEGIN_MESSAGE_MAP(CCTest46��ʱ��֮С�����·���Doc, CDocument)
END_MESSAGE_MAP()


// CCTest46��ʱ��֮С�����·���Doc ����/����

CCTest46��ʱ��֮С�����·���Doc::CCTest46��ʱ��֮С�����·���Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CCTest46��ʱ��֮С�����·���Doc::~CCTest46��ʱ��֮С�����·���Doc()
{
}

BOOL CCTest46��ʱ��֮С�����·���Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest46��ʱ��֮С�����·���Doc ���л�

void CCTest46��ʱ��֮С�����·���Doc::Serialize(CArchive& ar)
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
void CCTest46��ʱ��֮С�����·���Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest46��ʱ��֮С�����·���Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest46��ʱ��֮С�����·���Doc::SetSearchContent(const CString& value)
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

// CCTest46��ʱ��֮С�����·���Doc ���

#ifdef _DEBUG
void CCTest46��ʱ��֮С�����·���Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest46��ʱ��֮С�����·���Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest46��ʱ��֮С�����·���Doc ����
