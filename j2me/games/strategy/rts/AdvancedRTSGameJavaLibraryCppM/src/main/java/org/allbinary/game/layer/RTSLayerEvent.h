
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYEREVENT_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYEREVENT_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"

class RTSLayerEvent: public AllBinaryEventObject {

    private: PathFindingLayerInterface* rtsLayer = NullPathFindingLayer::NULL_PATH_FINDING_LAYER;

public: RTSLayerEvent(PathFindingLayerInterface* rtsLayer);

    public: std::string toString();

    public: PathFindingLayerInterface* getRtsLayer();

    public: void setRtsLayer(PathFindingLayerInterface* rtsLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYEREVENT_H
