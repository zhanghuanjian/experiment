
// CTest11-1MFC���ݿ�Set.cpp : CCTest111MFC���ݿ�Set ���ʵ��
//

#include "stdafx.h"
#include "CTest11-1MFC���ݿ�.h"
#include "CTest11-1MFC���ݿ�Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest111MFC���ݿ�Set ʵ��

// ���������� 2020��5��18��, 16:06

IMPLEMENT_DYNAMIC(CCTest111MFC���ݿ�Set, CRecordset)

CCTest111MFC���ݿ�Set::CCTest111MFC���ݿ�Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
// #error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CCTest111MFC���ݿ�Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x8868;DBQ=D:\\MFC\x8868\\Database1.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CCTest111MFC���ݿ�Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void CCTest111MFC���ݿ�Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[����]"), column3);
	RFX_Text(pFX, _T("[�ֻ���]"), column4);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest111MFC���ݿ�Set ���

#ifdef _DEBUG
void CCTest111MFC���ݿ�Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest111MFC���ݿ�Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

