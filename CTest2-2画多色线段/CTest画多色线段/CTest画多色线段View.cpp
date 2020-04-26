
// CTest����ɫ�߶�View.cpp : CCTest����ɫ�߶�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest����ɫ�߶�.h"
#endif

#include "CTest����ɫ�߶�Doc.h"
#include "CTest����ɫ�߶�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest����ɫ�߶�View

IMPLEMENT_DYNCREATE(CCTest����ɫ�߶�View, CView)

BEGIN_MESSAGE_MAP(CCTest����ɫ�߶�View, CView)
END_MESSAGE_MAP()

// CCTest����ɫ�߶�View ����/����

CCTest����ɫ�߶�View::CCTest����ɫ�߶�View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest����ɫ�߶�View::~CCTest����ɫ�߶�View()
{
}

BOOL CCTest����ɫ�߶�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest����ɫ�߶�View ����

void CCTest����ɫ�߶�View::OnDraw(CDC* pDC)
{
	CCTest����ɫ�߶�Doc* pDoc = GetDocument();//ȡ���ĵ����ָ��,ͨ�������Է����ĵ����еĳ�Ա
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���+

	int red = 0, green = 0, blue = 0;//������,�Ǿ��Ǻ�ɫ
	int width=2;//
	int row=20;//��
	for (int s = 0; s < 8; s++)//ѭ���˴�
	{
		int color = RGB(red, green, blue);//�Ѹոյ���ԭɫ�ϳ�һ����ɫ����color����ɫ�����ݺ���������һ����ɫ��
		CPen newPen(PS_SOLID, width, color);//����һֻ�±ʣ����ȵ�������ʽ-ʵ�ߣ��ʵĿ�ȣ��ʵ���ɫ��
		CPen *oldPen = pDC->SelectObject(&newPen);//ѡ����֧�±�
		pDC->MoveTo(20, row);//���Ƶ����λ�ã�������20��������row
		pDC->LineTo(300, row);//�ӵ�ǰ��λ�ã�20��row�����ӵ�����㣨300��row�����ɼ��������겻ͬ���ѣ�������û��
		pDC->SelectObject(oldPen);//���������߶�֮���ְ���ǰ���ϱ�ѡ������豸�������±ʳ���
		red += 32;//�ı����ֵ
		green += 16;
		blue += 8;
		width += 2;
		row += 30;

	}
}


// CCTest����ɫ�߶�View ���

#ifdef _DEBUG
void CCTest����ɫ�߶�View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest����ɫ�߶�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest����ɫ�߶�Doc* CCTest����ɫ�߶�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest����ɫ�߶�Doc)));
	return (CCTest����ɫ�߶�Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest����ɫ�߶�View ��Ϣ�������
