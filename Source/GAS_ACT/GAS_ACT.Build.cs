// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GAS_ACT : ModuleRules
{
	public GAS_ACT(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
