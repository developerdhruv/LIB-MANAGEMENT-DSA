#include <bits/stdc++.h>
using namespace std;
int main()
{
    

    int n;

    
    cin >> n;

    int arr[n], i, pos, post;

    
    for(i=0; i<n; i++)
    {
        cin >> arr[i]; 
    }

    //Printing the original array before deletion
   
   

   
    cin >> post;
    //cout<<arr[pos]<<endl;
     pos = post - 1;
     cout<<arr[pos];

    //Performing the deletion logic
    --pos;//as index of the element to be deleted is 1 less than it's position
    for (i = pos; i <= 9; i++)
    {
        arr[i] = arr[i + 1];
    }

    ;
        
    

    return 0;
}
