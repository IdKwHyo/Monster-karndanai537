#ifndef monster_h
#define monster_h

class monster{
private:
 string name;
 int hp, potion;
public:

void operator++();
void operator--();
void operator+=(int); // += hp

void Attack(monster &); // A attack B  A.hp--; B.hp/=2 
//void heal(); // your idea to help revive hp
void print(); // to print all data
bool not_dead() { return hp>0;  }
void heal();

monster(string="New Monster", int=10/2,int=10);
//Alt+126
~monster();

};


void monster::print(){
  cout<<"Monster "<<name;
  cout<<" hp: "<<hp<<" potion: "<<potion<<endl;
  
}
void monster::Attack(monster & b)
{
  cout<<b.name<< " ATTACK!!! "<<name<<endl;
  if(b.hp>10) 
    b.hp-=10;
  else
  {
    b.hp=0;
    cout<<b.name<<" is dead"<<endl;
  }
}

void monster::heal()
{
  if (hp==0)
    return;
  else
  {
    this->hp+=5;
    cout<<this->name<<"Has been healed"<<endl;
  }
}

monster::~monster()
{
  cout<<name << " is killed"<<endl;
}
monster::monster(string n ,int p,int h)
{
  name=n;
  hp=h ;
  potion=p;
  cout<<"monster "<<name <<" is here HAHAHA"<<endl;
}

#endif
