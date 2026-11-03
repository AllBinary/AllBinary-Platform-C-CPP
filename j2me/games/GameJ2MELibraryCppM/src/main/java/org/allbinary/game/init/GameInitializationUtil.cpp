
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_CPP
        #define ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/init/GameInitializationUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/game/configuration/event/GameInitializedEvent.h>

      
#include <org/allbinary/game/configuration/event/GameInitializedEventHandler.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/init/GameInitializationInterface.h"
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"


GameInitializationUtil::GameInitializationUtil() : EVENT(new GameInitializedEvent(this)) {
        }
        auto GameInitializationUtil::instance_owner() -> GameInitializationUtil* { static std::unique_ptr<GameInitializationUtil> value(new GameInitializationUtil()); return value.get(); }
GameInitializationUtil* GameInitializationUtil::instance = GameInitializationUtil::instance_owner();

                //@Throws(Exception.constructor)
            
    auto GameInitializationUtil::initDemo(AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface) -> void{

    MainFeatureFactory* mainFeatureFactory = MainFeatureFactory::getInstance();;
    

                        if(ChangedGameFeatureListener::getInstance()->isChangedFeature(mainFeatureFactory->STATIC))
                        
                                    {
                                    
    GameInitializationInterface* gameInitializationInterface = gameInitializationInterfaceFactoryInterface->getInstance();;
    

    Features* features = Features::getInstance();;
    

                        if(features->isFeature(mainFeatureFactory->LOAD_ALL))
                        
                                    {
                                    this->initGame(abeClientInformation, canvas, gameInitializationInterfaceFactoryInterface);
    

                                    }
                                
                             else 
                        if(features->isFeature(mainFeatureFactory->LOAD_ONDEMAND))
                        
                                    {
                                    
    ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    
gameInitializationInterface->init(abeClientInformation, canvas->getCustomCommandListener(), resourceLoadingLevelFactory->LOAD_EARLY->getLevel());
    
this->EVENT->setResourceLoadingLevel(resourceLoadingLevelFactory->LOAD_EARLY);
    

                                    }
                                
                        else {
                            


                            throw Exception("No Loading Feature Available");
                    

                        }
                            
GameInitializedEventHandler::getInstance()->fireEvent(this->EVENT);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto GameInitializationUtil::initGame(AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface) -> void{

                        if(ChangedGameFeatureListener::getInstance()->isChangedFeature(MainFeatureFactory::getInstance()->STATIC))
                        
                                    {
                                    
    GameInitializationInterface* gameInitializationInterface = gameInitializationInterfaceFactoryInterface->getInstance();;
    

    ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    
gameInitializationInterface->init(abeClientInformation, canvas->getCustomCommandListener(), resourceLoadingLevelFactory->LOAD_ALL->getLevel());
    
this->EVENT->setResourceLoadingLevel(resourceLoadingLevelFactory->LOAD_ALL);
    
GameInitializedEventHandler::getInstance()->fireEvent(this->EVENT);
    
ChangedGameFeatureListener::getInstance()->remove(MainFeatureFactory::getInstance()->STATIC);
    

                                    }
                                
}


    auto GameInitializationUtil::getInstance() -> GameInitializationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameInitializationUtil::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_CPP
