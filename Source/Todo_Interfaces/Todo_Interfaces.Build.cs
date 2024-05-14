// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Todo_Interfaces : ModuleRules
{
	public Todo_Interfaces(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
        
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
    }
}
