#pragma once
#ifndef FS_ATTRIBUTES_H_4083D3D3A05B4EDE891B31BB720CD06F
#define FS_ATTRIBUTES_H_4083D3D3A05B4EDE891B31BB720CD06F

#include "enums.h"
#include "attributesBase.h"
#include "player.h"

class BaseAttributes;
class Player;

struct Attribute {
	int_attr value;
	int_attr bonus;
};


class Attributes {
	private:
		BaseAttributes* base;
		std::string name;
		Attribute attributes[A_LAST + 1];
		int32_t remaining;

	public:
		//Attributes();
		Attributes(Player* creature, std::string name, int_attr stre, int_attr inte, int_attr vita, int_attr spri, int_attr endu, int_attr dext, int_attr agil, int32_t rema);
		~Attributes();

		std::string getName();
		int32_t getRemaining();

		int_attr getStrenght();
		int_attr getInteligence();
		int_attr getVitality();
		int_attr getSpirituality();
		int_attr getEndurance();
		int_attr getDexterity();
		int_attr getAgility();
		

		int_attr getStrBonus();
		int_attr getIntBonus();
		int_attr getVitBonus();
		int_attr getSprBonus();
		int_attr getEndBonus();
		int_attr getDexBonus();
		int_attr getAgiBonus();

		//retorna o valor total dos attributes
		int_attr  getStr();
		int_attr  getInt();
		int_attr  getVit();
		int_attr  getSpr();
		int_attr  getEnd();
		int_attr  getDex();
		int_attr  getAgi();

		void setName(std::string v);
		void setRemaining(int32_t v);

		void setStrenght(int_attr v);
		void setInteligence(int_attr v);
		void setVitality(int_attr v);
		void setSpirituality(int_attr v);
		void setEndurance(int_attr v);
		void setDexterity(int_attr v);
		void setAgility(int_attr v);

		void setStrBonus(int_attr v);
		void setIntBonus(int_attr v);
		void setVitBonus(int_attr v);
		void setSprBonus(int_attr v);
		void setEndBonus(int_attr v);
		void setDexBonus(int_attr v);
		void setAgiBonus(int_attr v);
		
};
#endif
