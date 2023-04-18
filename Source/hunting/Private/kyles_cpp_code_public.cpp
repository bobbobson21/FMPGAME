// Fill out your copyright notice in the Description page of Project Settings.


#include "kyles_cpp_code_public.h"
#include "ShaderCompiler.h"

bool Ukyles_cpp_code_public::ContentIsStillLoading()
{
	return GShaderCompilingManager->IsCompiling();
}
