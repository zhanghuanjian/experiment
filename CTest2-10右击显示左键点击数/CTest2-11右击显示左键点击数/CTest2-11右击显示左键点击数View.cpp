
// CTest2-11�һ���ʾ��������View.cpp : CCTest211�һ���ʾ��������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest2-11�һ���ʾ��������.h"
#endif

#include "CTest2-11�һ���ʾ��������Doc.h"
#include "CTest2-11�һ���ʾ��������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest211�һ���ʾ��������View

IMPLEMENT_DYNCREATE(CCTest211�һ���ʾ��������View, CView)

BEGIN_MESSAGE_MAP(CCTest211�һ���ʾ��������View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest211�һ���ʾ��������View ����/����

CCTest211�һ���ʾ��������View::CCTest211�һ���ʾ��������View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest211�һ���ʾ��������View::~CCTest211�һ���ʾ��������View()
{
}

BOOL CCTest211�һ���ʾ��������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest211�һ���ʾ��������View ����

void CCTest211�һ���ʾ��������View::OnDraw(CDC* /*pDC*/)
{
	CCTest211�һ���ʾ��������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest211�һ���ʾ��������View ���

#ifdef _DEBUG
void CCTest211�һ���ʾ��������View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest211�һ���ʾ��������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest211�һ���ʾ��������Doc* CCTest211�һ���ʾ��������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest211�һ���ʾ��������Doc)));
	return (CCTest211�һ���ʾ��������Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest211�һ���ʾ��������View ��Ϣ�������


void CCTest211�һ���ʾ��������View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	CCTest211�һ���ʾ��������Doc* pDoc = GetDocument();
	s.Format(_T("%d"), pDoc->count++);
}


void CCTest211�һ���ʾ��������View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnRButtonDown(nFlags, point);
	CClientDC dc(this);
	dc.TextOutW(200, 150, s);
}
