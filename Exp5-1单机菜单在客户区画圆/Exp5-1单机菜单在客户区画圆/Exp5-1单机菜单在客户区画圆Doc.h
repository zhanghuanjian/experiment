
// Exp5-1�����˵��ڿͻ�����ԲDoc.h : CExp51�����˵��ڿͻ�����ԲDoc ��Ľӿ�
//


#pragma once


class CExp51�����˵��ڿͻ�����ԲDoc : public CDocument
{
protected: // �������л�����
	CExp51�����˵��ڿͻ�����ԲDoc();
	DECLARE_DYNCREATE(CExp51�����˵��ڿͻ�����ԲDoc)

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
	virtual ~CExp51�����˵��ڿͻ�����ԲDoc();
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
