
// Ctest3-5���������View.cpp : CCtest35���������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Ctest3-5���������.h"
#endif

#include "Ctest3-5���������Doc.h"
#include "Ctest3-5���������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCtest35���������View

IMPLEMENT_DYNCREATE(CCtest35���������View, CView)

BEGIN_MESSAGE_MAP(CCtest35���������View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCtest35���������View ����/����

CCtest35���������View::CCtest35���������View()
{
	// TODO: �ڴ˴���ӹ������

}

CCtest35���������View::~CCtest35���������View()
{
}

BOOL CCtest35���������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCtest35���������View ����

void CCtest35���������View::OnDraw(CDC* pDC)
{
	CCtest35���������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->A);
	pDC->Rectangle(pDoc->B);
	pDC->Rectangle(pDoc->C);

}



// CCtest35���������View ���

#ifdef _DEBUG
void CCtest35���������View::AssertValid() const
{
	CView::AssertValid();
}

void CCtest35���������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCtest35���������Doc* CCtest35���������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCtest35���������Doc)));
	return (CCtest35���������Doc*)m_pDocument;
}
#endif //_DEBUG


// CCtest35���������View ��Ϣ�������


void CCtest35���������View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s1, s2, s;

	CCtest35���������Doc* pDoc = GetDocument();

	int x = rand() % 100 + 5;

	CClientDC dc(this);

	if (point.x>50 && point.x<200 && point.y>100 && point.y<400)
	{
		pDoc->a = x;
		s1.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s1);
	}
	else if (point.x>250 && point.x<500 && point.y>100 && point.y<400)
	{
		pDoc->b = x;
		s2.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, s2);
	}
	else if (point.x>550 && point.x<700 && point.y>100 && point.y<400)
	{
		s.Format(_T("%d"), pDoc->a+pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	else
	{
		s = "�����Ч";
		dc.TextOutW(point.x, point.y, s);

	}

	CView::OnLButtonDown(nFlags, point);

}
