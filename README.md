# Racing Game 
A simple TopDown Racing Game in C++ Using SDL2

![Gameplay Image](https://github.com/Loris-Moreau/Racing-Game/assets/80474693/0887eb41-7fb4-445a-a9ca-faa8d76a579b)


# Design patterns have been implemented as follows : 
 - Game : Singleton
     - The singleton pattern restricts the initialization of a class to ensure that only one instance of the class can be created.

 - gameObject : Factory
      - The factory pattern takes out the responsibility of instantiating a object from the class to a Factory class.

 - itemFactory : Object Pool (has traffic, perk & player that share functionalities that are overloaded when needed)
      - Object pooling is creating objects of the class at the time of creation and put them into one common pool.
