
// CTest4-5���������ƾ���״̬Doc.h : CCTest45���������ƾ���״̬Doc ��Ľӿ�
//


#pragma once


class CCTest45���������ƾ���״̬Doc : public CDocument
{
protected: // �������л�����
	CCTest45���������ƾ���״̬Doc();
	DECLARE_DYNCREATE(CCTest45���������ƾ���״̬Doc)

// ����
public:
	CRect rect;
// ����
public:
	
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
	virtual ~CCTest45���������ƾ���״̬Doc();
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
