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

BaseAttributes::BaseAttributes(uint32_t level) {
	this->attributes[A_STR] = level;
	//setStr(level);
	setInt(level);
	setVit(level);
	setSpr(level);
	setEnd(level);
	setDex(level);
	setAgi(level);

	//@teste
	//std::cout << getEnd() << std::endl;
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
