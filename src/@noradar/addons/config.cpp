class CfgPatches
{
    class JTF2_NORADAR
    {
        units[] = {
			"B_Heli_Light_01_F_NORADAR",
			"B_Heli_Light_01_armed_F_NORADAR",
			"O_Heli_Light_02_F_NORADAR",
			"O_Heli_Light_02_unarmed_F_NORADAR",
			"B_Heli_Attack_01_F_NORADAR",
			"O_Heli_Attack_02_F_NORADAR",
			"O_Heli_Attack_02_black_F_NORADAR",
			"B_Heli_Transport_01_F_NORADAR",
			"B_Heli_Transport_01_camo_F_NORADAR",
			"I_Heli_Transport_02_F_NORADAR",
			"I_Heli_light_03_F_NORADAR",
			"I_Heli_light_03_unarmed_F_NORADAR",
			"I_Plane_Fighter_03_CAS_F_NORADAR",
			"I_Plane_Fighter_03_AA_F_NORADAR",
			"B_APC_Tracked_01_rcws_F_NORADAR",
			"B_APC_Tracked_01_CRV_F_NORADAR",
			"B_APC_Tracked_01_AA_F_NORADAR",
			"O_APC_Tracked_02_cannon_F_NORADAR",
			"O_APC_Tracked_02_AA_F_NORADAR",
			"I_APC_tracked_03_cannon_F_NORADAR",
			"I_MBT_03_cannon_F_NORADAR",
			"B_MBT_01_cannon_F_NORADAR",
			"B_MBT_01_arty_F_NORADAR",
			"B_MBT_01_mlrs_F_NORADAR",
			"O_MBT_02_cannon_F_NORADAR",
			"O_MBT_02_arty_F_NORADAR",
			"B_UAV_01_F_NORADAR",
			"O_UAV_01_F_NORADAR",
			"I_UAV_01_F_NORADAR",
			"B_UAV_02_F_NORADAR",
			"O_UAV_02_F_NORADAR",
			"I_UAV_02_F_NORADAR",
			"B_UAV_02_CAS_F_NORADAR",
			"O_UAV_02_CAS_F_NORADAR",
			"I_UAV_02_CAS_F_NORADAR",
			"B_MBT_01_TUSK_F_NORADAR"
			};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = {
			"A3_Armor_F",
			"A3_Armor_F_Panther",
			"A3_armor_f_beta_APC_Tracked_02",
			"A3_Armor_F_Slammer",
			"A3_Armor_F_T100K",
			"A3_Air_F_Gamma_UAV_01",
			"A3_Air_F_Gamma_UAV_02",
			"A3_Armor_F_AMV",
			"A3_Armor_F_Marid",
			"A3_Armor_F_APC_Wheeled_03",
			"A3_Soft_F_Crusher_UGV",
			"A3_Armor_F_EPC_MBT_01"
			};
    };
};

class CfgVehicles
{
    class B_Heli_Light_01_F; 
    class B_Heli_Light_01_F_NORADAR : B_Heli_Light_01_F { displayName = "MH-9 Hummingbird [NORADAR]"; radarType = 8; }; 
	
    class B_Heli_Light_01_armed_F; 
    class B_Heli_Light_01_armed_F_NORADAR :  B_Heli_Light_01_armed_F { displayName = "AH-9 Pawnee [NORADAR]";  radarType = 8; }; 
	
    class O_Heli_Light_02_F; 
    class O_Heli_Light_02_F_NORADAR :  O_Heli_Light_02_F { displayName = "PO-30 Orca [NORADAR]"; radarType = 8; };
	
    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_NORADAR :  O_Heli_Light_02_unarmed_F { displayName = "PO-30 Orca (Black) [NORADAR]"; radarType = 8;}
	
    class B_Heli_Attack_01_F; 
    class B_Heli_Attack_01_F_NORADAR :  B_Heli_Attack_01_F { displayName = "AH-99 Blackfoot [NORADAR]"; radarType = 8;}
	
    class O_Heli_Attack_02_F;
    class O_Heli_Attack_02_F_NORADAR :  O_Heli_Attack_02_F {displayName = "Mi-48 Kajman [NORADAR]"; radarType = 8; };
	
    class O_Heli_Attack_02_black_F;
    class O_Heli_Attack_02_black_F_NORADAR :  O_Heli_Attack_02_black_F {displayName = "Mi-48 Kajman (Black) [NORADAR]"; radarType = 8;}
	
    class B_Heli_Transport_01_F; 
    class B_Heli_Transport_01_F_NORADAR :  B_Heli_Transport_01_F { displayName = "UH-80 Ghost Hawk [NORADAR]"; radarType = 8;};
	
    class B_Heli_Transport_01_camo_F;
    class B_Heli_Transport_01_camo_F_NORADAR :  B_Heli_Transport_01_camo_F { displayName = "UH-80 Ghost Hawk (Camo) [NORADAR]"; radarType = 8; }
	
    class I_Heli_Transport_02_F; 
    class I_Heli_Transport_02_F_NORADAR :  I_Heli_Transport_02_F { displayName = "CH-49 Mohawk [NORADAR]"; radarType = 8; };
	
    class I_Heli_light_03_F; 
    class I_Heli_light_03_F_NORADAR :  I_Heli_light_03_F { displayName = "WY-55 Hellcat [NORADAR]"; radarType = 8; };
	
    class I_Heli_light_03_unarmed_F;
    class I_Heli_light_03_unarmed_F_NORADAR :  I_Heli_light_03_unarmed_F {displayName = "WY-55 Hellcat (Green) [NORADAR]"; radarType = 8;};
	
