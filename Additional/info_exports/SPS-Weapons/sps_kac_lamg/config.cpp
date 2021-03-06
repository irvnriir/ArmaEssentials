class CfgPatches
{
	class sps_weapons_kac_lamg
	{
		addonRootClass="A3_Weapons_F";
		author="SPS Team";
		authors[]=
		{
			"SPS Team"
		};
		name="SPS-Weapons-KAC-LAMG";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"cba_jr",
			"A3_Data_F",
			"A3_Data_F_Mark",
			"A3_Weapons_F_Acc",
			"ace_smallarms",
			"ace_ballistics",
			"ace_overheating"
		};
		requiredVersion=1.78;
		units[]={};
		url="http://specialforcesgroup.co.uk/";
		version="1.0.0";
		versionAr[]={1,0,0};
		versionStr="1.0.0";
		weapons[]=
		{
			"SPS_KAC_LAMG_black_F",
			"SPS_KAC_LAMG_NHG_black_F",
			"SPS_KAC_LAMG_NHG_black_grip1_F",
			"SPS_KAC_LAMG_NHG_black_grip3_F",
			"SPS_KAC_LAMG_Tan_F",
			"SPS_KAC_LAMG_NHG_tan_F",
			"SPS_KAC_LAMG_NHG_tan_grip1_F",
			"SPS_KAC_LAMG_NHG_tan_grip3_F"
		};
		magazines[]=
		{
			"SPS_KAC_LAMG_150rnd_Box",
			"SPS_KAC_LAMG_150rnd_M_Box",
			"SPS_KAC_LAMG_150rnd_T_Box",
			"SPS_KAC_LAMG_150rnd_IR_Box",
			"SPS_KAC_LAMG_M855A1_150rnd_Box",
			"SPS_KAC_LAMG_M855A1_150rnd_M_Box",
			"SPS_KAC_LAMG_M856A1_150rnd_T_Box",
			"SPS_KAC_LAMG_M856A1_150rnd_IR_Box",
			"SPS_KAC_LAMG_150rnd_Box_Tan",
			"SPS_KAC_LAMG_150rnd_M_Box_Tan",
			"SPS_KAC_LAMG_150rnd_T_Box_Tan",
			"SPS_KAC_LAMG_150rnd_IR_Box_Tan",
			"SPS_KAC_LAMG_M855A1_150rnd_Box_Tan",
			"SPS_KAC_LAMG_M855A1_150rnd_M_Box_Tan",
			"SPS_KAC_LAMG_M856A1_150rnd_T_Box_Tan",
			"SPS_KAC_LAMG_M856A1_150rnd_IR_Box_Tan",
			"ACE_LAMG_SpareBarrel"
		};
		ammo[]=
		{
			"B_SPS_M855A1",
			"B_SPS_M856A1_IR"
		};
	};
};
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_MuzzleSlot_556;
class asdg_UnderSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class UnderBarrelSlot;
class SPS_dummy_UnderBarrelSlot: UnderBarrelSlot
{
	class compatibleItems
	{
		bipod_01_F_snd=1;
	};
};
class rhs_rifle_gripod_slot: SPS_dummy_UnderBarrelSlot
{
	class compatibleItems;
};
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot
{
	class compatibleItems;
};
class sps_gripod_slot: rhs_western_rifle_gripod_slot
{
	linkProxy="x\SPS\Weapons\sps_kac_lamg\proxies\rhs_grip_proxy";
	class compatibleItems;
};
class sps_lamg_gripod_slot: sps_gripod_slot
{
	class compatibleItems: compatibleItems
	{
		rhsusf_acc_grip2=0;
		rhsusf_acc_grip2_tan=0;
		rhsusf_acc_grip2_wd=0;
		rhsusf_acc_tacsac_blk=0;
		rhsusf_acc_tacsac_blue=0;
		rhsusf_acc_tacsac_tan=0;
	};
};
class CfgMagazineWells
{
	class LAMG_556x45
	{
		SPS_Magazines[]=
		{
			"SPS_KAC_LAMG_150rnd_Box",
			"SPS_KAC_LAMG_150rnd_M_Box",
			"SPS_KAC_LAMG_150rnd_T_Box",
			"SPS_KAC_LAMG_150rnd_IR_Box",
			"SPS_KAC_LAMG_M855A1_150rnd_Box",
			"SPS_KAC_LAMG_M855A1_150rnd_M_Box",
			"SPS_KAC_LAMG_M856A1_150rnd_T_Box",
			"SPS_KAC_LAMG_M856A1_150rnd_IR_Box",
			"SPS_KAC_LAMG_150rnd_Box_Tan",
			"SPS_KAC_LAMG_150rnd_M_Box_Tan",
			"SPS_KAC_LAMG_150rnd_T_Box_Tan",
			"SPS_KAC_LAMG_150rnd_IR_Box_Tan",
			"SPS_KAC_LAMG_M855A1_150rnd_Box_Tan",
			"SPS_KAC_LAMG_M855A1_150rnd_M_Box_Tan",
			"SPS_KAC_LAMG_M856A1_150rnd_T_Box_Tan",
			"SPS_KAC_LAMG_M856A1_150rnd_IR_Box_Tan"
		};
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class GunParticles;
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
		class manual;
		class Single;
		class close;
		class short;
		class medium;
		class far_optic1;
		class far_optic2;
		class ACE_Burst_far;
		class GunParticles: GunParticles
		{
			class FirstEffect;
			class AmmoBeltEject;
		};
	};
	class SPS_KAC_LAMG_black_F: LMG_Mk200_F
	{
		author="SPS Team";
		baseWeapon="SPS_KAC_LAMG_black_F";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		magazines[]=
		{
			"SPS_KAC_LAMG_150rnd_Box"
		};
		magazineWell[]=
		{
			"LAMG_556x45"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0.050000001,0.38};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.40000001};
				iconScale=0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.30000001,0.64999998};
				iconScale=0.2;
			};
			mass=91;
		};
		ACE_barrelLength=381;
		ACE_barrelTwist=177.8;
		ACE_clearJamAction="GestureReloadM200";
		ACE_checkTemperatureAction="Gear";
		ACE_overheating_mrbs=15000;
		ACE_Overheating_Dispersion[]={0,0.00079999998,0.0012000001,0.0024000001};
		ACE_Overheating_SlowdownFactor[]={1,1,1,0.89999998};
		ACE_Overheating_JamChance[]={0,0.00015000001,0.00075000001,0.0037499999};
		ACE_Overheating_allowSwapBarrel=1;
		ACE_Overheating_barrelClassname="ACE_LAMG_SpareBarrel";
		ACE_ironsightbaseangle=0;
		descriptionShort="Light Assault Machine Gun<br />Caliber: 5.56x45 mm";
		magazineReloadSwitchPhase=0.47999999;
		maxZeroing=1000;
		discreteDistance[]={100,200,300,400,500};
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0099999998;
		swayDecaySpeed=2;
		allowedSlots[]={901};
		displayName="KAC LAMG HG (Black)";
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		selectionFireAnim="zasleh";
		deployedPivot="bipod";
		dexterity=1.42;
		inertia=0.62;
		model="\x\SPS\Weapons\sps_kac_lamg\sps_kac_LAMG_NHG.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_kac_lamg\Data\RTM\LAMG_v1_1_HG.rtm"
		};
		hiddenSelections[]=
		{
			"Group1",
			"Group2"
		};
		reloadAction="GestureReloadM200";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Black\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_kac_lamg\Data\Black\Group2_low_CO.paa"
		};
		UIpicture="x\SPS\Weapons\sps_kac_lamg\UI\LAMG_Black_ca.paa";
		picture="x\SPS\Weapons\sps_kac_lamg\UI\LAMG_Black_ca.paa";
		reloadTime=0.1090909;
		recoil="recoil_spar";
		recoilProne="assaultRifleBase";
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				effectName="MachineGunEject1";
				positionName="ejectstart";
				directionName="ejectend";
			};
			class FirstEffect
			{
				effectName="RifleAssaultCloud";
				directionName="Konec hlavne";
				positionName="Usti hlavne";
			};
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2",
			"ACE_Burst_far"
		};
		class manual: manual
		{
			dispersion=0.00082000002;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_3outof10";
			reloadTime=0.1090909;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
		};
		class close: close
		{
			dispersion=0.00082000002;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_3outof10";
			reloadTime=0.1090909;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
		};
		class short: short
		{
			dispersion=0.00082000002;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_3outof10";
			reloadTime=0.1090909;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
		};
		class medium: medium
		{
			dispersion=0.00082000002;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_3outof10";
			reloadTime=0.1090909;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
		};
		class far_optic1: far_optic1
		{
			burst=4;
			dispersion=0.00082000002;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_3outof10";
			reloadTime=0.1090909;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
		};
		class far_optic2: far_optic2
		{
			burst=3;
			dispersion=0.00082000002;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_3outof10";
			reloadTime=0.1090909;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
		};
		class ACE_Burst_far: ACE_Burst_far
		{
			burst="2 + round random 5";
			dispersion=0.00082000002;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_3outof10";
			reloadTime=0.1090909;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
		};
	};
	class SPS_KAC_LAMG_Tan_F: SPS_KAC_LAMG_black_F
	{
		author="SPS Team";
		baseWeapon="SPS_KAC_LAMG_Tan_F";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		magazines[]=
		{
			"SPS_KAC_LAMG_150rnd_Box_Tan"
		};
		displayName="KAC LAMG HG (Tan)";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group2_low_CO.paa"
		};
		UIpicture="x\SPS\Weapons\sps_kac_lamg\UI\LAMG_Tan_ca.paa";
		picture="x\SPS\Weapons\sps_kac_lamg\UI\LAMG_Tan_ca.paa";
	};
	class SPS_KAC_LAMG_NHG_black_F: SPS_KAC_LAMG_black_F
	{
		author="SPS Team";
		baseWeapon="SPS_KAC_LAMG_NHG_black_F";
		rhs_grip1_change="SPS_KAC_LAMG_NHG_black_grip1_F";
		rhs_grip3_change="SPS_KAC_LAMG_NHG_black_grip3_F";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0.050000001,0.38};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.40000001};
				iconScale=0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.30000001,0.64999998};
				iconScale=0.2;
			};
			class GripodSlot: sps_lamg_gripod_slot
			{
			};
			mass=91;
		};
		displayName="KAC LAMG (Black)";
		model="\x\SPS\Weapons\sps_kac_lamg\sps_kac_LAMG_NHG.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_kac_lamg\Data\RTM\LAMG_v2_1_HG.rtm"
		};
		hiddenSelections[]=
		{
			"Group1",
			"Group2",
			"HG"
		};
		reloadAction="GestureReloadM200";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Black\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_kac_lamg\Data\Black\Group2_low_CO.paa",
			""
		};
		UIpicture="x\SPS\Weapons\sps_kac_lamg\UI\LAMG_NHG_Black_ca.paa";
		picture="x\SPS\Weapons\sps_kac_lamg\UI\LAMG_NHG_Black_ca.paa";
	};
	class SPS_KAC_LAMG_NHG_tan_F: SPS_KAC_LAMG_NHG_black_F
	{
		author="SPS Team";
		baseWeapon="SPS_KAC_LAMG_NHG_tan_F";
		rhs_grip1_change="SPS_KAC_LAMG_NHG_tan_grip1_F";
		rhs_grip3_change="SPS_KAC_LAMG_NHG_tan_grip3_F";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		magazines[]=
		{
			"SPS_KAC_LAMG_150rnd_Box_Tan"
		};
		displayName="KAC LAMG (Tan)";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group2_low_CO.paa",
			""
		};
		UIpicture="x\SPS\Weapons\sps_kac_lamg\UI\LAMG_NHG_Tan_ca.paa";
		picture="x\SPS\Weapons\sps_kac_lamg\UI\LAMG_NHG_Tan_ca.paa";
	};
	class SPS_KAC_LAMG_NHG_black_grip1_F: SPS_KAC_LAMG_NHG_black_F
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_kac_lamg\Data\RTM\LAMG_v3_1_HG.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip1";
				slot="UnderBarrelSlot";
			};
		};
	};
	class SPS_KAC_LAMG_NHG_tan_grip1_F: SPS_KAC_LAMG_NHG_tan_F
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_kac_lamg\Data\RTM\LAMG_v3_1_HG.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip1";
				slot="UnderBarrelSlot";
			};
		};
	};
	class SPS_KAC_LAMG_NHG_black_grip3_F: SPS_KAC_LAMG_NHG_black_F
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_kac_lamg\Data\RTM\LAMG_v3_1_HG.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip3";
				slot="UnderBarrelSlot";
			};
		};
	};
	class SPS_KAC_LAMG_NHG_tan_grip3_F: SPS_KAC_LAMG_NHG_tan_F
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_kac_lamg\Data\RTM\LAMG_v3_1_HG.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip3";
				slot="UnderBarrelSlot";
			};
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 200Rnd_556x45_Box_F;
	class SPS_KAC_LAMG_150rnd_Box: 200Rnd_556x45_Box_F
	{
		ammo="B_556x45_Ball_Tracer_Red";
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		count=150;
		descriptionShort="Caliber: 5.56x45 mm<br />Rounds: 150<br />Used in: KAC LAMG";
		displayName="150Rnd M855 Box";
		displaynameshort="M855";
		tracersEvery=0;
		mass=33;
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial="x\SPS\Weapons\sps_kac_lamg\sps_lamg_mag_box.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Group3"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Black\Group3_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Black_ca.paa";
		UiPicture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Black_ca.paa";
	};
	class SPS_KAC_LAMG_150rnd_Box_Tan: SPS_KAC_LAMG_150rnd_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M855 Box Tan";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group3_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
		UiPicture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
	};
	class SPS_KAC_LAMG_150rnd_M_Box: SPS_KAC_LAMG_150rnd_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M855 Box (Mixed)";
		tracersEvery=4;
	};
	class SPS_KAC_LAMG_150rnd_M_Box_Tan: SPS_KAC_LAMG_150rnd_M_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M855 Box (Mixed) Tan";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group3_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
		UiPicture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
	};
	class SPS_KAC_LAMG_150rnd_T_Box: SPS_KAC_LAMG_150rnd_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M856 Box (Tracer)";
		tracersEvery=1;
		displaynameshort="M856";
	};
	class SPS_KAC_LAMG_150rnd_T_Box_Tan: SPS_KAC_LAMG_150rnd_T_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M856 Box (Tracer) Tan";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group3_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
		UiPicture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
	};
	class SPS_KAC_LAMG_150rnd_IR_Box: SPS_KAC_LAMG_150rnd_T_Box
	{
		ammo="ACE_B_556x45_Ball_Tracer_Dim";
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M856 Box (IR DIM)";
		tracersEvery=1;
		displaynameshort="M856IR";
	};
	class SPS_KAC_LAMG_150rnd_IR_Box_Tan: SPS_KAC_LAMG_150rnd_IR_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M856 Box (IR DIM) Tan";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group3_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
		UiPicture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
	};
	class SPS_KAC_LAMG_M855A1_150rnd_Box: SPS_KAC_LAMG_150rnd_Box
	{
		ammo="B_SPS_M855A1";
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		initSpeed=919;
		count=150;
		descriptionShort="Caliber: 5.56x45 mm EPR<br />Rounds: 150<br />Used in: KAC LAMG";
		displayName="150Rnd M855A1 EPR Box";
		displaynameshort="M855A1";
	};
	class SPS_KAC_LAMG_M855A1_150rnd_Box_Tan: SPS_KAC_LAMG_M855A1_150rnd_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M855A1 Box Tan";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group3_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
		UiPicture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
	};
	class SPS_KAC_LAMG_M855A1_150rnd_M_Box: SPS_KAC_LAMG_M855A1_150rnd_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M855A1 EPR Box (Mixed)";
		tracersEvery=4;
	};
	class SPS_KAC_LAMG_M855A1_150rnd_M_Box_Tan: SPS_KAC_LAMG_M855A1_150rnd_M_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M855A1 Box (Mixed) Tan";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group3_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
		UiPicture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
	};
	class SPS_KAC_LAMG_M856A1_150rnd_T_Box: SPS_KAC_LAMG_M855A1_150rnd_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M856A1 EPR Box (Tracer)";
		tracersEvery=1;
		displaynameshort="M856A1";
	};
	class SPS_KAC_LAMG_M856A1_150rnd_T_Box_Tan: SPS_KAC_LAMG_M856A1_150rnd_T_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M856A1 Box (Tracer) Tan";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group3_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
		UiPicture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
	};
	class SPS_KAC_LAMG_M856A1_150rnd_IR_Box: SPS_KAC_LAMG_M856A1_150rnd_T_Box
	{
		ammo="B_SPS_M856A1_IR";
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M856A1 EPR Box (IR DIM)";
		tracersEvery=1;
		displaynameshort="M856A1-IR";
	};
	class SPS_KAC_LAMG_M856A1_150rnd_IR_Box_Tan: SPS_KAC_LAMG_M856A1_150rnd_IR_Box
	{
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		displayName="150Rnd M856A1 Box (IR DIM) Tan";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group3_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
		UiPicture="\x\SPS\Weapons\sps_kac_lamg\UI\Mag_Tan_ca.paa";
	};
	class ACE_SpareBarrel;
	class ACE_LAMG_SpareBarrel: ACE_SpareBarrel
	{
		scope=2;
		author="SPS Team";
		scopeCurator=2;
		displayName="KAC LAMG Spare barrel";
		mass=18.700001;
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_556x45_Ball;
	class B_SPS_M855A1: B_556x45_Ball
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.15099999};
		ACE_barrelLengths[]={210.82001,238.75999,269.23999,299.72,330.20001,360.67999,391.16,419.10001,449.57999,480.06,508,609.59998};
		ACE_muzzleVelocities[]={751,789,817,845,864,882,895,907.5,921,929.5,935.5,940};
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.0176001;
		ACE_caliber=5.6900001;
		ACE_dragModel=7;
		ACE_standardAtmosphere="ASM";
		airFriction=-0.000772;
		caliber=0.64999998;
		hit=9.3299999;
		typicalSpeed=900;
	};
	class B_SPS_M856A1_IR: B_SPS_M855A1
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=1;
	};
};
