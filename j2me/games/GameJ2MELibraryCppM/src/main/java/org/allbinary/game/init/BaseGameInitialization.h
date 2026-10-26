
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
        



        #ifndef ORG_ALLBINARY_GAME_INIT_BASEGAMEINITIALIZATION_H
        #define ORG_ALLBINARY_GAME_INIT_BASEGAMEINITIALIZATION_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/resource/FeaturedResourceRelativeRelationshipFactory.h>

      
#include <org/allbinary/game/resource/ResourceInitialization.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/input/motion/CompleteMotionGestureInputToGameMotionGestureInput.h>

      
#include <org/allbinary/input/motion/button/BasicTouchInputFactory.h>

      
#include <org/allbinary/input/motion/button/CancelTouchButtonInputFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInitializationInterface.h"

class BaseGameInitialization
            : public Object
        : public GameInitializationInterface {

    public: static const BaseGameInitialization NULL_BASE_GAME_INITIALIZATION = BaseGameInitialization({}, 0);

    protected: std::vector<ResourceInitialization> resourceInitializationArray;

    private: int32_t portion;

    private: bool initialized= false;

    protected: const int32_t EARLY_RESOURCES = 0;

    protected: const int32_t GAME_RESOURCES = 1;

    protected: const int32_t EARLY_CHANGABLE_RESOURCES = 2;

    protected: const int32_t GAME_CHANGABLE_RESOURCES = 3;

public: BaseGameInitialization(std::vector<ResourceInitialization> resourceInitializationArray, int32_t portion);

                //@Throws(Exception.constructor)
            
    public: void initKey(int32_t portion);

                //@Throws(Exception.constructor)
            
    protected: void initKeyMapping(AbeClientInformationInterface abeClientInformation, int32_t portion);

                //@Throws(Exception.constructor)
            
    public: void init(AbeClientInformationInterface abeClientInformation, CommandListener commandListener, int32_t level);

    private: bool gameInitialized= false;

    private: bool allLoaded= false;

                //@Throws(Exception.constructor)
            
    public: void resourceInitialization(int32_t level);

    public: bool resourceAnimationChange();

    private: void clearResources();

    protected: void setGameInitialized(bool gameInitialized);

    protected: bool isGameInitialized();

    protected: int32_t getPortion();

    public: void setInitialized(bool initialized);

    public: bool isInitialized();

};

            


        #endif //ORG_ALLBINARY_GAME_INIT_BASEGAMEINITIALIZATION_H
