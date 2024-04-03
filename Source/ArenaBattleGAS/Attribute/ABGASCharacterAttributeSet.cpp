﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGASCharacterAttributeSet.h"

UABGASCharacterAttributeSet::UABGASCharacterAttributeSet() :
    AttackRange(100.f),
    MaxAttackRange(300.f),
    AttackRadius(50.f),
    MaxAttackRadius(150.f),
    MaxAttackRate(100.f),
    MaxHealth(100.f)
{
    InitHealth(GetMaxHealth());
}

void UABGASCharacterAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
    Super::PreAttributeChange(Attribute, NewValue);
}

void UABGASCharacterAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue,
    float NewValue)
{
    Super::PostAttributeChange(Attribute, OldValue, NewValue);
}
