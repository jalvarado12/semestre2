#include <iostream>
#include <vector>

int linear_search(const std::vector<int> &v, int num, int pos);
int binary_search(const std::vector<int> &v, int x);


int main() {
  int pos = 0;
  std::vector<int> v = {-3,-1,1,2,6,8};
  int x = -3;

  int idx = linear_search(v, x, pos);//linear_search(v, x);
  if(idx >= 0){
    std::cout << x << " at position " << idx << "\n";
  }else{
    std::cout << x << " not found\n";
  }
  
  return 0;
}



int linear_search(const std::vector<int> &v, int num, int pos) {
  if (pos < v.size()) {
    if (num == v[pos])
        return pos;
    return linear_search(v, num, pos+1);
  }
  return -1;
}

int binary_search(const std::vector<int> &v, int x){
  int min = 0;
  int max = v.size()-1;
  while(min <= max){
    int mid = (min+max) / 2;
    if(v[mid] == x){
      return mid;
    }else if(v[mid] > x){
      max = mid-1;
    }else{
      min = mid+1;
    }
  }
  return -1;
}
