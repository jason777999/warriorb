// Copyright (c) Csaba Molnar & Daniel Butum. All Rights Reserved.
#include "SoAchievementSettings.h"
#include "SoAchievement.h"
#include "Basic/Helpers/SoStaticHelper.h"


#if WITH_EDITOR
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
FText USoAchievementSettings::GetSectionDescription() const
{
	return FText::FromString(TEXT("Configure the achievements present in the game"));
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool USoAchievementSettings::CanEditChange(const UProperty* InProperty) const
{
	const bool bIsEditable = Super::CanEditChange(InProperty);
	return bIsEditable;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void USoAchievementSettings::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif // WITH_EDITOR

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void USoAchievementSettings::PostLoad()
{
	Super::PostLoad();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void USoAchievementSettings::PostInitProperties()
{
	Super::PostInitProperties();

	if (!HasAnyFlags(RF_ClassDefaultObject | RF_NeedLoad))
	{
		CheckAndFixIntegrity();
		SaveSettings();
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void USoAchievementSettings::CheckAndFixIntegrity()
{

}
