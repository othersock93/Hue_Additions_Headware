#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Hue_Additions_Headware
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"Extended_EventHandlers",
			"rhsusf_infantry2"
		};
		author="Huenik";
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class flight_helmets
		{
			label="Headware";
			author="Huenik";
			options[]=
			{
				"name",
				"type",
				"backPatches",
				"frontPatches"
			};
			class name
			{
				label="Helmet";
				values[]=
				{
					"Huenik",
					"Zero",
					"Echo",
					"Bobby",
					"War",
					"Dom",
					"Pug"
				};
				class Huenik
				{};
				class Zero
				{};
				class Echo
				{};
				class Bobby
				{};
				class Dom
				{};
				class War
				{};
				class Pug
				{};
			};
			class type
			{
				label="Helmet Attachments";
				changeingame=1;
				values[]=
				{
					"Base",
					"Mask",
					"MaskVisor",
					"Visor"
				};
				class Base
				{
					description="Helmet Only";
					actionLabel="Remove helmet attachments";
				};
				class Mask
				{
					description="Helmet + Mask";
					actionLabel="Attach helmet mask";
				};
				class MaskVisor
				{
					label="Helmet + Mask + Visor";
					description="The Whole Shabang";
					actionLabel="Attach helmet mask and visor";
				};
				class Visor
				{
					description="Helmet + Visor";
					actionLabel="Attach helmet visor";
				};
			};
			class backPatches
			{
				label="Back Patches";
				values[]=
				{
					"NoBP",
					"AUS_IR"
				};
				class NoBP
				{
					label="None";
					description="No Patches";
				};
				class AUS_IR
				{
					label="AUS Patch";
					description="AUS IR Flag (Top Only)";
					image="Hue_Additions_Headware\UI\aus_ir.paa";
				};
			};
			class frontPatches
			{
				label="Front Patches";
				values[]=
				{
					"NoFP",
					"HawkFP",
					"HawkFP2"
				};
				class NoFP
				{
					label="None";
					description="No Patches";
				};
				class HawkFP
				{
					label="Hawkeye";
					description="Hawkeye Patches";
				};
				class HawkFP2
				{
					label="Hawkeye V2";
					description="V2 Hawkeye Patches";
				};
			};
		};
	};
};

class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class H_HelmetB;
	class FlightHelm_Base : H_HelmetB
	{
		author="Huenik";
		scope=0;
		displayName="Huenik";
		picture="Hue_Additions_Headware\UI\vanilla_ui.paa";
		model="Hue_Additions_Headware\Models\helmet_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\huenik_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		ace_hearing_hasEHP = 1;
		ace_hearing_lowerVolume=0.6;
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
			class HitPointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=15;
					passThrough=0.5;
				};
				class Face
				{
					hitPointName="hitFace";
					armor=5;
					passThrough=0.75;
				};
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Base";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};

#include "config\huenik.hpp"
#include "config\zero.hpp"
#include "config\echo.hpp"
#include "config\bobby.hpp"
#include "config\dom.hpp"
#include "config\war.hpp"
#include "config\pug.hpp"
#include "config\berets.hpp"
};

class cfgMods
{
	timepacked="1685396153";
};