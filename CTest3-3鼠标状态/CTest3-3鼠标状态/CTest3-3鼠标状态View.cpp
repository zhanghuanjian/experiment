
// CTest3-3���״̬View.cpp : CCTest33���״̬View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest3-3���״̬.h"
#endif

#include "CTest3-3���״̬Doc.h"
#include "CTest3-3���״̬View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest33���״̬View

IMPLEMENT_DYNCREATE(CCTest33���״̬View, CView)

BEGIN_MESSAGE_MAP(CCTest33���״̬View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest33���״̬View ����/����

CCTest33���״̬View::CCTest33���״̬View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest33���״̬View::~CCTest33���״̬View()
{
}

BOOL CCTest33���״̬View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest33���״̬View ����

void CCTest33���״̬View::OnDraw(CDC* pDC)
{
	CCTest33���״̬Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(20, 20,_T( "��������ʵʱ״̬"));
}


// CCTest33���״̬View ���

#ifdef _DEBUG
void CCTest33���״̬View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest33���״̬View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest33���״̬Doc* CCTest33���״̬View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest33���״̬Doc)));
	return (CCTest33���״̬Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest33���״̬View ��Ϣ�������


void CCTest33���״̬View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	CString s1 = _T("�����������");
	CClientDC dc(this);
	dc.TextOutW(200, 150, s1);
}


void CCTest33���״̬View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonUp(nFlags, point);
	CString s2 = _T("�������̧��");
	CClientDC dc(this);
	dc.TextOutW(200, 180, s2);
}
