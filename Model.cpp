// Model.cpp: CModel 的实现


#include "pch.h"
#include "Model.h"

//添加新安江模型的头文件
#include "XinanjiangModel.h"

// CModel

STDMETHODIMP_(HRESULT __stdcall) CModel::Run(CHAR* argv[])
{
	//运行新安江模型
	main(0, argv);

	//默认返回 函数执行正确
	return S_OK;
}
