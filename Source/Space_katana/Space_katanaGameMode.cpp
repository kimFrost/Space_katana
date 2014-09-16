

#include "Space_katana.h"
#include "Space_katanaGameMode.h"
#include "Space_katanaPlayerController.h"

ASpace_katanaGameMode::ASpace_katanaGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ASpace_katanaPlayerController::StaticClass();
}


