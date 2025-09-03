#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, m, a, b;
        int startn = 1, startm = 1;
        cin >> n >> m >> a >> b;

        int val = max(a - startn, max(b - startm, max(n - a, m - b)));
        int i = 0;
        while (val){
            // cout<<"----------------------"<<endl;
            // cout<<val<<endl;
            if (val==(n - a)){
                n = a;
            }else if (val == (m - b)){
                m = b;
            }else if(val == (a - startn)){
                startn = a;
            }else{
                startm = b;
            }
            
            a = (startn + n)/2;
            b = (startm  + m)/2;

            // cout<<n<<" "<<m<<" "<<startn<<" "<<startm<<endl;

            val = max(a - startn, max(b - startm, max(n - a, m - b)));
            i++;
        }

        cout<<i<<endl;
        
    }
}