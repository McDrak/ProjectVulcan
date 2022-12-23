// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/VCN_Character.h"
#include "VCN_PlayerCharacter.generated.h"

class UCameraComponent;
class USkeletalMeshComponent;
class UInputMappingContext;

/**
 * TODO
 */
UCLASS()
class VULCAN_API AVCN_PlayerCharacter : public AVCN_Character
{
	GENERATED_BODY()

public:
	AVCN_PlayerCharacter();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* FirstPersonCameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* FirstPersonMeshComponent;
};
