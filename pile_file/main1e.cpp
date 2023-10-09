#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void afficher(std::string matrice[12][12]){
	int i;
	for(i=0;i<12;i++){
		cout<<matrice[i][0] <<matrice[i][1]<<matrice[i][2]<<matrice[i][3]<<matrice[i][4]<<matrice[i][5]<<matrice[i][6] <<matrice[i][7]<<matrice[i][8]<<matrice[i][9]<<matrice[i][10]<<matrice[i][11]<<endl;
		
	}
}
int main(int argc, char** argv) {
	string matrice[12][12]={ {"_","_","_","_","_","_","_","_","_","_","_","_"}, 
	                       {"|"," "," "," "," "," "," "," "," "," "," ","|" },
	                       {"|"," "," "," "," "," "," "," "," "," "," ","|" },
	                       {"|"," "," ","2"," ","1"," "," "," "," "," ","|" },
	                       {"|"," "," "," "," "," "," "," "," "," "," ","|" },
	                       {"|"," "," "," "," "," "," "," "," "," "," ","|" },
	                       {"|"," "," ","1"," "," ","3"," ","2"," "," ","|" },
	                       {"|"," "," "," "," "," "," "," "," "," "," ","|" },
	                       {"|"," "," "," "," "," ","2"," "," "," "," ","|" },
	                       {"|"," "," "," "," "," "," "," "," "," "," ","|" },
	                       {"|"," "," "," "," "," "," "," "," "," "," ","|" },
	                       {"-","-","-","-","-","-","-","-","-","-","-","-"}
						   };
	int i,j;
	matrice[2][3]="4";
	matrice[2][3]="5";
	afficher(matrice[12][12]);
	
	return 0;
}
