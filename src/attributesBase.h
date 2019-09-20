#pragma once

#ifndef FS_ATTRIBUTESBASE_H_4083D3D3A05B4EDE891B31BB720CD06F
#define FS_ATTRIBUTESBASE_H_4083D3D3A05B4EDE891B31BB720CD06F

#include "enums.h"

class BaseAttributes {
private:
	int_attr attributes[A_LAST + 1];
	int_attr* multipliers = nullptr;


public:
	//BaseAttributes();
	BaseAttributes(uint32_t level, int_attr* mult);
	~BaseAttributes();

	//set
	void setStr(int_attr v);
	void setInt(int_attr v);
	void setVit(int_attr v);
	void setSpr(int_attr v);
	void setEnd(int_attr v);
	void setDex(int_attr v);
	void setAgi(int_attr v);

	//get
	int_attr  getStr();
	int_attr  getInt();
	int_attr  getVit();
	int_attr  getSpr();
	int_attr  getEnd();
	int_attr  getDex();
	int_attr  getAgi();

	//add
	bool  addStr(int_attr v);
	bool  addInt(int_attr v);
	bool  addVit(int_attr v);
	bool  addSpr(int_attr v);
	bool  addEnd(int_attr v);
	bool  addDex(int_attr v);
	bool  addAgi(int_attr v);

	void updateLevel();
};
#endif
