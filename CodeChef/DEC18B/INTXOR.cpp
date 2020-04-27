#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, N, x, i, j, k;
    int first, second, third, fourth, fifth;
    vector<int> vec;
    
    cin >> T;
    for(i=0; i<T; i++){
        cin >> N;
        
        j=0;
        for(j=0; j<(N/4)-(N%4); j++){
            
            cout << "1 " << (4*j)+1 << " " << (4*j)+2 << " " << (4*j)+3 << endl;
            cin >> first;
            
            cout << "1 " << (4*j)+1 << " " << (4*j)+2 << " " << (4*j)+4 << endl; 
            cin >> second;
            
            cout << "1 " << (4*j)+1 << " " << (4*j)+3 << " " << (4*j)+4 << endl;
            cin >> third;
            
            cout << "1 " << (4*j)+2 << " " << (4*j)+3 << " " << (4*j)+4 << endl;
            cin >> fourth;
            
            vec.push_back(first^second^third);
            vec.push_back(first^second^fourth);
            vec.push_back(first^third^fourth);
            vec.push_back(second^third^fourth);
        }
        
        j = (4 * (N/4 - N%4) ) + 1;  
        for(k=0; k<N%4; k++){
            cout << "1 " << j << " " << j+1 << " " << j+2 << endl;
            cin >> first;
            
            cout << "1 " << j+1 << " " << j+2 << " " << j+3 << endl;
            cin >> second;
            
            cout << "1 " << j+2 << " " << j+3 << " " << j+4 << endl; 
            cin >> third;
        
            cout << "1 " << j << " " << j+3 << " " << j+4 << endl;
            cin >> fourth;
            
            cout << "1 " << j << " " << j+1 << " " << j+4 << endl;
            cin >> fifth;
            
            vec.push_back(second^third^fifth);
            vec.push_back(first^third^fourth);
            vec.push_back(second^fourth^fifth);
            vec.push_back(first^third^fifth);
            vec.push_back(first^second^fourth);
            j+=5;
        }
        
        cout << "2 ";
        for(auto n : vec) cout << n << " ";
        cout<< endl;

        vec.clear();
        cin >> x;
    }
}