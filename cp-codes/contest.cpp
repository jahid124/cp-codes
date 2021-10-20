#include<bits/stdc++.h>
using namespace std;
struct person{

    int roll;
    string name;
    double mark;

};
bool logic(person p1, person p2)
{
    if(p1.mark<p2.mark)
        return true;
    else if(p1.mark==p2.mark)
    {
        if(p1.roll<p2.roll)
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
        //cout<<"Enter "<<i+1<<" employee name: ";
        cin.ignore();

        //cin>>pr[i].name;
        //cout<<"Enter "<<i+1<<" employee age: ";
        cin>>pr[i].roll;
        cin.ignore();
        getline(cin,pr[i].name);
        cin.ignore();
        //cout<<"Enter "<<i+1<<" employee salary: ";
        cin>>pr[i].mark;
        v.push_back(pr[i]);
    }

    sort(v.begin(),v.end(),logic);

    for(i=0;i<n;i++)
    {
        cout<<v[i].roll<<" "<<v[i].name<<" "<<v[i].mark<<"\n";
    }
}

