
// CTest3-2�������������ԲDoc.h : CCTest32�������������ԲDoc ��Ľӿ�
//


#pragma once


class CCTest32�������������ԲDoc : public CDocument
{
protected: // �������л�����
	CCTest32�������������ԲDoc();
	DECLARE_DYNCREATE(CCTest32�������������ԲDoc)

// ����
public:

// ����
public:
	CArray<CRect, CRect&> cr;

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
	virtual ~CCTest32�������������ԲDoc();
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
