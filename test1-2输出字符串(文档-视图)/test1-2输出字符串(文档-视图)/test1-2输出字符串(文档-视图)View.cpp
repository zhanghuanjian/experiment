
// test1-2����ַ���(�ĵ�-��ͼ)View.cpp : Ctest12����ַ����ĵ���ͼView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test1-2����ַ���(�ĵ�-��ͼ).h"
#endif

#include "test1-2����ַ���(�ĵ�-��ͼ)Doc.h"
#include "test1-2����ַ���(�ĵ�-��ͼ)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest12����ַ����ĵ���ͼView

IMPLEMENT_DYNCREATE(Ctest12����ַ����ĵ���ͼView, CView)

BEGIN_MESSAGE_MAP(Ctest12����ַ����ĵ���ͼView, CView)
END_MESSAGE_MAP()

// Ctest12����ַ����ĵ���ͼView ����/����

Ctest12����ַ����ĵ���ͼView::Ctest12����ַ����ĵ���ͼView()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest12����ַ����ĵ���ͼView::~Ctest12����ַ����ĵ���ͼView()
{
}

BOOL Ctest12����ַ����ĵ���ͼView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest12����ַ����ĵ���ͼView ����

void Ctest12����ַ����ĵ���ͼView::OnDraw(CDC* pDC)
{
	Ctest12����ַ����ĵ���ͼDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(200, 250, pDoc->s);

}


// Ctest12����ַ����ĵ���ͼView ���

#ifdef _DEBUG
void Ctest12����ַ����ĵ���ͼView::AssertValid() const
{
	CView::AssertValid();
}

void Ctest12����ַ����ĵ���ͼView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest12����ַ����ĵ���ͼDoc* Ctest12����ַ����ĵ���ͼView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest12����ַ����ĵ���ͼDoc)));
	return (Ctest12����ַ����ĵ���ͼDoc*)m_pDocument;
}
#endif //_DEBUG


// Ctest12����ַ����ĵ���ͼView ��Ϣ�������
