
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

#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/NullGameCanvas.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DestroyedEventHandler.h"

class DestroyedEvent: public AllBinaryEventObject {

    private: AllBinaryGameCanvas allBinaryGameCanvas = NullGameCanvas::getInstance();

    private: AllBinaryLayer allBinaryLayerInterface = AllBinaryLayer::NULL_ALLBINARY_LAYER;

public: DestroyedEvent(AllBinaryGameCanvas combatGameCanvas);

    public: AllBinaryGameCanvas getAllBinaryGameCanvas();

    public: AllBinaryLayer getLayerInterface();

    private: void setAllBinaryGameCanvas(AllBinaryGameCanvas allBinaryGameCanvas);

    public: void setLayerInterfaceForCircularStaticPool(AllBinaryLayer allBinaryLayerInterface);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H
