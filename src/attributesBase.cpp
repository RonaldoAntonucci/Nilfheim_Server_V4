#include "otpch.h"
#include "attributesBase.h"

/*BaseAttributes::BaseAttributes() {
	setStr(0);
	setInt(0);
	setVit(0);
	setSpr(0);
	setEnd(0);
	setDex(0);
	setAgi(0);
}*/

BaseAttributes::BaseAttributes(uint32_t level, int_attr* mult) {
	this->multipliers = mult;
	this->attributes[A_STR] = level * multipliers[A_STR];
	//setStr(level * multipliers[A_STR]);
	setInt(level * multipliers[A_INT]);
	setVit(level * multipliers[A_VIT]);
	setSpr(level * multipliers[A_SPR]);
	setEnd(level * multipliers[A_END]);
	setDex(level * multipliers[A_DEX]);
	setAgi(level * multipliers[A_AGI]);

	//@teste
	std::cout << "baseAttributes\n"
		<< "STR: " << getStr() << "\n"
		<< "INT: " << getInt() << "\n"
		<< "VIT: " << getVit() << "\n"
		<< "SPR: " << getSpr() << "\n"
		<< "END: " << getEnd() << "\n"
		<< "DEX: " << getDex() << "\n"
		<< "AGI: " << getAgi() << "\n"
		<< std::endl;
}

BaseAttributes::~BaseAttributes() {

}

void BaseAttributes::setStr(int_attr v) {
	this->attributes[A_STR] = v;
}

void BaseAttributes::setInt(int_attr v) {
	this->attributes[A_INT] = v;
}

void BaseAttributes::setVit(int_attr v) {
	this->attributes[A_VIT] = v;
}

void BaseAttributes::setSpr(int_attr v) {
	this->attributes[A_SPR] = v;
}

void BaseAttributes::setEnd(int_attr v) {
	this->attributes[A_END] = v;
}

void BaseAttributes::setDex(int_attr v) {
	this->attributes[A_DEX] = v;
}

void BaseAttributes::setAgi(int_attr v) {
	this->attributes[A_AGI] = v;
}

int_attr BaseAttributes::getStr() {
	return this->attributes[A_STR];
}

int_attr BaseAttributes::getInt() {
	return this->attributes[A_INT];
}

int_attr BaseAttributes::getVit() {
	return this->attributes[A_VIT];
}

int_attr BaseAttributes::getSpr() {
	return this->attributes[A_SPR];
}

int_attr BaseAttributes::getEnd() {
	return this->attributes[A_END];
}

int_attr BaseAttributes::getDex() {
	return this->attributes[A_DEX];
}

int_attr BaseAttributes::getAgi() {
	return this->attributes[A_AGI];
}

//add
bool  BaseAttributes::addStr(int_attr v) {
	return this->attributes[A_STR] += v;
}
bool  BaseAttributes::addInt(int_attr v) {
	return this->attributes[A_INT] += v;
}
bool  BaseAttributes::addVit(int_attr v) {
	return this->attributes[A_VIT] += v;
}
bool  BaseAttributes::addSpr(int_attr v) {
	return this->attributes[A_SPR] += v;
}
bool  BaseAttributes::addEnd(int_attr v) {
	return this->attributes[A_END] += v;
}
bool  BaseAttributes::addDex(int_attr v) {
	return this->attributes[A_DEX] += v;
}
bool  BaseAttributes::addAgi(int_attr v) {
	return this->attributes[A_AGI] += v;
}

void  BaseAttributes::updateLevel(){
	addStr(multipliers[A_STR]);
	addInt(multipliers[A_INT]);
	addVit(multipliers[A_VIT]);
	addSpr(multipliers[A_SPR]);
	addEnd(multipliers[A_END]);
	addDex(multipliers[A_DEX]);
	addAgi(multipliers[A_AGI]);
}
