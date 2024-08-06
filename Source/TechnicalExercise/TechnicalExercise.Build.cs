// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TechnicalExercise : ModuleRules
{
	public TechnicalExercise(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
