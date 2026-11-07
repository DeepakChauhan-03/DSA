#include<iostream>
using namespace std;

class Player{
    private:
        int health;
        int age;
        int score;
        bool alive;
    public:
    //getters functions
       int getHealth(){
        return health;
       }    
       int getAge(){
        return age;
       }
       int getScore(){
        return score;
       }
       bool isAlive(){
        return alive;
       }

     //setters functions
    
     int setHealth(int health){
        this->health = health;
     }
     int setAge(int age){
        this->age = age;
     }
     int setScore(int score){
        this->score = score;
     }
     bool isAlive(bool alive){
        this->alive = alive;
     }


};
int main(){
    Player deepak;
    deepak.setAge(20);
    cout<<deepak.getAge();
    return 0;
}