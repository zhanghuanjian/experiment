
// CTest4-2�������ƶ���ϢView.h : CCTest42�������ƶ���ϢView ��Ľӿ�
//

#pragma once


class CCTest42�������ƶ���ϢView : public CView
{
protected: // �������л�����
	CCTest42�������ƶ���ϢView();
	DECLARE_DYNCREATE(CCTest42�������ƶ���ϢView)

// ����
public:
	CCTest42�������ƶ���ϢDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest42�������ƶ���ϢView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest4-2�������ƶ���ϢView.cpp �еĵ��԰汾
inline CCTest42�������ƶ���ϢDoc* CCTest42�������ƶ���ϢView::GetDocument() const
   { return reinterpret_cast<CCTest42�������ƶ���ϢDoc*>(m_pDocument); }
#endif

