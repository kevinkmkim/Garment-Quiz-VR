#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410 (void);
// 0x00000002 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile_Internal(System.String,System.UInt32,System.UInt64)
extern void AssetBundle_LoadFromFile_Internal_mBADE7FF4DE42B855B626633622F8DE05820B4876 (void);
// 0x00000003 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
extern void AssetBundle_LoadFromFile_mFED01CCB7121612FD98DC6D79ECD08F58DADA275 (void);
// 0x00000004 System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern void AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B (void);
// 0x00000005 System.String[] UnityEngine.AssetBundle::GetAllScenePaths()
extern void AssetBundle_GetAllScenePaths_m75D1CD4415067D64A8265A7929B6FF76B91B62FE (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410,
	AssetBundle_LoadFromFile_Internal_mBADE7FF4DE42B855B626633622F8DE05820B4876,
	AssetBundle_LoadFromFile_mFED01CCB7121612FD98DC6D79ECD08F58DADA275,
	AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B,
	AssetBundle_GetAllScenePaths_m75D1CD4415067D64A8265A7929B6FF76B91B62FE,
};
static const int32_t s_InvokerIndices[5] = 
{
	4891,
	6062,
	7129,
	3779,
	4784,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	5,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
