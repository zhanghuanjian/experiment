
// CTest2-8��ԲView.h : CCTest28��ԲView ��Ľӿ�
//

#pragma once


class CCTest28��ԲView : public CView
{
protected: // �������л�����
	CCTest28��ԲView();
	DECLARE_DYNCREATE(CCTest28��ԲView)

// ����
public:
	CCTest28��ԲDoc* GetDocument() const;

// ����
public:
	CRect cr;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest28��ԲView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest2-8��ԲView.cpp �еĵ��԰汾
inline CCTest28��ԲDoc* CCTest28��ԲView::GetDocument() const
   { return reinterpret_cast<CCTest28��ԲDoc*>(m_pDocument); }
#endif

