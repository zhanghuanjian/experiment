
// CTest4-6��ʱ��֮С�����·���Doc.h : CCTest46��ʱ��֮С�����·���Doc ��Ľӿ�
//


#pragma once


class CCTest46��ʱ��֮С�����·���Doc : public CDocument
{
protected: // �������л�����
	CCTest46��ʱ��֮С�����·���Doc();
	DECLARE_DYNCREATE(CCTest46��ʱ��֮С�����·���Doc)

// ����
public:

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
	virtual ~CCTest46��ʱ��֮С�����·���Doc();
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
