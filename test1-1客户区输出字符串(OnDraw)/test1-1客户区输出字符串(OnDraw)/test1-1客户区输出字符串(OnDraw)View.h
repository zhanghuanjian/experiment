
// test1-1�ͻ�������ַ���(OnDraw)View.h : Ctest11�ͻ�������ַ���OnDrawView ��Ľӿ�
//

#pragma once


class Ctest11�ͻ�������ַ���OnDrawView : public CView
{
protected: // �������л�����
	Ctest11�ͻ�������ַ���OnDrawView();
	DECLARE_DYNCREATE(Ctest11�ͻ�������ַ���OnDrawView)

// ����
public:
	Ctest11�ͻ�������ַ���OnDrawDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest11�ͻ�������ַ���OnDrawView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test1-1�ͻ�������ַ���(OnDraw)View.cpp �еĵ��԰汾
inline Ctest11�ͻ�������ַ���OnDrawDoc* Ctest11�ͻ�������ַ���OnDrawView::GetDocument() const
   { return reinterpret_cast<Ctest11�ͻ�������ַ���OnDrawDoc*>(m_pDocument); }
#endif

