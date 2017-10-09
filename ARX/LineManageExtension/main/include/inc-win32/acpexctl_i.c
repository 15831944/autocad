//////////////////////////////////////////////////////////////////////////////
//
//  Copyright 2012 Autodesk, Inc.  All rights reserved.
//
//  Use of this software is subject to the terms of the Autodesk license 
//  agreement provided at the time of installation or download, or which 
//  otherwise accompanies this software in either electronic or hard copy form.   
//
//////////////////////////////////////////////////////////////////////////////



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Feb 06 18:11:58 2012
 */
/* Compiler settings for U:\develop\global\src\coreapps\opm\AcPEXCtl\AcPEXCtl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_ACPEXCTLLib,0x5C232F67,0xF20E,0x4855,0xBB,0xD8,0xC0,0x92,0x65,0x9B,0xF7,0x7A);


MIDL_DEFINE_GUID(IID, IID_IAcPeNumericEditor,0xAD52023A,0x9B0D,0x44c8,0xAD,0x8A,0xB2,0x82,0x50,0x85,0x82,0x22);


MIDL_DEFINE_GUID(IID, IID_IAcPeVariantCtrl,0x2A5B57E5,0x7B4F,0x4fee,0xB3,0x6B,0xFF,0x63,0x64,0x68,0xED,0x91);


MIDL_DEFINE_GUID(IID, IID_IAcPeColorCtrl,0x3C308511,0x9949,0x46F3,0x93,0xA5,0x76,0xD2,0x3A,0x63,0x3E,0x11);


MIDL_DEFINE_GUID(IID, IID_IAcPeSpinCtrl,0x4132B288,0x9018,0x4690,0xBD,0xFD,0x58,0xA0,0xEB,0x2F,0x3D,0x27);


MIDL_DEFINE_GUID(IID, IID_IAcPeNoPickVariantRW,0xFFDC513D,0xB298,0x4d51,0xAC,0xA7,0x83,0x84,0xF1,0x19,0x66,0x50);


MIDL_DEFINE_GUID(IID, IID_IAcPeButtonEditCtrl,0x5295B0C4,0x94A0,0x4167,0xBA,0x90,0x1C,0x61,0xA8,0x68,0xE2,0x69);


MIDL_DEFINE_GUID(IID, IID_IAcPeButtonPicture,0x6395B0C4,0x94A0,0x4167,0xBA,0x90,0x1C,0x61,0xA8,0x68,0xE2,0x69);


MIDL_DEFINE_GUID(IID, IID_IAcPePick2PointsCtrl,0x01500220,0x9289,0x41be,0x9A,0x2E,0xF3,0x00,0xA8,0x45,0x98,0xB0);


MIDL_DEFINE_GUID(IID, IID_IAcPeCalculatorCtrl,0x0AED2050,0x3838,0x4c85,0xA8,0x16,0xBA,0x5C,0xC5,0x60,0x49,0x99);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorText,0xE631D337,0x7F88,0x44C8,0xB6,0x3F,0xC9,0x03,0x12,0x92,0xFB,0x4E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorLWeight,0x7C21FF74,0xD9D0,0x4C6B,0x9C,0x25,0x1D,0x41,0xB5,0x8F,0x47,0x76);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorLayer,0x7FFD8B60,0x5083,0x4c30,0xA6,0x42,0xAE,0x08,0xCD,0x6B,0x75,0xE7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorMaterial,0xA8DBF45D,0x5F3F,0x497C,0x8D,0xC3,0x84,0xBD,0x8A,0x07,0x8A,0x1B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorColor,0x5149A9AC,0xE7E5,0x43C7,0xA7,0x8F,0xA8,0x0A,0x53,0x78,0x3A,0x8D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorLType,0x615F2CF0,0xC283,0x4ff9,0xB8,0x39,0xFA,0xB4,0x3A,0x95,0x78,0x85);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorNumeric,0x50446CFC,0xB0CF,0x432a,0xBA,0x08,0x5D,0x1C,0xBD,0xF0,0x90,0xC8);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorBool,0x6C2269DC,0x77B6,0x4908,0x8D,0x0C,0x4E,0x3C,0xF1,0x03,0x6F,0xA7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorACADNumeric,0xD621630B,0x0BFA,0x480e,0x94,0xEF,0x2E,0xEA,0x1B,0xD5,0x8D,0x51);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePick2PointsCtrl,0x15CC9D07,0x16B4,0x11d6,0xA4,0xC1,0x00,0x10,0x83,0x78,0x2B,0x8E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorNumericArea,0x7E7D8243,0x4A38,0x42f5,0xA1,0x52,0x06,0x29,0x31,0x5D,0x7B,0x2B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorEllipses,0xDDE306CA,0xB5C1,0x4c92,0xAF,0xAB,0x2B,0x37,0xD0,0x1A,0x71,0x7F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorEditButton,0xC504B291,0x944A,0x4828,0x9C,0xFC,0xD3,0x72,0x7B,0x65,0x1A,0xC7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorEnum,0x4DE4AD7B,0x6F4A,0x441e,0x98,0xEE,0x8B,0x1D,0xF0,0xF8,0xBD,0xC4);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorSpinnerEnum,0x339150DF,0xE48E,0x4f42,0x80,0x02,0x84,0x89,0xF0,0xFF,0x5D,0x64);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorHatchEnum,0x8221CC89,0x8C65,0x4c50,0x85,0xFE,0x53,0x00,0x5D,0xE1,0xB3,0xB0);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorMTextDir,0xE2E8A2A9,0x935D,0x4bb5,0x93,0x47,0x71,0x7D,0xDA,0xEB,0x32,0x7F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorHatchISOPenWidth,0xEF5A02F6,0x7908,0x407f,0xA9,0x45,0x2B,0xCB,0x2A,0xE5,0x89,0xAB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorHatchPatternName,0xCD5C7ABB,0x9A0C,0x4c3a,0xB0,0xC7,0x73,0x29,0x6A,0xFF,0x7E,0xC1);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorEllipsisHatchPatternType,0x04D47EE2,0xEA15,0x41bd,0xA1,0xE7,0x99,0x03,0x31,0xC7,0xCE,0xCD);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPeDlgLaunchCtrl,0xC6CB13D4,0x3E36,0x4ab8,0x80,0xD2,0xFC,0x20,0x2C,0xBB,0x0A,0xCD);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorVariant,0xC14AD0AE,0x7C2D,0x48e7,0xB8,0xFC,0x2D,0x48,0xAD,0x91,0x49,0xD1);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorEllipsesHyperlinks,0x45D4C0E8,0x5896,0x420d,0xA2,0x7C,0x6A,0x97,0x93,0x49,0x70,0x65);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorSpin,0x2AF455A6,0x9012,0x4d01,0x9E,0x02,0xA8,0xE5,0x68,0x0E,0x1E,0x7E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorDimArrowHead,0xAA055959,0xC7F1,0x4cfd,0xA2,0xD1,0x88,0x81,0xD5,0x47,0xE7,0x9C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorGradientPattern,0x94684377,0x17FE,0x452E,0x9A,0x51,0x7A,0xAB,0xFF,0xFE,0x40,0xBA);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorPlotStyleName,0x55CF0D68,0xEBD0,0x4d54,0xB1,0x38,0x98,0xCC,0xF7,0xBC,0xCB,0x20);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorPlotStyleTable,0x98EEC9A9,0x7F09,0x48e0,0xB6,0x15,0x98,0x48,0x01,0xA6,0x34,0xCB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorNoPickVariant,0xC64EA053,0x7634,0x4466,0x89,0xCF,0xAF,0xDA,0xB9,0x2C,0x8F,0x1B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorRasterImageHeight,0xED2490B2,0x06E6,0x4b7e,0x80,0xD7,0x1A,0xDA,0xD6,0x36,0x36,0x94);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorRasterImageWidth,0x99CD9966,0xD002,0x425d,0xAB,0x7A,0x04,0xE5,0x00,0x54,0x6D,0xB6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorTextJustify,0xCC7F3967,0x6919,0x42e6,0xA2,0xED,0x6F,0xFA,0x06,0x97,0xAF,0xBB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorEllipseEndAngle,0x7C672133,0x53DB,0x4fbf,0xBA,0x5C,0xE0,0x17,0xF8,0x3D,0x86,0x6B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorDimStyle,0x4D0BBBEF,0xB91D,0x46ac,0xA3,0xC0,0xBE,0xBB,0x94,0x7F,0xAD,0xE6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorTextStyle,0xE4A55764,0x4C3D,0x405e,0xBC,0xCB,0x8C,0x81,0xAB,0x6D,0xBC,0xFC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorMTextStyle,0x151E6750,0x4079,0x4609,0x9F,0xD3,0xAD,0x68,0xB6,0x0F,0x8B,0x65);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorCustomColor,0x43FD41DE,0xD16A,0x44ad,0x84,0x7F,0x70,0xC0,0x87,0x43,0xBD,0xDB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorPwdText,0x39AB6541,0xF2E3,0x46b1,0xAC,0xEE,0xED,0xDC,0x2B,0xD8,0xA2,0x6A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorTextEx,0x8355614D,0xDC16,0x4a84,0xAF,0x66,0x75,0x8E,0x4C,0xA4,0xFE,0x14);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorVisualStyle,0x6CADB719,0x36E3,0x4E22,0xBD,0xF1,0x65,0xB3,0x94,0xDA,0xDC,0xDF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorLightLampColor,0xBB069CBE,0x6B99,0x4dac,0x87,0x3C,0x0C,0xB6,0x0D,0xCF,0x14,0x4D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorIntensityScheme,0xAFB16721,0xD061,0x4BFC,0xB8,0xC9,0x7A,0x24,0xE5,0xD4,0xD4,0x58);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorLightWebPreview,0x05F84868,0x29A5,0x44bb,0xBC,0x2B,0x4F,0x00,0xDC,0xE3,0xF6,0x94);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorLightIntensity,0x124268F0,0x4F78,0x4434,0x8E,0x45,0x87,0xA7,0x2C,0xAB,0x0A,0xFA);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorTableStyle,0x1BCAFFC4,0x3397,0x486a,0x80,0xD0,0x4C,0xBA,0x3C,0x18,0x66,0x78);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorAttributeValue,0x64117059,0xA80B,0x4ea4,0x86,0xED,0xBB,0x45,0xCC,0x61,0x48,0xA7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorPredefBlock,0x6326A3CE,0x62D5,0x4080,0xB6,0x82,0xCD,0x15,0x2D,0x50,0x7D,0x0B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorMLeaderStyle,0x0480A986,0x4ECA,0x40ab,0xA1,0xC7,0x8D,0xCE,0xA0,0x08,0x2B,0x0A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertySectionLayerCombo,0x0480B986,0x5ECA,0x40ab,0xA2,0xC7,0x9D,0xCE,0xA0,0x07,0x2B,0x0A);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



