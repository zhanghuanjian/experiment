
// VC20200303Test1View.cpp : CVC20200303Test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "VC20200303Test1.h"
#endif

#include "VC20200303Test1Doc.h"
#include "VC20200303Test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVC20200303Test1View

IMPLEMENT_DYNCREATE(CVC20200303Test1View, CView)

BEGIN_MESSAGE_MAP(CVC20200303Test1View, CView)
END_MESSAGE_MAP()

// CVC20200303Test1View ����/����

CVC20200303Test1View::CVC20200303Test1View()
{
	// TODO: �ڴ˴���ӹ������

}

CVC20200303Test1View::~CVC20200303Test1View()
{
}

BOOL CVC20200303Test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CVC20200303Test1View ����

void CVC20200303Test1View::OnDraw(CDC* pDC)
{
	CVC20200303Test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s, A;
	int a = 45;
	s = "�����Ż���!";
	//S.Format(_T("%d"), s);
	A.Format(_T("%d"), a);
	pDC->TextOutW(200,200,s);
	pDC->TextOutW(300, 300, A);

}


// CVC20200303Test1View ���

#ifdef _DEBUG
void CVC20200303Test1View::AssertValid() const
{
	CView::AssertValid();
}

void CVC20200303Test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVC20200303Test1Doc* CVC20200303Test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVC20200303Test1Doc)));
	return (CVC20200303Test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CVC20200303Test1View ��Ϣ�������
