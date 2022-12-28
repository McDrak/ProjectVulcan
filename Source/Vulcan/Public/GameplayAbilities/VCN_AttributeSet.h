// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "VCN_AttributeSet.generated.h"

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * TODO
 */
UCLASS()
class VULCAN_API UVCN_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UVCN_AttributeSet();

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = "OnRep_MaxHealth")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UVCN_AttributeSet, MaxHealth)

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = "OnRep_Health")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UVCN_AttributeSet, Health)

	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth);
};
