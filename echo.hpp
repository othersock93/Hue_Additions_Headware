//////////////////
/// Echo Helms ///
//////////////////

/// Helemt Only ///

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

class Echo_H_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Echo 15Hv2";
	hiddenSelections[]=
	{
    	"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
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
		name="Echo";
		type="Base";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class Echo_H_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="Echo AUS 15Hv2";
	hiddenSelections[]=
	{
		"camo",
		"patches",
		"backPatches"
	};
	hiddenSelectionsTextures[]=
	{
		"Hue_Additions_Headware\Data\Helmets\echo_helmet_co.paa",
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
		name="Echo";
		type="Base";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};

/// Helmet and Mask ///

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

class Echo_H_M_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Echo M 15Hv2";
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
		name="Echo";
		type="Mask";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class Echo_H_M_HawkFP2_AUS: FlightHelm_Base
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
		name="Echo";
		type="Mask";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};

/// Helmet, Mask, and Visor ///

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

class Echo_H_M_V_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Echo MV 15Hv2";
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
		name="Echo";
		type="MaskVisor";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class Echo_H_M_V_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="Echo MV AUS 15Hv2";
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
		name="Echo";
		type="MaskVisor";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};

/// Helmet and Visor ///

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

class Echo_H_V_HawkFP2_NoBP: FlightHelm_Base
{
	scope=2;
	displayName="Echo V 15Hv2";
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
		name="Echo";
		type="Visor";
		backPatches="NoBP";
		frontPatches="HawkFP2";
	};
};

class Echo_H_V_HawkFP2_AUS: FlightHelm_Base
{
	scope=2;
	displayName="Echo V AUS 15Hv2";
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
		name="Echo";
		type="Visor";
		backPatches="AUS_IR";
		frontPatches="HawkFP2";
	};
};