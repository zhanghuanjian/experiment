
// ��ԲView.cpp : C��ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��Բ.h"
#endif

#include "��ԲDoc.h"
#include "��ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ԲView

IMPLEMENT_DYNCREATE(C��ԲView, CView)

BEGIN_MESSAGE_MAP(C��ԲView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��ԲView ����/����

C��ԲView::C��ԲView()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);

}

C��ԲView::~C��ԲView()
{
}

BOOL C��ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ԲView ����

void C��ԲView::OnDraw(CDC* pDC)
{
	C��ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < ca.GetSize(); i++)
	{
		pDC->Ellipse(ca[i]);
	}
}


// C��ԲView ���

#ifdef _DEBUG
void C��ԲView::AssertValid() const
{
	CView::AssertValid();
}

void C��ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ԲDoc* C��ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ԲDoc)));
	return (C��ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C��ԲView ��Ϣ�������


void C��ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	int r = rand() % 50 + 10;
	CClientDC dc(this);
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	Invalidate();
}
