
// CTest2-7�ػ��������ԲView.cpp : CCTest27�ػ��������ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest2-7�ػ��������Բ.h"
#endif

#include "CTest2-7�ػ��������ԲDoc.h"
#include "CTest2-7�ػ��������ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest27�ػ��������ԲView

IMPLEMENT_DYNCREATE(CCTest27�ػ��������ԲView, CView)

BEGIN_MESSAGE_MAP(CCTest27�ػ��������ԲView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest27�ػ��������ԲView ����/����

CCTest27�ػ��������ԲView::CCTest27�ػ��������ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest27�ػ��������ԲView::~CCTest27�ػ��������ԲView()
{
}

BOOL CCTest27�ػ��������ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest27�ػ��������ԲView ����

void CCTest27�ػ��������ԲView::OnDraw(CDC* pDC)
{
	CCTest27�ػ��������ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < ca.GetSize(); i++)
	{
		pDC->Ellipse(ca[i]);
	}
}


// CCTest27�ػ��������ԲView ���

#ifdef _DEBUG
void CCTest27�ػ��������ԲView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest27�ػ��������ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest27�ػ��������ԲDoc* CCTest27�ػ��������ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest27�ػ��������ԲDoc)));
	return (CCTest27�ػ��������ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest27�ػ��������ԲView ��Ϣ�������


void CCTest27�ػ��������ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	CView::OnLButtonDown(nFlags, point);
	int r = rand() % 50 + 10;
	CClientDC dc(this);
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	Invalidate();//ǿ���ػ�
}
