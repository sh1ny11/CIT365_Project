// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lab06 : ModuleRules
{
	public Lab06(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
