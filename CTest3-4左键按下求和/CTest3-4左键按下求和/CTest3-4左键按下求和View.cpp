
// CTest3-4����������View.cpp : CCTest34����������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest3-4����������.h"
#endif

#include "CTest3-4����������Doc.h"
#include "CTest3-4����������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest34����������View

IMPLEMENT_DYNCREATE(CCTest34����������View, CView)

BEGIN_MESSAGE_MAP(CCTest34����������View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest34����������View ����/����

CCTest34����������View::CCTest34����������View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest34����������View::~CCTest34����������View()
{
}

BOOL CCTest34����������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest34����������View ����

void CCTest34����������View::OnDraw(CDC* pDC)
{
	CCTest34����������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(100, 100, _T("�������о�ϲŶ!"));

}


// CCTest34����������View ���

#ifdef _DEBUG
void CCTest34����������View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest34����������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest34����������Doc* CCTest34����������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest34����������Doc)));
	return (CCTest34����������Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest34����������View ��Ϣ�������


void CCTest34����������View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);

	CCTest34����������Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("A+B=%d"), pDoc->A + pDoc->B);//�ӿͻ������A,Bֵ�����
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);


}
