//@Author: Teodor Tysklind / Teodor.Tysklind@FutureGames.nu

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridActor.generated.h"

USTRUCT(BlueprintType)
struct FTileInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Tile")
	bool bBlock = false;
};

class ULineBatchComponent;
class UStaticMeshComponent;
class UStaticMesh;
class UStaticMeshDescription;

UCLASS()
class ASTARPROJECT_API AGridActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AGridActor();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	UStaticMeshComponent* StaticMeshComponent = nullptr;

	UPROPERTY()
	UStaticMesh* GridMesh = nullptr;

	UPROPERTY()
	UStaticMeshDescription* MeshDescription = nullptr;

	UPROPERTY()
	ULineBatchComponent* LineBatchComponent = nullptr;
	
	
protected:
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;
};
