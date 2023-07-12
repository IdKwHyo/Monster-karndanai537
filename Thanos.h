#include "monster.h"

class Thanos {
private:
  int stones;
  int hp; // extra hp;
public:
  /* constructor and destructor */
  Thanos(int = 0, int = 100000);
  ~Thanos(); // cout something

  void snap_finger(monster[], int);
  /* show all hps
  / clear half of monster hp, if stone =6*/
  void operator++(); // increase the stone;
};

 Thanos::Thanos(int a, int b){
  stones = a;
  hp = b;
  cout<<"Thanos has arrived with "<< stones <<" stones and "<< hp <<" HP."<<endl;  }

  Thanos::~Thanos(){ 
    cout<<"Thanos left"<<endl;  }

void Thanos::operator++(){
  stones++;  }

void Thanos::snap_finger(monster m[], int n)
  {
  /*if(stones<6) cout<<"Not enough stones"<<endl;
  else
  { int i;
    cout<<"Thanos snapped his fingers"<<endl;
    for(i=0;i<n;i+=2)
    m[i].hp=0;  }*/

  if(stones==6){
    cout<<"Thanos makes everything perfectly balanced"<<endl;
    for(int i=0; i<n/2 ; i+=2){
      this->hp=0;
    }
  }  
    else{
        cout<<"Not enough stones"<<endl;
  }  
}