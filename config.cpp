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

#include "hawk2.hpp"

////////////////////
/// Huenik Helms ///
////////////////////

	class Huenik_H_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik";
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
		class ItemInfo: ItemInfo
		{
		uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
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
	class Huenik_H_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\huenik_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Base";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Huenik_H_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik AUS";
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
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Huenik_H_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik AUS 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\huenik_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Huenik_H_M_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik M";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
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
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Mask";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Huenik_H_M_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik M 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\huenik_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Mask";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Huenik_H_M_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik M AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
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
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Huenik_H_M_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik M AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\huenik_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Huenik_H_M_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik MV";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
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
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Huenik_H_M_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik MV 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\huenik_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Huenik_H_M_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik MV AUS";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
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
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Huenik_H_M_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik MV AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\huenik_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Huenik_H_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik V";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
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
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Visor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Huenik_H_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik V 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\huenik_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Visor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Huenik_H_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik V AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
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
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
		uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Huenik_H_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Huenik V AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\huenik_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Huenik";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};

//////////////////
/// Zero Helms ///
//////////////////

	class Zero_H_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Zero";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Base";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Zero_H_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Zero 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Base";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Zero_H_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Zero AUS";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Zero_H_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Zero AUS 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Zero_H_M_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Zero M";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Mask";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Zero_H_M_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Zero M 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Mask";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Zero_H_M_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Zero M AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Zero_H_M_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Zero M AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Zero_H_M_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Zero MV";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Zero_H_M_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Zero MV 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Zero_H_M_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Zero MV AUS";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Zero_H_M_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Zero MV AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Zero_H_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Zero V";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Visor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Zero_H_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Zero V 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Visor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Zero_H_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Zero V AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Zero_H_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Zero V AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Zero_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Zero";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};

//////////////////
/// Echo Helms ///
//////////////////

	class Echo_H_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Echo";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Base";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Echo_H_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Echo 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Base";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Echo_H_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Echo AUS";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Echo_H_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Echo AUS 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Echo_H_M_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Echo M";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Mask";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Echo_H_M_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Echo M 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Mask";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Echo_H_M_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Echo M AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Echo_H_M_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Echo M AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Echo_H_M_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Echo MV";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Echo_H_M_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Echo MV 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Echo_H_M_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Echo MV AUS";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Echo_H_M_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Echo MV AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Echo_H_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Echo V";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Visor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Echo_H_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Echo V 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Visor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Echo_H_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Echo V AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Echo_H_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Echo V AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Echo";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};

///////////////////
/// Bobby Helms ///
///////////////////

	class Bobby_H_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Base";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Bobby_H_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Base";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Bobby_H_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby AUS";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Bobby_H_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby AUS 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Bobby_H_M_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby M";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Mask";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Bobby_H_M_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby M 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Mask";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Bobby_H_M_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby M AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Bobby_H_M_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby M AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Bobby_H_M_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby MV";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Bobby_H_M_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby MV 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Bobby_H_M_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby MV AUS";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Bobby_H_M_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby MV AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Bobby_H_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby V";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Visor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Bobby_H_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby V 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Visor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Bobby_H_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby V AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Bobby_H_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Bobby V AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Bobby_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Bobby";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};

/////////////////
/// Dom Helms ///
/////////////////

	class Dom_H_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Base";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Dom_H_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Base";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Dom_H_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar AUS";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Dom_H_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar AUS 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Dom_H_M_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar M";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Mask";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Dom_H_M_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar M 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Mask";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Dom_H_M_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar M AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Dom_H_M_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar M AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Dom_H_M_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar MV";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Dom_H_M_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar MV 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Dom_H_M_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar MV AUS";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Dom_H_M_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar MV AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Dom_H_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar V";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Visor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Dom_H_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar V 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Visor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Dom_H_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar V AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Dom_H_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Domscar V AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Dom";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};

//////////////////////
/// WarCryme Helms ///
//////////////////////

	class WarCryme_H_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Base";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class WarCryme_H_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Base";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class WarCryme_H_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme AUS";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class WarCryme_H_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme AUS 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class WarCryme_H_M_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme M";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Mask";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class WarCryme_H_M_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme M 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Mask";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class WarCryme_H_M_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme M AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class WarCryme_H_M_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme M AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class WarCryme_H_M_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme MV";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class WarCryme_H_M_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme MV 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class WarCryme_H_M_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme MV AUS";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class WarCryme_H_M_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme MV AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class WarCryme_H_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme V";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Visor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class WarCryme_H_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme V 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Visor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class WarCryme_H_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme V AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class WarCryme_H_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="WarCryme V AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="War";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};

/////////////////
/// Pug Helms ///
/////////////////

	class Pug_H_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Pug";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Base";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Pug_H_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Pug 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Base";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Pug_H_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Pug AUS";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Pug_H_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Pug AUS 15H";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Base";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Pug_H_M_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Pug M";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Mask";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Pug_H_M_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Pug M 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Mask";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Pug_H_M_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Pug M AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Pug_H_M_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Pug M AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Mask";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Pug_H_M_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Pug MV";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Pug_H_M_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Pug MV 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="MaskVisor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Pug_H_M_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Pug MV AUS";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Pug_H_M_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Pug MV AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="MaskVisor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	class Pug_H_V_NoFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Pug V";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Visor";
			backPatches="NoBP";
			frontPatches="NoFP";
		};
	};
	class Pug_H_V_HawkFP_NoBP: FlightHelm_Base
	{
		scope=2;
		displayName="Pug V 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\blankBackPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Visor";
			backPatches="NoBP";
			frontPatches="HawkFP";
		};
	};
	class Pug_H_V_NoFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Pug V AUS Patch";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="NoFP";
		};
	};
	class Pug_H_V_HawkFP_AUS: FlightHelm_Base
	{
		scope=2;
		displayName="Pug V AUS 15H";
		model="Hue_Additions_Headware\Models\helmet_visor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"patches",
			"backPatches"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\Data\Helmets\Pug_helmet_co.paa",
			"Hue_Additions_Headware\Data\Hawkeye_patches_co.paa",
			"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
			"Hue_Additions_Headware\Data\Hawkeye.rvmat",
			"Hue_Additions_Headware\Data\AusFlag_backPatches.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Hue_Additions_Headware\Models\helmet_visor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"patches",
				"backPatches"
			};
		};
		class XtdGearInfo
		{
			model="flight_helmets";
			name="Pug";
			type="Visor";
			backPatches="AUS_IR";
			frontPatches="HawkFP";
		};
	};
	

