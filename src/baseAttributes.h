#include "otpch.h"

#define attr int32_t

class BaseAttributes {

	public:
		BaseAttributes();
		~BaseAttributes();

		attr getStrenght();
		attr getInteligence();
		attr getVitality();
		attr getSpirituality();
		attr getEndurance();
		attr getDexterity();
		attr getAgility();

		void setStrenght(attr v);
		void setInteligence(attr v);
		void setVitality(attr v);
		void setSpirituality(attr v);
		void setEndurance(attr v);
		void setDexterity(attr v);
		void setAgility(attr v);

		

	private:

		attr strenght;
		attr inteligence;
		attr vitality;
		attr spirituality;
		attr endurance;
		attr dexterity;
		attr agility;
};
