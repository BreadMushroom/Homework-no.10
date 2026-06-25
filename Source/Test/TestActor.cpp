#include "TestActor.h"

ATestActor::ATestActor()
{
 	
	PrimaryActorTick.bCanEverTick = false;

}


void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Error, TEXT("New Module Test"));
}



