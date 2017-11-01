#include "include/OgreApplication.h"

int main(int argc, char *argv[])
{
    mgaf::OgreApplication app;

    try {
        app.go();
    } catch(Ogre::Exception& e)  {
        std::cerr << "An exception has occurred: " << e.getFullDescription().c_str() << std::endl;
    }

    return 0;
}
