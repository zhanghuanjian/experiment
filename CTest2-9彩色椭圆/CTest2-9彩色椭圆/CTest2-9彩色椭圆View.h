
// CTest2-9��ɫ��ԲView.h : CCTest29��ɫ��ԲView ��Ľӿ�
//

#pragma once


class CCTest29��ɫ��ԲView : public CView
{
protected: // �������л�����
	CCTest29��ɫ��ԲView();
	DECLARE_DYNCREATE(CCTest29��ɫ��ԲView)

// ����
public:
	CCTest29��ɫ��ԲDoc* GetDocument() const;

// ����
	CRect cr;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest29��ɫ��ԲView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest2-9��ɫ��ԲView.cpp �еĵ��԰汾
inline CCTest29��ɫ��ԲDoc* CCTest29��ɫ��ԲView::GetDocument() const
   { return reinterpret_cast<CCTest29��ɫ��ԲDoc*>(m_pDocument); }
#endif

