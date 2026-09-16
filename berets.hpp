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

  /////////////////
	/// V2 Berets ///
	/////////////////

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
