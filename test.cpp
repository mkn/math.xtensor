
#include "xtensor/xio.hpp"
#include "xtensor/xmath.hpp"
#include "xtensor/xarray.hpp"
#include "xtensor/xadapt.hpp"

#include <array>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <iostream>

int main(){
  std::vector<double> ds(27);
  for(std::size_t i = 0; i < ds.size(); ++i) ds[i] = i;
  std::array<std::size_t, 3> dims{3,3,3};
  auto ar = xt::adapt(ds, dims);
  std::cout << __LINE__ << " " << ar << std::endl;
  ar+=1;
  assert(ds.front()==1);
  ar = xt::sin(ar);
  std::cout << __LINE__ << " " << ar << std::endl;
  return 0;
}
