
// CTest����ɫ�߶�View.h : CCTest����ɫ�߶�View ��Ľӿ�
//

#pragma once


class CCTest����ɫ�߶�View : public CView
{
protected: // �������л�����
	CCTest����ɫ�߶�View();
	DECLARE_DYNCREATE(CCTest����ɫ�߶�View)

// ����
public:
	CCTest����ɫ�߶�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest����ɫ�߶�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest����ɫ�߶�View.cpp �еĵ��԰汾
inline CCTest����ɫ�߶�Doc* CCTest����ɫ�߶�View::GetDocument() const
   { return reinterpret_cast<CCTest����ɫ�߶�Doc*>(m_pDocument); }
#endif

