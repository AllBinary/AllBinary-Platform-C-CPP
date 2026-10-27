
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class StringMaker;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NullPathFindingLayer;
class PathFindingLayerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSLayerEvent: public AllBinaryEventObject {

    private: PathFindingLayerInterface* rtsLayer;

public: RTSLayerEvent(PathFindingLayerInterface* rtsLayer);

    public: std::string toString();

    public: PathFindingLayerInterface* getRtsLayer();

    public: void setRtsLayer(PathFindingLayerInterface* rtsLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYEREVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RTSLAYEREVENT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYEREVENT_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include("org/allbinary/game/layer/NullPathFindingLayer.h")
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/PathFindingLayerInterface.h")
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#endif

        #endif
    
