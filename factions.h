#include <iostream>
#include <string>
using namespace std;

class Factions(){
	public:
	
	void setFaction(string entFaction){
		faction = entFaction;
	}
	void getFaction(){
		return faction;
	}
	void setSecretFaction(string entSecretFaction){
		secretFaction = entSecretFaction;
	}
	void getSecretFaction(){
		return secretFaction; 
	}
	
	
	
	private:
	
	string faction;
	string secretFaction;
	
	
}

int main(){
	
}