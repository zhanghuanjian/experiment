
// CTest3-1�ͻ��������ԲView.cpp : CCTest31�ͻ��������ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest3-1�ͻ��������Բ.h"
#endif

#include "CTest3-1�ͻ��������ԲDoc.h"
#include "CTest3-1�ͻ��������ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest31�ͻ��������ԲView

IMPLEMENT_DYNCREATE(CCTest31�ͻ��������ԲView, CView)

BEGIN_MESSAGE_MAP(CCTest31�ͻ��������ԲView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest31�ͻ��������ԲView ����/����

CCTest31�ͻ��������ԲView::CCTest31�ͻ��������ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest31�ͻ��������ԲView::~CCTest31�ͻ��������ԲView()
{
}

BOOL CCTest31�ͻ��������ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest31�ͻ��������ԲView ����

void CCTest31�ͻ��������ԲView::OnDraw(CDC* pDC)
{
	CCTest31�ͻ��������ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect ca;
	this->GetClientRect(&ca);
	pDC->Ellipse(ca);
}


// CCTest31�ͻ��������ԲView ���

#ifdef _DEBUG
void CCTest31�ͻ��������ԲView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest31�ͻ��������ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest31�ͻ��������ԲDoc* CCTest31�ͻ��������ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest31�ͻ��������ԲDoc)));
	return (CCTest31�ͻ��������ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest31�ͻ��������ԲView ��Ϣ�������


void CCTest31�ͻ��������ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	CRect ca;
	this->GetClientRect(&ca);//��ȡ�ͻ�����Ϣ
}
