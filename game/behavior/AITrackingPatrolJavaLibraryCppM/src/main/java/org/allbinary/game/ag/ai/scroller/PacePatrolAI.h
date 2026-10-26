
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAI_H

            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionCompositeInterface.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/game/tracking/TrackingEventHandler.h>

      
#include <org/allbinary/game/tracking/TrackingEventListenerInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasePatrolAI.h"

class PacePatrolAI: public BasePatrolAI, public TrackingEventListenerInterface {

    private: BasicArrayList trackingList;

    private: int32_t firingDistance= 0;

    protected: bool isFollowLimitedByTerrain = false;

public: PacePatrolAI(ABHashtable<Object*, Object*> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager);

    private: Direction setFiringDirectionForTargetIfInRange();

    public: void disable();

    public: void onEvent(AllBinaryEventObject eventObject);

    public: void onMovement(TrackingEvent trackingEvent);

    public: int32_t getFiringDistance();

    public: void setFiringDistance(int32_t firingDistance);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAI_H
