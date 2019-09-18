#pragma once
#ifndef FS_ATTRIBUTES_H_4083D3D3A05B4EDE891B31BB720CD06F
#define FS_ATTRIBUTES_H_4083D3D3A05B4EDE891B31BB720CD06F

class Attributes {

	public:
		Attributes();
		Attributes(std::string name, int_attr stre, int_attr inte, int_attr vita, int_attr spri, int_attr endu, int_attr dext, int_attr agil, uint8_t rema);
		~Attributes();

		std::string getName();
		int_attr getStrenght();
		int_attr getInteligence();
		int_attr getVitality();
		int_attr getSpirituality();
		int_attr getEndurance();
		int_attr getDexterity();
		int_attr getAgility();
		int_attr getRemaining();

		void setName(std::string v);
		void setStrenght(int_attr v);
		void setInteligence(int_attr v);
		void setVitality(int_attr v);
		void setSpirituality(int_attr v);
		void setEndurance(int_attr v);
		void setDexterity(int_attr v);
		void setAgility(int_attr v);
		void setRemaining(int_attr v);

		

	private:

		std::string name = "default";
		int_attr strenght = 100;
		int_attr inteligence = 100;
		int_attr vitality = 100;
		int_attr spirituality = 100;
		int_attr endurance = 100;
		int_attr dexterity = 100;
		int_attr agility = 100;
		int_attr remaining = 0;
};
#endif