//////////////////
/// 207 Berets ///
//////////////////

	class H_Beret_02;

	class 207_Beret_Base: H_Beret_02
	{
		author="207";
		weaponPoolAvailable=0;
		scopeCurator=0;
		scope=0;
		displayName="Base Beret";
		picture="\Hue_Additions_Headware\ui\207beretVeteran";
		iconPicture = "\Hue_Additions_Headware\ui\207beretVeteran";
		model="A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\data\berets\Veteran_207_beret_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Hue_Additions_Headware\data\berets\headgear_207beret.rvmat"
		};
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		class ItemInfo: HeadgearItem
		{
			allowedSlots[] = {801,901,701,605};
			mass=1;
			uniformModel="A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"Hue_Additions_Headware\data\berets\Veteran_207_beret_co.paa"
			};
		};
	};

	class V_207_Beret: 207_Beret_Base
	{
		author="207";
		weaponPoolAvailable=1;
		scopeCurator=2;
		scope=2;
		displayName="Veteran Beret";
		picture="\Hue_Additions_Headware\ui\207beretVeteran";
		iconPicture = "\Hue_Additions_Headware\ui\207beretVeteran";
		model="A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\data\berets\Veteran_207_beret_co.paa"
		};
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
	};
	class O_207_Beret: 207_Beret_Base
	{
		author="207";
		weaponPoolAvailable=1;
		scopeCurator=2;
		scope=2;
		displayName="Operator Beret";
		picture="\Hue_Additions_Headware\ui\207beretOperator";
		iconPicture = "\Hue_Additions_Headware\ui\207beretOperator";
		model="A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\data\berets\Operator_207_beret_co.paa"
		};
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
	};
	class J_207_Beret: 207_Beret_Base
	{
		author="207";
		weaponPoolAvailable=1;
		scopeCurator=2;
		scope=2;
		displayName="Junior Operator Beret";
		picture="\Hue_Additions_Headware\ui\207beretJunior";
		iconPicture = "\Hue_Additions_Headware\ui\207beretJunior";
		model="A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\data\berets\Junior_207_beret_co.paa"
		};
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
	};
	
	/// V2 Berets ///
	
	class 207_Beret2_Base: H_Beret_02
	{
		author="207";
		weaponPoolAvailable=0;
		scopeCurator=0;
		scope=0;
		displayName="Base Beret V2";
		picture="\Hue_Additions_Headware\ui\207beretVeteran";
		iconPicture = "\Hue_Additions_Headware\ui\207beretVeteran";
		model="A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\data\berets\Veteran_207_beret_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Hue_Additions_Headware\data\berets\headgear_207beret.rvmat"
		};
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		class ItemInfo: HeadgearItem
		{
			allowedSlots[] = {801,901,701,605};
			mass=1;
			uniformModel="A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"Hue_Additions_Headware\data\berets\Veteran_207_beret_co.paa"
			};
		};
	};

	class A_207_Beret_2: 207_Beret2_Base
	{
		author="207";
		weaponPoolAvailable=1;
		scopeCurator=2;
		scope=2;
		displayName="Admin Beret V2";
		picture="\Hue_Additions_Headware\ui\beret_Admin_V2";
		iconPicture = "\Hue_Additions_Headware\ui\beret_Admin_V2";
		model="A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\data\berets\beret_Admin_V2.paa"
		};
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
	};
	class V_207_Beret_2: 207_Beret2_Base
	{
		author="207";
		weaponPoolAvailable=1;
		scopeCurator=2;
		scope=2;
		displayName="Veteran Beret V2";
		picture="\Hue_Additions_Headware\ui\beret_Veteran_V2";
		iconPicture = "\Hue_Additions_Headware\ui\beret_Veteran_V2";
		model="A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\data\berets\beret_Veteran_V2.paa"
		};
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
	};
	class O_207_Beret_2: 207_Beret2_Base
	{
		author="207";
		weaponPoolAvailable=1;
		scopeCurator=2;
		scope=2;
		displayName="Operator Beret V2";
		picture="\Hue_Additions_Headware\ui\beret_Operator_V2";
		iconPicture = "\Hue_Additions_Headware\ui\beret_Operator_V2";
		model="A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\data\berets\beret_Operator_V2.paa"
		};
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
	};
	class J_207_Beret_2: 207_Beret2_Base
	{
		author="207";
		weaponPoolAvailable=1;
		scopeCurator=2;
		scope=2;
		displayName="Junior Beret V2";
		picture="\Hue_Additions_Headware\ui\beret_Junior_V2";
		iconPicture = "\Hue_Additions_Headware\ui\beret_Junior_V2";
		model="A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Hue_Additions_Headware\data\berets\beret_Junior_V2.paa"
		};
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
	};
};
class cfgMods
{
	timepacked="1685396153";
};

// _H_		means Helmet only
// _H_M_	means Helmet and Mask
// _H_V_	means Helmet and Visor
// _H_M_V_ 	means Helmet, Mask and Visor
