// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IntroLatam2 : ModuleRules
{
	public IntroLatam2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
