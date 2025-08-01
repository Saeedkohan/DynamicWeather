// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DynamicWeather : ModuleRules
{
	public DynamicWeather(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Niagara"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"DynamicWeather",
			"DynamicWeather/Variant_Platforming",
			"DynamicWeather/Variant_Combat",
			"DynamicWeather/Variant_Combat/AI",
			"DynamicWeather/Variant_SideScrolling",
			"DynamicWeather/Variant_SideScrolling/Gameplay",
			"DynamicWeather/Variant_SideScrolling/AI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
