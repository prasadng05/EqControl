#include "State.h"
#include "AudioCtrl.h"

State::State(){}

void State::init(){
  
    stateParams[VOLUME].value = 5;
    stateParams[VOLUME].upHandler = volumeUP;
    stateParams[VOLUME].downHandler = volumeDown;
      
}



