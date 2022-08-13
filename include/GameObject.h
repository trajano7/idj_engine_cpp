#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include "Rect.h"
#include <vector>
#include <string>
#include <memory>

using namespace std;

class Component;

//Class GameObject groups some logics implemented on the components, so it function in the state dependeds of its components
class GameObject {

    public:

        GameObject();
        ~GameObject();

        void Start();
        void Update(float dt);
        void Render();
        bool IsDead();
        void RequestDelete();
        void AddComponent(Component* cpt);
        void RemoveComponent(Component* cpt);
        Component* GetComponent(string type);

        Rect box;
        bool started;

    private:

        //There are several types of componentes, each component assign a certain behavior to a GameObject
        vector <unique_ptr<Component>> components;
        bool isDead;

};

#endif