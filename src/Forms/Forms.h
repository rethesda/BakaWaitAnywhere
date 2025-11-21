#pragma once

namespace Forms
{
	static RE::TESGlobal* BWA_bEnabled{ nullptr };
	static RE::TESGlobal* BWA_bOverrideInAir{ nullptr };
	static RE::TESGlobal* BWA_bOverrideInCombat{ nullptr };
	static RE::TESGlobal* BWA_bOverrideTrespassing{ nullptr };
	static RE::TESGlobal* BWA_bOverrideTakingHealthDamage{ nullptr };
	static RE::TESGlobal* BWA_bOverrideTakingRadDamage{ nullptr };

	static void Install()
	{
		if (auto TESDataHandler = RE::TESDataHandler::GetSingleton())
		{
			BWA_bEnabled = TESDataHandler->LookupForm<RE::TESGlobal>(0x801, "BakaWaitAnywhere.esm"sv);
			BWA_bOverrideInAir = TESDataHandler->LookupForm<RE::TESGlobal>(0x802, "BakaWaitAnywhere.esm"sv);
			BWA_bOverrideInCombat = TESDataHandler->LookupForm<RE::TESGlobal>(0x803, "BakaWaitAnywhere.esm"sv);
			BWA_bOverrideTrespassing = TESDataHandler->LookupForm<RE::TESGlobal>(0x804, "BakaWaitAnywhere.esm"sv);
			BWA_bOverrideTakingHealthDamage = TESDataHandler->LookupForm<RE::TESGlobal>(0x805, "BakaWaitAnywhere.esm"sv);
			BWA_bOverrideTakingRadDamage = TESDataHandler->LookupForm<RE::TESGlobal>(0x806, "BakaWaitAnywhere.esm"sv);
		}
	}
}
