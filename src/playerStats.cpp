#include "otpch.h"
#include "playerStats.h"
#include "configmanager.h"

extern ConfigManager g_config;

void PlayerStats::teste() {
	std::cout << "Stats" << "\n"
		<< "HEALTH MAX: " << getStats(S_HEALTHMAX) << "\n"
		<< "HEALTH: " << getStats(S_HEALTH) << "\n"
		<< "MANA MAX: " << getStats(S_MANAMAX) << "\n"
		<< "HEALTH REGEN: " << getStats(S_HEALTHREGEN) << "\n"
		<< "MANA REGEN: " << getStats(S_MANAREGEN) << "\n\n"

		<< "PHYS ATTACK: " << getStats(S_PATTACK) << "\n"
		<< "MAGIC ATTACK: " << getStats(S_MATTACK) << "\n"
		<< "CRITICAL: " << getStats(S_CRITICAL) << "\n"
		<< "CRITICAL DMG: " << getStats(S_CRITICALDMG) << "\n"
		<< "ACCURACY: " << getStats(S_ACCURACY) << "\n"
		<< "PENETRATION: " << getStats(S_PENETRATION) << "\n"
		<< "PHYS PENETRATION: " << getStats(S_PPENETRATION) << "\n"
		<< "MAGIC PENETRATION: " << getStats(S_MPENETRATION) << "\n\n"

		<< "PHYS ARMOR: " << getStats(S_PARMOR) << "\n"
		<< "MAGIC ARMOR: " << getStats(S_MARMOR) << "\n"
		<< "CRITICAL RESIST: " << getStats(S_CRITICALRESIST) << "\n"
		<< "CRITICAL DMG RESIST: " << getStats(S_CRITDAMAGERESIST) << "\n"
		<< "BLOCK: " << getStats(S_BLOCK) << "\n"
		<< "EVADE: " << getStats(S_EVADE) << "\n\n"

		<< "SPEED: " << getStats(S_SPEED) << "\n"
		<< "ATTACK SPEED: " << getStats(S_ATTACKSPEED) << "\n"
		<< "COOLDOWN: " << getStats(S_COOLDOWN) << "\n"
		<< "CAST: " << getStats(S_CAST) << "\n"
		<< "TENACITY: " << getStats(S_TENACITY) << "\n"
		<< "LUCKY: " << getStats(S_LUCKY) << "\n"
		<< "EXP: " << getStats(S_EXP) << "\n"
		<< std::endl;
}

PlayerStats::PlayerStats(Player* creature) {
	loadAttributes(creature->getAttributes());

	//@teste
	teste();
}

PlayerStats::~PlayerStats() {

}

//set
void PlayerStats::setStatsValue(playerStats_t index, int_stats v) {
	this->stats[index].value = v;
}

void PlayerStats::setStatsBonus(playerStats_t index, int_stats v) {
	this->stats[index].bonus = v;
}


//get
int_stats PlayerStats::getStats(playerStats_t index) {
	return std::max(0, this->stats[index].value + this->stats[index].bonus + ((this->stats[index].value/100)*this->stats[index].bonusPercent));
}

int_stats PlayerStats::getStatsValue(playerStats_t index) {
	return this->stats[index].value;
}

int_stats PlayerStats::getStatsBonus(playerStats_t index) {
	return this->stats[index].bonus;
}

void PlayerStats::loadAttributes(Attributes* attributes) {

	addStr(static_cast<int_stats>(attributes->getStr()));
	addInt(static_cast<int_stats>(attributes->getInt()));
	addVit(static_cast<int_stats>(attributes->getVit()));
	addSpr(static_cast<int_stats>(attributes->getSpr()));
	addEnd(static_cast<int_stats>(attributes->getEnd()));
	addDex(static_cast<int_stats>(attributes->getDex()));
	addAgi(static_cast<int_stats>(attributes->getAgi()));

	addStrBonusPercent(static_cast<int_stats>(attributes->getStr()) / 10);
	addIntBonusPercent(static_cast<int_stats>(attributes->getInt()) / 10);
	addVitBonusPercent(static_cast<int_stats>(attributes->getVit()) / 10);
	addSprBonusPercent(static_cast<int_stats>(attributes->getSpr()) / 10);
	addEndBonusPercent(static_cast<int_stats>(attributes->getEnd()) / 10);
	addDexBonusPercent(static_cast<int_stats>(attributes->getDex()) / 10);
	addAgiBonusPercent(static_cast<int_stats>(attributes->getAgi()) / 10);
}

