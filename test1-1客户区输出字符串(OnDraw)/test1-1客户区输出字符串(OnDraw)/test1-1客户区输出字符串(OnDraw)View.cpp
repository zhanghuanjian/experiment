
// test1-1�ͻ�������ַ���(OnDraw)View.cpp : Ctest11�ͻ�������ַ���OnDrawView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test1-1�ͻ�������ַ���(OnDraw).h"
#endif

#include "test1-1�ͻ�������ַ���(OnDraw)Doc.h"
#include "test1-1�ͻ�������ַ���(OnDraw)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest11�ͻ�������ַ���OnDrawView

IMPLEMENT_DYNCREATE(Ctest11�ͻ�������ַ���OnDrawView, CView)

BEGIN_MESSAGE_MAP(Ctest11�ͻ�������ַ���OnDrawView, CView)
END_MESSAGE_MAP()

// Ctest11�ͻ�������ַ���OnDrawView ����/����

Ctest11�ͻ�������ַ���OnDrawView::Ctest11�ͻ�������ַ���OnDrawView()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest11�ͻ�������ַ���OnDrawView::~Ctest11�ͻ�������ַ���OnDrawView()
{
}

BOOL Ctest11�ͻ�������ַ���OnDrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest11�ͻ�������ַ���OnDrawView ����

void Ctest11�ͻ�������ַ���OnDrawView::OnDraw(CDC* pDC)
{
	Ctest11�ͻ�������ַ���OnDrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s = _T("Hello World!");
	pDC->TextOutW(200, 200, s);

}


// Ctest11�ͻ�������ַ���OnDrawView ���

#ifdef _DEBUG
void Ctest11�ͻ�������ַ���OnDrawView::AssertValid() const
{
	CView::AssertValid();
}

void Ctest11�ͻ�������ַ���OnDrawView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest11�ͻ�������ַ���OnDrawDoc* Ctest11�ͻ�������ַ���OnDrawView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest11�ͻ�������ַ���OnDrawDoc)));
	return (Ctest11�ͻ�������ַ���OnDrawDoc*)m_pDocument;
}
#endif //_DEBUG


// Ctest11�ͻ�������ַ���OnDrawView ��Ϣ�������
