
// CTest2-9��ɫ��ԲView.cpp : CCTest29��ɫ��ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest2-9��ɫ��Բ.h"
#endif

#include "CTest2-9��ɫ��ԲDoc.h"
#include "CTest2-9��ɫ��ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest29��ɫ��ԲView

IMPLEMENT_DYNCREATE(CCTest29��ɫ��ԲView, CView)

BEGIN_MESSAGE_MAP(CCTest29��ɫ��ԲView, CView)
END_MESSAGE_MAP()

// CCTest29��ɫ��ԲView ����/����

CCTest29��ɫ��ԲView::CCTest29��ɫ��ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest29��ɫ��ԲView::~CCTest29��ɫ��ԲView()
{
}

BOOL CCTest29��ɫ��ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest29��ɫ��ԲView ����

void CCTest29��ɫ��ԲView::OnDraw(CDC* pDC)
{
	CCTest29��ɫ��ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	this->GetClientRect(&cr); //��ÿͻ����Ĵ�С

	int color = RGB(250, 0, 0); //����ɫ
	CBrush newBrush(color); //������ˢ
	CBrush* oldBrush = pDC->SelectObject(&newBrush);//����ˢѡ�뻭��
	pDC->Ellipse(cr); //����Բ
	pDC->SelectObject(oldBrush); //���ؾ�ˢ

}


// CCTest29��ɫ��ԲView ���

#ifdef _DEBUG
void CCTest29��ɫ��ԲView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest29��ɫ��ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest29��ɫ��ԲDoc* CCTest29��ɫ��ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest29��ɫ��ԲDoc)));
	return (CCTest29��ɫ��ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest29��ɫ��ԲView ��Ϣ�������
