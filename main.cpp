1 #include <iostream>
2 #include <cstdlib>
3 #include <ctime>
4
5 using namespace std;
6
7 int main()
8 {
9     int N = 5;
10    int arr[N];
11
12    srand(time(NULL));
13
14    cout << "random number: ";
15    for (int i=0; i<N; i++) {
16        arr[i] = rand() % 100;
17        cout << arr[i] << " ";
18    }
19
20    for (int i=0; i<N-1; i++) {
21        for (int j=0; j<N-1-i; j++) {
22            if(arr[j] > arr[j+1]) {
23                int temp = arr[j];
24                arr[j] = arr[j+1];
25                arr[j+1] = temp;
26            }
27        }
28    }
29
30    cout << "排序後: ";
31    for (int i=0; i<N; i++) {
32        cout << arr[i] << " ";
33    }
34    cout << endl;
35
36    return 0;
37 }
