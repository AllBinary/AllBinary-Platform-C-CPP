
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInitializationInterface.h"

class BaseGameInitialization
            : public Object
        : public GameInitializationInterface {
        

    public static const NULL_BASE_GAME_INITIALIZATION: BaseGameInitialization = new BaseGameInitialization([], 0);

    const resourceInitializationArray: std::vector<ResourceInitialization>;

    private: const portion: int32_t;

    private: initialized: bool= false;

    const EARLY_RESOURCES: int32_t = 0;

    const GAME_RESOURCES: int32_t = 1;

    const EARLY_CHANGABLE_RESOURCES: int32_t = 2;

    const GAME_CHANGABLE_RESOURCES: int32_t = 3;

public constructor (std::vector<ResourceInitialization> resourceInitializationArray, int32_t portion);

                //@Throws(Exception.constructor)
            
    public initKey(int32_t portion);

                //@Throws(Exception.constructor)
            
    initKeyMapping(AbeClientInformationInterface abeClientInformation, int32_t portion);

                //@Throws(Exception.constructor)
            
    public init(AbeClientInformationInterface abeClientInformation, CommandListener commandListener, int32_t level);

    private: gameInitialized: bool= false;

    private: allLoaded: bool= false;

                //@Throws(Exception.constructor)
            
    public resourceInitialization(int32_t level);

    public bool resourceAnimationChange();

    clearResources();

    setGameInitialized(bool gameInitialized);

    bool isGameInitialized();

    int32_t getPortion();

    public setInitialized(bool initialized);

    public bool isInitialized();

};

            


        #endif //ORG_ALLBINARY_GAME_INIT_BASEGAMEINITIALIZATION_H