    class I_Plane_Fighter_03_CAS_F; 
    class I_Plane_Fighter_03_CAS_F_NORADAR :  I_Plane_Fighter_03_CAS_F { displayName = "A-143 Buzzard (CAS) [NORADAR]"; radarType = 8;};
	
    class I_Plane_Fighter_03_AA_F; 
    class I_Plane_Fighter_03_AA_F_NORADAR :  I_Plane_Fighter_03_AA_F { displayName = "A-143 Buzzard (AA) [NORADAR]"; radarType = 8; };
	
    class B_APC_Tracked_01_rcws_F;
    class B_APC_Tracked_01_rcws_F_NORADAR :  B_APC_Tracked_01_rcws_F { displayName = "IFV-6c Panther [NORADAR]"; radarType = 8; };
	
    class B_APC_Tracked_01_CRV_F;
    class B_APC_Tracked_01_CRV_F_NORADAR :  B_APC_Tracked_01_CRV_F { displayName = "CRV-6e Bobcat [NORADAR]"; radarType = 8; }
	
    class B_APC_Tracked_01_AA_F; 
    class B_APC_Tracked_01_AA_F_NORADAR :  B_APC_Tracked_01_AA_F {displayName = "IFV-6a Cheetah [NORADAR]"; radarType = 8;};
	
    class O_APC_Tracked_02_cannon_F;
    class O_APC_Tracked_02_cannon_F_NORADAR :  O_APC_Tracked_02_cannon_F { displayName = "BTR-K Kamysh [NORADAR]"; radarType = 8; }
	
    class O_APC_Tracked_02_AA_F; 
    class O_APC_Tracked_02_AA_F_NORADAR :  O_APC_Tracked_02_AA_F {displayName = "ZSU-39 Tigris [NORADAR]"; radarType = 8; };
	
    class I_APC_tracked_03_cannon_F; 
    class I_APC_tracked_03_cannon_F_NORADAR :  I_APC_tracked_03_cannon_F {displayName = "FV-720 Mora [NORADAR]"; radarType = 8;}
	
    class I_MBT_03_cannon_F; 
    class I_MBT_03_cannon_F_NORADAR :  I_MBT_03_cannon_F { displayName = "MBT-52 Kuma [NORADAR]"; radarType = 8;};
	
    class B_MBT_01_cannon_F; 
    class B_MBT_01_cannon_F_NORADAR :  B_MBT_01_cannon_F {displayName = "M2A1 Slammer [NORADAR]"; radarType = 8;}
	
    class B_MBT_01_arty_F;
    class B_MBT_01_arty_F_NORADAR :  B_MBT_01_arty_F { displayName = "M4 Scorcher [NORADAR]"; radarType = 8;}
	
    class B_MBT_01_mlrs_F; 
    class B_MBT_01_mlrs_F_NORADAR :  B_MBT_01_mlrs_F {displayName = "M5 Sandstorm MLRS [NORADAR]"; radarType = 8;}
	
    class O_MBT_02_cannon_F;
    class O_MBT_02_cannon_F_NORADAR :  O_MBT_02_cannon_F { displayName = "T-100 Varsuk [NORADAR]"; radarType = 8; }
	
    class O_MBT_02_arty_F; 
    class O_MBT_02_arty_F_NORADAR :  O_MBT_02_arty_F {displayName = "2S9 Sochor [NORADAR]"; radarType = 8; };
	
    class B_UAV_01_F; 
    class B_UAV_01_F_NORADAR :  B_UAV_01_F {displayName = "AR-2 Darter [NORADAR]"; radarType = 8;}
	
    class O_UAV_01_F;
    class O_UAV_01_F_NORADAR :  O_UAV_01_F { displayName = "Tayran AR-2 [NORADAR]"; radarType = 8; }
	
    class I_UAV_01_F; 
    class I_UAV_01_F_NORADAR :  I_UAV_01_F { displayName = "AR-2 Darter [NORADAR]"; radarType = 8; }
	
    class B_UAV_02_F; 
    class B_UAV_02_F_NORADAR :  B_UAV_02_F {displayName = "MQ4A Greyhawk [NORADAR]"; radarType = 8; }
	
    class O_UAV_02_F; 
    class O_UAV_02_F_NORADAR :  O_UAV_02_F { displayName = "K40 Ababil-3 [NORADAR]"; radarType = 8;};
	
    class I_UAV_02_F; 
    class I_UAV_02_F_NORADAR :  I_UAV_02_F {displayName = "K40 Ababil-3 [NORADAR]"; radarType = 8;}
	
    class B_UAV_02_CAS_F; 
    class B_UAV_02_CAS_F_NORADAR :  B_UAV_02_CAS_F { displayName = "MQ4A Greyhawk (CAS) [NORADAR]"; radarType = 8;}
	
    class O_UAV_02_CAS_F;
    class O_UAV_02_CAS_F_NORADAR :  O_UAV_02_CAS_F {displayName = "K40 Ababil-3 (CAS) [NORADAR]"; radarType = 8; }
	
    class I_UAV_02_CAS_F;
    class I_UAV_02_CAS_F_NORADAR :  I_UAV_02_CAS_F { displayName = "K40 Ababil-3 (CAS) [NORADAR]"; radarType = 8;};
	
    class B_MBT_01_TUSK_F;
    class B_MBT_01_TUSK_F_NORADAR :  B_MBT_01_TUSK_F {displayName = "M2A4 Slammer UP [NORADAR]"; radarType = 8;}
};