#pragma once
#ifndef FS_PLAYERSTATS_H_877452FEC245450C9F96B8FD268D8963
#define FS_PLAYERSTATS_H_877452FEC245450C9F96B8FD268D8963

#include "enums.h"
#include "player.h"

class Attributes;

struct Stat {
	int_stats value = 0;
	int_stats bonus = 0;
	int_stats bonusPercent = 0;
};

class PlayerStats
{
	private:
		Stat stats[S_STATS_LAST + 1];

	public:
		PlayerStats(Player* creature);
		~PlayerStats();

		//set
		void setStatsValue(playerStats_t index, int_stats v);
		void setStatsBonus(playerStats_t index, int_stats v);

		//get
		int_stats getStats(playerStats_t index);
		int_stats getStatsValue(playerStats_t index);
		int_stats getStatsBonus(playerStats_t index);

		//add
		void loadAttributes(Attributes* attributes);

		void addStr(int_stats v);
		void addInt(int_stats v);
		void addVit(int_stats v);
		void addSpr(int_stats v);
		void addEnd(int_stats v);
		void addDex(int_stats v);
		void addAgi(int_stats v);

		void addStrBonusPercent(int_stats v);
		void addIntBonusPercent(int_stats v);
		void addVitBonusPercent(int_stats v);
		void addSprBonusPercent(int_stats v);
		void addEndBonusPercent(int_stats v);
		void addDexBonusPercent(int_stats v);
		void addAgiBonusPercent(int_stats v);

		//@Teste
		void teste();

};
#endif
