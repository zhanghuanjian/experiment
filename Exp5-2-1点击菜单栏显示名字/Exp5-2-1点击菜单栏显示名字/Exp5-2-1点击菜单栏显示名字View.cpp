
// Exp5-2-1����˵�����ʾ����View.cpp : CExp521����˵�����ʾ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Exp5-2-1����˵�����ʾ����.h"
#endif

#include "Exp5-2-1����˵�����ʾ����Doc.h"
#include "Exp5-2-1����˵�����ʾ����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExp521����˵�����ʾ����View

IMPLEMENT_DYNCREATE(CExp521����˵�����ʾ����View, CView)

BEGIN_MESSAGE_MAP(CExp521����˵�����ʾ����View, CView)
	ON_COMMAND(ID_SHOWNAME, &CExp521����˵�����ʾ����View::OnShowname)
END_MESSAGE_MAP()

// CExp521����˵�����ʾ����View ����/����

CExp521����˵�����ʾ����View::CExp521����˵�����ʾ����View()
{
	// TODO: �ڴ˴���ӹ������

}

CExp521����˵�����ʾ����View::~CExp521����˵�����ʾ����View()
{
}

BOOL CExp521����˵�����ʾ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CExp521����˵�����ʾ����View ����

void CExp521����˵�����ʾ����View::OnDraw(CDC* /*pDC*/)
{
	CExp521����˵�����ʾ����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CExp521����˵�����ʾ����View ���

#ifdef _DEBUG
void CExp521����˵�����ʾ����View::AssertValid() const
{
	CView::AssertValid();
}

void CExp521����˵�����ʾ����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExp521����˵�����ʾ����Doc* CExp521����˵�����ʾ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExp521����˵�����ʾ����Doc)));
	return (CExp521����˵�����ʾ����Doc*)m_pDocument;
}
#endif //_DEBUG


// CExp521����˵�����ʾ����View ��Ϣ�������


void CExp521����˵�����ʾ����View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s = _T("�Ż���");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
}
