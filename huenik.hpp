////////////////////
/// Huenik Helms ///
////////////////////

/// Helmet Only ///

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

/// Helmet and Mask ///

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
		frontPatches="HawkFP2";
	};
};

/// Helmet, Mask, Visor ///

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

/// Helmet and Visor ///

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
