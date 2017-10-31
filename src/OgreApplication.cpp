#include "OgreApplication.h"

void mgaf::OgreApplication::createScene(void)
{
    Ogre::LogManager::getSingletonPtr()->logMessage("[dbg]: in createScene");
}

mgaf::OgreApplication::OgreApplication(void) {}

mgaf::OgreApplication::~OgreApplication(void) {}

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
