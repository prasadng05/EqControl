
#define VOLUME    0
#define BASS      1
#define MIDDLE    2
#define TREBLE    3
#define GAIN      4
#define SELECT    5
#define STANDBY   6


typedef void (*CallBackFunction)();

struct StateParam{
  int value;
  CallBackFunction upHandler;
  CallBackFunction downHandler; 
};



class State{

    public:
      State();
      void init();
      

    private:      
      StateParam stateParams[7];
      
 
};


