#include<bits/stdc++.h>
using namespace std;
struct person{

    int age;
    string name;
    double salary;

};
bool logic(person p1, person p2)
{
    if(p1.name<p2.name)
        return true;
    else if(p1.name==p2.name)
    {
        if(p1.age<p2.age)
            return true;
        else
            return false;
    }
    else if(p1.name==p2.name && p1.age==p2.age)
    {
        if(p1.salary>p2.salary)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    int n,i,j;
    person pr[100];
    vector <person>v;
    cout<<"Enter number of employee: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" employee name: ";
        cin.ignore();
        getline(cin,pr[i].name);
        //cin>>pr[i].name;
        cout<<"Enter "<<i+1<<" employee age: ";
        cin>>pr[i].age;
        cout<<"Enter "<<i+1<<" employee salary: ";
        cin>>pr[i].salary;
        v.push_back(pr[i]);
    }

    sort(v.begin(),v.end(),logic);

    for(i=0;i<n;i++)
    {
        cout<<v[i].name<<" "<<v[i].age<<" "<<v[i].salary<<"\n";
    }
}
