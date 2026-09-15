///////////////////////////
/// New Hawkeye Patches ///
///////////////////////////

/// 8 New Helms per pilot, 7 pilots, 56 total entries ///
/// Req. Classnames
/// [Name]_H_HawkFP2_NoBP
/// [Name]_H_HawkFP2_AUS
/// [Name]_H_M_HawkFP2_NoBP
/// [Name]_H_M_HawkFP2_AUS
/// [Name]_H_M_V_HawkFP2_NoBP
/// [Name]_H_M_V_HawkFP2_AUS
/// [Name]_H_V_HawkFP2_NoBP
/// [Name]_H_V_HawkFP2_AUS

/// Name Order ///
/// Huenik
/// Zero
/// Echo
/// Bobby
/// Dom
/// WarCryme
/// Pug

/// Naming Key ///
/// _H_		means Helmet only
/// _H_M_	means Helmet and Mask
/// _H_V_	means Helmet and Visor
/// _H_M_V_ 	means Helmet, Mask and Visor

/// Huenik ///

class Huenik_H_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Huenik 15Hv2";
	hiddenSelections[]=
	{
    	"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\huenik_helmet_co.paa",
		"Hue_Additions_Headware\Data\Hawkeye_patches_V2_co.paa",
		"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
		"Hue_Additions_Headware\Data\Hawkeye_V2.rvmat",
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
		frontPatches="HawkFP2";
	};
};

class Huenik_H_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="Huenik AUS 15Hv2";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\huenik_helmet_co.paa",
		"Hue_Additions_Headware\Data\Hawkeye_patches_V2_co.paa",
		"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
		"Hue_Additions_Headware\Data\Hawkeye_V2.rvmat",
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
		frontPatches="HawkFP2";
	};
};

class Huenik_H_M_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Huenik M 15Hv2";
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
		"Hue_Additions_Headware\Data\Hawkeye_patches_V2_co.paa",
		"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
		"Hue_Additions_Headware\Data\Hawkeye_V2.rvmat",
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
		frontPatches="HawkFP2";
	};
};

class Huenik_H_M_HawkFP2_AUS: FlightHelm_Base
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

class Huenik_H_M_V_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Huenik MV 15Hv2";
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
		"Hue_Additions_Headware\Data\Hawkeye_patches_V2_co.paa",
		"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
		"Hue_Additions_Headware\Data\Hawkeye_V2.rvmat",
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
		frontPatches="HawkFP2";
	};
};

class Huenik_H_M_V_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="Huenik MV AUS 15Hv2";
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
		"Hue_Additions_Headware\Data\Hawkeye_patches_V2_co.paa",
		"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
		"Hue_Additions_Headware\Data\Hawkeye_V2.rvmat",
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
		frontPatches="HawkFP2";
	};
};

class Huenik_H_V_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Huenik V 15Hv2";
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
		"Hue_Additions_Headware\Data\Hawkeye_patches_V2_co.paa",
		"Hue_Additions_Headware\Data\blankBackPatches_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
		"Hue_Additions_Headware\Data\Hawkeye_V2.rvmat",
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
		frontPatches="HawkFP2";
	};
};

class Huenik_H_V_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="Huenik V AUS 15Hv2";
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
		"Hue_Additions_Headware\Data\Hawkeye_patches_V2_co.paa",
		"Hue_Additions_Headware\Data\AusFlag_backPatches_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\data\rhs_hgu56.rvmat",
		"Hue_Additions_Headware\Data\Hawkeye_V2.rvmat",
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
		frontPatches="HawkFP2";
	};
};

/// Zero Helms //

class Zero_H_HawkFP2_NoBP: FlightHelm_Base
{};

class Zero_H_HawkFP2_AUS: FlightHelm_Base
{};

class Zero_H_M_HawkFP2_NoBP: FlightHelm_Base
{};

class Zero_H_M_HawkFP2_AUS: FlightHelm_Base
{};

