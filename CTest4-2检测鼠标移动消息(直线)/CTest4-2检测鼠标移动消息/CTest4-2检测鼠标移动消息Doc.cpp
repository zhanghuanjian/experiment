
// CTest4-2�������ƶ���ϢDoc.cpp : CCTest42�������ƶ���ϢDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4-2�������ƶ���Ϣ.h"
#endif

#include "CTest4-2�������ƶ���ϢDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest42�������ƶ���ϢDoc

IMPLEMENT_DYNCREATE(CCTest42�������ƶ���ϢDoc, CDocument)

BEGIN_MESSAGE_MAP(CCTest42�������ƶ���ϢDoc, CDocument)
END_MESSAGE_MAP()


// CCTest42�������ƶ���ϢDoc ����/����

CCTest42�������ƶ���ϢDoc::CCTest42�������ƶ���ϢDoc()
{
	// TODO:  �ڴ����һ���Թ������

}

CCTest42�������ƶ���ϢDoc::~CCTest42�������ƶ���ϢDoc()
{
}

BOOL CCTest42�������ƶ���ϢDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO:  �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest42�������ƶ���ϢDoc ���л�

void CCTest42�������ƶ���ϢDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO:  �ڴ���Ӵ洢����
	}
	else
	{
		// TODO:  �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CCTest42�������ƶ���ϢDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest42�������ƶ���ϢDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest42�������ƶ���ϢDoc::SetSearchContent(const CString& value)
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

// CCTest42�������ƶ���ϢDoc ���

#ifdef _DEBUG
void CCTest42�������ƶ���ϢDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest42�������ƶ���ϢDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest42�������ƶ���ϢDoc ����
