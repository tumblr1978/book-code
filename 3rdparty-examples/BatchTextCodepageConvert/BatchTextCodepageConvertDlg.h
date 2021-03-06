
// BatchTextCodepageConvertDlg.h : 头文件
//

#pragma once
#include "afxvslistbox.h"
#include "afxwin.h"


// CBatchTextCodepageConvertDlg 对话框
class CBatchTextCodepageConvertDlg : public CDialogEx
{
// 构造
public:
	CBatchTextCodepageConvertDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_BATCHTEXTCODEPAGECONVERT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDropFiles(HDROP hDropInfo);
	// 选中的文件名字
	CEdit m_oFileName;
	// 猜测的选中文件的代码页
	CEdit m_oCodepage;
	// 预览窗口
	CEdit m_oPreView;
	// 文件列表对象
	CListBox m_oFilesList;
	afx_msg void OnLbnSelchangeListFileslist();
	CString m_szCurFileName;
	afx_msg void OnLbnDblclkListFileslist();
	CString m_szCodepage;
	CString m_szPreView;
};
