
// CTest3-2�������������ԲView.cpp : CCTest32�������������ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest3-2�������������Բ.h"
#endif

#include "CTest3-2�������������ԲDoc.h"
#include "CTest3-2�������������ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest32�������������ԲView

IMPLEMENT_DYNCREATE(CCTest32�������������ԲView, CView)

BEGIN_MESSAGE_MAP(CCTest32�������������ԲView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest32�������������ԲView ����/����

CCTest32�������������ԲView::CCTest32�������������ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest32�������������ԲView::~CCTest32�������������ԲView()
{
}

BOOL CCTest32�������������ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest32�������������ԲView ����

void CCTest32�������������ԲView::OnDraw(CDC* pDC)
{
	CCTest32�������������ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(200, 150, _T("��������������Բ"));
	for (int i = 0; i < pDoc->cr.GetSize(); i++)
	{
		pDC->Ellipse(pDoc->cr.GetAt(i));
	}

}


// CCTest32�������������ԲView ���

#ifdef _DEBUG
void CCTest32�������������ԲView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest32�������������ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest32�������������ԲDoc* CCTest32�������������ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest32�������������ԲDoc)));
	return (CCTest32�������������ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest32�������������ԲView ��Ϣ�������


void CCTest32�������������ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);

	int r = rand() % 50 + 5;
	int r1 = rand() % 50 + 5;
	CRect cr(point.x - r, point.y - r1, point.x + r, point.y + r1);

	CCTest32�������������ԲDoc* pDoc = GetDocument();
	pDoc->cr.Add(cr);
	this->Invalidate();
}
