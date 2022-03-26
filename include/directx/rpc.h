#pragma once

#define __RPCNDR_H_VERSION__

#define DECLSPEC_NOTHROW
#define COM_DECLSPEC_NOTHROW DECLSPEC_NOTHROW

#define __STRUCT__ struct
#define interface __STRUCT__
#define MIDL_INTERFACE(x) interface
#define STDMETHOD(method)        virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE method
#define STDMETHOD_(type,method)  virtual COM_DECLSPEC_NOTHROW type STDMETHODCALLTYPE method
#define STDMETHODV(method)       virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODVCALLTYPE method
#define STDMETHODV_(type,method) virtual COM_DECLSPEC_NOTHROW type STDMETHODVCALLTYPE method
#define PURE                    = 0
#define THIS_
#define THIS                    void
#define DECLARE_INTERFACE(iface)                        interface DECLSPEC_NOVTABLE iface
#define DECLARE_INTERFACE_(iface, baseiface)            interface DECLSPEC_NOVTABLE iface : public baseiface
#define DECLARE_INTERFACE_IID(iface, iid)               interface DECLSPEC_UUID(iid) DECLSPEC_NOVTABLE iface
#define DECLARE_INTERFACE_IID_(iface, baseiface, iid)   interface DECLSPEC_UUID(iid) DECLSPEC_NOVTABLE iface : public baseiface
#define DECLSPEC_UUID(x)
#define DECLSPEC_NOVTABLE
#define STDMETHODCALLTYPE
#define IFACEMETHOD(method)         __override STDMETHOD(method)
#define IFACEMETHOD_(type,method)   __override STDMETHOD_(type,method)
#define IFACEMETHODV(method)        __override STDMETHODV(method)
#define IFACEMETHODV_(type,method)  __override STDMETHODV_(type,method)
#define REFIID const IID &
#define __stdcall
#define EXTERN_C extern "C"
#define _In_
#define _Out_
#define _Out_opt_

typedef const char *LPCSTR;
typedef void *RPC_IF_HANDLE;
typedef struct GUID IID;
typedef signed int INT, HRESULT;
typedef void *LPVOID;
typedef unsigned int UINT;
typedef const void *LPCVOID;
typedef unsigned char BYTE;
typedef unsigned long UINT64, ULONG_PTR;

#ifdef __cplusplus
#ifdef INITGUID
#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) extern "C" const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }
#else
#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) extern "C" const GUID name
#endif
#endif
