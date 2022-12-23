// Fill out your copyright notice in the Description page of Project Settings.


#include "GameFramework/VCN_PlayerState.h"

#include "GameplayAbilities/VCN_AbilitySystemComponent.h"
#include "GameplayAbilities/VCN_AttributeSet.h"

//======================================================================================================================
AVCN_PlayerState::AVCN_PlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UVCN_AbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UVCN_AttributeSet>(TEXT("AttributeSet"));

	NetUpdateFrequency = 100.f;
}

//======================================================================================================================
UAbilitySystemComponent* AVCN_PlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

//======================================================================================================================
UVCN_AttributeSet* AVCN_PlayerState::GetAttributeSet() const
{
	return AttributeSet;
}
