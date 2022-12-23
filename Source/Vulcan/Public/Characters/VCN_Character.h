// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "VCN_Character.generated.h"

class UAbilitySystemComponent;
class UVCN_AbilitySystemComponent;
class UVCN_AttributeSet;

UCLASS()
class VULCAN_API AVCN_Character : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVCN_Character();

protected:
	TWeakObjectPtr<UVCN_AbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<UVCN_AttributeSet> AttributeSet;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual UVCN_AttributeSet* GetAttributeSet() const;
};
