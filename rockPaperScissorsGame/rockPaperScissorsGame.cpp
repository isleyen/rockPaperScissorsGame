#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>  // include rand()


using namespace std;

int main() {

	string player;
	string opponent;
	int playerScore = 0; // Oyuncu puaný
	int opponentScore = 0; // Rakip puaný

	string rps[] = { "rock", "paper", "scissors" };  // Bu üç opsiyonu içinde barýndýran bir dizi tanýmladýk.

	srand((unsigned int)time(NULL));  // Rastgele sayý üreticisini baþlat. srand: seed random = rastgele tohum gibi bir anlama gelir.
	// 'srand' kullanma sebebimiz bize her saniye baþýnda farklý(random) sayýlar verecek olmasýdýr.

	while (true) {
		cout << "Enter rock, paper, scissors: ";
		getline(cin, player); // Kullanýcýdan bir giriþ alýnýr

		if (player != "rock" && player != "paper" && player != "scissors") { // Girilen ifadenin r-p-s olup olmadýðý kontrol edilir
			// gecerli bir giriþ yapýlmamýþsa break ile döngü donlandýrýlýr
			break;

		}

		opponent = rps[rand() % 3]; // Bilgisayarda seçilen sayýnýn 3 e göre modunu alýp 0-1-2 deðerleri...
		// elde edilir ve bu da dizide 0=rock, 1=paper, 2=scissors' a denk gelir.
		cout << "Opponent Choose: " << opponent << endl;
		
		if (player == opponent) {
			playerScore++;
			opponentScore++;
		}
		else if (player == "rock") {
			if (opponent == "scissors") playerScore++;
			else if (opponent == "paper") opponentScore++;
		}
		else if (player == "paper") {
			if (opponent == "rock") playerScore++;
			else if (opponent == "scissors") opponentScore++;
		}
		else if (player == "scissors") {
			if (opponent == "paper") playerScore++;
			else if (opponent == "rock") opponentScore++;
		}
		cout << "Player:" << playerScore << " Opponent:" << opponentScore << endl << endl;
		
	}
	cout << "Player:" << playerScore << " Opponent:" << opponentScore << endl << endl;
	if (playerScore > opponentScore) cout << "Player Wins!" << endl;
	else if (playerScore < opponentScore) cout << "Opponent Wins!" << endl;
	else cout << "Tie!" << endl;

	return 0;
}