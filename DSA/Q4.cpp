// 1.  Remove and sort elements from list={8,7,3,2,3,6,8}




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    std::vector<int> list = {8,7,3,2,6,8};

   std::sort(list.begin(),list.end());

   auto  it =std::unique(list.begin(), list.end());

   list.erase(it, list.end());

   for(int num:list ){
    std::cout << num << " ";
   }
   return 0 ;
}