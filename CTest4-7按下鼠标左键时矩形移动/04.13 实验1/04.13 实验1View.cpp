
// 04.13 ʵ��1View.cpp : CMy0413ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "04.13 ʵ��1.h"
#endif

#include "04.13 ʵ��1Doc.h"
#include "04.13 ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0413ʵ��1View

IMPLEMENT_DYNCREATE(CMy0413ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy0413ʵ��1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0413ʵ��1View ����/����

CMy0413ʵ��1View::CMy0413ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0413ʵ��1View::~CMy0413ʵ��1View()
{
}

BOOL CMy0413ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0413ʵ��1View ����

void CMy0413ʵ��1View::OnDraw(CDC* pDC)
{
	CMy0413ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->m_rect);
}


// CMy0413ʵ��1View ���

#ifdef _DEBUG
void CMy0413ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0413ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0413ʵ��1Doc* CMy0413ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0413ʵ��1Doc)));
	return (CMy0413ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0413ʵ��1View ��Ϣ�������


void CMy0413ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy0413ʵ��1Doc* pDoc = GetDocument();
	if (nFlags&MK_SHIFT)
	{
		pDoc->m_rect.left = 10;
		pDoc->m_rect.right = 300;
		pDoc->m_rect.top = 10;
		pDoc->m_rect.bottom = 300;
	}
	else
	{
		pDoc->m_rect.left = point.x;
		pDoc->m_rect.right = point.x+300;
		pDoc->m_rect.top = point.y;
		pDoc->m_rect.bottom = point.y+300;
	}
	InvalidateRect(NULL, TRUE);//ǿ���ػ�
	CView::OnLButtonDown(nFlags, point);
}
