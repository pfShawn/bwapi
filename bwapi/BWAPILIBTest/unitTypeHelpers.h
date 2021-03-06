#pragma once
#include "helpers.h"

#define AssertDef(v, p) Assert::AreEqual(v, t.p(), WIDE(#p))

#define Assert_enum(v) AssertDef(static_cast<int>(BWAPI::UnitTypes::Enum::v), getID)
#define Assert_getRace(v) AssertDef(BWAPI::Races::v, getRace)
#define Assert_requiredTech(v) AssertDef(BWAPI::TechTypes::v, requiredTech)
#define Assert_cloakingTech(v) AssertDef(BWAPI::TechTypes::v, cloakingTech)
#define Assert_armorUpgrade(v) AssertDef(BWAPI::UpgradeTypes::v, armorUpgrade)
#define Assert_maxHitPoints(v) AssertDef(v, maxHitPoints)
#define Assert_maxShields(v) AssertDef(v, maxShields)
#define Assert_maxEnergy(v) AssertDef(v, maxEnergy)
#define Assert_armor(v) AssertDef(v, armor)
#define Assert_mineralPrice(v) AssertDef(v, mineralPrice)
#define Assert_gasPrice(v) AssertDef(v, gasPrice)
#define Assert_buildTime(v) AssertDef(v, buildTime)
#define Assert_supplyRequired(v) AssertDef(v, supplyRequired)
#define Assert_supplyProvided(v) AssertDef(v, supplyProvided)
#define Assert_spaceRequired(v) AssertDef(v, spaceRequired)
#define Assert_spaceProvided(v) AssertDef(v, spaceProvided)
#define Assert_buildScore(v) AssertDef(v, buildScore)
#define Assert_destroyScore(v) AssertDef(v, destroyScore)
#define Assert_size(v) AssertDef(BWAPI::UnitSizeTypes::v, size)
#define Assert_tileWidth(v) AssertDef(v, tileWidth)
#define Assert_tileHeight(v) AssertDef(v, tileHeight)
#define Assert_tileSize(v) AssertDef(v, tileSize)
#define Assert_dimensionLeft(v) AssertDef(v, dimensionLeft)
#define Assert_dimensionUp(v) AssertDef(v, dimensionUp)
#define Assert_dimensionRight(v) AssertDef(v, dimensionRight)
#define Assert_dimensionDown(v) AssertDef(v, dimensionDown)
#define Assert_width(v) AssertDef(v, width)
#define Assert_height(v) AssertDef(v, height)
#define Assert_seekRange(v) AssertDef(v, seekRange)
#define Assert_sightRange(v) AssertDef(v, sightRange)
#define Assert_groundWeapon(v) AssertDef(BWAPI::WeaponTypes::v, groundWeapon)
#define Assert_maxGroundHits(v) AssertDef(v, maxGroundHits)
#define Assert_airWeapon(v) AssertDef(BWAPI::WeaponTypes::v, airWeapon)
#define Assert_maxAirHits(v) AssertDef(v, maxAirHits)
#define Assert_topSpeed(v) AssertDef(v, topSpeed)
#define Assert_acceleration(v) AssertDef(v, acceleration)
#define Assert_haltDistance(v) AssertDef(v, haltDistance)
#define Assert_turnRadius(v) AssertDef(v, turnRadius)
#define Assert_canProduce(v) AssertDef(v, canProduce)
#define Assert_canAttack(v) AssertDef(v, canAttack)
#define Assert_canMove(v) AssertDef(v, canMove)
#define Assert_isFlyer(v) AssertDef(v, isFlyer)
#define Assert_regeneratesHP(v) AssertDef(v, regeneratesHP)
#define Assert_isSpellcaster(v) AssertDef(v, isSpellcaster)
#define Assert_hasPermanentCloak(v) AssertDef(v, hasPermanentCloak)
#define Assert_isInvincible(v) AssertDef(v, isInvincible)
#define Assert_isOrganic(v) AssertDef(v, isOrganic)
#define Assert_isMechanical(v) AssertDef(v, isMechanical)
#define Assert_isRobotic(v) AssertDef(v, isRobotic)
#define Assert_isDetector(v) AssertDef(v, isDetector)
#define Assert_isResourceContainer(v) AssertDef(v, isResourceContainer)
#define Assert_isResourceDepot(v) AssertDef(v, isResourceDepot)
#define Assert_isRefinery(v) AssertDef(v, isRefinery)
#define Assert_isWorker(v) AssertDef(v, isWorker)
#define Assert_requiresPsi(v) AssertDef(v, requiresPsi)
#define Assert_requiresCreep(v) AssertDef(v, requiresCreep)
#define Assert_isTwoUnitsInOneEgg(v) AssertDef(v, isTwoUnitsInOneEgg)
#define Assert_isBurrowable(v) AssertDef(v, isBurrowable)
#define Assert_isCloakable(v) AssertDef(v, isCloakable)
#define Assert_isBuilding(v) AssertDef(v, isBuilding)
#define Assert_isAddon(v) AssertDef(v, isAddon)
#define Assert_isFlyingBuilding(v) AssertDef(v, isFlyingBuilding)
#define Assert_isNeutral(v) AssertDef(v, isNeutral)
#define Assert_isHero(v) AssertDef(v, isHero)
#define Assert_isPowerup(v) AssertDef(v, isPowerup)
#define Assert_isBeacon(v) AssertDef(v, isBeacon)
#define Assert_isFlagBeacon(v) AssertDef(v, isFlagBeacon)
#define Assert_isSpecialBuilding(v) AssertDef(v, isSpecialBuilding)
#define Assert_isSpell(v) AssertDef(v, isSpell)
#define Assert_producesLarva(v) AssertDef(v, producesLarva)
#define Assert_isMineralField(v) AssertDef(v, isMineralField)
#define Assert_isCritter(v) AssertDef(v, isCritter)
#define Assert_canBuildAddon(v) AssertDef(v, canBuildAddon)
