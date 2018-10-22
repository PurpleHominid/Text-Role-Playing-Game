#include <iostream>
#include <cstdlib>
#include <ctime>


class stats {
  public: //available outside the class
    void setStrength(int v) { strength=v; }
    void setAgility(int v) { agility=v; }
    void setStamina(int v) { stamina=v; }
    void setIntellect(int v) { intellect=v; }

    int getStength() { return strength; }
    int getAgility() { return agility; }
    int getStamina() { return stamina; }
    int getIntellect() { return intellect; }

  protected: //available withing derived and base classes

  private: //available within class only
    int strength;
    int agility;
    int stamina;
    int intellect;

};


class persona {
  public:
    void setName(std::string v) { name=v; }
    void setWorldX(int v) { worldx = v; }
    void setWorldY(int v) { worldx = v; }

    std::string getName() { return name; }
    int getWorldX() { return worldx; }
    int getWorldY() { return worldy; }

  protected:

  private:
    int RandomNo(int lowest, int highest) {
      int randomInteger;
      srand(time(NULL));
      randomInteger = (lowest + rand() % highest) + 1;
      return randomInteger;
    } 

  std::string name;
  int worldx=RandomNo(1, 20), worldy=RandomNo(1, 20);

};


class creature: public stats, public persona {
  public:
  protected:
  private:

};



int main() {
  std::cout << "Simple RPG version 1.0!\n";

  creature player, mob;
  player.setName("Artemis");
  player.setWorldX(20);
  player.setWorldY(23);


  mob.setName("Falkor");
  mob.setWorldX(18);
  mob.setWorldY(32);


  std::cout << std::endl << "Player name: " << player.getName() << std::endl << "World X:" << player.getWorldX() << ", Y:" << player.getWorldY() << std::endl;
  std::cout << std::endl << "Mob name: " << mob.getName() << std::endl << "World X:" << mob.getWorldX() << ", Y:" << mob.getWorldY() << std::endl;


}
