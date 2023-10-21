#include "iostream"

using namespace std;
class VLA
{
private:
    const int m_len;
    int *m_arr;
public:
    VLA(int len);
    void istream(int num);
    void ostream(int num);
    ~VLA();
};

VLA::VLA(int len):m_len(len)
{
    m_arr=new int [len];
}

void VLA::istream(int num)
{
    *m_arr=num;
    m_arr++;
}

void VLA::ostream(int num)
{
    cout<<m_arr[num]<<endl;
}

VLA::~VLA()
{
    delete m_arr;
}

int main(){
    int n;
    cin>>n;
    VLA a(n);
    for (int i=0;i<n;i++)
    {
        a.istream(i);
        a.ostream(i);
    }
    return 0;
}