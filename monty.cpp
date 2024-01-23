#include "monty.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool monty(char strategy) {
  int car = rand() %3;
  int pick = rand() %3;
  if (strategy == 'r') 
    if (rand() %2==0)
      strategy = 'k';
    else 
      strategy = 's';
}
switch (strategy){
  case 'k':
  if (pick==car)
    return true;
  break;
  case 's':
  if (pick!=car)
    return true;
}
return false;
}

}
int monty(char strategy, int time) {
int count=0;
  for (int i=0; i < time; i++) {
    if (monty(strategy))
      count++;
  }
return count;
}
