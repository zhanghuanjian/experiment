
// CTest2-7�ػ��������ԲView.h : CCTest27�ػ��������ԲView ��Ľӿ�
//

#pragma once


class CCTest27�ػ��������ԲView : public CView
{
protected: // �������л�����
	CCTest27�ػ��������ԲView();
	DECLARE_DYNCREATE(CCTest27�ػ��������ԲView)

// ����
public:
	CCTest27�ػ��������ԲDoc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect> ca;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest27�ػ��������ԲView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest2-7�ػ��������ԲView.cpp �еĵ��԰汾
inline CCTest27�ػ��������ԲDoc* CCTest27�ػ��������ԲView::GetDocument() const
   { return reinterpret_cast<CCTest27�ػ��������ԲDoc*>(m_pDocument); }
#endif

