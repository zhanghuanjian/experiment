
// CTest2-ShowNumberView.cpp : CCTest2ShowNumberView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest2-ShowNumber.h"
#endif

#include "CTest2-ShowNumberDoc.h"
#include "CTest2-ShowNumberView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest2ShowNumberView

IMPLEMENT_DYNCREATE(CCTest2ShowNumberView, CView)

BEGIN_MESSAGE_MAP(CCTest2ShowNumberView, CView)
END_MESSAGE_MAP()

// CCTest2ShowNumberView ����/����

CCTest2ShowNumberView::CCTest2ShowNumberView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest2ShowNumberView::~CCTest2ShowNumberView()
{
}

BOOL CCTest2ShowNumberView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest2ShowNumberView ����

void CCTest2ShowNumberView::OnDraw(CDC* pDC)
{
	CCTest2ShowNumberDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int b = pDoc->a;
	CString s;
	s.Format(_T("%d"),b);
	pDC->TextOutW(100, 200, s);
}


// CCTest2ShowNumberView ���

#ifdef _DEBUG
void CCTest2ShowNumberView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest2ShowNumberView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest2ShowNumberDoc* CCTest2ShowNumberView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest2ShowNumberDoc)));
	return (CCTest2ShowNumberDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest2ShowNumberView ��Ϣ�������
