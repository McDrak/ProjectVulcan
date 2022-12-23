// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/VCN_PlayerCharacter.h"

#include "Camera/CameraComponent.h"

//======================================================================================================================
AVCN_PlayerCharacter::AVCN_PlayerCharacter()
{
	GetMesh()->SetOwnerNoSee(true);

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCameraComponent"));
	FirstPersonCameraComponent->SetupAttachment(RootComponent);

	FirstPersonMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMeshComponent"));
	FirstPersonMeshComponent->SetupAttachment(FirstPersonCameraComponent);
	FirstPersonMeshComponent->SetOnlyOwnerSee(true);
}
