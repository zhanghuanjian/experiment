
// CTest3-1�ͻ��������ԲView.h : CCTest31�ͻ��������ԲView ��Ľӿ�
//

#pragma once


class CCTest31�ͻ��������ԲView : public CView
{
protected: // �������л�����
	CCTest31�ͻ��������ԲView();
	DECLARE_DYNCREATE(CCTest31�ͻ��������ԲView)

// ����
public:
	CCTest31�ͻ��������ԲDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest31�ͻ��������ԲView();
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

#ifndef _DEBUG  // CTest3-1�ͻ��������ԲView.cpp �еĵ��԰汾
inline CCTest31�ͻ��������ԲDoc* CCTest31�ͻ��������ԲView::GetDocument() const
   { return reinterpret_cast<CCTest31�ͻ��������ԲDoc*>(m_pDocument); }
#endif

