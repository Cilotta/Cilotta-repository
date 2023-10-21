#include "iostream"
#include "vector"

using namespace std;
std::vector<int> a{1, 2, 3, 4, 5, 6, 7, 8, 9};
std::vector<int> b{1, 2, 3, 4, 5, 2, 0, 8, 9};
std::vector<unsigned int> c{1, 2, 3, 4, 5, 2, 0, 8, 9};

int main(){
    if (a==b)
    {
        cout<<"a=b"<<endl;
    }else{
        cout<<"a!=b"<<endl;
    }
    for (int i=0;i<9;i++)
    {
        if (b[i]!=c[i])
        {
            cout<<"b!=c"<<endl;
            break;
        }else{
            cout<<"b=c"<<endl;
            break;
        }
    }
}