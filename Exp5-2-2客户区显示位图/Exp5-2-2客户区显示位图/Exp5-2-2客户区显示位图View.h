
// Exp5-2-2�ͻ�����ʾλͼView.h : CExp522�ͻ�����ʾλͼView ��Ľӿ�
//

#pragma once


class CExp522�ͻ�����ʾλͼView : public CView
{
protected: // �������л�����
	CExp522�ͻ�����ʾλͼView();
	DECLARE_DYNCREATE(CExp522�ͻ�����ʾλͼView)

// ����
	
public:
	CExp522�ͻ�����ʾλͼDoc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;//λͼ����(��ӳ�Ա)
	int m_nWidth;//�洢λͼ������ݳ�Ա
	int m_nHeight;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CExp522�ͻ�����ʾλͼView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Exp5-2-2�ͻ�����ʾλͼView.cpp �еĵ��԰汾
inline CExp522�ͻ�����ʾλͼDoc* CExp522�ͻ�����ʾλͼView::GetDocument() const
   { return reinterpret_cast<CExp522�ͻ�����ʾλͼDoc*>(m_pDocument); }
#endif

