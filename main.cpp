#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    cout<<"Unesite broj kalorija: "<<endl;
    int kalorije;
    cin>>kalorije;
    
    
    
    if (kalorije> 1000){
        float v;
        v=374;
        
        float povrecici;
        povrecici=kalorije/v;
        cout<<"Kalorije u vrecicama kokica : "<<povrecici<<endl;
        cout<<"Ugljiko hidrati"<<endl;
        cout<<"Masti"<<endl;
        cout<<"Seceri"<<endl;
        }
        
        else {
        float kokice;
    kokice=kalorije/3.748;
    
    cout<<"Energetska vrijednost u kokicama: "<<kokice<<endl;
    }
    return 0;
}
