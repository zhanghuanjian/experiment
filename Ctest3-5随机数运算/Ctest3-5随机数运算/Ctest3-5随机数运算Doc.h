
// Ctest3-5���������Doc.h : CCtest35���������Doc ��Ľӿ�
//


#pragma once


class CCtest35���������Doc : public CDocument
{
protected: // �������л�����
	CCtest35���������Doc();
	DECLARE_DYNCREATE(CCtest35���������Doc)

// ����
public:

// ����
public:
	CRect A;
	CRect B;
	CRect C;
	int a, b;

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CCtest35���������Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
