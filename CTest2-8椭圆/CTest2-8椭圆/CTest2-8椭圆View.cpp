
// CTest2-8��ԲView.cpp : CCTest28��ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest2-8��Բ.h"
#endif

#include "CTest2-8��ԲDoc.h"
#include "CTest2-8��ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest28��ԲView

IMPLEMENT_DYNCREATE(CCTest28��ԲView, CView)

BEGIN_MESSAGE_MAP(CCTest28��ԲView, CView)
END_MESSAGE_MAP()

// CCTest28��ԲView ����/����

CCTest28��ԲView::CCTest28��ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest28��ԲView::~CCTest28��ԲView()
{
}

BOOL CCTest28��ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest28��ԲView ����

void CCTest28��ԲView::OnDraw(CDC* pDC)
{
	CCTest28��ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
}


// CCTest28��ԲView ���

#ifdef _DEBUG
void CCTest28��ԲView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest28��ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest28��ԲDoc* CCTest28��ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest28��ԲDoc)));
	return (CCTest28��ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest28��ԲView ��Ϣ�������
