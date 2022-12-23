// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Vulcan : ModuleRules
{
	public Vulcan(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "GameplayAbilities", "GameplayTags", "GameplayTasks" });
	}
}