void PlayerStats::addStr(int_stats v) {
	//1 pt
	this->stats[S_PATTACK].value += (g_config.getNumber(ConfigManager::STR_PATTACK) * v) / 100;
	this->stats[S_PARMOR].value += (g_config.getNumber(ConfigManager::STR_PDEF) * v) / 100;
}

void PlayerStats::addInt(int_stats v) {
	//1 pt
	this->stats[S_MATTACK].value += (g_config.getNumber(ConfigManager::INT_MATTACK) * v) / 100;
	this->stats[S_MARMOR].value += (g_config.getNumber(ConfigManager::INT_MDEF) * v) / 100;
}

void PlayerStats::addVit(int_stats v) {
	//1 pt
	this->stats[S_HEALTHMAX].value += (g_config.getNumber(ConfigManager::VIT_HEALTH) * v) / 100;
	this->stats[S_HEALTH].value += (g_config.getNumber(ConfigManager::VIT_HEALTH) * v) / 100;
}

void PlayerStats::addSpr(int_stats v) {
	//1 pt
	this->stats[S_MANAMAX].value += (g_config.getNumber(ConfigManager::SPR_MANA) * v) / 100;
	this->stats[S_MANA].value += (g_config.getNumber(ConfigManager::SPR_MANA) * v) / 100;
}

void PlayerStats::addEnd(int_stats v) {
	//1 pt
	this->stats[S_PARMOR].value += (g_config.getNumber(ConfigManager::END_PDEF) * v) / 100;
	this->stats[S_MARMOR].value += (g_config.getNumber(ConfigManager::END_MDEF) * v) / 100;
}

void PlayerStats::addDex(int_stats v) {
	//1 pt
	this->stats[S_CRITICAL].value += (g_config.getNumber(ConfigManager::DEX_CRIT) * v) / 100;
	this->stats[S_ACCURACY].value += (g_config.getNumber(ConfigManager::DEX_ACC) * v) / 100;
}

void PlayerStats::addAgi(int_stats v) {
	//1 pt
	this->stats[S_EVADE].value += (g_config.getNumber(ConfigManager::AGI_EVADE) * v) / 100;
	this->stats[S_ATTACKSPEED].value += (g_config.getNumber(ConfigManager::AGI_ATTACKSPEED) * v) / 100;
}

void PlayerStats::addStrBonusPercent(int_stats v) {
	this->stats[S_PATTACK].bonusPercent += g_config.getNumber(ConfigManager::STR_10PATTACK) * v / 100;
}
void PlayerStats::addIntBonusPercent(int_stats v) {
	this->stats[S_MATTACK].bonusPercent += g_config.getNumber(ConfigManager::INT_10MATTACK) * v / 100;
}
void PlayerStats::addVitBonusPercent(int_stats v) {
	this->stats[S_HEALTH].bonusPercent += g_config.getNumber(ConfigManager::VIT_10HEALTH) * v / 100;
	this->stats[S_HEALTHMAX].bonusPercent += g_config.getNumber(ConfigManager::VIT_10HEALTH) * v / 100;
	this->stats[S_HEALTHREGEN].bonusPercent += g_config.getNumber(ConfigManager::VIT_10HEALTHREGEN) * v / 100;
}
void PlayerStats::addSprBonusPercent(int_stats v) {
	this->stats[S_MANAMAX].bonusPercent += g_config.getNumber(ConfigManager::SPR_10MANA) * v / 100;
	this->stats[S_MANA].bonusPercent += g_config.getNumber(ConfigManager::SPR_10MANA) * v / 100;
	this->stats[S_MANAREGEN].bonusPercent += g_config.getNumber(ConfigManager::SPR_10MANAREGEN) * v / 100;
}
void PlayerStats::addEndBonusPercent(int_stats v) {
	this->stats[S_PARMOR].bonusPercent += g_config.getNumber(ConfigManager::END_10PDEF) * v / 100;
	this->stats[S_MARMOR].bonusPercent += g_config.getNumber(ConfigManager::END_10MDEF) * v / 100;
}
void PlayerStats::addDexBonusPercent(int_stats v) {
	this->stats[S_CRITICAL].bonusPercent += g_config.getNumber(ConfigManager::DEX_10CRIT) * v / 100;
	this->stats[S_ACCURACY].bonusPercent += g_config.getNumber(ConfigManager::DEX_10ACC) * v / 100;
}
void PlayerStats::addAgiBonusPercent(int_stats v) {
	this->stats[S_EVADE].bonusPercent += g_config.getNumber(ConfigManager::AGI_10EVADE) * v / 100;
	this->stats[S_SPEED].bonusPercent += g_config.getNumber(ConfigManager::AGI_10SPEED) * v / 100;
}
