// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "kyles_cpp_code_public.generated.h"
#include "ShaderCompiler.h"

/**
* by the one true god hyle edwards
*/
UCLASS()
class HUNTING_API Ukyles_cpp_code_public : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "kylescpp")
		static bool ContentIsStillLoading();

};
