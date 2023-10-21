#include "iostream"

using namespace std;

class Student
{
private:
    char *m_name;
    int m_score;
public:
    Student(char *name,int score);
    void setName();
    void setScore();
};

Student::Student(char *name,int score)
{
    m_name=name;
    m_score=score;
}

void Student::setName()
{
    cout<<m_name<<endl;
}

void Student::setScore()
{
    cout<<m_score<<endl;
}

int main(){
    Student ac("a",10);
    ac.setScore();
    ac.setName();
}
