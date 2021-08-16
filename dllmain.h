// dllmain.h: 模块类的声明。

class CXAJModule : public ATL::CAtlDllModuleT< CXAJModule >
{
public :
	DECLARE_LIBID(LIBID_XAJLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_XAJ, "{94233707-a67e-4579-9cba-8e92fbf8ee01}")
};

extern class CXAJModule _AtlModule;
