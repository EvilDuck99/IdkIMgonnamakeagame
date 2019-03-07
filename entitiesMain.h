#ifndef ENTITIESMAIN_H
#define ENTITIESMAIN_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <time>
using namespace std; 

//rambling will occur in the file..
 
void srand(0)
 
class entStats{

public:  
	//defining different types of functions for the entities/mobs to use
	//will apply to both player and enemies as well as killable npcs
	//some NPCs will not be able for the enemies or player to kill. 
void getLevel(){
	return level;
}
void setLevel(int objLevel){
	level = objLevel;
}
void getAttack(){
	return attackPWR;
}
void setAttack(float bsAttack, getLevel, float y) {
	attackPWR = bsAttack + getLevel*(1+y);
}
	
void getHealth(){
	return entHealth;
}
//have to test if this works somehow..
void setHealth(float health, getLevel, float x) {
	entHealth = health +(getLevel *(1+x));
}

void setName (string name){
	entName = name; 
}

void setExp(int a, int b){
	exp = (a+rand()%b);
}

void updateExp(exp){
	exptotal = expTotal + exp;
}

void setJumpHeigthPlayer(float jumpHeightPlayer){
	jumpHeight = jumpHeightPlayer;
}

void setJumpHeightEntity(float jumpHeightEntity){
	jumpHeight = jumpHeightEntity;
}
void setLocalPosX(){
	
}
void getLocalPosX(){
	return localPosX;
}
void setLocalPosY(){
	
}
void getLocalPosY(){
	return localPosY;
}
void getPlayerPosX(){
	return playerPosX;
}
void getPlayerPosY(){
	return playerPosY;
}
double distanceBetweenPlayerAndEnt(playerPosX, playerPosY, localPosX, localPosY){
return sqrt(pow(x - a, 2) + pow(y - b, 2));
}

private: 

	float entHealth; 
	int entName; 
	float attackPWR;
	int level;
	float jumpHeight;
	int exp; 
	int expTotal; 
	string entName; 
	double playerPosX;
	double playerPosy;
	double localPosX;
	double localPosY;
	//different things the functions use..
	//idk either what those does, I guess they do something with code? Idk..
	//or this is things that cant be changed, but can define different things... 
	//does that make sense? 

}

int main (){
		
}

#endif //ENTITIESMAIN_H