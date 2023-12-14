// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPP_Trajectory_AM : ModuleRules
{
	public CPP_Trajectory_AM(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
