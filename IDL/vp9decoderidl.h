

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Mar 27 18:03:43 2015
 */
/* Compiler settings for ..\IDL\vp9decoder.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __vp9decoderidl_h__
#define __vp9decoderidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVP9PostProcessing_FWD_DEFINED__
#define __IVP9PostProcessing_FWD_DEFINED__
typedef interface IVP9PostProcessing IVP9PostProcessing;

#endif 	/* __IVP9PostProcessing_FWD_DEFINED__ */


#ifndef __VP9Decoder_FWD_DEFINED__
#define __VP9Decoder_FWD_DEFINED__

#ifdef __cplusplus
typedef class VP9Decoder VP9Decoder;
#else
typedef struct VP9Decoder VP9Decoder;
#endif /* __cplusplus */

#endif 	/* __VP9Decoder_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __VP9DecoderLib_LIBRARY_DEFINED__
#define __VP9DecoderLib_LIBRARY_DEFINED__

/* library VP9DecoderLib */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_VP9DecoderLib;

#ifndef __IVP9PostProcessing_INTERFACE_DEFINED__
#define __IVP9PostProcessing_INTERFACE_DEFINED__

/* interface IVP9PostProcessing */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVP9PostProcessing;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ED311109-5211-11DF-94AF-0026B977EEAA")
    IVP9PostProcessing : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IVP9PostProcessingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVP9PostProcessing * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVP9PostProcessing * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVP9PostProcessing * This);
        
        END_INTERFACE
    } IVP9PostProcessingVtbl;

    interface IVP9PostProcessing
    {
        CONST_VTBL struct IVP9PostProcessingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVP9PostProcessing_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVP9PostProcessing_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVP9PostProcessing_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVP9PostProcessing_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VP9Decoder;

#ifdef __cplusplus

class DECLSPEC_UUID("ED31110A-5211-11DF-94AF-0026B977EEAA")
VP9Decoder;
#endif
#endif /* __VP9DecoderLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


