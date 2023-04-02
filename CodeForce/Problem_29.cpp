#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int counts = 0;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
     for (int i = 0; i < n; i++){
        if(arr[i] != arr[i+1]){
            counts++;
        }
    }

    cout << counts << endl;
}

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int counts = 1;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int current = arr[0];
     for (int i = 0; i < n; i++){
        if(arr[i] != current){
            counts++;
            current = arr[i];
        }
    }
    cout << counts << endl;
    
}
*/
