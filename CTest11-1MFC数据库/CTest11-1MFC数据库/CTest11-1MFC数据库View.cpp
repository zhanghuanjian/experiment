
// CTest11-1MFC���ݿ�View.cpp : CCTest111MFC���ݿ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest11-1MFC���ݿ�.h"
#endif

#include "CTest11-1MFC���ݿ�Set.h"
#include "CTest11-1MFC���ݿ�Doc.h"
#include "CTest11-1MFC���ݿ�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest111MFC���ݿ�View

IMPLEMENT_DYNCREATE(CCTest111MFC���ݿ�View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest111MFC���ݿ�View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT2, &CCTest111MFC���ݿ�View::OnEnChangeEdit2)
END_MESSAGE_MAP()

// CCTest111MFC���ݿ�View ����/����

CCTest111MFC���ݿ�View::CCTest111MFC���ݿ�View()
	: CRecordView(IDD_CTEST111MFC_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phoneNum(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CCTest111MFC���ݿ�View::~CCTest111MFC���ݿ�View()
{
}

void CCTest111MFC���ݿ�View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
}

BOOL CCTest111MFC���ݿ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CCTest111MFC���ݿ�View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest111MFC���ݿ�Set;
	CRecordView::OnInitialUpdate();

}


// CCTest111MFC���ݿ�View ���

#ifdef _DEBUG
void CCTest111MFC���ݿ�View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest111MFC���ݿ�View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest111MFC���ݿ�Doc* CCTest111MFC���ݿ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest111MFC���ݿ�Doc)));
	return (CCTest111MFC���ݿ�Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest111MFC���ݿ�View ���ݿ�֧��
CRecordset* CCTest111MFC���ݿ�View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest111MFC���ݿ�View ��Ϣ�������


void CCTest111MFC���ݿ�View::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
