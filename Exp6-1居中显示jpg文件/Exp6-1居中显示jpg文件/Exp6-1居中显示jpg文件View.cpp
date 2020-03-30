
// Exp6-1������ʾjpg�ļ�View.cpp : CExp61������ʾjpg�ļ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Exp6-1������ʾjpg�ļ�.h"
#endif

#include "Exp6-1������ʾjpg�ļ�Doc.h"
#include "Exp6-1������ʾjpg�ļ�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExp61������ʾjpg�ļ�View

IMPLEMENT_DYNCREATE(CExp61������ʾjpg�ļ�View, CView)

BEGIN_MESSAGE_MAP(CExp61������ʾjpg�ļ�View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CExp61������ʾjpg�ļ�View::OnFileOpen)
END_MESSAGE_MAP()

// CExp61������ʾjpg�ļ�View ����/����

CExp61������ʾjpg�ļ�View::CExp61������ʾjpg�ļ�View()
{
	// TODO: �ڴ˴���ӹ������

}

CExp61������ʾjpg�ļ�View::~CExp61������ʾjpg�ļ�View()
{
}

BOOL CExp61������ʾjpg�ļ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CExp61������ʾjpg�ļ�View ����

void CExp61������ʾjpg�ļ�View::OnDraw(CDC* /*pDC*/)
{
	CExp61������ʾjpg�ļ�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CExp61������ʾjpg�ļ�View ���

#ifdef _DEBUG
void CExp61������ʾjpg�ļ�View::AssertValid() const
{
	CView::AssertValid();
}

void CExp61������ʾjpg�ļ�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExp61������ʾjpg�ļ�Doc* CExp61������ʾjpg�ļ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExp61������ʾjpg�ļ�Doc)));
	return (CExp61������ʾjpg�ļ�Doc*)m_pDocument;
}
#endif //_DEBUG


// CExp61������ʾjpg�ļ�View ��Ϣ�������


void CExp61������ʾjpg�ļ�View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);//true�Ǵ��ļ�,false�����Ϊ
	int r = cfd.DoModal();//�Ի���
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();//��ȡ·��
		dc.TextOutW(200, 400, filename);//����ļ���
		CImage img;
		img.Destroy();//���ڴ�й¶
	    img.Load(filename);
		float w, h, sx, sy;
		{
			CRect rect;//����CRect����
			GetClientRect(&rect);//ȡ�ÿͻ�����Ϣ

			float rect_radio = 1.0*rect.Width() / rect.Height();//�����Զ�����;���ǿͻ����Ŀ�߱�
			float img_radio = 1.0*img.GetWidth() / img.GetHeight();//����ͼ��Ŀ�߱�

			if (rect_radio > img_radio)//���ͻ�����ͼ���
			{
				h = rect.Height();//��ߵ��ڿͻ����ĸ�
				w = img_radio*h; //ͼ��Ŀ�߱ȳ��Ը����ͼ��Ŀ�
				sx = (rect.Width() - w) / 2;//ͼ��ʵ����ʾ�����ϵ�λ��
				sy = 0;
			}
			else
			{
				w = rect.Width();
				h = w / img_radio;
				sx = 0;
				sy = (rect.Height() - h) / 2;
			}
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
	}
}
