//
//  monster.h
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#ifndef monster_h
#define monster_h
class monster{
private:
    string name;
     int hp,potion;
public:
    void Attack(monster &);
    void heal();
    monster(string n,int h,int p);
};

monster::monster(string n ="slime" ,int h=10,int p= 20){ 
    name =n;
    h>200?  hp=200:hp=h;
    p>10?potion=10: potion=p;

    cout<<"Monster "<<name<<" are coming"<<endl;
}
/*monster::~monster(){
    cout<<"bye bye"<<name<<hp:<<hp<<endl;
}
#endif /* monster_h */

#endif