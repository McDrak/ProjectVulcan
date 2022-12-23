// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "VCN_PlayerState.generated.h"

class UAbilitySystemComponent;
class UVCN_AbilitySystemComponent;
class UVCN_AttributeSet;

/**
 * TODO
 */
UCLASS()
class VULCAN_API AVCN_PlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AVCN_PlayerState();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UVCN_AbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UVCN_AttributeSet* AttributeSet;

public:
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual UVCN_AttributeSet* GetAttributeSet() const;
};
