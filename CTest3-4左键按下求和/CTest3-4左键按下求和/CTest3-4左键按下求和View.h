
// CTest3-4����������View.h : CCTest34����������View ��Ľӿ�
//

#pragma once


class CCTest34����������View : public CView
{
protected: // �������л�����
	CCTest34����������View();
	DECLARE_DYNCREATE(CCTest34����������View)

// ����
public:
	CCTest34����������Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest34����������View();
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

#ifndef _DEBUG  // CTest3-4����������View.cpp �еĵ��԰汾
inline CCTest34����������Doc* CCTest34����������View::GetDocument() const
   { return reinterpret_cast<CCTest34����������Doc*>(m_pDocument); }
#endif

