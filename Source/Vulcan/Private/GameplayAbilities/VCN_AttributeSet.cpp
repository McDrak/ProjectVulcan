// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilities/VCN_AttributeSet.h"

#include "Net/UnrealNetwork.h"

//======================================================================================================================
UVCN_AttributeSet::UVCN_AttributeSet()
{
}

//======================================================================================================================
void UVCN_AttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UVCN_AttributeSet, MaxHealth, OldMaxHealth);
}

//======================================================================================================================
void UVCN_AttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UVCN_AttributeSet, Health, OldHealth);
}

//======================================================================================================================
void UVCN_AttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UVCN_AttributeSet, MaxHealth, COND_None, REPNOTIFY_OnChanged);
	DOREPLIFETIME_CONDITION_NOTIFY(UVCN_AttributeSet, Health, COND_None, REPNOTIFY_OnChanged);
}
