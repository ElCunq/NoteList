#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> notlar;
void Show(){
    vector<pair<int, int>> indeksli_notlar;

    // Her notu orijinal indeksiyle eşleştirin
    for (int i = 0; i < notlar.size(); i++) {
        indeksli_notlar.push_back({notlar[i], i});
    }

    // Nota göre çiftleri sıralayın
    sort(indeksli_notlar.begin(), indeksli_notlar.end(), greater<>());

    // Sıralanmış notları ve orijinal indekslerini yazdırın
    for (const auto& cift : indeksli_notlar) {
        cout << cift.second+1 << ". Ogrencinin Notu: " << cift.first << endl;
    }

}

int main() {
    int Note;
    for (int sayac=0; ; sayac++){
    cout << "Enter Notes: ";
    cin >> Note;
        if (Note == -1){
            Show(); 
            break;
        }
        else if (Note >= 0 && Note <= 100)
            notlar.push_back(Note);
        else{
            cout << "Invalid Note" << endl;
            return 0;
        }
    }

    return 0;
}