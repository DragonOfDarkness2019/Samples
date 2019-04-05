#include <iostream>
using namespace std;
#include <cstdlib>
int dice[4];
int total;

void bubblesort (int dice[4])
{
    int swap;
	for (int i=0; i<3 ; i++) {
	for (int j=0; j<3 ; j++) {
		if (dice[j]<dice[j+1]) {
			swap=dice[j];
			dice[j]=dice[j+1];
			dice[j+1]=swap;
		}
	}
	}
}

int main(void)
{
	for (int i=0; i<6 ; i++) {
		for (int j=0; j<4; j++) {
			do {
			dice[j]=rand() % 6 + 1;
			} while (dice[j]==1);
		}
		bubblesort(dice);
		total=dice[0]+dice[1]+dice[2]+dice[3];
		if (total==24)
			total=19;
		else
			total=dice[0]+dice[1]+dice[2];
		
		cout<< "Dice rolls:" << dice[0] << dice[1] << dice[2] << dice[3] << " = " << total;
		}
	return 0;
}