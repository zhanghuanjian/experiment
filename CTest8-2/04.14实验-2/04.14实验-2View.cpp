
// 04.14ʵ��-2View.cpp : CMy0414ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "04.14ʵ��-2.h"
#endif

#include "04.14ʵ��-2Doc.h"
#include "04.14ʵ��-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include"MyD2.h"

// CMy0414ʵ��2View

IMPLEMENT_DYNCREATE(CMy0414ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy0414ʵ��2View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy0414ʵ��2View ����/����

CMy0414ʵ��2View::CMy0414ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0414ʵ��2View::~CMy0414ʵ��2View()
{
}

BOOL CMy0414ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0414ʵ��2View ����

void CMy0414ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy0414ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0414ʵ��2View ���

#ifdef _DEBUG
void CMy0414ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414ʵ��2Doc* CMy0414ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414ʵ��2Doc)));
	return (CMy0414ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414ʵ��2View ��Ϣ�������


void CMy0414ʵ��2View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyD2 md2;
	int r = md2.DoModal();//�����Ի���
	if (r == IDOK)//�����Ի����Ժ�Ĳ���
	{
		CString s1 = md2.s;
		GetDC()->TextOutW(200, 200, s1);
	}

	CView::OnRButtonDblClk(nFlags, point);
}
