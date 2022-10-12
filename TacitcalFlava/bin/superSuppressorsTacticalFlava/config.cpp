class CfgPatches
{
	class SuperSuppressorsTacticalFlava
	{
		units[] = {};
		weapons[] = {};
		name = "Super Suppressors Tactical Flava";
		author = "Z9";
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Muzzles"};
	};
};
class CfgMods
{
	class SuperSuppressorsTacticalFlava
	{
		type = "mod";
		dir = "superSuppressorsTacticalFlava";
		name = "Tactical Flava Super Suppressors";
		author = "Z9";
		dependencies[] = {};
	};
};

class cfgVehicles
{
	class ItemSuppressor;
	class TF_SCAR_Suppressor_Base;
	class TF_MAR_10_Suppressor_Base;
	class AK_Suppressor: ItemSuppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class PistolSuppressor: ItemSuppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class Groza_Barrel_Suppressor: ItemSuppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class MakarovPBSuppressor: ItemSuppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class ImprovisedSuppressor: ItemSuppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class M4_Suppressor: ItemSuppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_SCAR_Suppressor_Black: TF_SCAR_Suppressor_Base
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_MakarovPB_Suppressor: ItemSuppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_M4_SOCOMSuppressor_Base: M4_Suppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_MAR_10_Suppressor_Base: M4_Suppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_OTs_14_Groza_Suppressor: ItemSuppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_AK_PBS1Suppressor_Base: M4_Suppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_M4_SOCOMSuppressor_Base: M4_Suppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_MAR10_Suppressor: TF_MAR_10_Suppressor_Base
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_OTs_14_Groza_Suppressor: ItemSuppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_MakarovPB_Suppressor: ItemSuppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_AK_PBS1Suppressor: TF_AK_PBS1Suppressor_Base
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_AK_Rotor43Suppressor: M4_Suppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class TF_AEK999_Suppressor: M4_Suppressor
	{
		soundIndex = 1;
		noiseShootModifier=-0.89999998;
		barrelArmor=15000;
		weight=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
};