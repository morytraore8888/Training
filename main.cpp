#include <iostream>
using namespace std;
int main()
{
    int nb, som = 0;
    cout << "donner un nombre" << endl; 
     cin >> nb;
     int nombre = nb;
    if(nombre == 0) cout << 0 << " est propair \n";
    while(nombre > 0)
      {
        int dernier = nombre % 10;
        if(dernier % 2 == 0) som += dernier;
        nombre /= 10;
      }
    if(som % 2 == 0) cout << "Le nombre " << nb << " est propair \n";   
    else cout << "Le nombre saisi n'est pas propair"; //Devoir traité par Mory
    return 0;
}