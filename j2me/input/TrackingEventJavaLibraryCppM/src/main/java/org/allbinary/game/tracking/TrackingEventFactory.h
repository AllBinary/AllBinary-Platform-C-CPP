
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
        



        #ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTFACTORY_H
        #define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TrackingEvent.h"
#include "TrackingEventHandler.h"

class TrackingEventFactory
            : public Object
        : public AllBinaryEventObjectFactoryInterface {

public: TrackingEventFactory();

    public: AllBinaryEventObject getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTFACTORY_H
