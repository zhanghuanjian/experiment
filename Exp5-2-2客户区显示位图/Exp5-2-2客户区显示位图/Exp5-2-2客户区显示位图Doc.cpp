
// Exp5-2-2�ͻ�����ʾλͼDoc.cpp : CExp522�ͻ�����ʾλͼDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Exp5-2-2�ͻ�����ʾλͼ.h"
#endif

#include "Exp5-2-2�ͻ�����ʾλͼDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CExp522�ͻ�����ʾλͼDoc

IMPLEMENT_DYNCREATE(CExp522�ͻ�����ʾλͼDoc, CDocument)

BEGIN_MESSAGE_MAP(CExp522�ͻ�����ʾλͼDoc, CDocument)
END_MESSAGE_MAP()


// CExp522�ͻ�����ʾλͼDoc ����/����

CExp522�ͻ�����ʾλͼDoc::CExp522�ͻ�����ʾλͼDoc()
{
	// TODO: �ڴ����һ���Թ������
	

}

CExp522�ͻ�����ʾλͼDoc::~CExp522�ͻ�����ʾλͼDoc()
{
}

BOOL CExp522�ͻ�����ʾλͼDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CExp522�ͻ�����ʾλͼDoc ���л�

void CExp522�ͻ�����ʾλͼDoc::Serialize(CArchive& ar)
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
void CExp522�ͻ�����ʾλͼDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CExp522�ͻ�����ʾλͼDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CExp522�ͻ�����ʾλͼDoc::SetSearchContent(const CString& value)
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

// CExp522�ͻ�����ʾλͼDoc ���

#ifdef _DEBUG
void CExp522�ͻ�����ʾλͼDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CExp522�ͻ�����ʾλͼDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CExp522�ͻ�����ʾλͼDoc ����
