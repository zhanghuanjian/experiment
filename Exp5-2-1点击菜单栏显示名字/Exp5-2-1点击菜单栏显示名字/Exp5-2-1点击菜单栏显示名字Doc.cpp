
// Exp5-2-1����˵�����ʾ����Doc.cpp : CExp521����˵�����ʾ����Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Exp5-2-1����˵�����ʾ����.h"
#endif

#include "Exp5-2-1����˵�����ʾ����Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CExp521����˵�����ʾ����Doc

IMPLEMENT_DYNCREATE(CExp521����˵�����ʾ����Doc, CDocument)

BEGIN_MESSAGE_MAP(CExp521����˵�����ʾ����Doc, CDocument)
END_MESSAGE_MAP()


// CExp521����˵�����ʾ����Doc ����/����

CExp521����˵�����ʾ����Doc::CExp521����˵�����ʾ����Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CExp521����˵�����ʾ����Doc::~CExp521����˵�����ʾ����Doc()
{
}

BOOL CExp521����˵�����ʾ����Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CExp521����˵�����ʾ����Doc ���л�

void CExp521����˵�����ʾ����Doc::Serialize(CArchive& ar)
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
void CExp521����˵�����ʾ����Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CExp521����˵�����ʾ����Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CExp521����˵�����ʾ����Doc::SetSearchContent(const CString& value)
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

// CExp521����˵�����ʾ����Doc ���

#ifdef _DEBUG
void CExp521����˵�����ʾ����Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CExp521����˵�����ʾ����Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CExp521����˵�����ʾ����Doc ����
