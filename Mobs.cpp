#include "entitiesMain.h"
#include "factions.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

srand(time(0);
int bsAttack;
int bsHeatlh;

entStats stats;
factions fac;

bool isAttackingMelee(){
	state = false;
	if(stats.distanceBetweenPlayerAndEnt <= 3){
		state = true;
	}
}
bool isAttackingRanged(){
	state = false;
	if(stats.distanceBetweenPlayerAndEnt <= 12){
		state = true;
	}
}
int main(){
	
}

//bat with different types of itself...
int caveBat(){
	entStats stats;
	bsAttack = 3;
	bsHeatlh = 30;
	stats.setHealth(bsHeatlh, stats.getLevel, 0.3);
	stats.setName("Cave Bat");
	
	bool isKilled (stats.getHealth == 0){
		bool status = true; 
		if (stats.getHealth != 0){
			status = false; 
		}
	}
	if(stats.getLevel >= 15 && stats.getlevel < 25){
		stats.setName("Purple Cave Bat");
		stats.setHealth(bsHeatlh, stats.getLevel, 0.5);
		stats.setAttack(bsAttack, stats.getLevel, 0.2);
		stats.setExp(5,5);
		if(isKilled = true){
			stats.updateExp(exp);
		}
	}
	else if(stats.getLevel >= 25 && stats.getlevel < 45){
		stats.setName("Hellish Cave Bat");
		stats.setHealth(bsHeatlh, stats.getHealth, 0.8);
		stats.setAttack(bsAttack, stats.getLevel, 0.4);
		stats.setExp(10, 9);
		if(isKilled = true){
			stats.updateExp(exp);
		}
	}
	else if(stats.getLevel >= 45){
		stats.setName("Demon Bat");
		stats.setHealth(bsHeatlh, stats.getHealth, 1);
		stats.setAttack(bsAttack, stats.getLevel, 0.8);
		stats.setExp(17, 15);
		if(isKilled = true){
			stats.updateExp(exp);
		}
	}
	
	//when the bat attack it has a  probability to get a critical hit. 
	//need to make a attacking bool
	//The parameters in for isnt final!!!!
	//think i can make a bool similar to the one for the exp..
	while (bool isAttacking = true){
		if ((1+rand()%9) == 2 || (1+rand()%9) == 4){
			stats.setAttack(bsAttack, stats.getLevel, 2);
		}
	}
}

int policeOfficer(){
	entStats stats;
	bsAttack = 24;
	bsHeatlh = 150;
	stats.setHealth(bsHeatlh, stats.getLevel, 0.3);
	stats.setName("Police Trainee");
	stats.setExp(10,10);
		
	bool isKilled (stats.getHealth == 0){
		bool status = true; 
		if (stats.getHealth != 0){
			status = false; 
		}
	}
	if(stats.getLevel >= 15 && stats.getlevel < 25){
		stats.setName("Police Officer");
		stats.setHealth(bsHeatlh, stats.getLevel, 0.4);
		stats.setAttack(bsAttack, stats.getLevel, 0.2);
		stats.setExp(19,10);
		if(isKilled = true){
			stats.updateExp(exp);
		}
	}
	else if(stats.getLevel >= 25 && stats.getlevel < 45){
		stats.setName("Heavy Police Officer");
		stats.setHealth(bsHeatlh, stats.getLevel, 0.7);
		stats.setAttack(bsAttack, stats.getLevel, 0.8);
		stats.setExp(28, 10);
		if(isKilled = true){
			stats.updateExp(exp);
		}
	}
	else if(stats.getLevel >= 45 && stats.getLevel < 55){
		stats.setName("Delta Police Officer");
		stats.setHealth(bsHeatlh, stats.getLevel, 1.2);
		stats.setAttack(bsAttack, stats.getLevel, 1.5);
		stats.setExp(40, 15);
		if(isKilled = true){
			stats.updateExp(exp);
		}
	}
	else if(stats.getLevel >= 55){
		stats.setName("Elite Delta Police Officer");
		stats.setHealth(bsHeatlh, stats.getLevel, 1.7);
		stats.setAttack(bsAttack, stats.getLevel, 2);
		stats.setExp(69, 10);
		if(isKilled = true){
			stats.updateExp(exp);
		}
		
	}
	
	//when the cout << "officer"; attacks it has a probability to get a critical hit. 
	//need to make a attacking bool
	//The parameters in for isnt final!!!!
	//think i can make a bool similar to the one for the exp..
	while (bool isAttackingMelee = true){
		if ((1+rand()%9) == 2){
			stats.setAttack(bsAttack, stats.getLevel, 2.8);
		}
	}
	
}