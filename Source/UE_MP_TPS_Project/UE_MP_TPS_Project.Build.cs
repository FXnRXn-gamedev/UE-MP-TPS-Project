// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_MP_TPS_Project : ModuleRules
{
	public UE_MP_TPS_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
