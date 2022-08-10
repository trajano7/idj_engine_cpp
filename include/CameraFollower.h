#ifndef CAMERA_FOLLOWER_H
#define CAMERA_FOLLOWER_H

#include <string>

#include "Component.h"

using namespace std;

class CameraFollower : public Component {

    public:

        CameraFollower(GameObject& associated);
        // CameraFollower(GameObject& associated) : Component(associated);

        void Update(float dt);
        void Render();
        bool Is(string type);

};

#endif
