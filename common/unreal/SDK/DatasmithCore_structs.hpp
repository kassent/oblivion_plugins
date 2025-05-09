﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DatasmithCore

#include "Basic.hpp"


namespace SDK
{

// Enum DatasmithCore.EDatasmithLightShape
// NumValues: 0x0006
enum class EDatasmithLightShape : uint8
{
	Rectangle                                = 0,
	Disc                                     = 1,
	Sphere                                   = 2,
	Cylinder                                 = 3,
	None                                     = 4,
	EDatasmithLightShape_MAX                 = 5,
};

// Enum DatasmithCore.EDatasmithTextureMode
// NumValues: 0x0009
enum class EDatasmithTextureMode : uint8
{
	Diffuse                                  = 0,
	Specular                                 = 1,
	Normal                                   = 2,
	NormalGreenInv                           = 3,
	UNUSED_Displace                          = 4,
	Other                                    = 5,
	Bump                                     = 6,
	Ies                                      = 7,
	EDatasmithTextureMode_MAX                = 8,
};

// Enum DatasmithCore.EDatasmithTextureFilter
// NumValues: 0x0005
enum class EDatasmithTextureFilter : uint8
{
	Nearest                                  = 0,
	Bilinear                                 = 1,
	Trilinear                                = 2,
	Default                                  = 3,
	EDatasmithTextureFilter_MAX              = 4,
};

// Enum DatasmithCore.EDatasmithTextureAddress
// NumValues: 0x0004
enum class EDatasmithTextureAddress : uint8
{
	Wrap                                     = 0,
	Clamp                                    = 1,
	Mirror                                   = 2,
	EDatasmithTextureAddress_MAX             = 3,
};

// Enum DatasmithCore.EDatasmithTextureFormat
// NumValues: 0x0003
enum class EDatasmithTextureFormat : uint8
{
	PNG                                      = 0,
	JPEG                                     = 1,
	EDatasmithTextureFormat_MAX              = 2,
};

// Enum DatasmithCore.EDatasmithColorSpace
// NumValues: 0x0004
enum class EDatasmithColorSpace : uint8
{
	Default                                  = 0,
	sRGB                                     = 1,
	Linear                                   = 2,
	EDatasmithColorSpace_MAX                 = 3,
};

// Enum DatasmithCore.EDatasmithKeyValuePropertyType
// NumValues: 0x0008
enum class EDatasmithKeyValuePropertyType : uint8
{
	String                                   = 0,
	Color                                    = 1,
	Float                                    = 2,
	Bool                                     = 3,
	Texture                                  = 4,
	Vector                                   = 5,
	Integer                                  = 6,
	EDatasmithKeyValuePropertyType_MAX       = 7,
};

// Enum DatasmithCore.EDatasmithActorRemovalRule
// NumValues: 0x0003
enum class EDatasmithActorRemovalRule : uint8
{
	RemoveChildren                           = 0,
	KeepChildrenAndKeepRelativeTransform     = 1,
	EDatasmithActorRemovalRule_MAX           = 2,
};

// Enum DatasmithCore.EDatasmithActorAttachmentRule
// NumValues: 0x0003
enum class EDatasmithActorAttachmentRule : uint8
{
	KeepRelativeTransform                    = 0,
	KeepWorldTransform                       = 1,
	EDatasmithActorAttachmentRule_MAX        = 2,
};

// Enum DatasmithCore.EDatasmithCompletionMode
// NumValues: 0x0004
enum class EDatasmithCompletionMode : uint8
{
	KeepState                                = 0,
	RestoreState                             = 1,
	ProjectDefault                           = 2,
	EDatasmithCompletionMode_MAX             = 3,
};

// Enum DatasmithCore.EDatasmithPropertyCategory
// NumValues: 0x000A
enum class EDatasmithPropertyCategory : uint8
{
	Undefined                                = 0,
	Generic                                  = 1,
	RelativeLocation                         = 2,
	RelativeRotation                         = 4,
	RelativeScale3D                          = 8,
	Visibility                               = 16,
	Material                                 = 32,
	Color                                    = 64,
	Option                                   = 128,
	EDatasmithPropertyCategory_MAX           = 129,
};

// ScriptStruct DatasmithCore.DatasmithMeshSourceModel
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x08) FDatasmithMeshSourceModel final
{
public:
	uint8                                         Pad_0[0x40];                                       // 0x0000(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDatasmithMeshSourceModel) == 0x000008, "Wrong alignment on FDatasmithMeshSourceModel");
static_assert(sizeof(FDatasmithMeshSourceModel) == 0x000040, "Wrong size on FDatasmithMeshSourceModel");

}

