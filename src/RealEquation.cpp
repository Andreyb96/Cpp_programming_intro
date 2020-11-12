#include <iostream>
#include <cmath>

int main() {
  double a,b,c;
  std::cin >> a>> b>> c;
  std::cout << std::fixed << std::showpoint;
  std::cout.precision(6);
    if(a){
    double d=b*b-4*a*c;
 
    if(d>0){
    if (a>0)
        std::cout<< 2 <<" "<< (-b-std::sqrt(d))/(2*a) << " "<< (-b+std::sqrt(d))/(2*a);
      else
          std::cout<< 2 <<" " << (-b+std::sqrt(d))/(2*a) << " "<< (-b-std::sqrt(d))/(2*a);
    }else if(d==0)
    std::cout<< 1 <<" " << (-b)/(2*a);
        else
            std::cout << 0;
    }else if(b)
        std::cout<< 1 <<" " << -c/b;
    else if(c)
        std::cout<< 0;
    else
        std::cout<< 3;
  return 0;
}