// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TGitTest3 : ModuleRules
{
	public TGitTest3(ReadOnlyTargetRules Target) : base(Target)
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
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TGitTest3",
			"TGitTest3/Variant_Platforming",
			"TGitTest3/Variant_Platforming/Animation",
			"TGitTest3/Variant_Combat",
			"TGitTest3/Variant_Combat/AI",
			"TGitTest3/Variant_Combat/Animation",
			"TGitTest3/Variant_Combat/Gameplay",
			"TGitTest3/Variant_Combat/Interfaces",
			"TGitTest3/Variant_Combat/UI",
			"TGitTest3/Variant_SideScrolling",
			"TGitTest3/Variant_SideScrolling/AI",
			"TGitTest3/Variant_SideScrolling/Gameplay",
			"TGitTest3/Variant_SideScrolling/Interfaces",
			"TGitTest3/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
