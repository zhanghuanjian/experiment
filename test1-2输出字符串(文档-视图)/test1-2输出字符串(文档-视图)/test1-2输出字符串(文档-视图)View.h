
// test1-2����ַ���(�ĵ�-��ͼ)View.h : Ctest12����ַ����ĵ���ͼView ��Ľӿ�
//

#pragma once


class Ctest12����ַ����ĵ���ͼView : public CView
{
protected: // �������л�����
	Ctest12����ַ����ĵ���ͼView();
	DECLARE_DYNCREATE(Ctest12����ַ����ĵ���ͼView)

// ����
public:
	Ctest12����ַ����ĵ���ͼDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest12����ַ����ĵ���ͼView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test1-2����ַ���(�ĵ�-��ͼ)View.cpp �еĵ��԰汾
inline Ctest12����ַ����ĵ���ͼDoc* Ctest12����ַ����ĵ���ͼView::GetDocument() const
   { return reinterpret_cast<Ctest12����ַ����ĵ���ͼDoc*>(m_pDocument); }
#endif

