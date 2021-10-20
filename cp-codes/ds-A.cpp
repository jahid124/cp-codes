#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<typename T>
void remove_duplicates_ordered_mem_intensive(T &container)
{
   std::vector<typename T::value_type> items;
   items.reserve (container.size());

   typename T::iterator i = container.begin();
   while (i != container.end())
   {
      if (find (items.begin(), items.end(), *i) != items.end())
         i = container.erase(i);
      else
      {
         items.push_back(*i);
         ++i;
      }
   }
}

template<typename T>
void remove_duplicates_ordered_slow(T &container)
{
   typename T::iterator i = container.begin();
   while (i != container.end())
   {
      typename T::iterator f = i;
      ++f;
      while (f != container.end())
      {
         if (*f == *i)
            f = container.erase(f);
         else
            ++f;
      }
      ++i;
   }
}

int main ()
{
   vector<int> v;
   v.push_back (2);
   v.push_back (1);
   v.push_back (3);
   v.push_back (1);
   v.push_back (4);
   v.push_back (2);

   cout << "Old:\n";
   for (vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
      cout << *i << endl;


   vector<int> a (v), b (v);
   remove_duplicates_ordered_mem_intensive (a);
   remove_duplicates_ordered_slow (b);

   cout << "\nRemoved duplicates with intensive memory usage:\n";
   for (vector<int>::const_iterator i = a.begin(); i != a.end(); ++i)
      cout << *i << endl;

   cout << "\nRemoved duplicates somewhat slower, without copying:\n";
   for (vector<int>::const_iterator i = b.begin(); i != b.end(); ++i)
      cout << *i << endl;
}
