
// CTest4-6��ʱ��֮С�����·���View.cpp : CCTest46��ʱ��֮С�����·���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4-6��ʱ��֮С�����·���.h"
#endif

#include "CTest4-6��ʱ��֮С�����·���Doc.h"
#include "CTest4-6��ʱ��֮С�����·���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest46��ʱ��֮С�����·���View

IMPLEMENT_DYNCREATE(CCTest46��ʱ��֮С�����·���View, CView)

BEGIN_MESSAGE_MAP(CCTest46��ʱ��֮С�����·���View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CCTest46��ʱ��֮С�����·���View ����/����

CCTest46��ʱ��֮С�����·���View::CCTest46��ʱ��֮С�����·���View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);

	}

}

CCTest46��ʱ��֮С�����·���View::~CCTest46��ʱ��֮С�����·���View()
{
}

BOOL CCTest46��ʱ��֮С�����·���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest46��ʱ��֮С�����·���View ����

void CCTest46��ʱ��֮С�����·���View::OnDraw(CDC* pDC)
{
	CCTest46��ʱ��֮С�����·���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
			set = false;//set��������
		}
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < N; i++)
	{
		pDC->Ellipse(cr[i]);
	}
}


// CCTest46��ʱ��֮С�����·���View ���

#ifdef _DEBUG
void CCTest46��ʱ��֮С�����·���View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest46��ʱ��֮С�����·���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest46��ʱ��֮С�����·���Doc* CCTest46��ʱ��֮С�����·���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest46��ʱ��֮С�����·���Doc)));
	return (CCTest46��ʱ��֮С�����·���Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest46��ʱ��֮С�����·���View ��Ϣ�������


void CCTest46��ʱ��֮С�����·���View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	GetClientRect(&rect);

	CView::OnTimer(nIDEvent);

	int i = nIDEvent;
	if (cr[i].bottom < rect.bottom - 20)
	{
		cr[i].top += 20;
		cr[i].bottom += 20;
	}
	else
	{
		cr[i].top -= 40;
		cr[i].bottom-= 40;
	}
	Invalidate();
}
