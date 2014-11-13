class CfgPatches
{
	class NoRadar
	{
		units[] = {};
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
	// Hummingbird
	class Heli_Light_01_base_F; 
	class B_Heli_Light_01_F : Heli_Light_01_base_F { radarType = 8; }; 

	// Pawnee
	class Heli_Light_01_armed_base_F; 
	class B_Heli_Light_01_armed_F :  Heli_Light_01_armed_base_F { radarType = 8; }; 

	// Huron
	class B_Heli_Transport_03_base_F;
	class B_Heli_Transport_03_F : B_Heli_Transport_03_base_F { radarType = 8; }
	
	// Ghost Hawk
	class Heli_Transport_01_base_F; 
	class B_Heli_Transport_01_F :  Heli_Transport_01_base_F { radarType = 8;};

	// Ghost Hawk (Camo)
	//class B_Heli_Transport_01_F;
	class B_Heli_Transport_01_camo_F :  B_Heli_Transport_01_F { radarType = 8; }
	
	// Orca
	class Heli_Light_02_base_F; 
	class O_Heli_Light_02_F :  Heli_Light_02_base_F { radarType = 8; };

	// Orca (Black)
	//class Heli_Light_02_base_F;
	class O_Heli_Light_02_unarmed_F :  Heli_Light_02_base_F { radarType = 8;}
	
	// Taru
	class Heli_Transport_04_base_F;
	class O_Heli_Transport_04_F : Heli_Transport_04_base_F { radarType = 8; };

	// Mohawk
	class Heli_Transport_02_base_F; 
	class I_Heli_Transport_02_F :  Heli_Transport_02_base_F { radarType = 8; };

	// Hellcat
	class I_Heli_light_03_base_F; 
	class I_Heli_light_03_F :  I_Heli_light_03_base_F { radarType = 8; };

	// Hellcat (Green)
	class I_Heli_light_03_unarmed_base_F;
	class I_Heli_light_03_unarmed_F :  I_Heli_light_03_unarmed_base_F { radarType = 8; };


};