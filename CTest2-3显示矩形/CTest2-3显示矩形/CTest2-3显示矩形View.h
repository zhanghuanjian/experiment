
// CTest2-3��ʾ����View.h : CCTest23��ʾ����View ��Ľӿ�
//

#pragma once


class CCTest23��ʾ����View : public CView
{
protected: // �������л�����
	CCTest23��ʾ����View();
	DECLARE_DYNCREATE(CCTest23��ʾ����View)

// ����
public:
	CCTest23��ʾ����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest23��ʾ����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest2-3��ʾ����View.cpp �еĵ��԰汾
inline CCTest23��ʾ����Doc* CCTest23��ʾ����View::GetDocument() const
   { return reinterpret_cast<CCTest23��ʾ����Doc*>(m_pDocument); }
#endif

