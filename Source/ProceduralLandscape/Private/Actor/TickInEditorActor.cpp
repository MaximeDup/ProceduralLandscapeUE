// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/TickInEditorActor.h"

// Sets default values
ATickInEditorActor::ATickInEditorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

#if WITH_EDITOR
bool ATickInEditorActor::ShouldTickIfViewportsOnly() const
{
	return true;
}

#endif


// Called when the game starts or when spawned
void ATickInEditorActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATickInEditorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(Trigger)
	{
		Compute();
		Trigger=false;
	}

}

