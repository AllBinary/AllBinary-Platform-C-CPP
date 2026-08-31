
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
        



        #ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_H
        #define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_H

#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TrackingEventHandler.h"

class TrackingEvent: public AllBinaryEventObject {
        

    private: layerInterface: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

public constructor (any = {} allBinaryLayerInterface);

    public init(any = {} anyType);

    public AllBinaryLayer getLayerInterface();

    setLayerInterface(AllBinaryLayer layerInterface);

    public setLayerInterfaceForCircularStaticPool(AllBinaryLayer layerInterface);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_H
