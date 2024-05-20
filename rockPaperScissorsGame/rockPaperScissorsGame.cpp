#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>  // include rand()


using namespace std;

int main() {

	string player;
	string opponent;
	int playerScore = 0; // Oyuncu puani
	int opponentScore = 0; // Rakip puani

	string rps[] = { "rock", "paper", "scissors" };  // Bu uc opsiyonu icinde barindiran bir dizi tanimladik.

	srand((unsigned int)time(NULL));  // Rastgele say� �reticisini baslat. srand: seed random = rastgele tohum gibi bir anlama gelir.
	// 'srand' kullanma sebebimiz bize her saniye ba��nda farkl�(random) say�lar verecek olmasidir.

	while (true) {
		cout << "Enter rock, paper, scissors: ";
		getline(cin, player); // Kullan�c�dan bir giris alinir.

		if (player != "rock" && player != "paper" && player != "scissors") { // Girilen ifadenin r-p-s olup olmadigi kontrol edilir.
			// gecerli bir giris yap�lmamis ise break ile dongu sonlandirilir.
			break;

		}

		opponent = rps[rand() % 3]; // Bilgisayarda secilen say�n�n 3 e gore modunu al�p 0-1-2 de�erleri...
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