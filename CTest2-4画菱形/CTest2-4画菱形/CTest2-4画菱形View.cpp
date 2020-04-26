
// CTest2-4������View.cpp : CCTest24������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest2-4������.h"
#endif

#include "CTest2-4������Doc.h"
#include "CTest2-4������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest24������View

IMPLEMENT_DYNCREATE(CCTest24������View, CView)

BEGIN_MESSAGE_MAP(CCTest24������View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest24������View ����/����

CCTest24������View::CCTest24������View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest24������View::~CCTest24������View()
{
}

BOOL CCTest24������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest24������View ����

void CCTest24������View::OnDraw(CDC* /*pDC*/)
{
	CCTest24������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest24������View ���

#ifdef _DEBUG
void CCTest24������View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest24������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest24������Doc* CCTest24������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest24������Doc)));
	return (CCTest24������Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest24������View ��Ϣ�������


void CCTest24������View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);//����һ��CClientDC�Ķ���dc
	CRect rc;//����һ���������εĶ���
	GetClientRect(&rc);//����û����ĳߴ�
	                     //�����ǻ������εĴ���

	dc.MoveTo(0, (rc.bottom + rc.top) / 2);//�ҵ�һ������
	dc.LineTo((rc.left + rc.right) / 2, 0);//������һ������,��...������ص�һ������
	dc.LineTo(rc.right,(rc.top+rc.bottom)/2);
	dc.LineTo((rc.left + rc.right) / 2, rc.bottom);
	dc.LineTo(0, (rc.top + rc.bottom) / 2);


	CView::OnLButtonDown(nFlags, point);
}
