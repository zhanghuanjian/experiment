
// CTest4-4������ƶ�����View.cpp : CCTest44������ƶ�����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4-4������ƶ�����.h"
#endif

#include "CTest4-4������ƶ�����Doc.h"
#include "CTest4-4������ƶ�����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest44������ƶ�����View

IMPLEMENT_DYNCREATE(CCTest44������ƶ�����View, CView)

BEGIN_MESSAGE_MAP(CCTest44������ƶ�����View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest44������ƶ�����View ����/����

CCTest44������ƶ�����View::CCTest44������ƶ�����View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest44������ƶ�����View::~CCTest44������ƶ�����View()
{
}

BOOL CCTest44������ƶ�����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest44������ƶ�����View ����

void CCTest44������ƶ�����View::OnDraw(CDC* pDC)
{
	CCTest44������ƶ�����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(20, 20, _T("���������,�ƶ�һ�ξ�����ͷ�"));
}


// CCTest44������ƶ�����View ���

#ifdef _DEBUG
void CCTest44������ƶ�����View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest44������ƶ�����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest44������ƶ�����Doc* CCTest44������ƶ�����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest44������ƶ�����Doc)));
	return (CCTest44������ƶ�����Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest44������ƶ�����View ��Ϣ�������


void CCTest44������ƶ�����View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);

	if(nFlags)
	{
		s1.Format(_T("MouseMove�����Ĵ�����%d"),count++);
	dc.TextOutW(20, 60, s1);

	}

	CView::OnMouseMove(nFlags, point);
}


void CCTest44������ƶ�����View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);

	up_point.x = point.x;

	if (up_point.x > down_point.x)
	{
		xiangsu = up_point .x- down_point.x;

	}
	if (up_point.x ==down_point.x)
	{
		xiangsu =0;

	}
	if (up_point.x < down_point.x)
	{
		xiangsu = down_point.x- up_point.x;

	}
	s2.Format(_T("�����ƶ�%d�����ط���һ��"), xiangsu);
	dc.TextOutW(20, 100, s2);

	CView::OnLButtonUp(nFlags, point);
}


void CCTest44������ƶ�����View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	down_point.x = point.x;

	CView::OnLButtonDown(nFlags, point);
}
