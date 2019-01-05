#include <iostream>
using namespace std;
int main ()
{
    int x,i, count=0;
    cout<< " Masukan Angka :";
    cin>> x;
    for (i=2;i<=x/2;i++)
    {
        if (x%1==0)
            count++;
    }
    if (count>0||x<2)
        cout<< " Bukan Bilangan Prima\n";
    else
        cout<<x<< " Bilangan Prima\n";
        char LG;
    cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y/T ] ?";cin>>LG;
if (LG=='Y' || LG=='y')main();
else if (LG=='T' || LG=='t') goto x;
x:
    return 0;
}
