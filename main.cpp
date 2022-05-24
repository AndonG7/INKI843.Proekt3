#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int najgolemaCifra(int indeks) {
    int arr[3];
    int najgolem=0;

    arr[0] = indeks / 100;
    arr[1] = indeks % 100; arr[1] = arr[1] / 10;
    arr[2] = indeks % 10;

    for (unsigned int i=0; i<4; i++){
        if (arr[i]>najgolem) najgolem=arr[i];
    }

    return najgolem;
}


int main()
{
    int indeks,broj;
    const string sodrzina = "INKI843Andon TheWeeknd Nights pass so much quicker than the days did Same clothes you ain't ready for your day shift";
    vector<int> encrypted;

    cout<<"Vasiot indeks e: INKI";
    cin>>indeks;
    broj = najgolemaCifra(indeks);

    for (unsigned int i=0; i<sodrzina.size(); i++) {
        encrypted.push_back((int) sodrzina.at(i) + broj);
    }

    sort(encrypted.begin(), encrypted.end());

    for (unsigned int i=0; i<encrypted.size(); i++) {
        cout<<encrypted[i]<<" ";
    }

    return 0;
}
