
// Exp6-1������ʾjpg�ļ�Doc.h : CExp61������ʾjpg�ļ�Doc ��Ľӿ�
//


#pragma once


class CExp61������ʾjpg�ļ�Doc : public CDocument
{
protected: // �������л�����
	CExp61������ʾjpg�ļ�Doc();
	DECLARE_DYNCREATE(CExp61������ʾjpg�ļ�Doc)

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
	virtual ~CExp61������ʾjpg�ļ�Doc();
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
