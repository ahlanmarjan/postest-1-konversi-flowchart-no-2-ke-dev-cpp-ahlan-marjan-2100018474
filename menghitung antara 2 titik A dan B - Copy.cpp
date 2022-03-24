#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   float y1;
   float a;
   float jarak;
   float x2;
   float y2;
   float b;
   float x1;

   raptor_prompt_variable_zzyz ="masukkan nilai (x1) =";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x1;
   raptor_prompt_variable_zzyz ="masukkan nilai (y1) =";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y1;
   raptor_prompt_variable_zzyz ="masukkan nilai (x2) =";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x2;
   raptor_prompt_variable_zzyz ="masukkan nilai (y2) =";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y2;
   a =(x2-x1)*(x2-x1);
   b =(y2-y1)*(y2-y1);
   jarak =sqrt(a+b);
   cout << "jarak titik A ke titik B = "<< jarak << endl;
   return 0;
}
