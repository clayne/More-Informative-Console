#pragma once

#include "GameObjects.h"
#include "GameForms.h"
#include "GameRTTI.h"
#include "GameObjects.h"
#include "GameData.h"
#include "GameBSExtraData.h"
#include "GameExtraData.h"

namespace MICOptions
{
	extern boolean MICDebugMode; //Enables debugging code. Currently this just activates the logging features

	//extern int BackgroundColor; //Background color of the extra info window
	extern double Transparency; //Transperency of the extra info window background
	extern double Scale; //Scale of the extra info window
	extern int FieldsToDisplay; //Number of text fields to display

	extern int BaseInfoFormat; //How much information to display in the base info window
}

namespace MICGlobals
{
	extern boolean readRaceSkins; //Enable/Disabling reading the skin entires for races. Used to prevent an infinite loop of reading Race->Armor-Arma-Race
	extern TESRace* filterARMAByRace; //Used to filter ARMA forms for armors to only show ARMAs that can be used by a specific race.
	extern boolean reducedMode; //Used to reduce the amount of info read to prevent crashes on opening chests with very large number of armors in certain circumstances
	extern int maxInventoryBeforeReducedMode; //Maximum inventory size before triggering reduced mode
}

void DebugMessage(std::string message);

std::string GetActorValueName(int id);
std::string GetEffectTypeName(int id);
std::string GetSpellTypeName(int spellType);
std::string GetCastingTypeName(int castingType);
std::string GetDeliveryTypeName(int deliveryType);
std::string GetTextureType(int textureType);


std::string GetName(TESForm* pBaseForm);
int NumberOfItemInContainer(TESForm * item, TESContainer * container);
bool HasItem(EntryDataList * inventory, TESForm * item);
std::string GetFormTypeName(int formType);
std::string GetArmorWeightClassName(int weightClass);
std::string GetEquipSlotName(int slot);
std::string GetWeaponAnimationTypeName(int weaponType);
std::string GetEquipTypeName(int formID);

std::string IntToString(int number);
std::string FloatToString(float number);
std::string DoubleToString(double number);
std::string FormIDToString(int formID);

int GetSmallestBitFlag(int flags);
std::string GetFileName(std::string filePath);