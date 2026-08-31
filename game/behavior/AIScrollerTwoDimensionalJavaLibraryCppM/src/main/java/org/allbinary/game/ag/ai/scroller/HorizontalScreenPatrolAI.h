
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

            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HorizontalScreenPatrolAI: public BasicAI {
        

    public static const SOUND: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(433)!;

    keyDirection: int32_t = Canvas.LEFT;

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: firingX: int32_t = this.displayInfoSingleton!.getLastHalfWidth()!;

    private: firedIndex: int32_t = 0;

    private: const MAX_FIRE: int32_t = 28;

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(240);

    private: const secondaryPlayerQueue: PlayerQueue = SecondaryPlayerQueueFactory.getInstance()!;

    private: const sound: Sound;

public constructor (Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager);

    nextDirection();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_HORIZONTALSCREENPATROLAI_H
