
// CTest2-ShowNumberView.h : CCTest2ShowNumberView ��Ľӿ�
//

#pragma once


class CCTest2ShowNumberView : public CView
{
protected: // �������л�����
	CCTest2ShowNumberView();
	DECLARE_DYNCREATE(CCTest2ShowNumberView)

// ����
public:
	CCTest2ShowNumberDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest2ShowNumberView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest2-ShowNumberView.cpp �еĵ��԰汾
inline CCTest2ShowNumberDoc* CCTest2ShowNumberView::GetDocument() const
   { return reinterpret_cast<CCTest2ShowNumberDoc*>(m_pDocument); }
#endif

