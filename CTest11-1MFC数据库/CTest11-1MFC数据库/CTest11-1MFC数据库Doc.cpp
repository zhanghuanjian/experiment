
// CTest11-1MFC���ݿ�Doc.cpp : CCTest111MFC���ݿ�Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest11-1MFC���ݿ�.h"
#endif

#include "CTest11-1MFC���ݿ�Set.h"
#include "CTest11-1MFC���ݿ�Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest111MFC���ݿ�Doc

IMPLEMENT_DYNCREATE(CCTest111MFC���ݿ�Doc, CDocument)

BEGIN_MESSAGE_MAP(CCTest111MFC���ݿ�Doc, CDocument)
END_MESSAGE_MAP()


// CCTest111MFC���ݿ�Doc ����/����

CCTest111MFC���ݿ�Doc::CCTest111MFC���ݿ�Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CCTest111MFC���ݿ�Doc::~CCTest111MFC���ݿ�Doc()
{
}

BOOL CCTest111MFC���ݿ�Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}



#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CCTest111MFC���ݿ�Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest111MFC���ݿ�Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest111MFC���ݿ�Doc::SetSearchContent(const CString& value)
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

// CCTest111MFC���ݿ�Doc ���

#ifdef _DEBUG
void CCTest111MFC���ݿ�Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest111MFC���ݿ�Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest111MFC���ݿ�Doc ����
