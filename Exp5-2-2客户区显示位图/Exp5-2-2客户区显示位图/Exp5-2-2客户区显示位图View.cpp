
// Exp5-2-2�ͻ�����ʾλͼView.cpp : CExp522�ͻ�����ʾλͼView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Exp5-2-2�ͻ�����ʾλͼ.h"
#endif

#include "Exp5-2-2�ͻ�����ʾλͼDoc.h"
#include "Exp5-2-2�ͻ�����ʾλͼView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExp522�ͻ�����ʾλͼView

IMPLEMENT_DYNCREATE(CExp522�ͻ�����ʾλͼView, CView)

BEGIN_MESSAGE_MAP(CExp522�ͻ�����ʾλͼView, CView)
END_MESSAGE_MAP()

// CExp522�ͻ�����ʾλͼView ����/����

CExp522�ͻ�����ʾλͼView::CExp522�ͻ�����ʾλͼView()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;  //��ʼ��
	m_Bitmap.LoadOEMBitmap(IDB_SHOWCAR);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;


}

CExp522�ͻ�����ʾλͼView::~CExp522�ͻ�����ʾλͼView()
{
}

BOOL CExp522�ͻ�����ʾλͼView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CExp522�ͻ�����ʾλͼView ����

void CExp522�ͻ�����ʾλͼView::OnDraw(CDC* pDC)
{
	CExp522�ͻ�����ʾλͼDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;    //����
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);

}


// CExp522�ͻ�����ʾλͼView ���

#ifdef _DEBUG
void CExp522�ͻ�����ʾλͼView::AssertValid() const
{
	CView::AssertValid();
}

void CExp522�ͻ�����ʾλͼView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExp522�ͻ�����ʾλͼDoc* CExp522�ͻ�����ʾλͼView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExp522�ͻ�����ʾλͼDoc)));
	return (CExp522�ͻ�����ʾλͼDoc*)m_pDocument;
}
#endif //_DEBUG


// CExp522�ͻ�����ʾλͼView ��Ϣ�������
