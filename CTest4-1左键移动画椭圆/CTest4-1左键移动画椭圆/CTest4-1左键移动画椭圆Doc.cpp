
// CTest4-1����ƶ�����ԲDoc.cpp : CCTest41����ƶ�����ԲDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4-1����ƶ�����Բ.h"
#endif

#include "CTest4-1����ƶ�����ԲDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest41����ƶ�����ԲDoc

IMPLEMENT_DYNCREATE(CCTest41����ƶ�����ԲDoc, CDocument)

BEGIN_MESSAGE_MAP(CCTest41����ƶ�����ԲDoc, CDocument)
END_MESSAGE_MAP()


// CCTest41����ƶ�����ԲDoc ����/����

CCTest41����ƶ�����ԲDoc::CCTest41����ƶ�����ԲDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CCTest41����ƶ�����ԲDoc::~CCTest41����ƶ�����ԲDoc()
{
}

BOOL CCTest41����ƶ�����ԲDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest41����ƶ�����ԲDoc ���л�

void CCTest41����ƶ�����ԲDoc::Serialize(CArchive& ar)
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
void CCTest41����ƶ�����ԲDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest41����ƶ�����ԲDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest41����ƶ�����ԲDoc::SetSearchContent(const CString& value)
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

// CCTest41����ƶ�����ԲDoc ���

#ifdef _DEBUG
void CCTest41����ƶ�����ԲDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest41����ƶ�����ԲDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest41����ƶ�����ԲDoc ����
