//////////////////////
/// WarCryme Helms ///
//////////////////////

/// Helmet Only ///

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

class WarCryme_H_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="WarCryme 15Hv2";
	hiddenSelections[]=
	{
    	"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co.paa",
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
		name="War";
		type="Base";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class WarCryme_H_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="WarCryme AUS 15Hv2";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co.paa",
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
		name="War";
		type="Base";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};

/// Helmet and Mask ///

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

class WarCryme_H_M_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="WarCryme M 15Hv2";
	model="Hue_Additions_Headware\Models\helmet_mask.p3d";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co.paa",
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
		name="War";
		type="Mask";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class WarCryme_H_M_HawkFP2_AUS: FlightHelm_Base
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
		"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co.paa",
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
		name="War";
		type="Mask";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};

/// Helmet, Mask, and Visor ///

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

class WarCryme_H_M_V_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="WarCryme MV 15Hv2";
	model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co.paa",
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
		name="War";
		type="MaskVisor";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class WarCryme_H_M_V_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="WarCryme MV AUS 15Hv2";
	model="Hue_Additions_Headware\Models\helmet_mask_visor.p3d";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co.paa",
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
		name="War";
		type="MaskVisor";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};

/// Helmet and Visor ///

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

class WarCryme_H_V_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="WarCryme V 15Hv2";
	model="Hue_Additions_Headware\Models\helmet_visor.p3d";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co.paa",
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
		name="War";
		type="Visor";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class WarCryme_H_V_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="WarCryme V AUS 15Hv2";
	model="Hue_Additions_Headware\Models\helmet_visor.p3d";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\WarCryme_helmet_co.paa",
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
		name="War";
		type="Visor";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};