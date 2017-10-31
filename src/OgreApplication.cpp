#include "OgreApplication.h"

void OgreApplication::createScene(void)
{
    mSceneMgr->setAmbientLight(Ogre::ColourValue(0.5, 0.5, 0.5));

    mCamera->setPosition(0, 47, 222);

    Ogre::Light* light = mSceneMgr->createLight("MainLight");
    light->setPosition(20.0, 80.0, 50.0);

    Ogre::Entity* ogreEntity = mSceneMgr->createEntity("ogrehead.mesh");

    Ogre::SceneNode* ogreNode = mSceneMgr->getRootSceneNode()->createChildSceneNode();
    ogreNode->attachObject(ogreEntity);
}

OgreApplication::OgreApplication(void) {}

OgreApplication::~OgreApplication(void) {}

int main(int argc, char *argv[])
{
    OgreApplication app;

    try {
        app.go();
    } catch(Ogre::Exception& e)  {
        std::cerr << "An exception has occurred: " << e.getFullDescription().c_str() << std::endl;
    }

    return 0;
}
