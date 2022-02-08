// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GraphicsRHIData.generated.h"

/**
 * 
 */
 
 UENUM(BlueprintType)
 enum class EGraphicsRHI : uint8
 {
 	RHI_DX11	UMETA(DisplayName="DirectX 11"),
 	RHI_DX12	UMETA(DisplayName="DirectX 12"),
 	RHI_VULKAN	UMETA(DisplayName="Vulkan")
 };

