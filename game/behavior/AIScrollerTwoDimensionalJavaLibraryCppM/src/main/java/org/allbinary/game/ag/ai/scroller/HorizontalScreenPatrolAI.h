
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_HORIZONTALSCREENPATROLAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_HORIZONTALSCREENPATROLAI_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/audio/PlayerQueue.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HorizontalScreenPatrolAI: public BasicAI {

    public: static inline int32_t SOUND = SmallIntegerSingletonFactory::getInstance()->getAt(433);

    protected: int32_t keyDirection = Canvas::LEFT;

    private: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: int32_t firingX = this->displayInfoSingleton->getLastHalfWidth();

    private: int32_t firedIndex = 0;

    private: const int32_t MAX_FIRE = 28;

    private: TimeDelayHelper* timeDelayHelper = new TimeDelayHelper(240);

    private: PlayerQueue* secondaryPlayerQueue = SecondaryPlayerQueueFactory::getInstance();

    private: Sound* sound;

public: HorizontalScreenPatrolAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager);

    protected: void nextDirection();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_HORIZONTALSCREENPATROLAI_H
