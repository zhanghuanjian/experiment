
// Exp6-1������ʾjpg�ļ�Doc.cpp : CExp61������ʾjpg�ļ�Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Exp6-1������ʾjpg�ļ�.h"
#endif

#include "Exp6-1������ʾjpg�ļ�Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CExp61������ʾjpg�ļ�Doc

IMPLEMENT_DYNCREATE(CExp61������ʾjpg�ļ�Doc, CDocument)

BEGIN_MESSAGE_MAP(CExp61������ʾjpg�ļ�Doc, CDocument)
END_MESSAGE_MAP()


// CExp61������ʾjpg�ļ�Doc ����/����

CExp61������ʾjpg�ļ�Doc::CExp61������ʾjpg�ļ�Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CExp61������ʾjpg�ļ�Doc::~CExp61������ʾjpg�ļ�Doc()
{
}

BOOL CExp61������ʾjpg�ļ�Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CExp61������ʾjpg�ļ�Doc ���л�

void CExp61������ʾjpg�ļ�Doc::Serialize(CArchive& ar)
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
void CExp61������ʾjpg�ļ�Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CExp61������ʾjpg�ļ�Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CExp61������ʾjpg�ļ�Doc::SetSearchContent(const CString& value)
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

// CExp61������ʾjpg�ļ�Doc ���

#ifdef _DEBUG
void CExp61������ʾjpg�ļ�Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CExp61������ʾjpg�ļ�Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CExp61������ʾjpg�ļ�Doc ����
