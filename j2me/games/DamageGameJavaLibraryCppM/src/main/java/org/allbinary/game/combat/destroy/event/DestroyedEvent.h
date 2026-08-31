
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/NullGameCanvas.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DestroyedEventHandler.h"

class DestroyedEvent: public AllBinaryEventObject {
        

    private: allBinaryGameCanvas: AllBinaryGameCanvas = NullGameCanvas.getInstance()!;

    private: allBinaryLayerInterface: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

public constructor (AllBinaryGameCanvas combatGameCanvas);

    public AllBinaryGameCanvas getAllBinaryGameCanvas();

    public AllBinaryLayer getLayerInterface();

    setAllBinaryGameCanvas(AllBinaryGameCanvas allBinaryGameCanvas);

    public setLayerInterfaceForCircularStaticPool(AllBinaryLayer allBinaryLayerInterface);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H
