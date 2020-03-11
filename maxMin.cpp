#include <iostream>
using namespace std;

int main()
{
    int arr[6], i, n, max,min;

      cout <<"Enter size of array\n";
      cin >> n;

      cout <<"Enter random numbers\n";
       for (i = 0; i < n; i++)
         cin >> arr[i];
    max = arr[0];
    
      for (i= 0; x < n; i++){
         if (max < arr[i])
           max = arr[i];
        }
    min = arr[0];

     for (i= 0; x < n; i++){
         if (min > arr[i])
            min = arr[i];
     }
      cout << " The maximum number is  "<< max;
      cout << "The minimum number is "<< min;
    return 0;
}
