#include "State.h"

State::State(){}

void State::init(){
  
    stateParams[VOLUME].value = 5;
    stateParams[VOLUME].handler = {};
      
}
