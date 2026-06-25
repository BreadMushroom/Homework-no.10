#include "Temporary.h"

void FTemporaryModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("Start Module!"));
}

void FTemporaryModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("End Module!"));
}

IMPLEMENT_MODULE(FTemporaryModule, Temporary)