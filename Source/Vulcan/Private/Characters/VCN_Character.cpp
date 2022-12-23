// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/VCN_Character.h"

#include "GameplayAbilities/VCN_AbilitySystemComponent.h"

//======================================================================================================================
// Sets default values
AVCN_Character::AVCN_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//======================================================================================================================
// Called when the game starts or when spawned
void AVCN_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

//======================================================================================================================
// Called every frame
void AVCN_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//======================================================================================================================
// Called to bind functionality to input
void AVCN_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//======================================================================================================================
UAbilitySystemComponent* AVCN_Character::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent.Get();
}

//======================================================================================================================
UVCN_AttributeSet* AVCN_Character::GetAttributeSet() const
{
	return AttributeSet.Get();
}

