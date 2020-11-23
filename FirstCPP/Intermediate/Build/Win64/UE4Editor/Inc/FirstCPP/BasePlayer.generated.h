// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTCPP_BasePlayer_generated_h
#error "BasePlayer.generated.h already included, missing '#pragma once' in BasePlayer.h"
#endif
#define FIRSTCPP_BasePlayer_generated_h

#define FirstCPP_Source_FirstCPP_BasePlayer_h_15_SPARSE_DATA
#define FirstCPP_Source_FirstCPP_BasePlayer_h_15_RPC_WRAPPERS
#define FirstCPP_Source_FirstCPP_BasePlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstCPP_Source_FirstCPP_BasePlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstCPP"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define FirstCPP_Source_FirstCPP_BasePlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstCPP"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define FirstCPP_Source_FirstCPP_BasePlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public:


#define FirstCPP_Source_FirstCPP_BasePlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayer)


#define FirstCPP_Source_FirstCPP_BasePlayer_h_15_PRIVATE_PROPERTY_OFFSET
#define FirstCPP_Source_FirstCPP_BasePlayer_h_12_PROLOG
#define FirstCPP_Source_FirstCPP_BasePlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstCPP_Source_FirstCPP_BasePlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstCPP_Source_FirstCPP_BasePlayer_h_15_SPARSE_DATA \
	FirstCPP_Source_FirstCPP_BasePlayer_h_15_RPC_WRAPPERS \
	FirstCPP_Source_FirstCPP_BasePlayer_h_15_INCLASS \
	FirstCPP_Source_FirstCPP_BasePlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstCPP_Source_FirstCPP_BasePlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstCPP_Source_FirstCPP_BasePlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstCPP_Source_FirstCPP_BasePlayer_h_15_SPARSE_DATA \
	FirstCPP_Source_FirstCPP_BasePlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstCPP_Source_FirstCPP_BasePlayer_h_15_INCLASS_NO_PURE_DECLS \
	FirstCPP_Source_FirstCPP_BasePlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTCPP_API UClass* StaticClass<class ABasePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstCPP_Source_FirstCPP_BasePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
