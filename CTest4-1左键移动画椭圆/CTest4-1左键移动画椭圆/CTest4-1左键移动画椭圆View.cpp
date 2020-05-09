
// CTest4-1����ƶ�����ԲView.cpp : CCTest41����ƶ�����ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4-1����ƶ�����Բ.h"
#endif

#include "CTest4-1����ƶ�����ԲDoc.h"
#include "CTest4-1����ƶ�����ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest41����ƶ�����ԲView

IMPLEMENT_DYNCREATE(CCTest41����ƶ�����ԲView, CView)

BEGIN_MESSAGE_MAP(CCTest41����ƶ�����ԲView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CCTest41����ƶ�����ԲView ����/����

CCTest41����ƶ�����ԲView::CCTest41����ƶ�����ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest41����ƶ�����ԲView::~CCTest41����ƶ�����ԲView()
{
}

BOOL CCTest41����ƶ�����ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest41����ƶ�����ԲView ����

void CCTest41����ƶ�����ԲView::OnDraw(CDC* pDC)
{
	CCTest41����ƶ�����ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(10, 10, _T("������£���¼����ƶ�λ�ò��ڿͻ�����ʾ,̧�𻭳�һ�����Σ��԰���,̧��ĵ�Ϊ������Խǡ�"));
	pDC->Rectangle(pDoc->m_tagRec);
}


// CCTest41����ƶ�����ԲView ���

#ifdef _DEBUG
void CCTest41����ƶ�����ԲView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest41����ƶ�����ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest41����ƶ�����ԲDoc* CCTest41����ƶ�����ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest41����ƶ�����ԲDoc)));
	return (CCTest41����ƶ�����ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest41����ƶ�����ԲView ��Ϣ�������


void CCTest41����ƶ�����ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	CCTest41����ƶ�����ԲDoc* pDoc = GetDocument();
	pDoc->m_tagRec.left = point.x;
	pDoc->m_tagRec.top = point.y;
	InvalidateRect(NULL, TRUE);
}


void CCTest41����ƶ�����ԲView::OnRButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnRButtonUp(nFlags, point);
	CCTest41����ƶ�����ԲDoc* pDoc = GetDocument();
	pDoc->m_tagRec.right = point.x;
	pDoc->m_tagRec.bottom = point.y;
	InvalidateRect(NULL, TRUE);
}


void CCTest41����ƶ�����ԲView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnMouseMove(nFlags, point);
	CString s;
	s.Format(_T("%d ,%d"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);  //ʵʱ��¼���λ��
}
