#include<iostream>
using namespace std;

template<class Tem>
Tem Sort(Tem arr[], Tem n)
{
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				Tem c = arr[j+1]; 
				arr[j+1] = arr[j]; 
				arr[j] = c;
			}
		}
	}
}

template<class Tem>
Tem Print(Tem arr[], int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  " ;	
	}
}

int main()
{
    int arr[] = {7, 54, 3, 9, 8 ,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    Sort<int>(arr, n);
    cout << "\t***1st Sorted Array***" << endl;
    Print <int>(arr, n);
    
    float ar[]= {4.3, 2.5, -0.9, 100.2, 3.0};
	n = sizeof(arr) / sizeof(ar[0]);
	Sort <float>(ar, n);
	cout << "\n\n\t2nd Sorted Array***\n";
    Print<float>(ar, n);
	return 0;
}


