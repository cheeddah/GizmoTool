
// GizmoTool_Ver_Dig.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CGizmoTool_Ver_DigApp:
// �� Ŭ������ ������ ���ؼ��� GizmoTool_Ver_Dig.cpp�� �����Ͻʽÿ�.
//

class CGizmoTool_Ver_DigApp : public CWinApp
{
public:
	CGizmoTool_Ver_DigApp();

	virtual int ExitInstance();
	ULONG_PTR m_gpToken;



// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CGizmoTool_Ver_DigApp theApp;