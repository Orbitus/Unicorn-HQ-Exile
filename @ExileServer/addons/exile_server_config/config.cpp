/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

// Chernarus Loot Positions - Replaced CfgBuildings
#include "chernarusLootBuildings.cpp"
// Chernarus Loot Positions - Replaced CfgBuildings

class CfgLootTables
{
	/**
	  Result of 100 rounds:

	  Exile_Item_PlasticBottleDirtyWater
	  30Rnd_45ACP_Mag_SMG_01
	  10Rnd_9x21_Mag
	  Chemlight_blue
	  Exile_Item_MountainDupe
	  Exile_Item_Heatpack
	  Exile_Item_DsNuts
	  Exile_Item_Can_Empty
	  optic_Aco_smg
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  H_Hat_tan
	  U_C_Man_casual_1_F
	  muzzle_snds_acp
	  Exile_Item_Dogfood
	  U_I_C_Soldier_Bandit_4_F
	  ItemWatch
	  H_Cap_red
	  Exile_Item_Heatpack
	  H_Cap_headphones
	  V_Press_F
	  H_Cap_tan
	  H_Hat_brown
	  hgun_Pistol_Signal_F
	  ItemRadio
	  H_Cap_press
	  Exile_Item_Noodles
	  Exile_Item_Can_Empty
	  Exile_Item_Dogfood
	  Exile_Item_Magazine03
	  U_C_Poloshirt_blue
	  Exile_Item_Magazine03
	  V_Press_F
	  U_NikosAgedBody
	  Exile_Item_Can_Empty
	  H_Cap_tan
	  Chemlight_red
	  U_C_Scientist
	  FlareWhite_F
	  V_TacVest_blk_POLICE
	  Exile_Item_PlasticBottleEmpty
	  Chemlight_red
	  Exile_Item_Cheathas
	  30Rnd_9x21_Mag
	  B_OutdoorPack_blu
	  H_Hat_brown
	  Exile_Item_BBQSandwich
	  B_HuntingBackpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  30Rnd_45ACP_Mag_SMG_01_Tracer_Green
	  Exile_Item_SeedAstics
	  Exile_Item_GloriousKnakworst
	  FlareWhite_F
	  Exile_Item_DsNuts
	  SMG_02_F
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  B_AssaultPack_sgg
	  U_C_Man_casual_5_F
	  B_AssaultPack_khk
	  Exile_Item_Surstromming
	  V_TacVest_blk_POLICE
	  muzzle_snds_L
	  Exile_Item_Heatpack
	  H_Cap_blk_Raven
	  Exile_Item_ToiletPaper
	  U_C_Man_casual_1_F
	  H_StrawHat
	  Exile_Magazine_6Rnd_45ACP
	  U_C_Poor_shorts_1
	  hgun_PDW2000_F
	  Exile_Item_PlasticBottleDirtyWater
	  hgun_P07_F
	  muzzle_snds_L
	  ItemMap
	  Exile_Item_ToiletPaper
	  U_C_Poor_1
	  Exile_Weapon_M1014
	  U_C_Poloshirt_salmon
	  Exile_Item_Can_Empty
	  U_C_Poor_2
	  hgun_Pistol_heavy_02_F
	  Exile_Item_Surstromming
	  Exile_Item_Raisins
	  Exile_Item_Magazine01
	  hgun_PDW2000_F
	  FlareYellow_F
	  H_Cap_press
	  Exile_Item_Heatpack
	  Chemlight_yellow
	  FlareGreen_F
	  B_AssaultPack_blk
	  Exile_Item_Raisins
	  H_Beret_blk_POLICE
	  U_C_Poor_shorts_1
	  U_C_Poor_2
	  U_I_C_Soldier_Bandit_2_F
	  muzzle_snds_acp
	  Exile_Item_ToiletPaper
	*/
	class CivillianLowerClass
	{
		count = 161;
		half = 7481.25369930428;
		halfIndex = 80;
		sum = 10000;
		items[] = 
		{
			{398.936170212766, "Exile_Item_Can_Empty"}, // 3.99%
			{797.872340425532, "Exile_Item_ToiletPaper"}, // 3.99%
			{1196.8085106383, "Exile_Item_PlasticBottleEmpty"}, // 3.99%
			{1409.57446808511, "Exile_Weapon_M1014"}, // 2.13%
			{1569.14893617021, "Exile_Magazine_8Rnd_74Slug"}, // 1.60%
			{1702.12765957447, "FlareRed_F"}, // 1.33%
			{1835.10638297872, "FlareGreen_F"}, // 1.33%
			{1968.08510638298, "Chemlight_yellow"}, // 1.33%
			{2101.06382978723, "Chemlight_red"}, // 1.33%
			{2234.04255319149, "Chemlight_green"}, // 1.33%
			{2367.02127659574, "Chemlight_blue"}, // 1.33%
			{2500, "V_Rangemaster_belt"}, // 1.33%
			{2632.97872340425, "FlareWhite_F"}, // 1.33%
			{2765.95744680851, "FlareYellow_F"}, // 1.33%
			{2893.61702127659, "Exile_Item_PlasticBottleDirtyWater"}, // 1.28%
			{3011.82033096927, "Exile_Item_Heatpack"}, // 1.18%
			{3125.59101654846, "Exile_Item_InstantCoffee"}, // 1.14%
			{3231.97399527187, "Exile_Item_ChocolateMilk"}, // 1.06%
			{3335.40189125295, "ItemMap"}, // 1.03%
			{3435.13593380615, "Exile_Item_Magazine04"}, // 1.00%
			{3534.86997635934, "Exile_Item_Magazine03"}, // 1.00%
			{3634.60401891253, "Exile_Item_Magazine02"}, // 1.00%
			{3734.33806146572, "Exile_Item_Magazine01"}, // 1.00%
			{3827.4231678487, "Exile_Item_Raisins"}, // 0.93%
			{3920.50827423168, "Exile_Item_Moobar"}, // 0.93%
			{4009.16075650118, "ItemRadio"}, // 0.89%
			{4097.81323877069, "ItemWatch"}, // 0.89%
			{4182.91962174941, "Exile_Item_MountainDupe"}, // 0.85%
			{4265.66193853428, "Exile_Item_CockONut"}, // 0.83%
			{4348.40425531915, "Exile_Item_SeedAstics"}, // 0.83%
			{4420.80378250591, "Exile_Item_Surstromming"}, // 0.72%
			{4493.20330969267, "Exile_Item_ChristmasTinner"}, // 0.72%
			{4565.60283687943, "Exile_Item_SausageGravy"}, // 0.72%
			{4638.0023640662, "Exile_Item_Noodles"}, // 0.72%
			{4710.40189125296, "Exile_Item_DsNuts"}, // 0.72%
			{4782.80141843972, "Exile_Item_Cheathas"}, // 0.72%
			{4855.20094562648, "Exile_Item_BeefParts"}, // 0.72%
			{4927.60047281324, "Exile_Item_Dogfood"}, // 0.72%
			{5000, "Exile_Item_CatFood"}, // 0.72%
			{5072.39952718677, "Exile_Item_BBQSandwich"}, // 0.72%
			{5144.79905437353, "Exile_Item_MacasCheese"}, // 0.72%
			{5217.13947990544, "Exile_Item_EnergyDrink"}, // 0.72%
			{5283.62884160757, "V_Press_F"}, // 0.66%
			{5350.1182033097, "V_TacVest_blk_POLICE"}, // 0.66%
			{5413.94799054374, "H_Cap_press"}, // 0.64%
			{5477.77777777778, "H_Cap_red"}, // 0.64%
			{5541.60756501183, "H_Cap_tan"}, // 0.64%
			{5605.43735224587, "H_Hat_blue"}, // 0.64%
			{5669.26713947991, "H_StrawHat_dark"}, // 0.64%
			{5733.09692671395, "H_Hat_checker"}, // 0.64%
			{5796.926713948, "H_Hat_grey"}, // 0.64%
			{5860.75650118204, "H_Hat_tan"}, // 0.64%
			{5924.58628841608, "H_StrawHat"}, // 0.64%
			{5988.41607565012, "H_Hat_brown"}, // 0.64%
			{6050.47281323878, "Exile_Item_GloriousKnakworst"}, // 0.62%
			{6110.04728132388, "Exile_Item_Beer"}, // 0.60%
			{6169.14893617022, "Binocular"}, // 0.59%
			{6228.25059101655, "ItemGPS"}, // 0.59%
			{6285.69739952719, "muzzle_snds_L"}, // 0.57%
			{6343.14420803783, "muzzle_snds_acp"}, // 0.57%
			{6399.1352494712, "U_C_Journalist"}, // 0.56%
			{6455.12629090457, "U_Rangemaster"}, // 0.56%
			{6511.11733233794, "U_C_HunterBody_grn"}, // 0.56%
			{6567.10837377131, "U_C_Poor_shorts_1"}, // 0.56%
			{6623.09941520469, "U_C_Scientist"}, // 0.56%
			{6679.09045663806, "U_C_Poor_2"}, // 0.56%
			{6735.08149807143, "U_C_Poor_1"}, // 0.56%
			{6789.76433760215, "B_OutdoorPack_blk"}, // 0.55%
			{6844.15563499457, "SMG_01_F"}, // 0.54%
			{6897.34712435627, "H_Bandanna_surfer"}, // 0.53%
			{6950.53861371797, "H_Beret_blk_POLICE"}, // 0.53%
			{7003.73010307967, "H_Cap_blk"}, // 0.53%
			{7056.92159244137, "H_Cap_blu"}, // 0.53%
			{7110.11308180308, "H_Cap_grn"}, // 0.53%
			{7163.30457116478, "H_Cap_headphones"}, // 0.53%
			{7216.49606052648, "H_Cap_blk_Raven"}, // 0.53%
			{7269.68754988818, "Exile_Item_ZipTie"}, // 0.53%
			{7322.87903924989, "H_Cap_oli"}, // 0.53%
			{7375.67059260135, "SMG_02_F"}, // 0.53%
			{7428.46214595281, "SMG_05_F"}, // 0.53%
			{7481.25369930428, "hgun_PDW2000_F"}, // 0.53%
			{7532.96764729482, "Exile_Item_CanOpener"}, // 0.52%
			{7584.68159528536, "Exile_Item_Matches"}, // 0.52%
			{7635.7454250726, "Exile_Item_PlasticBottleFreshWater"}, // 0.51%
			{7685.9486285151, "hgun_P07_F"}, // 0.50%
			{7735.16318409275, "B_OutdoorPack_tan"}, // 0.49%
			{7784.3777396704, "B_OutdoorPack_blu"}, // 0.49%
			{7832.19031437755, "hgun_Rook40_F"}, // 0.48%
			{7880.0028890847, "hgun_ACPC2_F"}, // 0.48%
			{7923.74916070928, "B_HuntingBackpack"}, // 0.44%
			{7967.29774849079, "U_C_Poloshirt_burgundy"}, // 0.44%
			{8010.8463362723, "U_C_Poloshirt_blue"}, // 0.44%
			{8054.39492405381, "U_C_Poloshirt_salmon"}, // 0.44%
			{8097.94351183532, "U_C_Poloshirt_tricolour"}, // 0.44%
			{8141.49209961683, "U_C_Poloshirt_stripped"}, // 0.44%
			{8179.77008728833, "B_AssaultPack_tna_F"}, // 0.38%
			{8218.04807495984, "B_AssaultPack_mcamo"}, // 0.38%
			{8256.32606263134, "B_AssaultPack_cbr"}, // 0.38%
			{8294.60405030285, "B_AssaultPack_blk"}, // 0.38%
			{8332.88203797435, "B_AssaultPack_sgg"}, // 0.38%
			{8371.16002564586, "B_AssaultPack_rgr"}, // 0.38%
			{8409.43801331736, "B_AssaultPack_dgtl"}, // 0.38%
			{8447.71600098887, "B_AssaultPack_khk"}, // 0.38%
			{8478.82213511852, "U_C_Man_casual_1_F"}, // 0.31%
			{8509.92826924817, "U_I_C_Soldier_Bandit_1_F"}, // 0.31%
			{8541.03440337782, "U_I_C_Soldier_Bandit_2_F"}, // 0.31%
			{8572.14053750747, "U_C_man_sport_3_F"}, // 0.31%
			{8603.24667163712, "U_I_C_Soldier_Bandit_4_F"}, // 0.31%
			{8634.35280576677, "U_I_C_Soldier_Bandit_5_F"}, // 0.31%
			{8665.45893989642, "U_C_man_sport_1_F"}, // 0.31%
			{8696.56507402607, "U_C_man_sport_2_F"}, // 0.31%
			{8727.67120815572, "U_I_C_Soldier_Bandit_3_F"}, // 0.31%
			{8758.77734228537, "U_C_Man_casual_6_F"}, // 0.31%
			{8789.88347641502, "U_C_Man_casual_5_F"}, // 0.31%
			{8820.98961054467, "U_C_Man_casual_4_F"}, // 0.31%
			{8852.09574467432, "U_C_Man_casual_3_F"}, // 0.31%
			{8883.20187880397, "U_C_Man_casual_2_F"}, // 0.31%
			{8914.28005236361, "Exile_Weapon_Makarov"}, // 0.31%
			{8945.35822592326, "hgun_Pistol_01_F"}, // 0.31%
			{8976.43639948291, "Exile_Weapon_TaurusGold"}, // 0.31%
			{9007.51457304255, "Exile_Weapon_Taurus"}, // 0.31%
			{9038.5927466022, "Exile_Weapon_Colt1911"}, // 0.31%
			{9069.67092016185, "hgun_P07_khk_F"}, // 0.31%
			{9100.74909372149, "hgun_Pistol_heavy_01_F"}, // 0.31%
			{9131.82726728114, "hgun_Pistol_heavy_02_F"}, // 0.31%
			{9162.90544084079, "hgun_Pistol_Signal_F"}, // 0.31%
			{9193.93380963511, "Exile_Item_CookingPot"}, // 0.31%
			{9224.96217842944, "Exile_Item_EMRE"}, // 0.31%
			{9254.74941247199, "Exile_Item_PowerDrink"}, // 0.30%
			{9284.30023989516, "11Rnd_45ACP_Mag"}, // 0.30%
			{9313.85106731833, "30Rnd_9x21_Mag"}, // 0.30%
			{9343.40189474149, "Exile_Magazine_7Rnd_45ACP"}, // 0.30%
			{9372.95272216466, "Exile_Magazine_8Rnd_9x18"}, // 0.30%
			{9402.50354958783, "10Rnd_9x21_Mag"}, // 0.30%
			{9432.05437701099, "Exile_Magazine_6Rnd_45ACP"}, // 0.30%
			{9461.60520443416, "9Rnd_45ACP_Mag"}, // 0.30%
			{9488.94662419952, "B_Kitbag_sgg"}, // 0.27%
			{9516.28804396488, "B_Kitbag_cbr"}, // 0.27%
			{9543.62946373024, "B_Kitbag_mcamo"}, // 0.27%
			{9570.22520841109, "optic_ACO_grn_smg"}, // 0.27%
			{9596.82095309194, "optic_Aco"}, // 0.27%
			{9623.4166977728, "30Rnd_45ACP_Mag_SMG_01"}, // 0.27%
			{9650.01244245365, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.27%
			{9676.6081871345, "optic_Holosight_smg"}, // 0.27%
			{9703.20393181535, "optic_Aco_smg"}, // 0.27%
			{9729.7996764962, "optic_Holosight_smg_blk_F"}, // 0.27%
			{9756.39542117705, "optic_ACO_grn"}, // 0.27%
			{9782.99116585791, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.27%
			{9809.58691053876, "30Rnd_9x21_Mag_SMG_02"}, // 0.27%
			{9836.18265521961, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.27%
			{9862.77839990046, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.27%
			{9886.41906183899, "6Rnd_45ACP_Cylinder"}, // 0.24%
			{9908.75948737091, "optic_MRD"}, // 0.22%
			{9931.09991290282, "optic_Yorris"}, // 0.22%
			{9945.87532661441, "16Rnd_9x21_Mag"}, // 0.15%
			{9960.65074032599, "Exile_Item_MobilePhone"}, // 0.15%
			{9970.9935299241, "6Rnd_RedSignal_F"}, // 0.10%
			{9981.33631952221, "6Rnd_GreenSignal_F"}, // 0.10%
			{9987.55754634814, "U_OrestesBody"}, // 0.06%
			{9993.77877317407, "U_NikosBody"}, // 0.06%
			{10000, "U_NikosAgedBody"} // 0.06%
		};
	};

	/**
	  Result of 100 rounds:

	  H_Cap_blk
	  Chemlight_blue
	  H_Hat_brown
	  B_AssaultPack_mcamo
	  H_Cap_red
	  SMG_02_F
	  20Rnd_556x45_UW_mag
	  optic_Holosight_smg
	  Chemlight_yellow
	  Exile_Item_Can_Empty
	  U_C_Man_casual_3_F
	  FlareYellow_F
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  H_Hat_grey
	  SMG_01_F
	  Exile_Item_InstantCoffee
	  Exile_Item_ToiletPaper
	  Chemlight_blue
	  Exile_Item_Matches
	  U_C_Poor_shorts_1
	  Exile_Item_InstantCoffee
	  Exile_Item_Matches
	  Exile_Item_InstantCoffee
	  Exile_Item_BBQSandwich
	  B_OutdoorPack_blk
	  Exile_Item_ToiletPaper
	  U_C_Man_casual_1_F
	  U_OrestesBody
	  Exile_Item_InstantCoffee
	  Exile_Item_Dogfood
	  H_Cap_blk
	  Exile_Weapon_TaurusGold
	  Exile_Item_Can_Empty
	  Exile_Item_SeedAstics
	  Exile_Item_PlasticBottleEmpty
	  30Rnd_9x21_Mag_SMG_02_Tracer_Red
	  Exile_Item_ToiletPaper
	  muzzle_snds_acp
	  V_Press_F
	  FlareWhite_F
	  Exile_Weapon_Colt1911
	  ItemRadio
	  Exile_Item_BeefParts
	  Exile_Item_PlasticBottleEmpty
	  SMG_02_F
	  B_Kitbag_cbr
	  Exile_Item_Cheathas
	  U_I_C_Soldier_Bandit_1_F
	  Chemlight_blue
	  SMG_02_F
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Magazine_8Rnd_74Slug
	  B_OutdoorPack_tan
	  Exile_Item_MountainDupe
	  Exile_Item_CatFood
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_Moobar
	  hgun_Pistol_01_F
	  H_Cap_blk_Raven
	  Exile_Magazine_8Rnd_74Slug
	  optic_Arco_blk_F
	  optic_Holosight_smg
	  H_Hat_blue
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Item_Magazine01
	  Exile_Item_Heatpack
	  H_Cap_blu
	  Exile_Item_BeefParts
	  Exile_Item_Matches
	  FlareGreen_F
	  Exile_Item_BeefParts
	  H_Cap_oli
	  Exile_Item_DsNuts
	  U_C_Poloshirt_blue
	  10Rnd_9x21_Mag
	  FlareRed_F
	  Chemlight_red
	  B_OutdoorPack_tan
	  B_OutdoorPack_blu
	  Exile_Item_Beer
	  Exile_Item_Can_Empty
	  B_AssaultPack_cbr
	  ItemGPS
	  Exile_Item_ChristmasTinner
	  H_Beret_blk_POLICE
	  Exile_Item_CanOpener
	  Exile_Item_ChocolateMilk
	  Exile_Item_Can_Empty
	  SMG_01_F
	  H_Cap_grn
	  H_Cap_blu
	  hgun_P07_F
	  U_C_man_sport_2_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Magazine_6Rnd_45ACP
	  Exile_Item_DsNuts
	  30Rnd_9x21_Mag_SMG_02_Tracer_Green
	  6Rnd_GreenSignal_F
	*/
	class CivillianUpperClass
	{
		count = 295;
		half = 9336.05248315373;
		halfIndex = 147;
		sum = 9999.99999999997;
		items[] = 
		{
			{380.710659898477, "Exile_Item_Can_Empty"}, // 3.81%
			{761.421319796954, "Exile_Item_ToiletPaper"}, // 3.81%
			{1142.13197969543, "Exile_Item_PlasticBottleEmpty"}, // 3.81%
			{1345.17766497462, "Exile_Weapon_M1014"}, // 2.03%
			{1497.46192893401, "Exile_Magazine_8Rnd_74Slug"}, // 1.52%
			{1624.3654822335, "V_Rangemaster_belt"}, // 1.27%
			{1751.269035533, "Chemlight_blue"}, // 1.27%
			{1878.17258883249, "Chemlight_green"}, // 1.27%
			{2005.07614213198, "Chemlight_red"}, // 1.27%
			{2131.97969543147, "Chemlight_yellow"}, // 1.27%
			{2258.88324873096, "FlareYellow_F"}, // 1.27%
			{2385.78680203046, "FlareGreen_F"}, // 1.27%
			{2512.69035532995, "FlareWhite_F"}, // 1.27%
			{2639.59390862944, "FlareRed_F"}, // 1.27%
			{2761.42131979695, "Exile_Item_PlasticBottleDirtyWater"}, // 1.22%
			{2874.22447828539, "Exile_Item_Heatpack"}, // 1.13%
			{2982.79751833051, "Exile_Item_InstantCoffee"}, // 1.09%
			{3084.32036097011, "Exile_Item_ChocolateMilk"}, // 1.02%
			{3183.02312464749, "ItemMap"}, // 0.99%
			{3278.20078962211, "Exile_Item_Magazine03"}, // 0.95%
			{3373.37845459673, "Exile_Item_Magazine04"}, // 0.95%
			{3468.55611957135, "Exile_Item_Magazine02"}, // 0.95%
			{3563.73378454597, "Exile_Item_Magazine01"}, // 0.95%
			{3652.56627185561, "Exile_Item_Raisins"}, // 0.89%
			{3741.39875916526, "Exile_Item_Moobar"}, // 0.89%
			{3826.00112803158, "ItemWatch"}, // 0.85%
			{3910.60349689791, "ItemRadio"}, // 0.85%
			{3991.82177100959, "Exile_Item_MountainDupe"}, // 0.81%
			{4070.78398195149, "Exile_Item_CockONut"}, // 0.79%
			{4149.7461928934, "Exile_Item_SeedAstics"}, // 0.79%
			{4218.83812746757, "Exile_Item_Surstromming"}, // 0.69%
			{4287.93006204174, "Exile_Item_SausageGravy"}, // 0.69%
			{4357.0219966159, "Exile_Item_MacasCheese"}, // 0.69%
			{4426.11393119007, "Exile_Item_BBQSandwich"}, // 0.69%
			{4495.20586576424, "Exile_Item_CatFood"}, // 0.69%
			{4564.29780033841, "Exile_Item_ChristmasTinner"}, // 0.69%
			{4633.38973491257, "Exile_Item_BeefParts"}, // 0.69%
			{4702.48166948674, "Exile_Item_Cheathas"}, // 0.69%
			{4771.57360406091, "Exile_Item_DsNuts"}, // 0.69%
			{4840.66553863508, "Exile_Item_Noodles"}, // 0.69%
			{4909.75747320925, "Exile_Item_Dogfood"}, // 0.69%
			{4978.79300620417, "Exile_Item_EnergyDrink"}, // 0.69%
			{5042.24478285392, "V_Press_F"}, // 0.63%
			{5105.69655950366, "V_TacVest_blk_POLICE"}, // 0.63%
			{5166.61026508742, "H_Cap_press"}, // 0.61%
			{5227.52397067117, "H_Cap_red"}, // 0.61%
			{5288.43767625493, "H_Cap_tan"}, // 0.61%
			{5349.35138183869, "H_Hat_blue"}, // 0.61%
			{5410.26508742244, "H_Hat_tan"}, // 0.61%
			{5471.1787930062, "H_Hat_checker"}, // 0.61%
			{5532.09249858996, "H_Hat_grey"}, // 0.61%
			{5593.00620417371, "H_StrawHat_dark"}, // 0.61%
			{5653.91990975747, "H_Hat_brown"}, // 0.61%
			{5714.83361534123, "H_StrawHat"}, // 0.61%
			{5774.05527354766, "Exile_Item_GloriousKnakworst"}, // 0.59%
			{5830.90806542583, "Exile_Item_Beer"}, // 0.57%
			{5887.30964467005, "ItemGPS"}, // 0.56%
			{5943.71122391427, "Binocular"}, // 0.56%
			{5998.53355893965, "muzzle_snds_L"}, // 0.55%
			{6053.35589396503, "muzzle_snds_acp"}, // 0.55%
			{6106.7889690385, "U_C_Poor_2"}, // 0.53%
			{6160.22204411197, "U_C_Poor_shorts_1"}, // 0.53%
			{6213.65511918544, "U_C_HunterBody_grn"}, // 0.53%
			{6267.08819425891, "U_C_Journalist"}, // 0.53%
			{6320.52126933238, "U_C_Scientist"}, // 0.53%
			{6373.95434440585, "U_C_Poor_1"}, // 0.53%
			{6427.38741947932, "U_Rangemaster"}, // 0.53%
			{6479.5720582193, "B_OutdoorPack_blk"}, // 0.52%
			{6531.47847400496, "SMG_01_F"}, // 0.52%
			{6582.23989532476, "H_Cap_blk_Raven"}, // 0.51%
			{6633.00131664455, "H_Cap_grn"}, // 0.51%
			{6683.76273796435, "H_Cap_oli"}, // 0.51%
			{6734.52415928415, "H_Cap_headphones"}, // 0.51%
			{6785.28558060394, "H_Bandanna_surfer"}, // 0.51%
			{6836.04700192374, "H_Beret_blk_POLICE"}, // 0.51%
			{6886.80842324354, "H_Cap_blk"}, // 0.51%
			{6937.56984456333, "H_Cap_blu"}, // 0.51%
			{6988.33126588313, "Exile_Item_ZipTie"}, // 0.51%
			{7038.71102238097, "SMG_02_F"}, // 0.50%
			{7089.09077887882, "SMG_05_F"}, // 0.50%
			{7139.47053537666, "hgun_PDW2000_F"}, // 0.50%
			{7188.82191721535, "Exile_Item_CanOpener"}, // 0.49%
			{7238.17329905404, "Exile_Item_Matches"}, // 0.49%
			{7286.90426352105, "Exile_Item_PlasticBottleFreshWater"}, // 0.49%
			{7334.81391959816, "hgun_P07_F"}, // 0.48%
			{7381.78009446414, "B_OutdoorPack_tan"}, // 0.47%
			{7428.74626933012, "B_OutdoorPack_blu"}, // 0.47%
			{7474.37451321309, "hgun_Rook40_F"}, // 0.46%
			{7520.00275709605, "hgun_ACPC2_F"}, // 0.46%
			{7561.75046808803, "B_HuntingBackpack"}, // 0.42%
			{7603.30952647851, "U_C_Poloshirt_tricolour"}, // 0.42%
			{7644.86858486899, "U_C_Poloshirt_blue"}, // 0.42%
			{7686.42764325946, "U_C_Poloshirt_burgundy"}, // 0.42%
			{7727.98670164994, "U_C_Poloshirt_stripped"}, // 0.42%
			{7769.54576004042, "U_C_Poloshirt_salmon"}, // 0.42%
			{7806.0750071584, "B_AssaultPack_rgr"}, // 0.37%
			{7842.60425427639, "B_AssaultPack_sgg"}, // 0.37%
			{7879.13350139437, "B_AssaultPack_blk"}, // 0.37%
			{7915.66274851235, "B_AssaultPack_cbr"}, // 0.37%
			{7952.19199563034, "B_AssaultPack_tna_F"}, // 0.37%
			{7988.72124274832, "B_AssaultPack_khk"}, // 0.37%
			{8025.25048986631, "B_AssaultPack_dgtl"}, // 0.37%
			{8061.77973698429, "B_AssaultPack_mcamo"}, // 0.37%
			{8091.46477869178, "U_I_C_Soldier_Bandit_5_F"}, // 0.30%
			{8121.14982039926, "U_I_C_Soldier_Bandit_2_F"}, // 0.30%
			{8150.83486210674, "U_I_C_Soldier_Bandit_3_F"}, // 0.30%
			{8180.51990381423, "U_I_C_Soldier_Bandit_4_F"}, // 0.30%
			{8210.20494552171, "U_I_C_Soldier_Bandit_1_F"}, // 0.30%
			{8239.8899872292, "U_C_man_sport_1_F"}, // 0.30%
			{8269.57502893668, "U_C_Man_casual_5_F"}, // 0.30%
			{8299.26007064416, "U_C_Man_casual_6_F"}, // 0.30%
			{8328.94511235165, "U_C_Man_casual_3_F"}, // 0.30%
			{8358.63015405913, "U_C_Man_casual_2_F"}, // 0.30%
			{8388.31519576661, "U_C_Man_casual_1_F"}, // 0.30%
			{8418.0002374741, "U_C_man_sport_3_F"}, // 0.30%
			{8447.68527918158, "U_C_man_sport_2_F"}, // 0.30%
			{8477.37032088907, "U_C_Man_casual_4_F"}, // 0.30%
			{8507.02867941299, "hgun_Pistol_heavy_01_F"}, // 0.30%
			{8536.68703793692, "hgun_Pistol_heavy_02_F"}, // 0.30%
			{8566.34539646084, "Exile_Weapon_Colt1911"}, // 0.30%
			{8596.00375498477, "hgun_Pistol_Signal_F"}, // 0.30%
			{8625.6621135087, "hgun_P07_khk_F"}, // 0.30%
			{8655.32047203262, "Exile_Weapon_Taurus"}, // 0.30%
			{8684.97883055655, "Exile_Weapon_TaurusGold"}, // 0.30%
			{8714.63718908047, "hgun_Pistol_01_F"}, // 0.30%
			{8744.2955476044, "Exile_Weapon_Makarov"}, // 0.30%
			{8773.90637670761, "Exile_Item_EMRE"}, // 0.30%
			{8803.51720581083, "Exile_Item_CookingPot"}, // 0.30%
			{8831.94360174991, "Exile_Item_PowerDrink"}, // 0.28%
			{8860.14439137202, "9Rnd_45ACP_Mag"}, // 0.28%
			{8888.34518099413, "Exile_Magazine_7Rnd_45ACP"}, // 0.28%
			{8916.54597061624, "Exile_Magazine_8Rnd_9x18"}, // 0.28%
			{8944.74676023835, "Exile_Magazine_6Rnd_45ACP"}, // 0.28%
			{8972.94754986046, "30Rnd_9x21_Mag"}, // 0.28%
			{9001.14833948257, "11Rnd_45ACP_Mag"}, // 0.28%
			{9029.34912910468, "10Rnd_9x21_Mag"}, // 0.28%
			{9055.44144847467, "B_Kitbag_cbr"}, // 0.26%
			{9081.53376784466, "B_Kitbag_sgg"}, // 0.26%
			{9107.62608721465, "B_Kitbag_mcamo"}, // 0.26%
			{9133.00679787454, "30Rnd_9x21_Mag_SMG_02"}, // 0.25%
			{9158.38750853444, "optic_Holosight_smg"}, // 0.25%
			{9183.76821919434, "optic_Holosight_smg_blk_F"}, // 0.25%
			{9209.14892985424, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.25%
			{9234.52964051414, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.25%
			{9259.91035117403, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.25%
			{9285.29106183393, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.25%
			{9310.67177249383, "optic_ACO_grn_smg"}, // 0.25%
			{9336.05248315373, "optic_ACO_grn"}, // 0.25%
			{9361.43319381363, "30Rnd_45ACP_Mag_SMG_01"}, // 0.25%
			{9386.81390447352, "optic_Aco"}, // 0.25%
			{9412.19461513342, "optic_Aco_smg"}, // 0.25%
			{9434.75524683111, "6Rnd_45ACP_Cylinder"}, // 0.23%
			{9456.07504378542, "optic_MRD"}, // 0.21%
			{9477.39484073974, "optic_Yorris"}, // 0.21%
			{9491.49523555079, "16Rnd_9x21_Mag"}, // 0.14%
			{9505.59563036185, "Exile_Item_MobilePhone"}, // 0.14%
			{9515.46590672959, "6Rnd_RedSignal_F"}, // 0.10%
			{9525.33618309732, "6Rnd_GreenSignal_F"}, // 0.10%
			{9532.46654997168, "acc_flashlight"}, // 0.07%
			{9538.40355831317, "U_NikosBody"}, // 0.06%
			{9544.34056665467, "U_NikosAgedBody"}, // 0.06%
			{9550.27757499617, "U_OrestesBody"}, // 0.06%
			{9555.75542621773, "30Rnd_65x39_caseless_green"}, // 0.05%
			{9561.23327743929, "30Rnd_556x45_Stanag_red"}, // 0.05%
			{9566.71112866085, "30Rnd_556x45_Stanag_green"}, // 0.05%
			{9572.18897988241, "30Rnd_556x45_Stanag"}, // 0.05%
			{9577.28209907838, "muzzle_snds_H_khk_F"}, // 0.05%
			{9582.37521827434, "muzzle_snds_65_TI_blk_F"}, // 0.05%
			{9587.46833747031, "muzzle_snds_65_TI_hex_F"}, // 0.05%
			{9592.56145666628, "muzzle_snds_65_TI_ghex_F"}, // 0.05%
			{9597.65457586224, "muzzle_snds_H_MG_blk_F"}, // 0.05%
			{9602.74769505821, "muzzle_snds_H_MG_khk_F"}, // 0.05%
			{9607.84081425418, "optic_Arco"}, // 0.05%
			{9612.93393345014, "optic_Arco_blk_F"}, // 0.05%
			{9618.02705264611, "optic_Arco_ghex_F"}, // 0.05%
			{9623.12017184207, "optic_Hamr"}, // 0.05%
			{9628.21329103804, "optic_Hamr_khk_F"}, // 0.05%
			{9633.30641023401, "optic_Holosight"}, // 0.05%
			{9638.39952942997, "optic_Holosight_blk_F"}, // 0.05%
			{9643.49264862594, "optic_Holosight_khk_F"}, // 0.05%
			{9648.58576782191, "acc_pointer_IR"}, // 0.05%
			{9653.67888701787, "optic_MRCO"}, // 0.05%
			{9658.77200621384, "optic_DMS"}, // 0.05%
			{9663.8651254098, "optic_DMS_ghex_F"}, // 0.05%
			{9668.95824460577, "optic_ERCO_blk_F"}, // 0.05%
			{9674.05136380174, "optic_ERCO_khk_F"}, // 0.05%
			{9679.1444829977, "optic_ERCO_snd_F"}, // 0.05%
			{9684.23760219367, "muzzle_snds_58_wdm_F"}, // 0.05%
			{9689.33072138964, "muzzle_snds_m_khk_F"}, // 0.05%
			{9694.4238405856, "muzzle_snds_m_snd_F"}, // 0.05%
			{9699.51695978157, "muzzle_snds_H_snd_F"}, // 0.05%
			{9704.61007897753, "muzzle_snds_H"}, // 0.05%
			{9709.7031981735, "muzzle_snds_M"}, // 0.05%
			{9714.79631736947, "muzzle_snds_58_blk_F"}, // 0.05%
			{9718.8250016012, "Exile_Weapon_LeeEnfield"}, // 0.04%
			{9722.85368583292, "Exile_Weapon_AK74"}, // 0.04%
			{9726.88237006465, "Exile_Weapon_AK47"}, // 0.04%
			{9730.91105429638, "Exile_Weapon_AKS_Gold"}, // 0.04%
			{9734.93973852811, "Exile_Weapon_AK107"}, // 0.04%
			{9738.96842275984, "Exile_Weapon_DMR"}, // 0.04%
			{9742.99710699157, "Exile_Weapon_CZ550"}, // 0.04%
			{9747.0257912233, "Exile_Weapon_SVDCamo"}, // 0.04%
			{9751.05447545503, "Exile_Weapon_AK74_GL"}, // 0.04%
			{9755.08315968676, "Exile_Weapon_VSSVintorez"}, // 0.04%
			{9759.11184391849, "arifle_Katiba_F"}, // 0.04%
			{9763.14052815022, "Exile_Weapon_SVD"}, // 0.04%
			{9767.16921238194, "Exile_Weapon_AK107_GL"}, // 0.04%
			{9771.18630327776, "20Rnd_556x45_UW_mag"}, // 0.04%
			{9774.47301401069, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.03%
			{9777.75972474363, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.03%
			{9781.04643547657, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.03%
			{9784.3331462095, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.03%
			{9787.61985694244, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.03%
			{9790.90656767538, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.03%
			{9794.19327840831, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.03%
			{9797.47998914125, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.03%
			{9800.76669987419, "30Rnd_65x39_caseless_mag"}, // 0.03%
			{9804.05341060712, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.03%
			{9807.34012134006, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.03%
			{9810.626832073, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.03%
			{9813.91354280593, "Exile_Magazine_10Rnd_762x54"}, // 0.03%
			{9817.20025353887, "Exile_Magazine_10Rnd_9x39"}, // 0.03%
			{9820.48696427181, "Exile_Magazine_20Rnd_9x39"}, // 0.03%
			{9823.77367500474, "30Rnd_762x39_Mag_F"}, // 0.03%
			{9827.06038573768, "30Rnd_762x39_Mag_Green_F"}, // 0.03%
			{9830.34709647062, "30Rnd_762x39_Mag_Tracer_F"}, // 0.03%
			{9833.63380720355, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.03%
			{9836.92051793649, "30Rnd_762x39_AK47_M"}, // 0.03%
			{9840.20722866943, "30Rnd_545x39_Mag_F"}, // 0.03%
			{9843.49393940236, "30Rnd_545x39_Mag_Green_F"}, // 0.03%
			{9846.7806501353, "30Rnd_545x39_Mag_Tracer_F"}, // 0.03%
			{9850.06736086824, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.03%
			{9853.35407160117, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.03%
			{9856.64078233411, "Exile_Magazine_5Rnd_22LR"}, // 0.03%
			{9859.92749306705, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.03%
			{9863.21420379998, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.03%
			{9866.50091453292, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.03%
			{9869.78762526586, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.03%
			{9873.07433599879, "150Rnd_556x45_Drum_Mag_F"}, // 0.03%
			{9876.36104673173, "30Rnd_580x42_Mag_F"}, // 0.03%
			{9879.64775746467, "30Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9882.9344681976, "20Rnd_762x51_Mag"}, // 0.03%
			{9886.22117893054, "100Rnd_580x42_Mag_F"}, // 0.03%
			{9889.50788966348, "100Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9892.79460039641, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.03%
			{9896.0175477818, "arifle_MX_khk_F"}, // 0.03%
			{9899.24049516718, "arifle_TRG20_F"}, // 0.03%
			{9902.46344255256, "arifle_MX_F"}, // 0.03%
			{9905.68638993795, "arifle_MXC_F"}, // 0.03%
			{9908.90933732333, "arifle_Katiba_GL_F"}, // 0.03%
			{9912.13228470872, "arifle_TRG21_F"}, // 0.03%
			{9915.3552320941, "arifle_MXC_khk_F"}, // 0.03%
			{9918.2767527456, "Exile_Magazine_10Rnd_303"}, // 0.03%
			{9921.09683170781, "arifle_Mk20C_F"}, // 0.03%
			{9923.91691067002, "arifle_Mk20_F"}, // 0.03%
			{9926.46347026801, "optic_NVS"}, // 0.03%
			{9928.88068080704, "arifle_SDAR_F"}, // 0.02%
			{9931.29789134608, "arifle_MXM_F"}, // 0.02%
			{9933.31223346194, "arifle_SPAR_03_snd_F"}, // 0.02%
			{9935.32657557781, "arifle_SPAR_03_khk_F"}, // 0.02%
			{9937.34091769367, "arifle_AKM_FL_F"}, // 0.02%
			{9939.35525980954, "arifle_AK12_F"}, // 0.02%
			{9941.3696019254, "arifle_SPAR_01_GL_khk_F"}, // 0.02%
			{9943.38394404127, "arifle_SPAR_01_khk_F"}, // 0.02%
			{9945.39828615713, "arifle_SPAR_01_blk_F"}, // 0.02%
			{9947.412628273, "arifle_SPAR_01_GL_snd_F"}, // 0.02%
			{9949.42697038886, "arifle_SPAR_02_blk_F"}, // 0.02%
			{9951.44131250472, "arifle_SPAR_02_khk_F"}, // 0.02%
			{9953.45565462059, "arifle_SPAR_02_snd_F"}, // 0.02%
			{9955.46999673645, "arifle_CTARS_hex_F"}, // 0.02%
			{9957.48433885232, "arifle_CTARS_ghex_F"}, // 0.02%
			{9959.49868096818, "arifle_CTARS_blk_F"}, // 0.02%
			{9961.51302308405, "arifle_CTAR_GL_blk_F"}, // 0.02%
			{9963.52736519991, "arifle_CTAR_ghex_F"}, // 0.02%
			{9965.54170731578, "arifle_CTAR_hex_F"}, // 0.02%
			{9967.55604943164, "arifle_CTAR_blk_F"}, // 0.02%
			{9969.57039154751, "arifle_ARX_hex_F"}, // 0.02%
			{9971.58473366337, "arifle_ARX_ghex_F"}, // 0.02%
			{9973.59907577924, "arifle_ARX_blk_F"}, // 0.02%
			{9975.6134178951, "arifle_AKS_F"}, // 0.02%
			{9977.62776001096, "arifle_AKM_F"}, // 0.02%
			{9979.64210212683, "arifle_AK12_GL_F"}, // 0.02%
			{9981.65644424269, "arifle_SPAR_03_blk_F"}, // 0.02%
			{9983.67078635856, "arifle_SPAR_01_snd_F"}, // 0.02%
			{9985.68512847442, "arifle_SPAR_01_GL_blk_F"}, // 0.02%
			{9987.51107888161, "10Rnd_50BW_Mag_F"}, // 0.02%
			{9989.1225525743, "arifle_Mk20_GL_F"}, // 0.02%
			{9990.73402626699, "arifle_MX_GL_F"}, // 0.02%
			{9992.34549995969, "arifle_MX_GL_khk_F"}, // 0.02%
			{9993.95697365238, "arifle_TRG21_GL_F"}, // 0.02%
			{9995.1655789219, "arifle_MXM_Black_F"}, // 0.01%
			{9996.37418419142, "arifle_MXC_Black_F"}, // 0.01%
			{9997.58278946094, "arifle_MXM_khk_F"}, // 0.01%
			{9998.79139473046, "arifle_MX_GL_Black_F"}, // 0.01%
			{9999.99999999997, "arifle_MX_Black_F"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  hgun_Pistol_01_F
	  Exile_Item_PlasticBottleEmpty
	  ItemWatch
	  SmokeShell
	  Chemlight_red
	  hgun_Pistol_heavy_02_F
	  H_Cap_blk
	  B_Kitbag_mcamo
	  Exile_Weapon_M1014
	  Exile_Item_Can_Empty
	  SmokeShellRed
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_EnergyDrink
	  Exile_Item_ToiletPaper
	  SMG_02_F
	  Exile_Item_PowerDrink
	  Exile_Item_MountainDupe
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Weapon_TaurusGold
	  Exile_Item_Vishpirin
	  Exile_Item_MountainDupe
	  Exile_Weapon_Makarov
	  Exile_Item_MountainDupe
	  SMG_01_F
	  Exile_Item_Raisins
	  Exile_Item_Can_Empty
	  Exile_Item_Bandage
	  30Rnd_9x21_Mag_SMG_02_Tracer_Green
	  Exile_Item_ChocolateMilk
	  FlareGreen_F
	  hgun_P07_khk_F
	  B_HuntingBackpack
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_ToiletPaper
	  Exile_Item_InstaDoc
	  Exile_Item_ToiletPaper
	  hgun_ACPC2_F
	  Chemlight_green
	  Exile_Item_ZipTie
	  B_OutdoorPack_blk
	  Exile_Item_Beer
	  FlareYellow_F
	  Exile_Item_ToiletPaper
	  hgun_Pistol_heavy_02_F
	  Exile_Item_ScrewDriver
	  FlareWhite_F
	  SmokeShellBlue
	  Exile_Item_PlasticBottleEmpty
	  hgun_Pistol_heavy_02_F
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DsNuts
	  Exile_Item_Beer
	  Chemlight_blue
	  Exile_Item_ChocolateMilk
	  Exile_Item_Magazine03
	  muzzle_snds_L
	  Exile_Item_CockONut
	  Exile_Item_PlasticBottleEmpty
	  30Rnd_45ACP_Mag_SMG_01_Tracer_Green
	  B_Kitbag_sgg
	  SMG_05_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  Exile_Item_ChocolateMilk
	  hgun_P07_khk_F
	  FlareYellow_F
	  Exile_Weapon_Makarov
	  Exile_Item_PlasticBottleDirtyWater
	  FlareYellow_F
	  Exile_Item_SeedAstics
	  FlareWhite_F
	  Exile_Item_CatFood
	  Exile_Item_Handsaw
	  Exile_Item_ZipTie
	  Exile_Weapon_M1014
	  Exile_Item_DsNuts
	  Exile_Item_Noodles
	  ItemRadio
	  Exile_Item_Can_Empty
	  Exile_Item_Surstromming
	  Exile_Item_InstantCoffee
	  FlareYellow_F
	  hgun_Pistol_01_F
	  Exile_Weapon_Makarov
	  Exile_Item_MountainDupe
	  Exile_Item_Can_Empty
	  Exile_Item_Raisins
	  Exile_Item_CockONut
	  hgun_P07_khk_F
	  Exile_Weapon_Taurus
	  Exile_Item_CanOpener
	  Exile_Item_ToiletPaper
	  B_AssaultPack_sgg
	  FlareRed_F
	  9Rnd_45ACP_Mag
	  6Rnd_45ACP_Cylinder
	*/
	class Shop
	{
		count = 193;
		half = 9064.5076897852;
		halfIndex = 96;
		sum = 10000;
		items[] = 
		{
			{600, "Exile_Item_Can_Empty"}, // 6.00%
			{1200, "Exile_Item_ToiletPaper"}, // 6.00%
			{1800, "Exile_Item_PlasticBottleEmpty"}, // 6.00%
			{2120, "Exile_Weapon_M1014"}, // 3.20%
			{2408, "Exile_Item_PlasticBottleDirtyWater"}, // 2.88%
			{2648, "Exile_Item_ZipTie"}, // 2.40%
			{2888, "Exile_Item_ChocolateMilk"}, // 2.40%
			{3080, "Exile_Item_MountainDupe"}, // 1.92%
			{3243.2, "Exile_Item_EnergyDrink"}, // 1.63%
			{3393.2, "Exile_Item_Magazine01"}, // 1.50%
			{3543.2, "Exile_Item_Magazine02"}, // 1.50%
			{3693.2, "Exile_Item_Magazine03"}, // 1.50%
			{3843.2, "Exile_Item_Magazine04"}, // 1.50%
			{3977.6, "Exile_Item_Beer"}, // 1.34%
			{4102.04444444444, "Exile_Item_Heatpack"}, // 1.24%
			{4217.24444444444, "Exile_Item_PlasticBottleFreshWater"}, // 1.15%
			{4326.13333333333, "ItemMap"}, // 1.09%
			{4428.38897243108, "SMG_01_F"}, // 1.02%
			{4528.38897243108, "Chemlight_blue"}, // 1.00%
			{4628.38897243108, "FlareYellow_F"}, // 1.00%
			{4728.38897243108, "FlareWhite_F"}, // 1.00%
			{4828.38897243108, "FlareRed_F"}, // 1.00%
			{4928.38897243108, "FlareGreen_F"}, // 1.00%
			{5028.38897243108, "Chemlight_green"}, // 1.00%
			{5128.38897243108, "Chemlight_yellow"}, // 1.00%
			{5228.38897243108, "Chemlight_red"}, // 1.00%
			{5327.63709273183, "SMG_05_F"}, // 0.99%
			{5426.88521303258, "hgun_PDW2000_F"}, // 0.99%
			{5526.13333333333, "SMG_02_F"}, // 0.99%
			{5620.51535580524, "hgun_P07_F"}, // 0.94%
			{5713.84868913858, "ItemWatch"}, // 0.93%
			{5807.18202247191, "ItemRadio"}, // 0.93%
			{5898.84868913858, "Exile_Item_InstantCoffee"}, // 0.92%
			{5988.73632958802, "hgun_Rook40_F"}, // 0.90%
			{6078.62397003745, "hgun_ACPC2_F"}, // 0.90%
			{6167.51285892634, "Exile_Item_Vishpirin"}, // 0.89%
			{6256.40174781523, "Exile_Item_Heatpack"}, // 0.89%
			{6336.40174781523, "Exile_Magazine_8Rnd_74Slug"}, // 0.80%
			{6411.40174781523, "Exile_Item_Moobar"}, // 0.75%
			{6486.40174781523, "Exile_Item_Raisins"}, // 0.75%
			{6553.60174781523, "Exile_Item_PowerDrink"}, // 0.67%
			{6620.2684144819, "Exile_Item_CockONut"}, // 0.67%
			{6686.93508114856, "Exile_Item_SeedAstics"}, // 0.67%
			{6749.15730337079, "ItemGPS"}, // 0.62%
			{6811.37952559301, "Binocular"}, // 0.62%
			{6869.80649188515, "hgun_Pistol_01_F"}, // 0.58%
			{6928.23345817728, "hgun_P07_khk_F"}, // 0.58%
			{6986.66042446942, "hgun_Pistol_heavy_01_F"}, // 0.58%
			{7045.08739076155, "hgun_Pistol_heavy_02_F"}, // 0.58%
			{7103.51435705369, "hgun_Pistol_Signal_F"}, // 0.58%
			{7161.94132334582, "Exile_Weapon_Colt1911"}, // 0.58%
			{7220.36828963796, "Exile_Weapon_Makarov"}, // 0.58%
			{7278.79525593009, "Exile_Weapon_TaurusGold"}, // 0.58%
			{7337.22222222223, "Exile_Weapon_Taurus"}, // 0.58%
			{7395.55555555556, "Exile_Item_DsNuts"}, // 0.58%
			{7453.88888888889, "Exile_Item_Noodles"}, // 0.58%
			{7512.22222222223, "Exile_Item_BeefParts"}, // 0.58%
			{7570.55555555556, "Exile_Item_Cheathas"}, // 0.58%
			{7628.88888888889, "Exile_Item_CatFood"}, // 0.58%
			{7687.22222222222, "Exile_Item_BBQSandwich"}, // 0.58%
			{7745.55555555556, "Exile_Item_MacasCheese"}, // 0.58%
			{7803.88888888889, "Exile_Item_ChristmasTinner"}, // 0.58%
			{7862.22222222222, "Exile_Item_SausageGravy"}, // 0.58%
			{7920.55555555556, "Exile_Item_Surstromming"}, // 0.58%
			{7978.88888888889, "Exile_Item_Dogfood"}, // 0.58%
			{8028.88888888889, "Exile_Item_GloriousKnakworst"}, // 0.50%
			{8074.60317460317, "SmokeShell"}, // 0.46%
			{8120.31746031746, "SmokeShellYellow"}, // 0.46%
			{8166.03174603175, "SmokeShellPurple"}, // 0.46%
			{8211.74603174603, "SmokeShellBlue"}, // 0.46%
			{8257.46031746032, "SmokeShellOrange"}, // 0.46%
			{8303.1746031746, "SmokeShellGreen"}, // 0.46%
			{8348.88888888889, "SmokeShellRed"}, // 0.46%
			{8393.33333333334, "Exile_Item_Bandage"}, // 0.44%
			{8435, "Exile_Item_CanOpener"}, // 0.42%
			{8476.66666666667, "Exile_Item_Matches"}, // 0.42%
			{8516.66666666667, "V_Rangemaster_belt"}, // 0.40%
			{8554.04984423676, "B_OutdoorPack_blk"}, // 0.37%
			{8588.78668634202, "Exile_Melee_Axe"}, // 0.35%
			{8622.43154615511, "B_OutdoorPack_tan"}, // 0.34%
			{8656.07640596819, "B_OutdoorPack_blu"}, // 0.34%
			{8685.98294802427, "B_HuntingBackpack"}, // 0.30%
			{8714.78294802427, "muzzle_snds_L"}, // 0.29%
			{8743.58294802427, "muzzle_snds_acp"}, // 0.29%
			{8769.75117232333, "B_AssaultPack_tna_F"}, // 0.26%
			{8795.9193966224, "B_AssaultPack_mcamo"}, // 0.26%
			{8822.08762092146, "B_AssaultPack_blk"}, // 0.26%
			{8848.25584522052, "B_AssaultPack_cbr"}, // 0.26%
			{8874.42406951959, "B_AssaultPack_rgr"}, // 0.26%
			{8900.59229381865, "B_AssaultPack_dgtl"}, // 0.26%
			{8926.76051811772, "B_AssaultPack_khk"}, // 0.26%
			{8952.92874241678, "B_AssaultPack_sgg"}, // 0.26%
			{8977.92874241678, "Exile_Item_CookingPot"}, // 0.25%
			{9002.92874241678, "Exile_Item_EMRE"}, // 0.25%
			{9023.45505820626, "Exile_Item_Handsaw"}, // 0.21%
			{9043.98137399573, "Exile_Item_Pliers"}, // 0.21%
			{9064.5076897852, "Exile_Item_ScrewDriver"}, // 0.21%
			{9084.5076897852, "V_Press_F"}, // 0.20%
			{9104.5076897852, "V_TacVest_blk_POLICE"}, // 0.20%
			{9123.19927857025, "B_Kitbag_cbr"}, // 0.19%
			{9141.8908673553, "B_Kitbag_sgg"}, // 0.19%
			{9160.58245614034, "B_Kitbag_mcamo"}, // 0.19%
			{9178.36023391812, "10Rnd_9x21_Mag"}, // 0.18%
			{9196.1380116959, "Exile_Magazine_8Rnd_9x18"}, // 0.18%
			{9213.91578947367, "Exile_Magazine_6Rnd_45ACP"}, // 0.18%
			{9231.69356725145, "Exile_Magazine_7Rnd_45ACP"}, // 0.18%
			{9249.47134502923, "9Rnd_45ACP_Mag"}, // 0.18%
			{9267.24912280701, "11Rnd_45ACP_Mag"}, // 0.18%
			{9285.02690058478, "Exile_Item_InstaDoc"}, // 0.18%
			{9302.80467836256, "30Rnd_9x21_Mag"}, // 0.18%
			{9320.17309941519, "Exile_Item_JunkMetal"}, // 0.17%
			{9335.9625730994, "Exile_Item_WaterCanisterEmpty"}, // 0.16%
			{9351.75204678361, "Exile_Melee_Shovel"}, // 0.16%
			{9367.30760233917, "Exile_Item_MobilePhone"}, // 0.16%
			{9381.70760233917, "H_Cap_tan"}, // 0.14%
			{9396.10760233917, "H_Hat_blue"}, // 0.14%
			{9410.50760233917, "H_Hat_brown"}, // 0.14%
			{9424.90760233917, "H_Hat_checker"}, // 0.14%
			{9439.30760233917, "H_Hat_tan"}, // 0.14%
			{9453.70760233917, "H_StrawHat"}, // 0.14%
			{9468.10760233917, "H_StrawHat_dark"}, // 0.14%
			{9482.50760233916, "H_Cap_red"}, // 0.14%
			{9496.90760233916, "H_Hat_grey"}, // 0.14%
			{9511.30760233916, "H_Cap_press"}, // 0.14%
			{9525.52982456139, "6Rnd_45ACP_Cylinder"}, // 0.14%
			{9539.74035087718, "Exile_Item_LightBulb"}, // 0.14%
			{9553.07368421051, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.13%
			{9566.40701754384, "optic_Holosight_smg_blk_F"}, // 0.13%
			{9579.74035087718, "optic_ACO_grn"}, // 0.13%
			{9593.07368421051, "30Rnd_9x21_Mag_SMG_02"}, // 0.13%
			{9606.40701754385, "optic_Aco_smg"}, // 0.13%
			{9619.74035087718, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.13%
			{9633.07368421051, "optic_ACO_grn_smg"}, // 0.13%
			{9646.40701754385, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.13%
			{9659.74035087718, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.13%
			{9673.07368421052, "optic_Holosight_smg"}, // 0.13%
			{9686.40701754385, "optic_Aco"}, // 0.13%
			{9699.74035087718, "30Rnd_45ACP_Mag_SMG_01"}, // 0.13%
			{9712.37192982455, "Exile_Item_ExtensionCord"}, // 0.13%
			{9724.37192982455, "H_Bandanna_surfer"}, // 0.12%
			{9736.37192982455, "H_Beret_blk_POLICE"}, // 0.12%
			{9748.37192982455, "H_Cap_oli"}, // 0.12%
			{9760.37192982455, "H_Cap_headphones"}, // 0.12%
			{9772.37192982455, "H_Cap_blk"}, // 0.12%
			{9784.37192982455, "H_Cap_grn"}, // 0.12%
			{9796.37192982455, "H_Cap_blu"}, // 0.12%
			{9808.37192982455, "H_Cap_blk_Raven"}, // 0.12%
			{9819.57192982455, "optic_MRD"}, // 0.11%
			{9830.77192982455, "optic_Yorris"}, // 0.11%
			{9839.66081871344, "16Rnd_9x21_Mag"}, // 0.09%
			{9847.55555555555, "Exile_Item_Grinder"}, // 0.08%
			{9855.45029239765, "Exile_Item_MetalScrews"}, // 0.08%
			{9863.34502923976, "Exile_Melee_SledgeHammer"}, // 0.08%
			{9869.66081871344, "Exile_Item_Sand"}, // 0.06%
			{9875.97660818713, "Exile_Item_Foolbox"}, // 0.06%
			{9882.29239766081, "Exile_Item_MetalBoard"}, // 0.06%
			{9888.6081871345, "Exile_Item_CamoTentKit"}, // 0.06%
			{9894.83040935672, "6Rnd_RedSignal_F"}, // 0.06%
			{9901.05263157894, "6Rnd_GreenSignal_F"}, // 0.06%
			{9905.78947368421, "Exile_Item_PortableGeneratorKit"}, // 0.05%
			{9910.52631578947, "Exile_Item_Cement"}, // 0.05%
			{9915.26315789473, "Exile_Item_FloodLightKit"}, // 0.05%
			{9919.47368421052, "U_C_Poor_2"}, // 0.04%
			{9923.68421052631, "U_C_Poor_1"}, // 0.04%
			{9927.8947368421, "U_C_Poor_shorts_1"}, // 0.04%
			{9932.10526315789, "U_C_HunterBody_grn"}, // 0.04%
			{9936.31578947368, "U_C_Journalist"}, // 0.04%
			{9940.52631578947, "U_C_Scientist"}, // 0.04%
			{9944.73684210526, "U_Rangemaster"}, // 0.04%
			{9948.01169590643, "U_C_Poloshirt_salmon"}, // 0.03%
			{9951.2865497076, "U_C_Poloshirt_tricolour"}, // 0.03%
			{9954.56140350877, "U_C_Poloshirt_stripped"}, // 0.03%
			{9957.83625730994, "U_C_Poloshirt_burgundy"}, // 0.03%
			{9961.11111111111, "U_C_Poloshirt_blue"}, // 0.03%
			{9964.26900584795, "Exile_Item_Knife"}, // 0.03%
			{9966.6081871345, "U_C_Man_casual_5_F"}, // 0.02%
			{9968.94736842105, "U_C_Man_casual_6_F"}, // 0.02%
			{9971.2865497076, "U_I_C_Soldier_Bandit_5_F"}, // 0.02%
			{9973.62573099415, "U_I_C_Soldier_Bandit_2_F"}, // 0.02%
			{9975.9649122807, "U_I_C_Soldier_Bandit_3_F"}, // 0.02%
			{9978.30409356725, "U_I_C_Soldier_Bandit_4_F"}, // 0.02%
			{9980.6432748538, "U_C_man_sport_1_F"}, // 0.02%
			{9982.98245614035, "U_C_man_sport_2_F"}, // 0.02%
			{9985.3216374269, "U_C_man_sport_3_F"}, // 0.02%
			{9987.66081871345, "U_C_Man_casual_1_F"}, // 0.02%
			{9990, "U_C_Man_casual_2_F"}, // 0.02%
			{9992.33918128655, "U_C_Man_casual_3_F"}, // 0.02%
			{9994.6783625731, "U_C_Man_casual_4_F"}, // 0.02%
			{9997.01754385965, "U_I_C_Soldier_Bandit_1_F"}, // 0.02%
			{9998.59649122808, "Exile_Item_ThermalScannerPro"}, // 0.02%
			{9999.06432748539, "U_NikosBody"}, // 0.00%
			{9999.5321637427, "U_OrestesBody"}, // 0.00%
			{10000, "U_NikosAgedBody"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Pliers
	  Exile_Item_FuelCanisterFull
	  FlareGreen_F
	  Exile_Item_LightBulb
	  FlareWhite_F
	  Exile_Item_Pliers
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_Grinder
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ExtensionCord
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  FlareGreen_F
	  Exile_Item_Handsaw
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_JunkMetal
	  FlareYellow_F
	  Exile_Item_ToiletPaper
	  Exile_Item_JunkMetal
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Item_Handsaw
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Magazine02
	  Exile_Item_MetalBoard
	  Exile_Item_ToiletPaper
	  FlareWhite_F
	  Exile_Item_Pliers
	  Exile_Item_Magazine01
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_SledgeHammer
	  Exile_Item_FuelCanisterEmpty
	  FlareYellow_F
	  FlareWhite_F
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ZipTie
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Pliers
	  Exile_Item_MetalScrews
	  Exile_Item_ZipTie
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Pliers
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_Shovel
	  Exile_Melee_Axe
	  Exile_Item_ZipTie
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  Exile_Item_Handsaw
	  Exile_Item_FuelCanisterFull
	  Exile_Item_MetalBoard
	  Exile_Item_Grinder
	  FlareRed_F
	  Exile_Item_FuelCanisterFull
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Pliers
	  Exile_Item_ZipTie
	  Exile_Item_JunkMetal
	  Exile_Item_Can_Empty
	  Exile_Item_ZipTie
	  Exile_Item_Handsaw
	  Exile_Item_ZipTie
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Melee_Shovel
	  Exile_Melee_Shovel
	  FlareGreen_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  FlareYellow_F
	  Exile_Item_ZipTie
	  Exile_Item_Pliers
	  Exile_Item_JunkMetal
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Handsaw
	  Exile_Item_Handsaw
	  Exile_Item_Pliers
	  Exile_Melee_Shovel
	  Exile_Item_Magazine02
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Magazine03
	  Exile_Item_ZipTie
	  Exile_Melee_SledgeHammer
	  Exile_Item_Foolbox
	*/
	class Industrial
	{
		count = 36;
		half = 8180.77803203661;
		halfIndex = 18;
		sum = 10000;
		items[] = 
		{
			{1086.95652173913, "Exile_Item_FuelCanisterEmpty"}, // 10.87%
			{1956.52173913043, "Exile_Item_FuelCanisterFull"}, // 8.70%
			{2608.69565217391, "Exile_Item_Can_Empty"}, // 6.52%
			{3260.86956521739, "Exile_Item_ToiletPaper"}, // 6.52%
			{3913.04347826087, "Exile_Item_PlasticBottleEmpty"}, // 6.52%
			{4416.47597254005, "Exile_Melee_Axe"}, // 5.03%
			{4851.2585812357, "Exile_Item_ZipTie"}, // 4.35%
			{5177.34553775744, "FlareWhite_F"}, // 3.26%
			{5503.43249427918, "FlareRed_F"}, // 3.26%
			{5829.51945080091, "FlareGreen_F"}, // 3.26%
			{6155.60640732265, "FlareYellow_F"}, // 3.26%
			{6453.08924485126, "Exile_Item_ScrewDriver"}, // 2.97%
			{6750.57208237986, "Exile_Item_Handsaw"}, // 2.97%
			{7048.05491990847, "Exile_Item_Pliers"}, // 2.97%
			{7299.77116704805, "Exile_Item_JunkMetal"}, // 2.52%
			{7528.60411899313, "Exile_Melee_Shovel"}, // 2.29%
			{7757.43707093821, "Exile_Item_WaterCanisterEmpty"}, // 2.29%
			{7974.82837528604, "Exile_Item_DuctTape"}, // 2.17%
			{8180.77803203661, "Exile_Item_LightBulb"}, // 2.06%
			{8363.84439359268, "Exile_Item_ExtensionCord"}, // 1.83%
			{8526.88787185355, "Exile_Item_Magazine02"}, // 1.63%
			{8689.93135011442, "Exile_Item_Magazine01"}, // 1.63%
			{8852.97482837529, "Exile_Item_Magazine04"}, // 1.63%
			{9016.01830663616, "Exile_Item_Magazine03"}, // 1.63%
			{9130.4347826087, "Exile_Item_MetalScrews"}, // 1.14%
			{9244.85125858124, "Exile_Item_Grinder"}, // 1.14%
			{9359.26773455378, "Exile_Melee_SledgeHammer"}, // 1.14%
			{9450.80091533181, "Exile_Item_Sand"}, // 0.92%
			{9542.33409610984, "Exile_Item_Foolbox"}, // 0.92%
			{9633.86727688787, "Exile_Item_MetalBoard"}, // 0.92%
			{9725.4004576659, "Exile_Item_CamoTentKit"}, // 0.92%
			{9794.05034324943, "Exile_Item_PortableGeneratorKit"}, // 0.69%
			{9862.70022883295, "Exile_Item_FloodLightKit"}, // 0.69%
			{9931.35011441647, "Exile_Item_Cement"}, // 0.69%
			{9977.11670480549, "Exile_Item_Knife"}, // 0.46%
			{10000, "Exile_Item_ThermalScannerPro"} // 0.23%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_ScrewDriver
	  Exile_Item_Magazine02
	  Exile_Item_Handsaw
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_FloodLightKit
	  Exile_Item_Sand
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Item_Can_Empty
	  Exile_Item_Handsaw
	  Exile_Melee_Shovel
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_LightBulb
	  Exile_Item_JunkMetal
	  Exile_Item_ToiletPaper
	  Exile_Item_LightBulb
	  Exile_Item_ToiletPaper
	  Exile_Item_BaseCameraKit
	  Exile_Melee_Shovel
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  Exile_Item_CamoTentKit
	  Exile_Item_ToiletPaper
	  Exile_Item_Pliers
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Grinder
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Laptop
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_MetalBoard
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_Pliers
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine04
	  Exile_Item_Laptop
	  Exile_Item_BaseCameraKit
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Melee_SledgeHammer
	  Exile_Item_BaseCameraKit
	  Exile_Item_Magazine03
	  Exile_Item_Can_Empty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_ExtensionCord
	  Exile_Item_Laptop
	  Exile_Item_BaseCameraKit
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Item_Grinder
	  Exile_Melee_Shovel
	  Exile_Item_Can_Empty
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_Sand
	  Exile_Item_Handsaw
	  Exile_Item_Can_Empty
	  Exile_Melee_Axe
	  Exile_Item_ToiletPaper
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_BaseCameraKit
	  Exile_Item_LightBulb
	  Exile_Item_ToiletPaper
	  Exile_Item_BaseCameraKit
	  Exile_Melee_Shovel
	  Exile_Item_BaseCameraKit
	  Exile_Item_Magazine01
	  Exile_Melee_SledgeHammer
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ExtensionCord
	  Exile_Item_ExtensionCord
	  Exile_Item_ScrewDriver
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  Exile_Item_ScrewDriver
	  Exile_Item_BaseCameraKit
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Melee_Axe
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_Shovel
	  Exile_Melee_Shovel
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Item_Magazine04
	  Exile_Item_Can_Empty
	  Exile_Melee_SledgeHammer
	  Exile_Item_Pliers
	  Exile_Item_MetalBoard
	  Exile_Item_CamoTentKit
	*/
	class Factories
	{
		count = 30;
		half = 8085.52631578947;
		halfIndex = 15;
		sum = 10000;
		items[] = 
		{
			{1000, "Exile_Item_PlasticBottleEmpty"}, // 10.00%
			{2000, "Exile_Item_Can_Empty"}, // 10.00%
			{3000, "Exile_Item_ToiletPaper"}, // 10.00%
			{3723.68421052632, "Exile_Melee_Axe"}, // 7.24%
			{4223.68421052632, "Exile_Item_Laptop"}, // 5.00%
			{4723.68421052632, "Exile_Item_BaseCameraKit"}, // 5.00%
			{5151.31578947368, "Exile_Item_Pliers"}, // 4.28%
			{5578.94736842105, "Exile_Item_Handsaw"}, // 4.28%
			{6006.57894736842, "Exile_Item_ScrewDriver"}, // 4.28%
			{6368.42105263158, "Exile_Item_JunkMetal"}, // 3.62%
			{6697.36842105263, "Exile_Melee_Shovel"}, // 3.29%
			{7026.31578947368, "Exile_Item_WaterCanisterEmpty"}, // 3.29%
			{7322.36842105263, "Exile_Item_LightBulb"}, // 2.96%
			{7585.52631578947, "Exile_Item_ExtensionCord"}, // 2.63%
			{7835.52631578947, "Exile_Item_Magazine01"}, // 2.50%
			{8085.52631578947, "Exile_Item_Magazine02"}, // 2.50%
			{8335.52631578947, "Exile_Item_Magazine03"}, // 2.50%
			{8585.52631578947, "Exile_Item_Magazine04"}, // 2.50%
			{8750, "Exile_Item_Grinder"}, // 1.64%
			{8914.47368421053, "Exile_Item_MetalScrews"}, // 1.64%
			{9078.94736842105, "Exile_Melee_SledgeHammer"}, // 1.64%
			{9210.52631578948, "Exile_Item_Sand"}, // 1.32%
			{9342.1052631579, "Exile_Item_MetalBoard"}, // 1.32%
			{9473.68421052632, "Exile_Item_Foolbox"}, // 1.32%
			{9605.26315789474, "Exile_Item_CamoTentKit"}, // 1.32%
			{9703.94736842106, "Exile_Item_PortableGeneratorKit"}, // 0.99%
			{9802.63157894737, "Exile_Item_FloodLightKit"}, // 0.99%
			{9901.31578947369, "Exile_Item_Cement"}, // 0.99%
			{9967.1052631579, "Exile_Item_Knife"}, // 0.66%
			{10000, "Exile_Item_ThermalScannerPro"} // 0.33%
		};
	};

	/**
	  Result of 100 rounds:

	  FlareYellow_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Magazine04
	  Exile_Item_ZipTie
	  FlareYellow_F
	  Exile_Item_MetalBoard
	  Exile_Item_LightBulb
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Magazine01
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ZipTie
	  FlareRed_F
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Axe
	  FlareWhite_F
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ToiletPaper
	  FlareRed_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Magazine02
	  Exile_Item_MetalScrews
	  Exile_Item_FuelCanisterFull
	  Exile_Item_PlasticBottleEmpty
	  FlareYellow_F
	  Exile_Item_Magazine03
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterEmpty
	  FlareWhite_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterEmpty
	  FlareYellow_F
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  Exile_Item_FuelCanisterEmpty
	  FlareYellow_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Axe
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  Exile_Item_JunkMetal
	  FlareGreen_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Sand
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ZipTie
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterFull
	  FlareYellow_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterFull
	  Exile_Item_PlasticBottleEmpty
	  FlareGreen_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_Axe
	  Exile_Melee_Axe
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Handsaw
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  FlareGreen_F
	  FlareYellow_F
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  FlareRed_F
	  FlareGreen_F
	  FlareYellow_F
	  Exile_Melee_Axe
	  Exile_Item_Magazine02
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Shovel
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_LightBulb
	  Exile_Item_Grinder
	*/
	class VehicleService
	{
		count = 36;
		half = 8698.51258581236;
		halfIndex = 18;
		sum = 10000;
		items[] = 
		{
			{1739.13043478261, "Exile_Item_FuelCanisterEmpty"}, // 17.39%
			{3130.4347826087, "Exile_Item_FuelCanisterFull"}, // 13.91%
			{3782.60869565217, "Exile_Item_Can_Empty"}, // 6.52%
			{4434.78260869565, "Exile_Item_ToiletPaper"}, // 6.52%
			{5086.95652173913, "Exile_Item_PlasticBottleEmpty"}, // 6.52%
			{5521.73913043478, "Exile_Item_ZipTie"}, // 4.35%
			{5869.5652173913, "Exile_Item_DuctTape"}, // 3.48%
			{6195.65217391304, "FlareWhite_F"}, // 3.26%
			{6521.73913043478, "FlareRed_F"}, // 3.26%
			{6847.82608695652, "FlareGreen_F"}, // 3.26%
			{7173.91304347826, "FlareYellow_F"}, // 3.26%
			{7488.55835240275, "Exile_Melee_Axe"}, // 3.15%
			{7674.48512585812, "Exile_Item_ScrewDriver"}, // 1.86%
			{7860.4118993135, "Exile_Item_Pliers"}, // 1.86%
			{8046.33867276888, "Exile_Item_Handsaw"}, // 1.86%
			{8209.38215102975, "Exile_Item_Magazine04"}, // 1.63%
			{8372.42562929062, "Exile_Item_Magazine01"}, // 1.63%
			{8535.46910755149, "Exile_Item_Magazine02"}, // 1.63%
			{8698.51258581236, "Exile_Item_Magazine03"}, // 1.63%
			{8855.8352402746, "Exile_Item_JunkMetal"}, // 1.57%
			{8998.85583524028, "Exile_Melee_Shovel"}, // 1.43%
			{9141.87643020595, "Exile_Item_WaterCanisterEmpty"}, // 1.43%
			{9270.59496567506, "Exile_Item_LightBulb"}, // 1.29%
			{9385.0114416476, "Exile_Item_ExtensionCord"}, // 1.14%
			{9456.52173913044, "Exile_Melee_SledgeHammer"}, // 0.72%
			{9528.03203661327, "Exile_Item_Grinder"}, // 0.72%
			{9599.54233409611, "Exile_Item_MetalScrews"}, // 0.72%
			{9656.75057208238, "Exile_Item_Sand"}, // 0.57%
			{9713.95881006865, "Exile_Item_Foolbox"}, // 0.57%
			{9771.16704805492, "Exile_Item_MetalBoard"}, // 0.57%
			{9828.37528604119, "Exile_Item_CamoTentKit"}, // 0.57%
			{9871.28146453089, "Exile_Item_PortableGeneratorKit"}, // 0.43%
			{9914.18764302059, "Exile_Item_FloodLightKit"}, // 0.43%
			{9957.0938215103, "Exile_Item_Cement"}, // 0.43%
			{9985.69794050343, "Exile_Item_Knife"}, // 0.29%
			{10000, "Exile_Item_ThermalScannerPro"} // 0.14%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Rangefinder
	  bipod_02_F_hex
	  ItemCompass
	  muzzle_snds_338_green
	  30Rnd_580x42_Mag_F
	  Exile_Item_MobilePhone
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  B_ViperHarness_hex_F
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  APERSBoundingMine_Range_Mag
	  LMG_03_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  srifle_GM6_ghex_F
	  10Rnd_338_Mag
	  Exile_Item_PlasticBottleEmpty
	  srifle_LRR_tna_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Weapon_PKP
	  Exile_Item_Can_Empty
	  B_ViperLightHarness_base_F
	  H_HelmetB_paint
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  B_Carryall_oli
	  U_B_T_FullGhillie_tna_F
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  muzzle_snds_H_MG_khk_F
	  Exile_Item_Can_Empty
	  IEDLandSmall_Remote_Mag
	  1Rnd_HE_Grenade_shell
	  Exile_Item_PlasticBottleEmpty
	  U_B_CTRG_Soldier_2_F
	  Exile_Item_Magazine01
	  Exile_Item_Magazine03
	  Exile_Item_Can_Empty
	  U_B_GhillieSuit
	  srifle_DMR_03_woodland_F
	  Exile_Item_Magazine04
	  5Rnd_127x108_Mag
	  Exile_Item_ToiletPaper
	  U_I_GhillieSuit
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  1Rnd_SmokeBlue_Grenade_shell
	  Exile_Item_Magazine01
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  V_PlateCarrierGL_tna_F
	  ItemGPS
	  Exile_Item_ToiletPaper
	  arifle_SPAR_02_blk_F
	  150Rnd_762x54_Box_Tracer
	  HandGrenade
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  10Rnd_762x54_Mag
	  Exile_Item_Magazine03
	  srifle_LRR_tna_F
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine03
	  SmokeShellRed
	  Exile_Item_Magazine04
	  optic_KHS_hex
	  3Rnd_SmokePurple_Grenade_shell
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  1Rnd_SmokeOrange_Grenade_shell
	  B_Carryall_oucamo
	  ItemWatch
	  Exile_Item_Can_Empty
	  3Rnd_UGL_FlareWhite_F
	  U_IG_Guerilla1_1
	  Exile_Item_Magazine03
	  B_Carryall_ghex_F
	  srifle_GM6_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  LMG_03_F
	  SmokeShellOrange
	  muzzle_snds_338_black
	  1Rnd_SmokeRed_Grenade_shell
	  B_ViperLightHarness_khk_F
	  Exile_Item_Can_Empty
	  arifle_Katiba_F
	  Exile_Item_Magazine04
	  muzzle_snds_65_TI_ghex_F
	  H_Bandanna_mcamo
	*/
	class Military
	{
		count = 552;
		half = 9066.71085627853;
		halfIndex = 276;
		sum = 10000.0000000001;
		items[] = 
		{
			{1237.62376237624, "Exile_Item_Can_Empty"}, // 12.38%
			{2475.24752475248, "Exile_Item_ToiletPaper"}, // 12.38%
			{3712.87128712871, "Exile_Item_PlasticBottleEmpty"}, // 12.38%
			{4022.27722772277, "Exile_Item_Magazine01"}, // 3.09%
			{4331.68316831683, "Exile_Item_Magazine02"}, // 3.09%
			{4641.08910891089, "Exile_Item_Magazine03"}, // 3.09%
			{4950.49504950495, "Exile_Item_Magazine04"}, // 3.09%
			{5050, "1Rnd_HE_Grenade_shell"}, // 1.00%
			{5149.0099009901, "Exile_Item_ZipTie"}, // 0.99%
			{5235.10546706845, "ItemCompass"}, // 0.86%
			{5309.36289281102, "MiniGrenade"}, // 0.74%
			{5383.62031855359, "HandGrenade"}, // 0.74%
			{5433.12526904864, "APERSMine_Range_Mag"}, // 0.50%
			{5482.63021954369, "APERSTripMine_Wire_Mag"}, // 0.50%
			{5532.13517003874, "APERSBoundingMine_Range_Mag"}, // 0.50%
			{5581.14507102884, "3Rnd_HE_Grenade_shell"}, // 0.49%
			{5625.14947146889, "Exile_Item_Heatpack"}, // 0.44%
			{5668.19725450806, "Rangefinder"}, // 0.43%
			{5706.7011048931, "ItemMap"}, // 0.39%
			{5743.37143859313, "Exile_Item_Vishpirin"}, // 0.37%
			{5780.04177229317, "Exile_Item_Heatpack"}, // 0.37%
			{5813.0450726232, "ItemWatch"}, // 0.33%
			{5846.04837295324, "ItemRadio"}, // 0.33%
			{5876.51295787327, "U_IG_Guerilla1_1"}, // 0.30%
			{5906.9775427933, "U_IG_Guerilla2_1"}, // 0.30%
			{5937.44212771333, "U_IG_Guerilla2_3"}, // 0.30%
			{5967.90671263336, "U_IG_Guerilla2_2"}, // 0.30%
			{5997.60968293039, "IEDUrbanSmall_Remote_Mag"}, // 0.30%
			{6027.31265322742, "DemoCharge_Remote_Mag"}, // 0.30%
			{6057.01562352445, "IEDLandSmall_Remote_Mag"}, // 0.30%
			{6086.71859382148, "150Rnd_93x64_Mag"}, // 0.30%
			{6115.279142184, "U_IG_Guerilla3_2"}, // 0.29%
			{6143.83969054653, "U_IG_Guerilla3_1"}, // 0.29%
			{6171.63194345603, "10Rnd_338_Mag"}, // 0.28%
			{6199.42419636554, "10Rnd_93x64_DMR_05_Mag"}, // 0.28%
			{6224.67172111801, "UGL_FlareYellow_F"}, // 0.25%
			{6249.91924587049, "UGL_FlareRed_F"}, // 0.25%
			{6275.16677062296, "UGL_FlareGreen_F"}, // 0.25%
			{6300.41429537544, "UGL_FlareWhite_F"}, // 0.25%
			{6325.16677062296, "LMG_Mk200_F"}, // 0.25%
			{6349.91924587049, "arifle_MX_SW_Black_F"}, // 0.25%
			{6374.67172111801, "arifle_MX_SW_F"}, // 0.25%
			{6399.42419636554, "LMG_Zafir_F"}, // 0.25%
			{6424.17667161306, "Exile_Weapon_RPK"}, // 0.25%
			{6448.92914686059, "Exile_Weapon_PK"}, // 0.25%
			{6473.68162210811, "Exile_Weapon_PKP"}, // 0.25%
			{6498.43409735563, "LMG_03_F"}, // 0.25%
			{6522.75231865145, "10Rnd_127x54_Mag"}, // 0.24%
			{6544.75451887147, "Binocular"}, // 0.22%
			{6566.75671909149, "ItemGPS"}, // 0.22%
			{6587.97312644651, "SmokeShellBlue"}, // 0.21%
			{6609.18953380153, "SmokeShellOrange"}, // 0.21%
			{6630.40594115656, "SmokeShellYellow"}, // 0.21%
			{6651.62234851158, "SmokeShellGreen"}, // 0.21%
			{6672.8387558666, "SmokeShellRed"}, // 0.21%
			{6694.05516322162, "SmokeShell"}, // 0.21%
			{6715.27157057664, "SmokeShellPurple"}, // 0.21%
			{6736.06364978456, "20Rnd_650x39_Cased_Mag_F"}, // 0.21%
			{6755.86562998258, "srifle_EBR_F"}, // 0.20%
			{6775.6676101806, "srifle_DMR_01_F"}, // 0.20%
			{6794.77478405588, "20Rnd_762x51_Mag"}, // 0.19%
			{6813.71291948016, "B_Carryall_cbr"}, // 0.19%
			{6832.65105490445, "B_Carryall_ghex_F"}, // 0.19%
			{6851.46293609256, "20Rnd_762x51_Mag"}, // 0.19%
			{6869.79810294258, "Exile_Item_Bandage"}, // 0.18%
			{6887.73949439716, "B_Carryall_oli"}, // 0.18%
			{6905.68088585175, "B_Carryall_khk"}, // 0.18%
			{6922.51256902006, "10Rnd_762x54_Mag"}, // 0.17%
			{6939.01421918508, "muzzle_snds_338_black"}, // 0.17%
			{6955.5158693501, "V_RebreatherIA"}, // 0.17%
			{6972.01751951511, "V_RebreatherIR"}, // 0.17%
			{6988.51916968013, "V_RebreatherB"}, // 0.17%
			{7005.02081984514, "U_B_GhillieSuit"}, // 0.17%
			{7021.52247001016, "muzzle_snds_338_green"}, // 0.17%
			{7038.02412017518, "U_I_GhillieSuit"}, // 0.17%
			{7054.52577034019, "muzzle_snds_93mmg"}, // 0.17%
			{7071.02742050521, "muzzle_snds_93mmg_tan"}, // 0.17%
			{7087.52907067022, "muzzle_snds_B"}, // 0.17%
			{7104.03072083524, "U_O_GhillieSuit"}, // 0.17%
			{7120.53237100026, "muzzle_snds_338_sand"}, // 0.17%
			{7136.58803062027, "srifle_DMR_05_hex_F"}, // 0.16%
			{7152.64369024029, "srifle_DMR_05_blk_F"}, // 0.16%
			{7168.6993498603, "srifle_DMR_05_tan_F"}, // 0.16%
			{7184.25804858732, "srifle_GM6_F"}, // 0.16%
			{7199.81674731433, "srifle_LRR_F"}, // 0.16%
			{7215.37544604135, "srifle_LRR_tna_F"}, // 0.16%
			{7230.93414476837, "srifle_GM6_ghex_F"}, // 0.16%
			{7246.49284349538, "srifle_DMR_07_blk_F"}, // 0.16%
			{7262.0515422224, "srifle_DMR_07_ghex_F"}, // 0.16%
			{7277.61024094941, "srifle_DMR_07_hex_F"}, // 0.16%
			{7292.76481763157, "1Rnd_SmokeGreen_Grenade_shell"}, // 0.15%
			{7307.91939431373, "1Rnd_SmokeYellow_Grenade_shell"}, // 0.15%
			{7323.07397099589, "1Rnd_SmokeRed_Grenade_shell"}, // 0.15%
			{7338.22854767804, "1Rnd_SmokePurple_Grenade_shell"}, // 0.15%
			{7353.3831243602, "1Rnd_SmokeBlue_Grenade_shell"}, // 0.15%
			{7368.53770104236, "1Rnd_SmokeOrange_Grenade_shell"}, // 0.15%
			{7383.69227772452, "1Rnd_Smoke_Grenade_shell"}, // 0.15%
			{7398.64343727, "B_Carryall_ocamo"}, // 0.15%
			{7413.59459681549, "B_Carryall_oucamo"}, // 0.15%
			{7428.54575636097, "B_Carryall_mcamo"}, // 0.15%
			{7443.39724150949, "V_PlateCarrier2_rgr"}, // 0.15%
			{7458.248726658, "V_PlateCarrierIAGL_dgtl"}, // 0.15%
			{7473.10021180652, "V_PlateCarrier3_rgr"}, // 0.15%
			{7487.95169695504, "V_PlateCarrierGL_rgr"}, // 0.15%
			{7502.80318210355, "V_PlateCarrierIA1_dgtl"}, // 0.15%
			{7517.65466725207, "V_PlateCarrierIA2_dgtl"}, // 0.15%
			{7532.50615240058, "V_PlateCarrierSpec_rgr"}, // 0.15%
			{7547.3576375491, "V_PlateCarrier1_blk"}, // 0.15%
			{7562.20912269761, "V_PlateCarrier1_rgr"}, // 0.15%
			{7576.35339426762, "optic_AMS_snd"}, // 0.14%
			{7590.49766583764, "optic_KHS_tan"}, // 0.14%
			{7604.64193740765, "optic_KHS_old"}, // 0.14%
			{7618.78620897767, "optic_KHS_hex"}, // 0.14%
			{7632.93048054768, "optic_AMS_khk"}, // 0.14%
			{7647.0747521177, "optic_AMS"}, // 0.14%
			{7661.21902368771, "optic_KHS_blk"}, // 0.14%
			{7675.26772585522, "srifle_DMR_04_F"}, // 0.14%
			{7689.31642802274, "srifle_DMR_04_Tan_F"}, // 0.14%
			{7703.09171859527, "O_NVGoggles_ghex_F"}, // 0.14%
			{7716.86700916781, "NVGoggles_tna_F"}, // 0.14%
			{7730.64229974035, "O_NVGoggles_hex_F"}, // 0.14%
			{7744.41759031288, "NVGoggles"}, // 0.14%
			{7758.19288088542, "O_NVGoggles_urb_F"}, // 0.14%
			{7771.83199989936, "optic_DMS"}, // 0.14%
			{7784.96596635723, "optic_SOS"}, // 0.13%
			{7798.0999328151, "optic_SOS_khk_F"}, // 0.13%
			{7811.23389927297, "optic_LRPS"}, // 0.13%
			{7824.36786573084, "optic_LRPS_tna_F"}, // 0.13%
			{7837.50183218871, "optic_LRPS_ghex_F"}, // 0.13%
			{7849.54357690372, "srifle_DMR_02_sniper_F"}, // 0.12%
			{7861.58532161873, "srifle_DMR_02_F"}, // 0.12%
			{7873.62706633374, "srifle_DMR_02_camo_F"}, // 0.12%
			{7885.50825445256, "3Rnd_UGL_FlareGreen_F"}, // 0.12%
			{7897.38944257137, "3Rnd_UGL_FlareRed_F"}, // 0.12%
			{7909.27063069018, "3Rnd_UGL_FlareWhite_F"}, // 0.12%
			{7921.15181880899, "3Rnd_UGL_FlareYellow_F"}, // 0.12%
			{7932.56036707123, "B_FieldPack_ocamo"}, // 0.11%
			{7943.96891533346, "B_FieldPack_oucamo"}, // 0.11%
			{7955.3774635957, "B_FieldPack_cbr"}, // 0.11%
			{7966.78601185793, "B_FieldPack_blk"}, // 0.11%
			{7977.93282190317, "bipod_01_F_snd"}, // 0.11%
			{7989.07963194842, "bipod_01_F_blk"}, // 0.11%
			{8000.22644199366, "bipod_02_F_blk"}, // 0.11%
			{8011.3732520389, "bipod_02_F_tan"}, // 0.11%
			{8022.52006208414, "bipod_03_F_blk"}, // 0.11%
			{8033.66687212939, "bipod_01_F_khk"}, // 0.11%
			{8044.81368217463, "bipod_03_F_oli"}, // 0.11%
			{8055.30479751133, "bipod_02_F_hex"}, // 0.10%
			{8065.79591284803, "bipod_01_F_mtp"}, // 0.10%
			{8076.19195245199, "V_BandollierB_blk"}, // 0.10%
			{8086.58799205595, "V_BandollierB_oli"}, // 0.10%
			{8096.98403165991, "V_BandollierB_cbr"}, // 0.10%
			{8107.38007126387, "V_BandollierB_khk"}, // 0.10%
			{8117.77611086783, "V_HarnessO_brn"}, // 0.10%
			{8128.17215047179, "V_HarnessOGL_brn"}, // 0.10%
			{8138.56819007575, "V_HarnessO_gry"}, // 0.10%
			{8148.96422967971, "V_HarnessOGL_gry"}, // 0.10%
			{8159.36026928367, "V_HarnessOSpec_brn"}, // 0.10%
			{8169.75630888763, "V_HarnessOSpec_gry"}, // 0.10%
			{8180.15234849159, "V_BandollierB_rgr"}, // 0.10%
			{8190.0533385906, "5Rnd_127x108_Mag"}, // 0.10%
			{8199.95432868961, "7Rnd_408_Mag"}, // 0.10%
			{8209.85531878862, "SatchelCharge_Remote_Mag"}, // 0.10%
			{8219.45321735399, "muzzle_snds_B"}, // 0.10%
			{8228.9734001415, "U_I_C_Soldier_Para_1_F"}, // 0.10%
			{8238.49358292901, "U_I_C_Soldier_Para_2_F"}, // 0.10%
			{8248.01376571652, "U_I_C_Soldier_Para_3_F"}, // 0.10%
			{8257.53394850403, "U_I_C_Soldier_Para_4_F"}, // 0.10%
			{8267.05413129154, "U_I_C_Soldier_Para_5_F"}, // 0.10%
			{8276.57431407905, "U_I_C_Soldier_Camo_F"}, // 0.10%
			{8285.53817342794, "B_ViperHarness_oli_F"}, // 0.09%
			{8294.50203277684, "B_ViperHarness_blk_F"}, // 0.09%
			{8303.46589212574, "B_ViperHarness_ghex_F"}, // 0.09%
			{8312.42975147464, "B_ViperHarness_hex_F"}, // 0.09%
			{8321.39361082354, "B_ViperLightHarness_ghex_F"}, // 0.09%
			{8330.35747017243, "B_ViperLightHarness_hex_F"}, // 0.09%
			{8339.32132952133, "B_FieldPack_ghex_F"}, // 0.09%
			{8348.28518887023, "B_ViperLightHarness_blk_F"}, // 0.09%
			{8357.24904821913, "B_ViperHarness_khk_F"}, // 0.09%
			{8366.21290756803, "B_ViperLightHarness_oli_F"}, // 0.09%
			{8375.17676691692, "B_ViperHarness_base_F"}, // 0.09%
			{8384.14062626582, "B_ViperLightHarness_base_F"}, // 0.09%
			{8393.10448561472, "B_Bergen_blk"}, // 0.09%
			{8402.06834496362, "B_Bergen_rgr"}, // 0.09%
			{8411.03220431252, "B_Bergen_mcamo"}, // 0.09%
			{8419.99606366141, "B_Bergen_sgg"}, // 0.09%
			{8428.95992301031, "B_ViperLightHarness_khk_F"}, // 0.09%
			{8437.10218460489, "U_O_T_Officer_F"}, // 0.08%
			{8445.24444619947, "U_O_T_Soldier_F"}, // 0.08%
			{8453.38670779406, "U_B_CTRG_2"}, // 0.08%
			{8461.52896938864, "U_B_CTRG_3"}, // 0.08%
			{8469.67123098322, "U_B_CombatUniform_mcam"}, // 0.08%
			{8477.8134925778, "U_B_CombatUniform_mcam_tshirt"}, // 0.08%
			{8485.95575417238, "U_B_CombatUniform_mcam_vest"}, // 0.08%
			{8494.09801576696, "U_B_GEN_Commander_F"}, // 0.08%
			{8502.24027736154, "U_B_GEN_Soldier_F"}, // 0.08%
			{8510.38253895612, "U_B_CTRG_Soldier_urb_3_F"}, // 0.08%
			{8518.52480055071, "U_B_CTRG_Soldier_urb_2_F"}, // 0.08%
			{8526.66706214529, "U_B_CTRG_Soldier_urb_1_F"}, // 0.08%
			{8534.80932373987, "U_B_CTRG_Soldier_3_F"}, // 0.08%
			{8542.95158533445, "U_B_CTRG_Soldier_2_F"}, // 0.08%
			{8551.09384692903, "U_B_CTRG_Soldier_F"}, // 0.08%
			{8559.23610852361, "U_B_T_Soldier_SL_F"}, // 0.08%
			{8567.37837011819, "U_B_CombatUniform_mcam_worn"}, // 0.08%
			{8575.52063171277, "U_B_T_Soldier_AR_F"}, // 0.08%
			{8583.66289330736, "U_B_CTRG_1"}, // 0.08%
			{8591.58368538656, "5Rnd_127x108_APDS_Mag"}, // 0.08%
			{8599.19983161657, "U_IG_leader"}, // 0.08%
			{8606.62557419083, "V_PlateCarrierH_CTRG"}, // 0.07%
			{8614.05131676509, "V_PlateCarrierL_CTRG"}, // 0.07%
			{8621.47705933935, "V_Chestrig_oli"}, // 0.07%
			{8628.9028019136, "V_Chestrig_rgr"}, // 0.07%
			{8636.32854448786, "V_Chestrig_blk"}, // 0.07%
			{8643.75428706212, "V_Chestrig_khk"}, // 0.07%
			{8651.08835380213, "Exile_Item_InstaDoc"}, // 0.07%
			{8658.36849358081, "U_O_T_FullGhillie_tna_F"}, // 0.07%
			{8665.6486333595, "U_B_T_FullGhillie_tna_F"}, // 0.07%
			{8672.92877313818, "U_B_T_Soldier_F"}, // 0.07%
			{8680.20891291687, "U_B_T_Sniper_F"}, // 0.07%
			{8687.48905269555, "U_O_T_Sniper_F"}, // 0.07%
			{8694.56118848056, "V_BandollierB_ghex_F"}, // 0.07%
			{8701.63332426556, "V_HarnessOGL_ghex_F"}, // 0.07%
			{8708.70546005057, "V_HarnessO_ghex_F"}, // 0.07%
			{8715.77759583558, "V_PlateCarrierGL_tna_F"}, // 0.07%
			{8722.84973162058, "V_PlateCarrierSpec_tna_F"}, // 0.07%
			{8729.92186740559, "V_PlateCarrier1_tna_F"}, // 0.07%
			{8736.9940031906, "V_TacChestrig_oli_F"}, // 0.07%
			{8744.06613897561, "V_TacVest_gen_F"}, // 0.07%
			{8751.13827476061, "V_TacChestrig_grn_F"}, // 0.07%
			{8758.21041054562, "V_PlateCarrierSpec_rgr"}, // 0.07%
			{8765.28254633063, "V_PlateCarrierSpec_mtp"}, // 0.07%
			{8772.35468211563, "V_PlateCarrierSpec_blk"}, // 0.07%
			{8779.42681790064, "V_PlateCarrierIAGL_oli"}, // 0.07%
			{8786.49895368565, "V_PlateCarrierIAGL_dgtl"}, // 0.07%
			{8793.57108947066, "V_PlateCarrierGL_rgr"}, // 0.07%
			{8800.64322525566, "V_PlateCarrierGL_mtp"}, // 0.07%
			{8807.71536104067, "V_PlateCarrierGL_blk"}, // 0.07%
			{8814.78749682568, "V_TacChestrig_cbr_F"}, // 0.07%
			{8821.85963261068, "V_PlateCarrier1_rgr_noflag_F"}, // 0.07%
			{8828.93176839569, "V_PlateCarrier2_tna_F"}, // 0.07%
			{8836.0039041807, "V_PlateCarrier2_rgr_noflag_F"}, // 0.07%
			{8842.99283836823, "150Rnd_762x54_Box"}, // 0.07%
			{8849.98177255577, "100Rnd_65x39_caseless_mag"}, // 0.07%
			{8856.93564520056, "acc_flashlight"}, // 0.07%
			{8863.48391907557, "Exile_Weapon_LeeEnfield"}, // 0.07%
			{8870.03219295058, "Exile_Weapon_AK74"}, // 0.07%
			{8876.58046682558, "Exile_Weapon_AK74_GL"}, // 0.07%
			{8883.12874070059, "Exile_Weapon_AK107_GL"}, // 0.07%
			{8889.6770145756, "Exile_Weapon_AK107"}, // 0.07%
			{8896.2252884506, "Exile_Weapon_DMR"}, // 0.07%
			{8902.77356232561, "Exile_Weapon_AKS_Gold"}, // 0.07%
			{8909.32183620062, "Exile_Weapon_CZ550"}, // 0.07%
			{8915.87011007562, "Exile_Weapon_AK47"}, // 0.07%
			{8922.41838395063, "Exile_Weapon_SVDCamo"}, // 0.07%
			{8928.96665782564, "Exile_Weapon_VSSVintorez"}, // 0.07%
			{8935.51493170065, "arifle_Katiba_F"}, // 0.07%
			{8942.06320557565, "Exile_Weapon_SVD"}, // 0.07%
			{8948.57701485132, "U_I_pilotCoveralls"}, // 0.07%
			{8955.09082412698, "U_B_PilotCoveralls"}, // 0.07%
			{8961.60463340265, "U_O_PilotCoveralls"}, // 0.07%
			{8968.11844267831, "U_I_HeliPilotCoveralls"}, // 0.07%
			{8974.63225195397, "U_I_CombatUniform"}, // 0.07%
			{8981.14606122964, "U_I_CombatUniform_shortsleeve"}, // 0.07%
			{8987.6598705053, "U_I_CombatUniform_tshirt"}, // 0.07%
			{8994.17367978097, "U_B_HeliPilotCoveralls"}, // 0.07%
			{9000.23551045383, "3Rnd_SmokeYellow_Grenade_shell"}, // 0.06%
			{9006.29734112669, "3Rnd_SmokePurple_Grenade_shell"}, // 0.06%
			{9012.35917179956, "3Rnd_SmokeRed_Grenade_shell"}, // 0.06%
			{9018.42100247242, "3Rnd_SmokeOrange_Grenade_shell"}, // 0.06%
			{9024.48283314528, "3Rnd_SmokeGreen_Grenade_shell"}, // 0.06%
			{9030.54466381814, "3Rnd_SmokeBlue_Grenade_shell"}, // 0.06%
			{9036.60649449101, "3Rnd_Smoke_Grenade_shell"}, // 0.06%
			{9042.62736684851, "srifle_DMR_03_F"}, // 0.06%
			{9048.64823920602, "srifle_DMR_03_khaki_F"}, // 0.06%
			{9054.66911156352, "srifle_DMR_03_tan_F"}, // 0.06%
			{9060.68998392103, "srifle_DMR_03_woodland_F"}, // 0.06%
			{9066.71085627853, "srifle_DMR_06_camo_F"}, // 0.06%
			{9072.73172863604, "srifle_DMR_06_olive_F"}, // 0.06%
			{9078.71219245423, "B_Bergen_hex_F"}, // 0.06%
			{9084.69265627243, "B_Bergen_tna_F"}, // 0.06%
			{9090.67312009062, "B_Bergen_dgtl_F"}, // 0.06%
			{9096.65358390881, "B_Bergen_Base_F"}, // 0.06%
			{9102.63404772701, "B_Bergen_mcamo_F"}, // 0.06%
			{9108.45815954995, "Exile_Magazine_100Rnd_762x54_PK_Green"}, // 0.06%
			{9114.2822713729, "200Rnd_556x45_Box_Red_F"}, // 0.06%
			{9120.10638319585, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.06%
			{9125.9304950188, "Exile_Magazine_75Rnd_545x39_RPK_Green"}, // 0.06%
			{9131.75460684174, "Exile_Magazine_45Rnd_545x39_RPK_Green"}, // 0.06%
			{9137.57871866469, "150Rnd_762x54_Box_Tracer"}, // 0.06%
			{9143.40283048764, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.06%
			{9149.22694231058, "200Rnd_556x45_Box_Tracer_F"}, // 0.06%
			{9155.05105413353, "200Rnd_556x45_Box_F"}, // 0.06%
			{9160.55160418854, "Exile_Item_MobilePhone"}, // 0.06%
			{9165.89386503333, "30Rnd_65x39_caseless_green"}, // 0.05%
			{9171.23612587811, "30Rnd_556x45_Stanag"}, // 0.05%
			{9176.5783867229, "30Rnd_556x45_Stanag_green"}, // 0.05%
			{9181.92064756769, "30Rnd_556x45_Stanag_red"}, // 0.05%
			{9187.1592666677, "arifle_TRG20_F"}, // 0.05%
			{9192.3978857677, "arifle_MXC_khk_F"}, // 0.05%
			{9197.63650486771, "arifle_MX_khk_F"}, // 0.05%
			{9202.87512396772, "arifle_MX_F"}, // 0.05%
			{9208.11374306772, "arifle_MXC_F"}, // 0.05%
			{9213.35236216773, "arifle_TRG21_F"}, // 0.05%
			{9218.59098126773, "arifle_Katiba_GL_F"}, // 0.05%
			{9223.64250682845, "muzzle_snds_B_snd_F"}, // 0.05%
			{9228.69403238917, "muzzle_snds_B_khk_F"}, // 0.05%
			{9233.66108427831, "muzzle_snds_H_MG_blk_F"}, // 0.05%
			{9238.62813616744, "optic_ERCO_snd_F"}, // 0.05%
			{9243.59518805658, "optic_Holosight_khk_F"}, // 0.05%
			{9248.56223994572, "muzzle_snds_65_TI_ghex_F"}, // 0.05%
			{9253.52929183485, "optic_DMS_ghex_F"}, // 0.05%
			{9258.49634372399, "muzzle_snds_65_TI_hex_F"}, // 0.05%
			{9263.46339561313, "optic_DMS"}, // 0.05%
			{9268.43044750226, "muzzle_snds_65_TI_blk_F"}, // 0.05%
			{9273.3974993914, "muzzle_snds_58_wdm_F"}, // 0.05%
			{9278.36455128053, "muzzle_snds_m_snd_F"}, // 0.05%
			{9283.33160316967, "muzzle_snds_H_MG_khk_F"}, // 0.05%
			{9288.29865505881, "optic_Arco"}, // 0.05%
			{9293.26570694794, "optic_Arco_blk_F"}, // 0.05%
			{9298.23275883708, "optic_Arco_ghex_F"}, // 0.05%
			{9303.19981072622, "optic_ERCO_khk_F"}, // 0.05%
			{9308.16686261535, "optic_Hamr"}, // 0.05%
			{9313.13391450449, "optic_Hamr_khk_F"}, // 0.05%
			{9318.10096639362, "optic_Holosight"}, // 0.05%
			{9323.06801828276, "muzzle_snds_m_khk_F"}, // 0.05%
			{9328.0350701719, "muzzle_snds_58_blk_F"}, // 0.05%
			{9333.00212206103, "muzzle_snds_H_snd_F"}, // 0.05%
			{9337.96917395017, "muzzle_snds_H_khk_F"}, // 0.05%
			{9342.9362258393, "muzzle_snds_H"}, // 0.05%
			{9347.90327772844, "muzzle_snds_M"}, // 0.05%
			{9352.87032961758, "optic_Holosight_blk_F"}, // 0.05%
			{9357.83738150671, "optic_MRCO"}, // 0.05%
			{9362.80443339585, "acc_pointer_IR"}, // 0.05%
			{9367.77148528499, "optic_ERCO_blk_F"}, // 0.05%
			{9372.72198033449, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.05%
			{9377.672475384, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.05%
			{9382.55783234074, "U_B_SpecopsUniform_sgg"}, // 0.05%
			{9387.4271717337, "H_Booniehat_khk"}, // 0.05%
			{9392.29651112665, "H_Booniehat_mcamo"}, // 0.05%
			{9397.16585051961, "Exile_Headgear_GasMask"}, // 0.05%
			{9402.03518991257, "H_Booniehat_dirty"}, // 0.05%
			{9406.90452930552, "H_Booniehat_dgtl"}, // 0.05%
			{9411.77386869848, "H_Booniehat_khk_hs"}, // 0.05%
			{9416.64320809143, "H_Booniehat_indp"}, // 0.05%
			{9421.51254748439, "H_Booniehat_tan"}, // 0.05%
			{9426.38188687734, "H_Booniehat_grn"}, // 0.05%
			{9431.21163814515, "H_MilCap_blue"}, // 0.05%
			{9436.04138941296, "H_MilCap_oucamo"}, // 0.05%
			{9440.87114068077, "H_MilCap_mcamo"}, // 0.05%
			{9445.70089194858, "H_MilCap_ocamo"}, // 0.05%
			{9450.53064321639, "Exile_Headgear_GasMask"}, // 0.05%
			{9455.3603944842, "H_MilCap_rucamo"}, // 0.05%
			{9460.19014575201, "H_MilCap_dgtl"}, // 0.05%
			{9464.77393746451, "arifle_Mk20_F"}, // 0.05%
			{9469.35772917701, "arifle_Mk20C_F"}, // 0.05%
			{9473.81317472157, "V_I_G_resistanceLeader_F"}, // 0.04%
			{9477.74213904657, "arifle_MXM_F"}, // 0.04%
			{9481.67110337157, "arifle_SDAR_F"}, // 0.04%
			{9485.58876132442, "20Rnd_556x45_UW_mag"}, // 0.04%
			{9489.39683443942, "U_I_G_resistanceLeader_F"}, // 0.04%
			{9493.04883898414, "H_Bandanna_khk_hs"}, // 0.04%
			{9496.70084352886, "H_Bandanna_khk"}, // 0.04%
			{9500.35284807357, "H_Watchcap_blk"}, // 0.04%
			{9504.00485261829, "H_Cap_khaki_specops_UK"}, // 0.04%
			{9507.656857163, "H_Cap_tan_specops_US"}, // 0.04%
			{9511.30886170772, "H_Cap_brn_SPECOPS"}, // 0.04%
			{9514.96086625244, "H_Watchcap_khk"}, // 0.04%
			{9518.61287079715, "H_BandMask_blk"}, // 0.04%
			{9522.26487534187, "H_Bandanna_mcamo"}, // 0.04%
			{9525.91687988658, "H_Bandanna_camo"}, // 0.04%
			{9529.5688844313, "H_Bandanna_sgg"}, // 0.04%
			{9533.22088897602, "H_Bandanna_cbr"}, // 0.04%
			{9536.87289352073, "H_Hat_camo"}, // 0.04%
			{9540.52489806545, "H_Bandanna_gry"}, // 0.04%
			{9544.1472115163, "H_HelmetB"}, // 0.04%
			{9547.76952496716, "H_HelmetB_paint"}, // 0.04%
			{9551.39183841802, "H_HelmetB_light"}, // 0.04%
			{9555.01415186887, "H_HelmetB_plain_blk"}, // 0.04%
			{9558.63646531973, "H_HelmetSpecB"}, // 0.04%
			{9562.25877877059, "H_HelmetSpecB_paint1"}, // 0.04%
			{9565.88109222144, "H_HelmetSpecB_paint2"}, // 0.04%
			{9569.5034056723, "H_HelmetSpecB_blk"}, // 0.04%
			{9573.12571912315, "H_HelmetIA"}, // 0.04%
			{9576.39985606066, "arifle_AKM_F"}, // 0.03%
			{9579.67399299816, "arifle_SPAR_03_khk_F"}, // 0.03%
			{9582.94812993566, "arifle_SPAR_01_GL_snd_F"}, // 0.03%
			{9586.22226687317, "arifle_SPAR_01_GL_khk_F"}, // 0.03%
			{9589.49640381067, "arifle_SPAR_01_GL_blk_F"}, // 0.03%
			{9592.77054074818, "arifle_SPAR_01_snd_F"}, // 0.03%
			{9596.04467768568, "arifle_SPAR_01_khk_F"}, // 0.03%
			{9599.31881462318, "arifle_SPAR_01_blk_F"}, // 0.03%
			{9602.59295156069, "arifle_CTARS_hex_F"}, // 0.03%
			{9605.86708849819, "arifle_CTARS_ghex_F"}, // 0.03%
			{9609.14122543569, "arifle_CTARS_blk_F"}, // 0.03%
			{9612.4153623732, "arifle_SPAR_02_blk_F"}, // 0.03%
			{9615.6894993107, "arifle_CTAR_GL_blk_F"}, // 0.03%
			{9618.9636362482, "arifle_CTAR_blk_F"}, // 0.03%
			{9622.23777318571, "arifle_ARX_hex_F"}, // 0.03%
			{9625.51191012321, "arifle_ARX_ghex_F"}, // 0.03%
			{9628.78604706071, "arifle_ARX_blk_F"}, // 0.03%
			{9632.06018399822, "arifle_AKS_F"}, // 0.03%
			{9635.33432093572, "arifle_AKM_FL_F"}, // 0.03%
			{9638.60845787322, "arifle_AK12_GL_F"}, // 0.03%
			{9641.88259481073, "arifle_AK12_F"}, // 0.03%
			{9645.15673174823, "arifle_SPAR_03_snd_F"}, // 0.03%
			{9648.43086868573, "arifle_CTAR_ghex_F"}, // 0.03%
			{9651.70500562324, "arifle_SPAR_02_khk_F"}, // 0.03%
			{9654.97914256074, "arifle_CTAR_hex_F"}, // 0.03%
			{9658.25327949825, "arifle_SPAR_03_blk_F"}, // 0.03%
			{9661.52741643575, "arifle_SPAR_02_snd_F"}, // 0.03%
			{9664.78432107358, "U_O_V_Soldier_Viper_hex_F"}, // 0.03%
			{9668.04122571141, "U_O_OfficerUniform_ocamo"}, // 0.03%
			{9671.29813034925, "U_I_OfficerUniform"}, // 0.03%
			{9674.55503498708, "U_O_Wetsuit"}, // 0.03%
			{9677.81193962491, "U_B_Wetsuit"}, // 0.03%
			{9681.06884426274, "U_O_CombatUniform_ocamo"}, // 0.03%
			{9684.32574890057, "U_O_CombatUniform_oucamo"}, // 0.03%
			{9687.58265353841, "U_O_SpecopsUniform_ocamo"}, // 0.03%
			{9690.83955817624, "U_O_SpecopsUniform_blk"}, // 0.03%
			{9694.09646281407, "U_O_V_Soldier_Viper_F"}, // 0.03%
			{9697.3533674519, "U_I_Wetsuit"}, // 0.03%
			{9700.55872395878, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.03%
			{9703.76408046565, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.03%
			{9706.96943697253, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.03%
			{9710.1747934794, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.03%
			{9713.38014998627, "30Rnd_65x39_caseless_mag"}, // 0.03%
			{9716.58550649315, "Exile_Magazine_10Rnd_9x39"}, // 0.03%
			{9719.79086300002, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.03%
			{9722.9962195069, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.03%
			{9726.20157601377, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.03%
			{9729.40693252065, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.03%
			{9732.61228902752, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.03%
			{9735.8176455344, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.03%
			{9739.02300204127, "Exile_Magazine_20Rnd_9x39"}, // 0.03%
			{9742.22835854815, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.03%
			{9745.43371505502, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.03%
			{9748.63907156189, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.03%
			{9751.84442806877, "30Rnd_545x39_Mag_Tracer_F"}, // 0.03%
			{9755.04978457564, "30Rnd_545x39_Mag_Green_F"}, // 0.03%
			{9758.25514108252, "30Rnd_545x39_Mag_F"}, // 0.03%
			{9761.46049758939, "30Rnd_762x39_AK47_M"}, // 0.03%
			{9764.66585409627, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.03%
			{9767.87121060314, "30Rnd_762x39_Mag_Tracer_F"}, // 0.03%
			{9771.07656711002, "30Rnd_580x42_Mag_F"}, // 0.03%
			{9774.28192361689, "30Rnd_762x39_Mag_Green_F"}, // 0.03%
			{9777.48728012377, "30Rnd_762x39_Mag_F"}, // 0.03%
			{9780.69263663064, "100Rnd_580x42_Mag_F"}, // 0.03%
			{9783.89799313751, "30Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9787.10334964439, "150Rnd_556x45_Drum_Mag_F"}, // 0.03%
			{9790.30870615126, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.03%
			{9793.51406265814, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.03%
			{9796.71941916501, "20Rnd_762x51_Mag"}, // 0.03%
			{9799.92477567189, "Exile_Magazine_10Rnd_762x54"}, // 0.03%
			{9803.13013217876, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.03%
			{9806.33548868564, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.03%
			{9809.54084519251, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.03%
			{9812.74620169939, "Exile_Magazine_5Rnd_22LR"}, // 0.03%
			{9815.95155820626, "100Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9818.92185523596, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.03%
			{9821.83391114743, "130Rnd_338_Mag"}, // 0.03%
			{9824.68311693132, "Exile_Magazine_10Rnd_303"}, // 0.03%
			{9827.30242648132, "arifle_TRG21_GL_F"}, // 0.03%
			{9829.92173603133, "arifle_Mk20_GL_F"}, // 0.03%
			{9832.54104558133, "arifle_MX_GL_khk_F"}, // 0.03%
			{9835.16035513133, "arifle_MX_GL_F"}, // 0.03%
			{9837.6438810759, "optic_NVS"}, // 0.02%
			{9840.07855077238, "H_FakeHeadgear_Syndikat_F"}, // 0.02%
			{9842.51322046886, "H_Watchcap_camo"}, // 0.02%
			{9844.94789016533, "H_Cap_grn_Syndikat_F"}, // 0.02%
			{9847.38255986181, "H_MilCap_gen_F"}, // 0.02%
			{9849.81722955829, "H_Cap_tan_Syndikat_F"}, // 0.02%
			{9852.25189925477, "H_Watchcap_sgg"}, // 0.02%
			{9854.68656895125, "H_TurbanO_blk"}, // 0.02%
			{9857.12123864773, "H_Shemag_tan"}, // 0.02%
			{9859.55590834421, "H_Shemag_olive"}, // 0.02%
			{9861.99057804068, "H_Shemag_olive_hs"}, // 0.02%
			{9864.42524773716, "H_ShemagOpen_khk"}, // 0.02%
			{9866.85991743364, "H_ShemagOpen_tan"}, // 0.02%
			{9869.29458713012, "H_MilCap_tna_F"}, // 0.02%
			{9871.7292568266, "H_Cap_blk_Syndikat_F"}, // 0.02%
			{9874.16392652308, "H_Shemag_khk"}, // 0.02%
			{9876.59859621956, "H_MilCap_ghex_F"}, // 0.02%
			{9879.03326591603, "H_Booniehat_tna_F"}, // 0.02%
			{9881.46793561251, "H_Cap_oli_Syndikat_F"}, // 0.02%
			{9883.88281124642, "H_HelmetB_light_grass"}, // 0.02%
			{9886.29768688032, "H_HelmetB_black"}, // 0.02%
			{9888.71256251423, "H_HelmetB_desert"}, // 0.02%
			{9891.12743814813, "H_HelmetB_light_desert"}, // 0.02%
			{9893.54231378204, "H_HelmetB_light_black"}, // 0.02%
			{9895.95718941595, "H_HelmetB_light_sand"}, // 0.02%
			{9898.37206504985, "H_HelmetB_snakeskin"}, // 0.02%
			{9900.78694068376, "H_HelmetB_grass"}, // 0.02%
			{9903.20181631766, "H_HelmetIA_camo"}, // 0.02%
			{9905.61669195157, "H_HelmetIA_net"}, // 0.02%
			{9908.03156758547, "H_HelmetB_sand"}, // 0.02%
			{9910.44644321938, "H_HelmetB_light_snakeskin"}, // 0.02%
			{9912.86131885328, "H_HelmetB_TI_tna_F"}, // 0.02%
			{9915.27619448719, "H_HelmetSpecO_ghex_F"}, // 0.02%
			{9917.69107012109, "H_HelmetCrew_O_ghex_F"}, // 0.02%
			{9920.105945755, "H_HelmetLeaderO_ghex_F"}, // 0.02%
			{9922.52082138891, "H_HelmetB_tna_F"}, // 0.02%
			{9924.93569702281, "H_Beret_gen_F"}, // 0.02%
			{9927.35057265672, "H_HelmetB_Light_tna_F"}, // 0.02%
			{9929.76544829062, "H_HelmetB_Enh_tna_F"}, // 0.02%
			{9932.18032392453, "H_Helmet_Skate"}, // 0.02%
			{9934.59519955843, "H_BandMask_khk"}, // 0.02%
			{9937.01007519234, "H_BandMask_reaper"}, // 0.02%
			{9939.42495082624, "H_BandMask_demon"}, // 0.02%
			{9941.40514884605, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.02%
			{9943.36963100855, "arifle_MXM_Black_F"}, // 0.02%
			{9945.33411317105, "arifle_MX_Black_F"}, // 0.02%
			{9947.29859533355, "arifle_MX_GL_Black_F"}, // 0.02%
			{9949.26307749606, "arifle_MXC_Black_F"}, // 0.02%
			{9951.22755965856, "arifle_MXM_khk_F"}, // 0.02%
			{9953.00831327349, "10Rnd_50BW_Mag_F"}, // 0.02%
			{9954.46434122923, "U_B_FullGhillie_sard"}, // 0.01%
			{9955.92036918496, "U_B_FullGhillie_lsh"}, // 0.01%
			{9957.3763971407, "U_B_FullGhillie_ard"}, // 0.01%
			{9958.83242509644, "U_O_FullGhillie_sard"}, // 0.01%
			{9960.28845305218, "U_O_FullGhillie_lsh"}, // 0.01%
			{9961.74448100791, "U_I_FullGhillie_ard"}, // 0.01%
			{9963.20050896365, "U_I_FullGhillie_lsh"}, // 0.01%
			{9964.65653691939, "U_I_FullGhillie_sard"}, // 0.01%
			{9966.11256487512, "U_O_FullGhillie_ard"}, // 0.01%
			{9967.32989972336, "H_Beret_ocamo"}, // 0.01%
			{9968.5472345716, "H_Beret_brn_SF"}, // 0.01%
			{9969.76456941984, "H_Beret_grn"}, // 0.01%
			{9970.98190426808, "H_Beret_red"}, // 0.01%
			{9972.19923911632, "H_Beret_blk"}, // 0.01%
			{9973.41657396456, "H_Beret_Colonel"}, // 0.01%
			{9974.6339088128, "H_Beret_02"}, // 0.01%
			{9975.85124366104, "H_Beret_grn_SF"}, // 0.01%
			{9977.05868147799, "H_PilotHelmetFighter_B"}, // 0.01%
			{9978.26611929494, "H_HelmetO_ghex_F"}, // 0.01%
			{9979.4735571119, "H_HelmetCrew_I"}, // 0.01%
			{9980.68099492885, "H_HelmetCrew_O"}, // 0.01%
			{9981.8884327458, "H_PilotHelmetHeli_B"}, // 0.01%
			{9983.09587056275, "H_PilotHelmetHeli_O"}, // 0.01%
			{9984.30330837971, "H_PilotHelmetHeli_I"}, // 0.01%
			{9985.51074619666, "H_HelmetB_camo"}, // 0.01%
			{9986.71818401361, "H_CrewHelmetHeli_B"}, // 0.01%
			{9987.92562183057, "H_PilotHelmetFighter_O"}, // 0.01%
			{9989.13305964752, "H_CrewHelmetHeli_O"}, // 0.01%
			{9990.34049746447, "H_HelmetCrew_B"}, // 0.01%
			{9991.54793528142, "H_HelmetO_oucamo"}, // 0.01%
			{9992.75537309838, "H_HelmetLeaderO_oucamo"}, // 0.01%
			{9993.96281091533, "H_HelmetSpecO_ocamo"}, // 0.01%
			{9995.17024873228, "H_HelmetSpecO_blk"}, // 0.01%
			{9996.37768654923, "H_HelmetO_ocamo"}, // 0.01%
			{9997.58512436619, "H_HelmetLeaderO_ocamo"}, // 0.01%
			{9998.79256218314, "H_CrewHelmetHeli_I"}, // 0.01%
			{10000.0000000001, "H_PilotHelmetFighter_I"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine03
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine01
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine02
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Magazine02
	*/
	class Medical
	{
		count = 11;
		half = 8731.48148148148;
		halfIndex = 5;
		sum = 10000;
		items[] = 
		{
			{2592.59259259259, "Exile_Item_Vishpirin"}, // 25.93%
			{5185.18518518519, "Exile_Item_Heatpack"}, // 25.93%
			{6481.48148148148, "Exile_Item_Bandage"}, // 12.96%
			{7231.48148148148, "Exile_Item_Can_Empty"}, // 7.50%
			{7981.48148148148, "Exile_Item_ToiletPaper"}, // 7.50%
			{8731.48148148148, "Exile_Item_PlasticBottleEmpty"}, // 7.50%
			{9250, "Exile_Item_InstaDoc"}, // 5.19%
			{9437.5, "Exile_Item_Magazine01"}, // 1.88%
			{9625, "Exile_Item_Magazine02"}, // 1.88%
			{9812.5, "Exile_Item_Magazine03"}, // 1.88%
			{10000, "Exile_Item_Magazine04"} // 1.88%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Bandage
	  srifle_DMR_07_ghex_F
	  B_Carryall_ocamo
	  20Rnd_762x51_Mag
	  B_Carryall_cbr
	  U_O_T_Sniper_F
	  U_I_FullGhillie_sard
	  H_HelmetSpecB_paint2
	  srifle_DMR_07_hex_F
	  Exile_Item_ZipTie
	  muzzle_snds_338_black
	  srifle_DMR_07_hex_F
	  MiniGrenade
	  srifle_DMR_05_tan_F
	  B_Carryall_khk
	  APERSBoundingMine_Range_Mag
	  srifle_GM6_ghex_F
	  srifle_DMR_01_F
	  srifle_DMR_07_ghex_F
	  U_B_T_Sniper_F
	  srifle_DMR_03_F
	  srifle_GM6_ghex_F
	  U_B_T_Sniper_F
	  srifle_GM6_ghex_F
	  srifle_DMR_02_sniper_F
	  srifle_DMR_06_camo_F
	  srifle_DMR_01_F
	  H_MilCap_rucamo
	  H_HelmetB_light_grass
	  srifle_GM6_ghex_F
	  Exile_Item_Vishpirin
	  U_O_T_FullGhillie_tna_F
	  optic_KHS_hex
	  Exile_Item_ZipTie
	  U_I_GhillieSuit
	  srifle_EBR_F
	  H_BandMask_demon
	  srifle_DMR_01_F
	  srifle_DMR_06_olive_F
	  Exile_Item_Heatpack
	  srifle_LRR_F
	  H_MilCap_blue
	  U_O_GhillieSuit
	  srifle_DMR_02_F
	  srifle_DMR_05_tan_F
	  U_O_T_Sniper_F
	  H_HelmetB_paint
	  srifle_DMR_02_camo_F
	  muzzle_snds_338_sand
	  srifle_DMR_07_ghex_F
	  U_B_T_FullGhillie_tna_F
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  srifle_DMR_05_hex_F
	  ItemRadio
	  U_O_GhillieSuit
	  srifle_DMR_02_sniper_F
	  srifle_GM6_F
	  srifle_DMR_04_F
	  optic_AMS_khk
	  APERSBoundingMine_Range_Mag
	  srifle_DMR_05_hex_F
	  SatchelCharge_Remote_Mag
	  H_HelmetSpecB
	  B_Carryall_ghex_F
	  srifle_DMR_05_hex_F
	  srifle_DMR_04_Tan_F
	  srifle_GM6_F
	  U_O_T_FullGhillie_tna_F
	  srifle_DMR_02_F
	  U_B_T_Sniper_F
	  srifle_LRR_tna_F
	  srifle_DMR_02_F
	  APERSMine_Range_Mag
	  srifle_DMR_02_camo_F
	  DemoCharge_Remote_Mag
	  H_HelmetSpecB_paint1
	  srifle_GM6_F
	  srifle_DMR_07_blk_F
	  ItemRadio
	  10Rnd_93x64_DMR_05_Mag
	  B_Carryall_oucamo
	  Exile_Item_ZipTie
	  B_Bergen_dgtl_F
	  B_Carryall_mcamo
	  srifle_DMR_02_F
	  Exile_Item_Bandage
	  U_B_T_Soldier_F
	  srifle_GM6_ghex_F
	  Exile_Item_ZipTie
	  srifle_DMR_06_camo_F
	  APERSTripMine_Wire_Mag
	  U_O_T_FullGhillie_tna_F
	  ItemRadio
	  H_MilCap_mcamo
	  srifle_DMR_05_tan_F
	  optic_SOS
	  srifle_DMR_02_camo_F
	  H_BandMask_khk
	  H_HelmetB_light_snakeskin
	*/
	class Tourist
	{
		count = 169;
		half = 8667.89250984947;
		halfIndex = 84;
		sum = 9999.99999999999;
		items[] = 
		{
			{400, "Exile_Item_ZipTie"}, // 4.00%
			{666.666666666667, "srifle_DMR_01_F"}, // 2.67%
			{933.333333333333, "srifle_EBR_F"}, // 2.67%
			{1149.54954954955, "srifle_DMR_05_tan_F"}, // 2.16%
			{1365.76576576577, "srifle_DMR_05_blk_F"}, // 2.16%
			{1581.98198198198, "srifle_DMR_05_hex_F"}, // 2.16%
			{1791.50579150579, "srifle_DMR_07_ghex_F"}, // 2.10%
			{2001.0296010296, "srifle_DMR_07_blk_F"}, // 2.10%
			{2210.55341055341, "srifle_DMR_07_hex_F"}, // 2.10%
			{2420.07722007722, "srifle_LRR_tna_F"}, // 2.10%
			{2629.60102960103, "srifle_LRR_F"}, // 2.10%
			{2839.12483912484, "srifle_GM6_F"}, // 2.10%
			{3048.64864864865, "srifle_GM6_ghex_F"}, // 2.10%
			{3248.64864864865, "MiniGrenade"}, // 2.00%
			{3448.64864864865, "HandGrenade"}, // 2.00%
			{3637.83783783784, "srifle_DMR_04_Tan_F"}, // 1.89%
			{3827.02702702703, "srifle_DMR_04_F"}, // 1.89%
			{3993.69369369369, "U_O_GhillieSuit"}, // 1.67%
			{4160.36036036036, "U_I_GhillieSuit"}, // 1.67%
			{4327.02702702703, "U_B_GhillieSuit"}, // 1.67%
			{4489.18918918919, "srifle_DMR_02_sniper_F"}, // 1.62%
			{4651.35135135135, "srifle_DMR_02_F"}, // 1.62%
			{4813.51351351352, "srifle_DMR_02_camo_F"}, // 1.62%
			{4961.66166166166, "Exile_Item_Vishpirin"}, // 1.48%
			{5109.80980980981, "Exile_Item_Heatpack"}, // 1.48%
			{5237.3265883333, "B_Carryall_cbr"}, // 1.28%
			{5364.84336685679, "B_Carryall_ghex_F"}, // 1.28%
			{5485.64873598431, "B_Carryall_oli"}, // 1.21%
			{5606.45410511182, "B_Carryall_khk"}, // 1.21%
			{5707.12524605142, "B_Carryall_ocamo"}, // 1.01%
			{5807.79638699102, "B_Carryall_oucamo"}, // 1.01%
			{5908.46752793062, "B_Carryall_mcamo"}, // 1.01%
			{5997.35641681951, "Exile_Item_Heatpack"}, // 0.89%
			{6078.43749790059, "srifle_DMR_06_olive_F"}, // 0.81%
			{6159.51857898167, "srifle_DMR_03_F"}, // 0.81%
			{6240.59966006275, "srifle_DMR_03_khaki_F"}, // 0.81%
			{6321.68074114383, "srifle_DMR_03_tan_F"}, // 0.81%
			{6402.76182222491, "srifle_DMR_03_woodland_F"}, // 0.81%
			{6483.84290330599, "srifle_DMR_06_camo_F"}, // 0.81%
			{6563.84290330599, "APERSBoundingMine_Range_Mag"}, // 0.80%
			{6643.84290330599, "APERSTripMine_Wire_Mag"}, // 0.80%
			{6723.84290330599, "APERSMine_Range_Mag"}, // 0.80%
			{6801.62068108377, "ItemMap"}, // 0.78%
			{6875.69475515784, "Exile_Item_Bandage"}, // 0.74%
			{6949.22416692255, "U_O_T_FullGhillie_tna_F"}, // 0.74%
			{7022.75357868725, "U_O_T_Sniper_F"}, // 0.74%
			{7096.28299045196, "U_B_T_FullGhillie_tna_F"}, // 0.74%
			{7169.81240221667, "U_B_T_Soldier_F"}, // 0.74%
			{7243.34181398137, "U_B_T_Sniper_F"}, // 0.74%
			{7310.00848064804, "ItemWatch"}, // 0.67%
			{7376.67514731471, "ItemRadio"}, // 0.67%
			{7432.8154981919, "10Rnd_93x64_DMR_05_Mag"}, // 0.56%
			{7488.95584906909, "10Rnd_338_Mag"}, // 0.56%
			{7538.07865608664, "10Rnd_127x54_Mag"}, // 0.49%
			{7586.07865608664, "IEDLandSmall_Remote_Mag"}, // 0.48%
			{7634.07865608664, "DemoCharge_Remote_Mag"}, // 0.48%
			{7682.07865608664, "IEDUrbanSmall_Remote_Mag"}, // 0.48%
			{7726.52310053108, "ItemGPS"}, // 0.44%
			{7770.96754497553, "Binocular"}, // 0.44%
			{7812.96754497553, "20Rnd_650x39_Cased_Mag_F"}, // 0.42%
			{7853.23600135136, "B_Bergen_Base_F"}, // 0.40%
			{7893.5044577272, "B_Bergen_mcamo_F"}, // 0.40%
			{7933.77291410304, "B_Bergen_dgtl_F"}, // 0.40%
			{7974.04137047888, "B_Bergen_tna_F"}, // 0.40%
			{8014.30982685472, "B_Bergen_hex_F"}, // 0.40%
			{8052.90631808279, "20Rnd_762x51_Mag"}, // 0.39%
			{8090.90631808279, "20Rnd_762x51_Mag"}, // 0.38%
			{8124.90631808279, "10Rnd_762x54_Mag"}, // 0.34%
			{8158.23965141613, "muzzle_snds_338_green"}, // 0.33%
			{8191.57298474946, "muzzle_snds_338_sand"}, // 0.33%
			{8224.90631808279, "muzzle_snds_93mmg"}, // 0.33%
			{8258.23965141613, "muzzle_snds_93mmg_tan"}, // 0.33%
			{8291.57298474946, "muzzle_snds_B"}, // 0.33%
			{8324.90631808279, "muzzle_snds_338_black"}, // 0.33%
			{8357.42664328605, "H_MilCap_dgtl"}, // 0.33%
			{8389.9469684893, "H_MilCap_rucamo"}, // 0.33%
			{8422.46729369255, "H_MilCap_oucamo"}, // 0.33%
			{8454.9876188958, "H_MilCap_mcamo"}, // 0.33%
			{8487.50794409905, "H_MilCap_ocamo"}, // 0.33%
			{8520.0282693023, "Exile_Headgear_GasMask"}, // 0.33%
			{8552.54859450556, "H_MilCap_blue"}, // 0.33%
			{8582.17822413518, "Exile_Item_InstaDoc"}, // 0.30%
			{8610.74965270661, "optic_KHS_blk"}, // 0.29%
			{8639.32108127804, "optic_AMS"}, // 0.29%
			{8667.89250984947, "optic_KHS_hex"}, // 0.29%
			{8696.4639384209, "optic_KHS_old"}, // 0.29%
			{8725.03536699233, "optic_AMS_khk"}, // 0.29%
			{8753.60679556376, "optic_AMS_snd"}, // 0.29%
			{8782.17822413519, "optic_KHS_tan"}, // 0.29%
			{8809.72924454335, "optic_DMS"}, // 0.28%
			{8836.25985678825, "optic_LRPS_tna_F"}, // 0.27%
			{8862.79046903315, "optic_LRPS"}, // 0.27%
			{8889.32108127805, "optic_LRPS_ghex_F"}, // 0.27%
			{8915.85169352295, "optic_SOS_khk_F"}, // 0.27%
			{8942.38230576785, "optic_SOS"}, // 0.27%
			{8966.77254967028, "H_HelmetB_plain_blk"}, // 0.24%
			{8991.16279357272, "H_HelmetIA"}, // 0.24%
			{9015.55303747516, "H_HelmetSpecB_paint1"}, // 0.24%
			{9039.9432813776, "H_HelmetB_light"}, // 0.24%
			{9064.33352528004, "H_HelmetB_paint"}, // 0.24%
			{9088.72376918248, "H_HelmetSpecB_blk"}, // 0.24%
			{9113.11401308492, "H_HelmetB"}, // 0.24%
			{9137.50425698735, "H_HelmetSpecB"}, // 0.24%
			{9161.89450088979, "H_HelmetSpecB_paint2"}, // 0.24%
			{9181.89450088979, "5Rnd_127x108_Mag"}, // 0.20%
			{9201.89450088979, "7Rnd_408_Mag"}, // 0.20%
			{9221.28225599184, "muzzle_snds_B"}, // 0.19%
			{9237.54241859346, "H_HelmetB_desert"}, // 0.16%
			{9253.80258119509, "H_BandMask_khk"}, // 0.16%
			{9270.06274379671, "H_BandMask_reaper"}, // 0.16%
			{9286.32290639834, "H_BandMask_demon"}, // 0.16%
			{9302.58306899996, "H_Helmet_Skate"}, // 0.16%
			{9318.84323160159, "H_HelmetB_Enh_tna_F"}, // 0.16%
			{9335.10339420322, "H_HelmetB_Light_tna_F"}, // 0.16%
			{9351.36355680484, "H_Beret_gen_F"}, // 0.16%
			{9367.62371940647, "H_HelmetB_tna_F"}, // 0.16%
			{9383.88388200809, "H_HelmetSpecO_ghex_F"}, // 0.16%
			{9400.14404460972, "H_HelmetIA_net"}, // 0.16%
			{9416.40420721134, "H_HelmetIA_camo"}, // 0.16%
			{9432.66436981297, "H_HelmetB_grass"}, // 0.16%
			{9448.9245324146, "H_HelmetLeaderO_ghex_F"}, // 0.16%
			{9465.18469501622, "H_HelmetCrew_O_ghex_F"}, // 0.16%
			{9481.44485761785, "H_HelmetB_TI_tna_F"}, // 0.16%
			{9497.70502021947, "H_HelmetB_light_black"}, // 0.16%
			{9513.9651828211, "H_HelmetB_light_desert"}, // 0.16%
			{9530.22534542272, "H_HelmetB_light_snakeskin"}, // 0.16%
			{9546.48550802435, "H_HelmetB_light_grass"}, // 0.16%
			{9562.74567062598, "H_HelmetB_sand"}, // 0.16%
			{9579.0058332276, "H_HelmetB_black"}, // 0.16%
			{9595.26599582923, "H_HelmetB_snakeskin"}, // 0.16%
			{9611.52615843085, "H_HelmetB_light_sand"}, // 0.16%
			{9627.52615843085, "SatchelCharge_Remote_Mag"}, // 0.16%
			{9643.52615843085, "5Rnd_127x108_APDS_Mag"}, // 0.16%
			{9658.23204078379, "U_B_FullGhillie_sard"}, // 0.15%
			{9672.93792313673, "U_B_FullGhillie_ard"}, // 0.15%
			{9687.64380548968, "U_B_FullGhillie_lsh"}, // 0.15%
			{9702.34968784262, "U_O_FullGhillie_ard"}, // 0.15%
			{9717.05557019556, "U_O_FullGhillie_lsh"}, // 0.15%
			{9731.7614525485, "U_O_FullGhillie_sard"}, // 0.15%
			{9746.46733490144, "U_I_FullGhillie_ard"}, // 0.15%
			{9761.17321725438, "U_I_FullGhillie_lsh"}, // 0.15%
			{9775.87909960732, "U_I_FullGhillie_sard"}, // 0.15%
			{9786.99021071843, "Exile_Item_MobilePhone"}, // 0.11%
			{9797.19429235108, "muzzle_snds_B_snd_F"}, // 0.10%
			{9807.39837398374, "muzzle_snds_B_khk_F"}, // 0.10%
			{9817.39837398374, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.10%
			{9827.39837398374, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.10%
			{9835.52845528455, "H_PilotHelmetFighter_B"}, // 0.08%
			{9843.65853658536, "H_CrewHelmetHeli_B"}, // 0.08%
			{9851.78861788618, "H_CrewHelmetHeli_O"}, // 0.08%
			{9859.91869918699, "H_CrewHelmetHeli_I"}, // 0.08%
			{9868.0487804878, "H_HelmetO_oucamo"}, // 0.08%
			{9876.17886178861, "H_HelmetLeaderO_oucamo"}, // 0.08%
			{9884.30894308943, "H_HelmetSpecO_ocamo"}, // 0.08%
			{9892.43902439024, "H_HelmetSpecO_blk"}, // 0.08%
			{9900.56910569105, "H_HelmetO_ocamo"}, // 0.08%
			{9908.69918699187, "H_HelmetLeaderO_ocamo"}, // 0.08%
			{9916.82926829268, "H_PilotHelmetHeli_O"}, // 0.08%
			{9924.95934959349, "H_PilotHelmetFighter_O"}, // 0.08%
			{9933.0894308943, "H_PilotHelmetHeli_B"}, // 0.08%
			{9941.21951219512, "H_PilotHelmetHeli_I"}, // 0.08%
			{9949.34959349593, "H_PilotHelmetFighter_I"}, // 0.08%
			{9957.47967479674, "H_HelmetCrew_B"}, // 0.08%
			{9965.60975609756, "H_HelmetCrew_O"}, // 0.08%
			{9973.73983739837, "H_HelmetCrew_I"}, // 0.08%
			{9981.86991869918, "H_HelmetO_ghex_F"}, // 0.08%
			{9989.99999999999, "H_HelmetB_camo"}, // 0.08%
			{9995.99999999999, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.06%
			{9999.99999999999, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.04%
		};
	};

	/**
	  Result of 100 rounds:

	  B_Carryall_khk
	  srifle_DMR_05_blk_F
	  U_O_GhillieSuit
	  MMG_01_hex_F
	  HandGrenade
	  IEDUrbanSmall_Remote_Mag
	  U_O_FullGhillie_ard
	  optic_LRPS_tna_F
	  srifle_GM6_F
	  srifle_DMR_01_F
	  B_Bergen_tna_F
	  srifle_GM6_F
	  srifle_DMR_07_blk_F
	  srifle_DMR_05_hex_F
	  U_B_GhillieSuit
	  srifle_DMR_03_khaki_F
	  srifle_DMR_07_hex_F
	  Exile_Item_ZipTie
	  srifle_DMR_05_blk_F
	  B_Carryall_mcamo
	  srifle_DMR_06_camo_F
	  srifle_DMR_07_hex_F
	  B_Carryall_mcamo
	  srifle_DMR_07_hex_F
	  srifle_DMR_02_camo_F
	  srifle_DMR_03_khaki_F
	  srifle_EBR_F
	  B_Bergen_dgtl_F
	  H_Beret_gen_F
	  srifle_DMR_07_hex_F
	  APERSTripMine_Wire_Mag
	  B_Carryall_khk
	  muzzle_snds_338_sand
	  srifle_EBR_F
	  srifle_DMR_02_sniper_F
	  Exile_Item_ZipTie
	  H_HelmetSpecB_paint2
	  srifle_EBR_F
	  B_Carryall_ghex_F
	  MiniGrenade
	  srifle_DMR_07_ghex_F
	  muzzle_snds_338_green
	  srifle_DMR_04_Tan_F
	  APERSMine_Range_Mag
	  Exile_Item_ZipTie
	  IEDUrbanSmall_Remote_Mag
	  optic_DMS
	  APERSBoundingMine_Range_Mag
	  10Rnd_127x54_Mag
	  srifle_DMR_05_blk_F
	  IEDUrbanSmall_Remote_Mag
	  srifle_EBR_F
	  srifle_DMR_01_F
	  srifle_DMR_05_blk_F
	  B_Carryall_ocamo
	  srifle_DMR_02_F
	  srifle_DMR_02_camo_F
	  srifle_DMR_07_ghex_F
	  srifle_DMR_04_F
	  H_MilCap_blue
	  srifle_DMR_03_F
	  srifle_DMR_05_tan_F
	  H_HelmetB_light_black
	  optic_LRPS
	  U_I_GhillieSuit
	  srifle_DMR_05_tan_F
	  srifle_DMR_04_F
	  srifle_DMR_07_hex_F
	  IEDLandSmall_Remote_Mag
	  APERSMine_Range_Mag
	  B_Carryall_mcamo
	  srifle_LRR_F
	  APERSMine_Range_Mag
	  srifle_DMR_06_olive_F
	  APERSBoundingMine_Range_Mag
	  MMG_02_sand_F
	  optic_KHS_tan
	  srifle_DMR_07_ghex_F
	  srifle_GM6_F
	  B_Carryall_ocamo
	  B_Carryall_ocamo
	  Exile_Item_Vishpirin
	  srifle_DMR_01_F
	  U_B_T_Soldier_F
	  Exile_Item_Heatpack
	  APERSMine_Range_Mag
	  B_Carryall_khk
	  DemoCharge_Remote_Mag
	  srifle_DMR_07_blk_F
	  srifle_DMR_01_F
	  srifle_DMR_03_khaki_F
	  srifle_DMR_03_F
	  IEDLandSmall_Remote_Mag
	  B_Carryall_oucamo
	  SatchelCharge_Remote_Mag
	  srifle_DMR_05_hex_F
	  optic_KHS_blk
	  APERSBoundingMine_Range_Mag
	  H_HelmetB_plain_blk
	  H_HelmetSpecO_ghex_F
	*/
	class Radiation
	{
		count = 167;
		half = 8941.6128511025;
		halfIndex = 83;
		sum = 10000;
		items[] = 
		{
			{317.460317460317, "srifle_DMR_01_F"}, // 3.17%
			{634.920634920635, "srifle_EBR_F"}, // 3.17%
			{952.380952380952, "Exile_Item_ZipTie"}, // 3.17%
			{1209.78120978121, "srifle_DMR_05_hex_F"}, // 2.57%
			{1467.18146718147, "srifle_DMR_05_tan_F"}, // 2.57%
			{1724.58172458172, "srifle_DMR_05_blk_F"}, // 2.57%
			{1974.01483115769, "srifle_LRR_tna_F"}, // 2.49%
			{2223.44793773365, "srifle_GM6_F"}, // 2.49%
			{2472.88104430962, "srifle_LRR_F"}, // 2.49%
			{2722.31415088558, "srifle_DMR_07_ghex_F"}, // 2.49%
			{2971.74725746154, "srifle_DMR_07_hex_F"}, // 2.49%
			{3221.18036403751, "srifle_DMR_07_blk_F"}, // 2.49%
			{3470.61347061347, "srifle_GM6_ghex_F"}, // 2.49%
			{3695.8386958387, "srifle_DMR_04_F"}, // 2.25%
			{3921.06392106392, "srifle_DMR_04_Tan_F"}, // 2.25%
			{4114.11411411411, "srifle_DMR_02_F"}, // 1.93%
			{4307.16430716431, "srifle_DMR_02_sniper_F"}, // 1.93%
			{4500.2145002145, "srifle_DMR_02_camo_F"}, // 1.93%
			{4658.94465894466, "APERSMine_Range_Mag"}, // 1.59%
			{4817.67481767482, "APERSBoundingMine_Range_Mag"}, // 1.59%
			{4976.40497640498, "APERSTripMine_Wire_Mag"}, // 1.59%
			{5135.13513513514, "MiniGrenade"}, // 1.59%
			{5293.8652938653, "HandGrenade"}, // 1.59%
			{5426.14042614043, "U_I_GhillieSuit"}, // 1.32%
			{5558.41555841556, "U_B_GhillieSuit"}, // 1.32%
			{5690.69069069069, "U_O_GhillieSuit"}, // 1.32%
			{5808.26858604636, "Exile_Item_Vishpirin"}, // 1.18%
			{5925.84648140204, "Exile_Item_Heatpack"}, // 1.18%
			{6027.050273881, "B_Carryall_cbr"}, // 1.01%
			{6128.25406635996, "B_Carryall_ghex_F"}, // 1.01%
			{6224.77916288505, "srifle_DMR_06_camo_F"}, // 0.97%
			{6321.30425941015, "srifle_DMR_03_woodland_F"}, // 0.97%
			{6417.82935593525, "srifle_DMR_03_tan_F"}, // 0.97%
			{6514.35445246034, "srifle_DMR_03_khaki_F"}, // 0.97%
			{6610.87954898544, "srifle_DMR_03_F"}, // 0.97%
			{6707.40464551053, "srifle_DMR_06_olive_F"}, // 0.97%
			{6803.28192259587, "B_Carryall_oli"}, // 0.96%
			{6899.1591996812, "B_Carryall_khk"}, // 0.96%
			{6994.39729491929, "IEDLandSmall_Remote_Mag"}, // 0.95%
			{7089.63539015739, "IEDUrbanSmall_Remote_Mag"}, // 0.95%
			{7184.87348539548, "DemoCharge_Remote_Mag"}, // 0.95%
			{7264.77121629993, "B_Carryall_mcamo"}, // 0.80%
			{7344.66894720437, "B_Carryall_oucamo"}, // 0.80%
			{7424.56667810881, "B_Carryall_ocamo"}, // 0.80%
			{7497.82675136888, "MMG_02_camo_F"}, // 0.73%
			{7571.08682462896, "MMG_02_black_F"}, // 0.73%
			{7644.34689788903, "MMG_02_sand_F"}, // 0.73%
			{7703.13584556687, "Exile_Item_Bandage"}, // 0.59%
			{7761.4925215706, "U_O_T_FullGhillie_tna_F"}, // 0.58%
			{7819.84919757433, "U_O_T_Sniper_F"}, // 0.58%
			{7878.20587357807, "U_B_T_FullGhillie_tna_F"}, // 0.58%
			{7936.5625495818, "U_B_T_Soldier_F"}, // 0.58%
			{7994.91922558554, "U_B_T_Sniper_F"}, // 0.58%
			{8043.75927442559, "MMG_01_tan_F"}, // 0.49%
			{8092.59932326564, "MMG_01_hex_F"}, // 0.49%
			{8137.15515729515, "10Rnd_93x64_DMR_05_Mag"}, // 0.45%
			{8181.71099132467, "10Rnd_338_Mag"}, // 0.45%
			{8220.6973461005, "10Rnd_127x54_Mag"}, // 0.39%
			{8254.03067943383, "20Rnd_650x39_Cased_Mag_F"}, // 0.33%
			{8285.98977179561, "B_Bergen_hex_F"}, // 0.32%
			{8317.94886415739, "B_Bergen_tna_F"}, // 0.32%
			{8349.90795651916, "B_Bergen_mcamo_F"}, // 0.32%
			{8381.86704888094, "B_Bergen_Base_F"}, // 0.32%
			{8413.82614124271, "B_Bergen_dgtl_F"}, // 0.32%
			{8445.57217298875, "SatchelCharge_Remote_Mag"}, // 0.32%
			{8476.20430888404, "20Rnd_762x51_Mag"}, // 0.31%
			{8506.36303904277, "20Rnd_762x51_Mag"}, // 0.30%
			{8533.3471660269, "10Rnd_762x54_Mag"}, // 0.27%
			{8559.80219248192, "muzzle_snds_338_green"}, // 0.26%
			{8586.25721893695, "muzzle_snds_93mmg_tan"}, // 0.26%
			{8612.71224539198, "muzzle_snds_93mmg"}, // 0.26%
			{8639.16727184701, "muzzle_snds_B"}, // 0.26%
			{8665.62229830203, "muzzle_snds_338_sand"}, // 0.26%
			{8692.07732475706, "muzzle_snds_338_black"}, // 0.26%
			{8717.8871066644, "H_MilCap_blue"}, // 0.26%
			{8743.69688857175, "H_MilCap_oucamo"}, // 0.26%
			{8769.50667047909, "H_MilCap_mcamo"}, // 0.26%
			{8795.31645238643, "H_MilCap_ocamo"}, // 0.26%
			{8821.12623429377, "Exile_Headgear_GasMask"}, // 0.26%
			{8846.93601620112, "H_MilCap_dgtl"}, // 0.26%
			{8872.74579810846, "H_MilCap_rucamo"}, // 0.26%
			{8896.26137717959, "Exile_Item_InstaDoc"}, // 0.24%
			{8918.93711414104, "optic_AMS_snd"}, // 0.23%
			{8941.6128511025, "optic_KHS_blk"}, // 0.23%
			{8964.28858806395, "optic_KHS_hex"}, // 0.23%
			{8986.9643250254, "optic_KHS_old"}, // 0.23%
			{9009.64006198685, "optic_KHS_tan"}, // 0.23%
			{9032.3157989483, "optic_AMS_khk"}, // 0.23%
			{9054.99153590975, "optic_AMS"}, // 0.23%
			{9076.85742512258, "optic_DMS"}, // 0.22%
			{9097.91346658679, "optic_SOS"}, // 0.21%
			{9118.96950805099, "optic_SOS_khk_F"}, // 0.21%
			{9140.02554951519, "optic_LRPS"}, // 0.21%
			{9161.0815909794, "optic_LRPS_tna_F"}, // 0.21%
			{9182.1376324436, "optic_LRPS_ghex_F"}, // 0.21%
			{9201.49496887411, "H_HelmetB"}, // 0.19%
			{9220.85230530462, "H_HelmetB_paint"}, // 0.19%
			{9240.20964173512, "H_HelmetB_light"}, // 0.19%
			{9259.56697816563, "H_HelmetB_plain_blk"}, // 0.19%
			{9278.92431459614, "H_HelmetSpecB_blk"}, // 0.19%
			{9298.28165102664, "H_HelmetSpecB_paint2"}, // 0.19%
			{9317.63898745715, "H_HelmetSpecB_paint1"}, // 0.19%
			{9336.99632388766, "H_HelmetIA"}, // 0.19%
			{9356.35366031816, "H_HelmetSpecB"}, // 0.19%
			{9372.22667619118, "5Rnd_127x108_Mag"}, // 0.16%
			{9388.09969206419, "7Rnd_408_Mag"}, // 0.16%
			{9403.48679928804, "muzzle_snds_B"}, // 0.15%
			{9416.39169024171, "H_HelmetB_desert"}, // 0.13%
			{9429.29658119538, "H_HelmetB_snakeskin"}, // 0.13%
			{9442.20147214905, "H_HelmetB_grass"}, // 0.13%
			{9455.10636310272, "H_HelmetIA_camo"}, // 0.13%
			{9468.0112540564, "H_HelmetIA_net"}, // 0.13%
			{9480.91614501007, "H_HelmetB_light_grass"}, // 0.13%
			{9493.82103596374, "H_HelmetB_light_sand"}, // 0.13%
			{9506.72592691741, "H_HelmetLeaderO_ghex_F"}, // 0.13%
			{9519.63081787109, "H_HelmetSpecO_ghex_F"}, // 0.13%
			{9532.53570882476, "H_HelmetB_tna_F"}, // 0.13%
			{9545.44059977843, "H_Beret_gen_F"}, // 0.13%
			{9558.3454907321, "H_HelmetB_Light_tna_F"}, // 0.13%
			{9571.25038168578, "H_HelmetB_Enh_tna_F"}, // 0.13%
			{9584.15527263945, "H_Helmet_Skate"}, // 0.13%
			{9597.06016359312, "H_BandMask_demon"}, // 0.13%
			{9609.96505454679, "H_HelmetCrew_O_ghex_F"}, // 0.13%
			{9622.86994550046, "H_HelmetB_light_black"}, // 0.13%
			{9635.77483645414, "H_HelmetB_light_desert"}, // 0.13%
			{9648.67972740781, "H_HelmetB_light_snakeskin"}, // 0.13%
			{9661.58461836148, "H_HelmetB_sand"}, // 0.13%
			{9674.48950931515, "H_HelmetB_black"}, // 0.13%
			{9687.39440026883, "H_BandMask_reaper"}, // 0.13%
			{9700.2992912225, "H_BandMask_khk"}, // 0.13%
			{9713.20418217617, "H_HelmetB_TI_tna_F"}, // 0.13%
			{9725.90259487458, "5Rnd_127x108_APDS_Mag"}, // 0.13%
			{9737.57393007533, "U_B_FullGhillie_sard"}, // 0.12%
			{9749.24526527608, "U_I_FullGhillie_sard"}, // 0.12%
			{9760.91660047682, "U_B_FullGhillie_lsh"}, // 0.12%
			{9772.58793567757, "U_O_FullGhillie_ard"}, // 0.12%
			{9784.25927087832, "U_O_FullGhillie_lsh"}, // 0.12%
			{9795.93060607906, "U_O_FullGhillie_sard"}, // 0.12%
			{9807.60194127981, "U_I_FullGhillie_ard"}, // 0.12%
			{9819.27327648056, "U_I_FullGhillie_lsh"}, // 0.12%
			{9830.9446116813, "U_B_FullGhillie_ard"}, // 0.12%
			{9839.04308916753, "muzzle_snds_B_snd_F"}, // 0.08%
			{9847.14156665377, "muzzle_snds_B_khk_F"}, // 0.08%
			{9855.07807459027, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.08%
			{9863.01458252678, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.08%
			{9869.46702800362, "H_PilotHelmetHeli_O"}, // 0.06%
			{9875.91947348045, "H_HelmetSpecO_blk"}, // 0.06%
			{9882.37191895729, "H_CrewHelmetHeli_B"}, // 0.06%
			{9888.82436443412, "H_CrewHelmetHeli_O"}, // 0.06%
			{9895.27680991096, "H_CrewHelmetHeli_I"}, // 0.06%
			{9901.7292553878, "H_HelmetO_oucamo"}, // 0.06%
			{9908.18170086463, "H_HelmetLeaderO_oucamo"}, // 0.06%
			{9914.63414634147, "H_HelmetSpecO_ocamo"}, // 0.06%
			{9921.0865918183, "H_PilotHelmetHeli_B"}, // 0.06%
			{9927.53903729514, "H_HelmetB_camo"}, // 0.06%
			{9933.99148277198, "H_HelmetO_ocamo"}, // 0.06%
			{9940.44392824881, "H_HelmetO_ghex_F"}, // 0.06%
			{9946.89637372565, "H_PilotHelmetFighter_I"}, // 0.06%
			{9953.34881920249, "H_PilotHelmetFighter_O"}, // 0.06%
			{9959.80126467932, "H_PilotHelmetFighter_B"}, // 0.06%
			{9966.25371015616, "H_HelmetCrew_I"}, // 0.06%
			{9972.70615563299, "H_HelmetCrew_O"}, // 0.06%
			{9979.15860110983, "H_HelmetCrew_B"}, // 0.06%
			{9985.61104658667, "H_HelmetLeaderO_ocamo"}, // 0.06%
			{9992.0634920635, "H_PilotHelmetHeli_I"}, // 0.06%
			{9996.82539682541, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.05%
			{10000, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.03%
		};
	};

};

class CfgSettings
{
	///////////////////////////////////////////////////////////////////////
	// Community Base Addons
	///////////////////////////////////////////////////////////////////////
	class CBA 
	{
		// Set this to 1 if you want to have CBA support
		useStackedEH = 0;

		// If you set this to 1 ...........................................
		iReallyWantToGetHackedAndImRetarded = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// GARBAGE COLLECTOR
	///////////////////////////////////////////////////////////////////////
	class GarbageCollector
	{
		/*
			Remark: 
			In 0.9.35 and below, Exile has checked if a player was nearby and then delayed
			the deletion. This check has been removed to save server performance.

			Do NOT touch these if you are not 10000% sure what you do!	
		*/
		class Ingame 
		{
			// Dropped items without fissix
			class GroundWeaponHolder
			{
				lifeTime = 10;
				interval = 5;
			};

			// Dropped items with fissix
			class WeaponHolderSimulated
			{
				lifeTime = 10;
				interval = 5;
			};

			// Corpses and wrecks
			class AllDead 
			{
				lifeTime = 15;
				interval = 5;
			};

			// Loot spawned inside a building
			class Loot 
			{
				lifeTime = 8;
				interval = 1;
			};

			// Never touch this or you will break your sever!
			class Groups 
			{
				interval = 0.5;
			};
		};

		class Database 
		{
			// Remove all deleted items from the database after X days
			permanentlyDeleteTime = 3;
			
			// Remove all territories (and contructions + containers in it) that were not paid after X days
			territoryLifeTime = 7;

			// Remove all containers outside of territories that have not been used for X days
			// Example: Tents
			containerLifeTime = 10;

			// Remove all constructions outside of territories that are older than X days or not moved for X days 
			// Example: Work Benches
			constructionLifeTime = 2;

			// Remove all vehicles that were not moved/used for X days
			vehicleLifeTime = 3;
			
			// Set safe as abandoned
			abandonedTime = 7;
			
			// Deletes a base X days after the flag is stolen if the ransom money isn't paid
			stolenFlagLifeTime = 3;
			
			// Sets door & safe pins to 0000 and marks safes to abandoned X days after the flag is stolen if the ransom money isn't paid
			unlockLifeTime = 2;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// RESPECT, YO
	///////////////////////////////////////////////////////////////////////
	class Respect
	{
		/**
		* Defines the factor of respect you gain for every pop tab in revenue
		*
		* Default: Get 1 respect for every 10 pop tabs 
		*/
		tradingRespectFactor = 0.1;
		
		/**
		* Defines the the minimum amount of Respect earned/lost for a kill
		*/
		minRespectTransfer = 50;

		/**
		* Defines the amount of respect earned/lost for certain types of frags
		*/
		class Frags
		{
			domination = 80;			// Keeps killing the same guy
			letItRain = 150;			// MG, also vehicle MGs
			humiliation = 300;			// Axe
			passenger = 400;			// Out of car/chopper/boat
			roadKill = 200;				// :)
			bigBird = 600;				// Roadkill, but with chopper/plane
			chuteGreaterChopper = 1000;	// Someone flies into chute and chopper/plane explodes	
		};

		class Percentages 
		{
			unlucky = 1; // Dying for an unknown reason costs you 1% respect
			crash = 1; // Crashing your car costs you 1% respect
			suicide = 2; // Comitting suicide costs you 2% of your respect
			friendyFire = 3; // Friendly fire costs you 3% 
			npc = 4; // Being killed by an NPC costs you 4%
			bambiKill = 5; // Killing a bambi costs you 5%
			frag = 5; // Killing someone will get you 5% and remove 5% from the victim
		};

		class Handcuffs 
		{
			trapping = -50;					// A handcuffs B
			breakingFree = 100; 			// B broke free
			releasedByHero = 100; 			// C releases B
			releasedByHostageTaker = 50; 	// A releases B	
		};

		class Bonus
		{
			// Bonus per full 100m 
			per100mDistance = 10;

			// First blood after server restart
			firstBlood = 100;

			// If you kill someone while you are in your own territory
			homie = 20;

			// If you kill someone who is in his own territory
			raid = 20;

			/*
				Example with killstreak = 50

				Frag  Factor   Bonus
				2    * 50      +100
				3    * 50      +150
				4    * 50      +200
				5    * 50      +250
			*/
			killStreak = 50;

			// Kills within this amount of seconds stack (default: 2 minutes)
			killStreakTimeout = 120;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// KILLFEED MAN!
	///////////////////////////////////////////////////////////////////////

	class KillFeed
	{
		// Shows a kill feed for well kills
		showKillFeed = 1;
	};

	///////////////////////////////////////////////////////////////////////
	// PLAYER SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class BambiSettings
	{
		/**
		 * Loadout of new bambi players
		 *
		 * (They will always spawn with a bambi overall - you cannot 
		 * change the loadout uniform)
		 */
		loadOut[] = 
		{
			"ItemCompass",
			"ItemMap", // Because why not
			"Exile_Item_XM8",
			"ItemRadio",
			"Exile_Item_PlasticBottleFreshWater"
		};

		/**
		 * Enables or disables parachute spawning.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		parachuteSpawning = 1;

		/**
		 * Enables or disables halo jumping. Only applies 
		 * if parachute spawning is enabled.
		 *
		 * Remember that if you enable halo jump, it is adviced
		 * to adjust the parachuteDropHeight to something around
		 * 1km or so.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		haloJump = 1;

		/**
		 * Parachute drop height in meters. 
		 */
		parachuteDropHeight = 1000;

		/**
		 * Number of minutes where a fresh spawned player remains in the
		 * bambi state. It will end the bambi state after this timeout
		 * expired or when they pick up their first weapon. Whatever
		 * happens first.
		 */
		protectionDuration = 5;

		/**
		 * Radius of spawn zones around the center of spawn zone markers.
		 */
		spawnZoneRadius = 500;

		/**
		 * These vehicles spawn on server restart close to spawn zones.
		 * They are non-persistent and will despawn on server restart.
		 * Basically they are just used to get away from the spawn zone
		 * faster.
		 *
		 * {Number of vehicles *per* spawn zone, vehicle class name}
		 */
		spawnZoneVehicles[] =
		{
			{5, "Exile_Bike_OldBike"},
			{5, "Exile_Bike_MountainBike"}
		};
	};

	///////////////////////////////////////////////////////////////////////
	// VEHICLE SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////

	class VehicleSpawn
	{
		/**
		* Grid Size for vehicle spawning,
		* smaller the number more vehicles,
		* you get the point
		*/
		vehiclesGridSize = 2200;

		/**
		* Vehicle ammount per grid
		* kinda self explanitory
		*/
		vehiclesGridAmount = 2;

		/**
		* Creates global markers for vehicle spawn tweeking,
		* after you are satisfied with vehicle ammount and spread set this to 0.
		*/
		vehiclesDebugMarkers = 0;

		/**
		* The server will apply random damage up to this value when spawning a vehicle.
		*/
		damageChance = 20; // 20% chance for a vehicle HITPOINT to be damaged
		maximumDamage = 0.9;

		/**
		 * If "randmizeFuel" is set to 1, vehicles will spawn with randomized
		 * fuel. In this case, "fuel" controls the percentage of fuel that
		 * can be in the vehicle at a maximum. For example, if you set this to
		 * 0.5, then vehicles will spawn with something random between 0% and 50%.
		 *
		 * If "randomizeFuel" is set to 0, all vehicles will spawn exactly the 
		 * fuel percentage defined in "fuel". For example, setting this to 0.5
		 * will spawn all vehicles with 50% fuel. Setting it to 0 would spawn
		 * all vehicles without fuel.
		 */
		randomizeFuel = 1;
		fuel = 1;

		/**
		 * Works exactly the same as the fuel setting ^
		 */
		randomizeAmmo = 1;
		ammo = 1;

		// Stuff to spawn on water
		water[] = 
		{
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey"
		};

		// Stuff to spawn on roads
		ground[] = 
		{
			"Exile_Bike_QuadBike_Black",
			"Exile_Bike_QuadBike_Blue",
			"Exile_Bike_QuadBike_Red",
			"Exile_Bike_QuadBike_White",
			"Exile_Bike_QuadBike_Nato",
			"Exile_Bike_QuadBike_Csat",
			"Exile_Bike_QuadBike_Fia",
			"Exile_Bike_QuadBike_Guerilla01",
			"Exile_Bike_QuadBike_Guerilla02",
			"Exile_Car_Volha_Blue",
			"Exile_Car_Volha_White",
			"Exile_Car_Lada_Green",
			"Exile_Car_Lada_Taxi",
			"Exile_Car_TowTractor_White",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_UAZ_Green",
			"Exile_Car_LandRover_Ambulance_Desert",
			"Exile_Car_Tractor_Red",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_Octavius_White"
		};

		/**
		 * Enables or disables nightvision optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		nightVision = 1;

		/**
		 * Enables or disables thermal optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		thermalVision = 0;

		/**
		 * Set this to 1 to unlock vehicles on server boot if they are in safe zones
		 *
		 * 0 = off
		 * 1 = on
		 */
		unlockInSafeZonesAfterRestart = 1;	
	};

	class Weather
	{
		/*
			You can define multiple "keyframes" for the weather to change. The server will pick
			a keyframe randomly to simulate the weather. It will change the weather-keyframes
			based on the following interval
		*/
		interval = 30;

		/*
			Add the keyframes here. The server will pick one random, so if you want one 
			weather type of be more dominant compared to others, add it multiple times
		*/
		//keyframes[] = {"Sunny", "Cloudy", "Thunderstorm"}; 
		keyframes[] = {"Sunny"}; 

		/*
			This is a keyframe. Look up the BIKI to get more details about the parameters

			Be sure to design the fog settings at a view distance of 1,600m as this is the
			limit in multiplayer by default

			https://community.bistudio.com/wiki/fogParams
			https://community.bistudio.com/wiki/overcast
			https://community.bistudio.com/wiki/setWaves
			https://community.bistudio.com/wiki/setWindStr
			https://community.bistudio.com/wiki/setGusts
			https://community.bistudio.com/wiki/setRain
			https://community.bistudio.com/wiki/setLightnings
			https://community.bistudio.com/wiki/setRainbow
		*/
		class Sunny
		{
			fogValue = 0.1;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 0.2;
			waves = 0.2;
			wind = 0.25;
			gusts = 0.1;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Cloudy
		{
			fogValue = 0.2;
			fogDecay = 0.1;
			fogBase = 5;
			overcast = 0.4;
			waves = 0.4;
			wind = 0.25;
			gusts = 0.5;
			rain = 0.1;
			lightnings = 0.1;
			rainbows = 1;
		};

		class Thunderstorm
		{
			fogValue = 0.7;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 1;
			waves = 1;
			wind = 0.25;
			gusts = 0.5;
			rain = 1;
			lightnings = 1;
			rainbows = 0.5;
		};
	};

	class Time
	{
		// Uses Dedicated Server time as ingame Time
		useRealTime = 0;

		// Will overide RealTime
		useStaticTime = 1;

		// time in ARMA FORMAT << CONFIG
		// https://community.bistudio.com/wiki/setDate

		staticTime[] = {2039,10,24,15,30};
	};


	class RCON
	{
		/*
			Note that for this to work you need to have serverCommandPassowrd defined in config.cfg and BE enabled
		*/

		// This needs to match config.cfg serverCommandPassword
		serverPassword = "";

		// Autolocks server until its ready to accept players
		useAutoLock = 0;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 3;

		/*
			Number of hours and minutes of your restart period.

			Examples:

			{4, 0} = Every 4 hours
			{1, 30} = Every one and a half hour (who the hell would do this?)
		*/
		restartTimer[] = {3, 0};

		/*
			Kicks players before restart to prevent gear loss.
			We strongely recommend to use this!

			0 = off
			1 = on
		*/
		useAutoKick = 0;

		/*
			Number of minutes before the server kicks players that did
			not disconnect before the restart. Should at least be two
			minutes!
		*/
		kickTime = 2;

		/*
			Self-explanatory

			0 = off
			1 = on
		*/
		useRestartMessages = 0;

		/*
			Number of minutes before the restart to inform your players.

			Only use full minutes here. Value like 5.5 have not been tested.
		*/
		restartWarningTime[] = {15, 10, 5, 3}; 

		/* 
			If set to 1 server will execute '#shutdown',
			to try to shutdown the server
		*/

		useShutdown = 0;
	};

	class ServerSettings
	{
		/*
			Support for custom server FSM if wanted
		*/
		serverFSM = "exile_server\fsm\main.fsm";

		/*
			If this is enabled, Exile developers will spawn with a ton of pop tabs.
			We will have a hard time debugging things if you disable this.
		*/
		devFriendyMode = 1;

		devs[] = 
		{
			{"76561197985241690","[EXILE|DEV] Eichi"},
			{"76561198022879703","[EXILE|DEV] Grim"},
			{"76561198075905447","[EXILE|DEV] Vishpala"},
			{"76561197968613061","[EXILE|DEV] Niuva"}
		};
	};

	class Events 
	{
		/*
			A list of events that are active
		*/
		enabledEvents[] = {"SupplyBox", "AbandonedSafe", "AmbientFlyOver", "EarthQuake"}; 

		class EarthQuake 
		{
			type = "spawn";
			function = "ExileServer_system_event_earthQuake_start";
			minTime = 60;
			maxTime = 180;
			minimumPlayersOnline = 1;
		};

		class SupplyBox 
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_supplyBox_start";
			minTime = 60; // minutes
			maxTime = 180; // minutes
			minimumPlayersOnline = 10;
			dropRadius = 500; // 500m around an airport (including the main airport on Altis!)
			dropAltitude = 100; // altitude of the drop
			markerTime = 10; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"Beer", "Beer", "Tools", "Food", "Food", "RepairParts"};

			class BoxTypes
			{
				class Beer 
				{
					items[] = 
					{
						{"Exile_Item_Beer", 24}
					};
				};

				class Food 
				{
					items[] = 
					{
						{"Exile_Item_BBQSandwich", 5},
						{"Exile_Item_Catfood", 5},
						{"Exile_Item_ChristmasTinner", 5},
						{"Exile_Item_GloriousKnakworst", 5},
						{"Exile_Item_SausageGravy", 5},
						{"Exile_Item_Surstromming", 5},
						{"Exile_Item_CanOpener", 1},
						{"Exile_Item_CookingPot", 1},
						{"Exile_Item_Matches", 1}
					};
				};

				class Tools 
				{
					items[] = 
					{
						{"Exile_Item_Wrench", 1},
						{"Exile_Item_Shovel", 1},
						{"Exile_Item_Screwdriver", 1},
						{"Exile_Item_Pliers", 1},
						{"Exile_Item_Handsaw", 1},
						{"Exile_Item_FireExtinguisher", 1},
						{"Exile_Item_DuctTape", 1}
					};
				};

				class RepairParts 
				{
					items[] = 
					{
						{"Exile_Item_CarWheel", 8},
						{"Exile_Item_FuelCanisterFull", 4},
						{"Exile_Item_OilCanister", 1},
						{"Exile_Item_Grinder", 1},
						{"Exile_Item_CordlessScrewdriver", 1}
					};
				};
			};
		};

		class AbandonedSafe
		{
			type = "spawn";
			function = "ExileServer_system_event_abandonedSafe_start";
			minTime = 60; // minutes
			maxTime = 120; // minutes
			minimumPlayersOnline = 0;
			markerTime = 15; // minutes
		};

		class AmbientFlyOver
		{
			type = "call";
			function = "ExileServer_system_event_ambientFlyOver_start";
			minTime = 30; // minutes
			maxTime = 90; // minutes
			minimumPlayersOnline = 1;
		};
	};
	
	class Logging
	{
		/*
			If logging is enabled separate logs will be made in the sql logs folder for each type
		*/
		traderLogging = 1;
		deathLogging = 1;
		territoryLogging = 1;
	};
};