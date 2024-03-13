// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HOMrwork6 : ModuleRules
{
	public HOMrwork6(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara" });
    }
}
