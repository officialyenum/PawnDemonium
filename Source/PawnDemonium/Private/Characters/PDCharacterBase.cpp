// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/PDCharacterBase.h"

// Sets default values
APDCharacterBase::APDCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Remove the skeletal mesh component
	GetMesh()->DestroyComponent();

	PawnMesh = CreateDefaultSubobject<UStaticMeshComponent>("PawnMesh");
	PawnMesh->SetupAttachment(GetRootComponent());

}

// Called when the game starts or when spawned
void APDCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APDCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APDCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

