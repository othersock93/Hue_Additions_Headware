/////////////////
/// Dom Helms ///
/////////////////

/// Helmets Only ///

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

class Dom_H_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Domscar 15Hv2";
	hiddenSelections[]=
	{
    	"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co.paa",
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
		name="Dom";
		type="Base";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class Dom_H_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="Domscar AUS 15Hv2";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co.paa",
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
		name="Dom";
		type="Base";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};

/// Helmet and Mask ///

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

class Dom_H_M_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Domscar M 15Hv2";
	model="Hue_Additions_Headware\Models\helmet_mask.p3d";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co.paa",
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
		name="Dom";
		type="Mask";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class Dom_H_M_HawkFP2_AUS: FlightHelm_Base
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
		"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co.paa",
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
		name="Dom";
		type="Mask";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};

/// Helmet, Mask, and Visor ///

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

class Dom_H_M_V_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Domscar MV 15Hv2";
	model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co.paa",
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
		name="Dom";
		type="MaskVisor";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class Dom_H_M_V_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="Domscar MV AUS 15Hv2";
	model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co.paa",
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
		name="Dom";
		type="MaskVisor";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};

/// Helmet and Visor ///

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

class Dom_H_V_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Domscar V 15Hv2";
	model="Hue_Additions_Headware\Models\helmet_visor.p3d";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co.paa",
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
		name="Dom";
		type="Visor";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class Dom_H_V_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="Domscar V AUS 15Hv2";
	model="Hue_Additions_Headware\Models\helmet_visor.p3d";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\domscar_helmet_co.paa",
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
		name="Dom";
		type="Visor";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};