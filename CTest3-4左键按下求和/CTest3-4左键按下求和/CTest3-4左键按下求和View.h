
// CTest3-4左键按下求和View.h : CCTest34左键按下求和View 类的接口
//

#pragma once


class CCTest34左键按下求和View : public CView
{
protected: // 仅从序列化创建
	CCTest34左键按下求和View();
	DECLARE_DYNCREATE(CCTest34左键按下求和View)

// 特性
public:
	CCTest34左键按下求和Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest34左键按下求和View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest3-4左键按下求和View.cpp 中的调试版本
inline CCTest34左键按下求和Doc* CCTest34左键按下求和View::GetDocument() const
   { return reinterpret_cast<CCTest34左键按下求和Doc*>(m_pDocument); }
#endif

