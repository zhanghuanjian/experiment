
// Exp5-1�����˵��ڿͻ�����ԲDoc.cpp : CExp51�����˵��ڿͻ�����ԲDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Exp5-1�����˵��ڿͻ�����Բ.h"
#endif

#include "Exp5-1�����˵��ڿͻ�����ԲDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CExp51�����˵��ڿͻ�����ԲDoc

IMPLEMENT_DYNCREATE(CExp51�����˵��ڿͻ�����ԲDoc, CDocument)

BEGIN_MESSAGE_MAP(CExp51�����˵��ڿͻ�����ԲDoc, CDocument)
END_MESSAGE_MAP()


// CExp51�����˵��ڿͻ�����ԲDoc ����/����

CExp51�����˵��ڿͻ�����ԲDoc::CExp51�����˵��ڿͻ�����ԲDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CExp51�����˵��ڿͻ�����ԲDoc::~CExp51�����˵��ڿͻ�����ԲDoc()
{
}

BOOL CExp51�����˵��ڿͻ�����ԲDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CExp51�����˵��ڿͻ�����ԲDoc ���л�

void CExp51�����˵��ڿͻ�����ԲDoc::Serialize(CArchive& ar)
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
void CExp51�����˵��ڿͻ�����ԲDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CExp51�����˵��ڿͻ�����ԲDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CExp51�����˵��ڿͻ�����ԲDoc::SetSearchContent(const CString& value)
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

// CExp51�����˵��ڿͻ�����ԲDoc ���

#ifdef _DEBUG
void CExp51�����˵��ڿͻ�����ԲDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CExp51�����˵��ڿͻ�����ԲDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CExp51�����˵��ڿͻ�����ԲDoc ����
