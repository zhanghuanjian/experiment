
// Exp5-1�����˵��ڿͻ�����ԲView.cpp : CExp51�����˵��ڿͻ�����ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Exp5-1�����˵��ڿͻ�����Բ.h"
#endif

#include "Exp5-1�����˵��ڿͻ�����ԲDoc.h"
#include "Exp5-1�����˵��ڿͻ�����ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExp51�����˵��ڿͻ�����ԲView

IMPLEMENT_DYNCREATE(CExp51�����˵��ڿͻ�����ԲView, CView)

BEGIN_MESSAGE_MAP(CExp51�����˵��ڿͻ�����ԲView, CView)
	ON_COMMAND(ID_HUAYUAN, &CExp51�����˵��ڿͻ�����ԲView::OnHuayuan)
END_MESSAGE_MAP()

// CExp51�����˵��ڿͻ�����ԲView ����/����

CExp51�����˵��ڿͻ�����ԲView::CExp51�����˵��ڿͻ�����ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

CExp51�����˵��ڿͻ�����ԲView::~CExp51�����˵��ڿͻ�����ԲView()
{
}

BOOL CExp51�����˵��ڿͻ�����ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CExp51�����˵��ڿͻ�����ԲView ����

void CExp51�����˵��ڿͻ�����ԲView::OnDraw(CDC* /*pDC*/)
{
	CExp51�����˵��ڿͻ�����ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CExp51�����˵��ڿͻ�����ԲView ���

#ifdef _DEBUG
void CExp51�����˵��ڿͻ�����ԲView::AssertValid() const
{
	CView::AssertValid();
}

void CExp51�����˵��ڿͻ�����ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExp51�����˵��ڿͻ�����ԲDoc* CExp51�����˵��ڿͻ�����ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExp51�����˵��ڿͻ�����ԲDoc)));
	return (CExp51�����˵��ڿͻ�����ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// CExp51�����˵��ڿͻ�����ԲView ��Ϣ�������


void CExp51�����˵��ڿͻ�����ԲView::OnHuayuan()
{
	// TODO: �ڴ���������������
	CRect  rect;
	CPoint centerPoint = rect.CenterPoint();
	GetClientRect(&rect);
	CClientDC dc(this);
	for(int r=50,)
		dc.Ellipse(CRect(centerPoint.x-r, centerPoint.y-r, centerPoint.x + r, centerPoint.y + r));
		r = r + 20;
		
	}
	
}
