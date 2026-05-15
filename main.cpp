#include <iostream>
#include <memory>
using namespace std;
int main()
{
    // Devoir traité par Mory Traore avec les smart pointer
    auto nb = make_unique<int>();
    auto som = make_unique<int>(0);
    auto UnPair = make_unique<bool>(false); //J'ai utilisé le booleen pour considerer 0 comme un chiffre pair dans un nombre composé des chiffres impairs
     cout << "donner un nombre" << endl;
      cin >> (*nb);
    while ((*nb) == 0)
    {
      cout << 0 << " est propair \n"; 
      cout << "donner un nombre" << endl;
      cin >> (*nb); 
    }       
     if((*nb) < 0) 
    {
      (*nb) = (-(*nb)); //Ici j'ai transformer le nombre negatif en positif
      cout << " nb = " << (*nb) << endl;  
      auto nombre = (*nb);  //Ici nombre stocke le contenu de nb et non le unique_ptr qui est un pointer
      while((nombre) > 0) //Ici on peut pas dereferencier le nombre car c'est pas un pointer 
      {
        auto dernier = make_unique<int>((nombre) % 10);
        if((*dernier) % 2 == 0 || (*dernier) == 0) 
        {
          (*som) += (*dernier);
          (*UnPair) = true;
        } 
            (nombre) /= 10;   
      }
    }
    else   
    {
      auto nombre = (*nb);
        while((nombre) > 0)
      {
        auto dernier = make_unique<int>((nombre) % 10);
        if((*dernier) % 2 == 0 || (*dernier) == 0)
        {                                                                                                
             (*som) += (*dernier);
             (*UnPair) = true;    
        }  
        (nombre) /= 10;
      }
    }   
if((*UnPair)) cout << "Le nombre " << (*nb) << " contient au moins un chiffre pair donc c'est propair \n";
    else cout << (*nb) << " n'est pas propair \n";
    return 0;
}

