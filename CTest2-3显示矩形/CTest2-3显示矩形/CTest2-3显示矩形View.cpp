
// CTest2-3��ʾ����View.cpp : CCTest23��ʾ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest2-3��ʾ����.h"
#endif

#include "CTest2-3��ʾ����Doc.h"
#include "CTest2-3��ʾ����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest23��ʾ����View

IMPLEMENT_DYNCREATE(CCTest23��ʾ����View, CView)

BEGIN_MESSAGE_MAP(CCTest23��ʾ����View, CView)
END_MESSAGE_MAP()

// CCTest23��ʾ����View ����/����

CCTest23��ʾ����View::CCTest23��ʾ����View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest23��ʾ����View::~CCTest23��ʾ����View()
{
}

BOOL CCTest23��ʾ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest23��ʾ����View ����

void CCTest23��ʾ����View::OnDraw(CDC* pDC)
{
	CCTest23��ʾ����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect rect(30, 30, 300, 300);//������һ������,����λ����(���Ͻ�;���½�)
	pDC->Rectangle(&rect);
}


// CCTest23��ʾ����View ���

#ifdef _DEBUG
void CCTest23��ʾ����View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest23��ʾ����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest23��ʾ����Doc* CCTest23��ʾ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest23��ʾ����Doc)));
	return (CCTest23��ʾ����Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest23��ʾ����View ��Ϣ�������
