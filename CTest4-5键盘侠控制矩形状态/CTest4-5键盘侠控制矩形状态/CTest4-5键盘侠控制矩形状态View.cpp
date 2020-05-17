
// CTest4-5���������ƾ���״̬View.cpp : CCTest45���������ƾ���״̬View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4-5���������ƾ���״̬.h"
#endif

#include "CTest4-5���������ƾ���״̬Doc.h"
#include "CTest4-5���������ƾ���״̬View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest45���������ƾ���״̬View

IMPLEMENT_DYNCREATE(CCTest45���������ƾ���״̬View, CView)

BEGIN_MESSAGE_MAP(CCTest45���������ƾ���״̬View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest45���������ƾ���״̬View ����/����

CCTest45���������ƾ���״̬View::CCTest45���������ƾ���״̬View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest45���������ƾ���״̬View::~CCTest45���������ƾ���״̬View()
{
}

BOOL CCTest45���������ƾ���״̬View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest45���������ƾ���״̬View ����

void CCTest45���������ƾ���״̬View::OnDraw(CDC* pDC)
{
	CCTest45���������ƾ���״̬Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	s1.Format(_T("1.����R���λ���һ������"));
	s2.Format(_T("2.�������ϵ��ĸ����������ʹ��������Ӧ�����ƶ�"));
	s3.Format(_T("3.��Home��ʹ���������ϽǷ�������"));
	s4.Format(_T("4.��End��ʱ���������½���С"));
	s5.Format(_T("5.������������ʱ�����λָ���ԭ����С"));
	pDC->TextOutW(5, 10, s1);
	pDC->TextOutW(5, 30, s2);
	pDC->TextOutW(5, 50, s3);
	pDC->TextOutW(5, 70, s4);
	pDC->TextOutW(5, 90, s5);

	pDC->Rectangle(pDoc->rect);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest45���������ƾ���״̬View ���

#ifdef _DEBUG
void CCTest45���������ƾ���״̬View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest45���������ƾ���״̬View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest45���������ƾ���״̬Doc* CCTest45���������ƾ���״̬View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest45���������ƾ���״̬Doc)));
	return (CCTest45���������ƾ���״̬Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest45���������ƾ���״̬View ��Ϣ�������


void CCTest45���������ƾ���״̬View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CCTest45���������ƾ���״̬Doc* pDoc = GetDocument();
	CRect crect;
	GetClientRect(&crect);

	switch (nChar)
	{
	case 'R':
		pDoc->rect.left = (crect.left + crect.right) / 2 - 10;
		pDoc->rect.right = (crect.left + crect.right) / 2 + 10;
		pDoc->rect.top = (crect.top + crect.bottom) / 2 - 20;
		pDoc->rect.bottom = (crect.top + crect.bottom) / 2 + 20;
		break;

	case VK_LEFT:
		pDoc->rect.left -= 10;
		pDoc->rect.right -= 10;
		break;
	case VK_RIGHT:
		pDoc->rect.left += 10;
		pDoc->rect.right += 10;
		break;
	case VK_UP:
		pDoc->rect.top -= 10;
		pDoc->rect.bottom -= 10;
		break;
	case VK_DOWN:
		pDoc->rect.top += 10;
		pDoc->rect.bottom += 10;
		break;
	case VK_HOME:
		pDoc->rect.left -= 10;
		pDoc->rect.top -= 10;
		break;
	case VK_END:
		pDoc->rect.right -= 10;
		pDoc->rect.bottom -= 10;
		break;
	
}

InvalidateRect(NULL, TRUE);

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CCTest45���������ƾ���״̬View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCTest45���������ƾ���״̬Doc* pDoc = GetDocument();
	CRect crect;
	GetClientRect(&crect);

	pDoc->rect.left = (crect.left + crect.right) / 2 - 10;
	pDoc->rect.right = (crect.left + crect.right) / 2 + 10;
	pDoc->rect.top = (crect.top + crect.bottom) / 2 - 20;
	pDoc->rect.bottom = (crect.top + crect.bottom) / 2 + 20;

	InvalidateRect(NULL, TRUE);

	CView::OnLButtonDown(nFlags, point);
}
