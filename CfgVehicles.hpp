class CfgVehicles
{
	class Box_NATO_Ammo_F;
	class Box_NATO_Support_F;
	class Box_NATO_Grenades_F;
	class Box_NATO_AmmoOrd_F;
	class Box_NATO_WpsLaunch_F;
	class Box_NATO_WpsSpecial_F;
	class Box_NATO_Equip_F;

	class TAW_AUX_AM2_AmmoCrate: Box_NATO_Ammo_F
	{
		displayName="[TAW] Ammo Resupply Crate";
		class TransportBackpacks
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
	};
	class TAW_AUX_AM2_UtilityCrate: Box_NATO_WpsSpecial_F
	{
		displayName="[TAW] Utility Resupply Crate";
		class TransportBackpacks
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
	};	
	class TAW_AUX_AM2_ExplosiveCrate: Box_NATO_Grenades_F
	{
		displayName="[TAW] Explosive Resupply Crate";
		class TransportBackpacks
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
	};
	class TAW_AUX_AM2_MedicalCrate: Box_NATO_Support_F
	{
		displayName="[TAW] Medical Resupply Crate";
		class TransportBackpacks
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class kat_IV_16
			{
				name="kat_IV_16";
				count=50;
			};
			class ACE_painkillers
			{
				name="ACE_painkillers";
				count=10;
			};
			class kat_X_AED
			{
				name="kat_X_AED";
				count=3;
			};
			class kat_CarbonateItem
			{
				name="kat_CarbonateItem";
				count=10;
			};
			class kat_EACA
			{
				name="kat_EACA";
				count=20;
			};
			class kat_IO_FAST
			{
				name="kat_IO_FAST";
				count=30;
			};
			class ACE_splint
			{
				name="ACE_splint";
				count=25;
			};
			class ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=5;
			};
			class ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=30;
			};
			class kat_TXA
			{
				name="kat_TXA";
				count=20;
			};
			class ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=150;
			};
			class ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=150;
			};
			class ACE_quikclot
			{
				name="ACE_quikclot";
				count=150;
			};			
			class ACE_salineIV
			{
				name="ACE_salineIV";
				count=25;
			};
			class ACE_salineIV_500
			{
				name="ACE_salineIV_500";
				count=20;
			};
			class ACE_salineIV_250
			{
				name="ACE_salineIV_250";
				count=20;
			};
			class ACE_plasmaIV
			{
				name="ACE_plasmaIV";
				count=25;
			};
			class ACE_plasmaIV_500
			{
				name="ACE_plasmaIV_500";
				count=20;
			};
			class ACE_plasmaIV_250
			{
				name="ACE_plasmaIV_250";
				count=20;
			};
		};
		class TransportMagazines
		{
		};
	};
};