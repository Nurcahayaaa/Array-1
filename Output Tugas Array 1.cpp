#include <iostream>

using namespace std;

int main()

{

  int umur[5];

  int n, hasil=0;

  int i;

  for (i=0; i<5; i++){

    cout <<"input Umur ke -"<< (i+1)<< " = ";

    cin >> umur[i];

}

  for (n=0 ; n<5 ; ++n)

{

  hasil+= umur[n];

  cout <<endl;

  cout<<"Hasil ke - "<< n << " adalah = "<<hasil<< endl;

}

cout<<endl<<"jumlah umur = "<< hasil << endl;

return 0;

}
