
// CTest4-2�������ƶ���ϢView.cpp : CCTest42�������ƶ���ϢView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4-2�������ƶ���Ϣ.h"
#endif

#include "CTest4-2�������ƶ���ϢDoc.h"
#include "CTest4-2�������ƶ���ϢView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest42�������ƶ���ϢView

IMPLEMENT_DYNCREATE(CCTest42�������ƶ���ϢView, CView)

BEGIN_MESSAGE_MAP(CCTest42�������ƶ���ϢView, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CCTest42�������ƶ���ϢView ����/����

CCTest42�������ƶ���ϢView::CCTest42�������ƶ���ϢView()
{
	// TODO:  �ڴ˴���ӹ������

}

CCTest42�������ƶ���ϢView::~CCTest42�������ƶ���ϢView()
{
}

BOOL CCTest42�������ƶ���ϢView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest42�������ƶ���ϢView ����

void CCTest42�������ƶ���ϢView::OnDraw(CDC* pDC)
{
	CCTest42�������ƶ���ϢDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���

	CPoint point(30, 30);
	pDC->MoveTo(point);
	pDC->LineTo(pDoc->m_point);
}


// CCTest42�������ƶ���ϢView ���

#ifdef _DEBUG
void CCTest42�������ƶ���ϢView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest42�������ƶ���ϢView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest42�������ƶ���ϢDoc* CCTest42�������ƶ���ϢView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest42�������ƶ���ϢDoc)));
	return (CCTest42�������ƶ���ϢDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest42�������ƶ���ϢView ��Ϣ�������


void CCTest42�������ƶ���ϢView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CCTest42�������ƶ���ϢDoc* pDoc = GetDocument();
	pDoc->m_point = point;
	InvalidateRect(NULL, FALSE);


	CView::OnMouseMove(nFlags, point);
}
