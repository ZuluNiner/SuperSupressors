class CfgPatches
{
	class SuperSuppressorsSNAFU
	{
		units[] = {};
		weapons[] = {};
		name = "Super Suppressors SNAFU";
		author = "Z9";
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Muzzles"};
	};
};
class CfgMods
{
	class SuperSuppressorsSNAFU
	{
		type = "mod";
		dir = "superSuppressorsSNAFU";
		name = "SNAFU Super Suppressors";
		author = "Z9";
		dependencies[] = {};
	};
};

class cfgVehicles
{
	class ItemSuppressor;
	class SNAFU_Normalized_Suppressor_Base: ItemSuppressor
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
	class SNAFU_LNormalized_Suppressor_Base: ItemSuppressor
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
	class SNAFU_50bmg_Suppressor_Base: ItemSuppressor
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
	class SNAFU_SR25_Supp_Base: ItemSuppressor
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
	class SNAFUAR15_SPR_SIL_Base: ItemSuppressor
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
	class SNAFUAR15_SPR_SQSIL_Base: ItemSuppressor
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
	class SNAFU_MPX_Suppressor_Base: ItemSuppressor
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
	class SNAFU_Agram_Suppressor_Base: ItemSuppressor
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
	class SNAFUKivaari_338_Supp_Base: ItemSuppressor
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
	class Snafu_ScarH_SIL_Base: ItemSuppressor
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
	class SNAFUSR3_SuppBase: ItemSuppressor
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
	class SNAFUGevar_Suppressor_Black: ItemSuppressor
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
	class SNAFU_SPMOD: ItemSuppressor
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