class Zero_H_M_V_HawkFP2_NoBP: FlightHelm_Base
{};

class Zero_H_M_V_HawkFP2_AUS: FlightHelm_Base
{};

class Zero_H_V_HawkFP2_NoBP: FlightHelm_Base
{};

class Zero_H_V_HawkFP2_AUS: FlightHelm_Base
{};

/// Echo Helms ///

class Echo_H_HawkFP2_NoBP: FlightHelm_Base
{};

class Echo_H_HawkFP2_AUS: FlightHelm_Base
{};

class Echo_H_M_HawkFP2_NoBP: FlightHelm_Base
{};

class Echo_H_M_HawkFP2_AUS: FlightHelm_Base
{};

class Echo_H_M_V_HawkFP2_NoBP: FlightHelm_Base
{};

class Echo_H_M_V_HawkFP2_AUS: FlightHelm_Base
{};

class Echo_H_V_HawkFP2_NoBP: FlightHelm_Base
{};

class Echo_H_V_HawkFP2_AUS: FlightHelm_Base
{};

/// Bobby Helms ///

class Bobby_H_HawkFP2_NoBP: FlightHelm_Base
{};

class Bobby_H_HawkFP2_AUS: FlightHelm_Base
{};

class Bobby_H_M_HawkFP2_NoBP: FlightHelm_Base
{};

class Bobby_H_M_HawkFP2_AUS: FlightHelm_Base
{};

class Bobby_H_M_V_HawkFP2_NoBP: FlightHelm_Base
{};

class Bobby_H_M_V_HawkFP2_AUS: FlightHelm_Base
{};

class Bobby_H_V_HawkFP2_NoBP: FlightHelm_Base
{};

class Bobby_H_V_HawkFP2_AUS: FlightHelm_Base
{};

/// Domscar Helms ///

class Dom_H_HawkFP2_NoBP: FlightHelm_Base
{};

class Dom_H_HawkFP2_AUS: FlightHelm_Base
{};

class Dom_H_M_HawkFP2_NoBP: FlightHelm_Base
{};

class Dom_H_M_HawkFP2_AUS: FlightHelm_Base
{};

class Dom_H_M_V_HawkFP2_NoBP: FlightHelm_Base
{};

class Dom_H_M_V_HawkFP2_AUS: FlightHelm_Base
{};

class Dom_H_V_HawkFP2_NoBP: FlightHelm_Base
{};

class Dom_H_V_HawkFP2_AUS: FlightHelm_Base
{};

/// WarCryme Helms ///

class War_H_HawkFP2_NoBP: FlightHelm_Base
{};

class War_H_HawkFP2_AUS: FlightHelm_Base
{};

class War_H_M_HawkFP2_NoBP: FlightHelm_Base
{};

class War_H_M_HawkFP2_AUS: FlightHelm_Base
{};

class War_H_M_V_HawkFP2_NoBP: FlightHelm_Base
{};

class War_H_M_V_HawkFP2_AUS: FlightHelm_Base
{};

class War_H_V_HawkFP2_NoBP: FlightHelm_Base
{};

class War_H_V_HawkFP2_AUS: FlightHelm_Base
{};

/// Pugman Helms ///

class Pug_H_HawkFP2_NoBP: FlightHelm_Base
{};

class Pug_H_HawkFP2_AUS: FlightHelm_Base
{};

class Pug_H_M_HawkFP2_NoBP: FlightHelm_Base
{};

class Pug_H_M_HawkFP2_AUS: FlightHelm_Base
{};

class Pug_H_M_V_HawkFP2_NoBP: FlightHelm_Base
{};

class Pug_H_M_V_HawkFP2_AUS: FlightHelm_Base
{};

class Pug_H_V_HawkFP2_NoBP: FlightHelm_Base
{};

class Pug_H_V_HawkFP2_AUS: FlightHelm_Base
{};
