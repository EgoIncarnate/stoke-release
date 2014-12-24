// Copyright 2013-2015 Eric Schkufza, Rahul Sharma, Berkeley Churchill, Stefan Heule
//
// Licensed under the Apache License, Version 2.0 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an AS IS BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <stdint.h>

int32_t p19(int32_t x, int32_t m, int32_t k) {
  int32_t o1 = x >> k;
  int32_t o2 = x ^ o1;
  int32_t o3 = o2 & m;
  int32_t o4 = o3 << k;
  int32_t o5 = o4 ^ o3;
  return o5 ^ x;
}
