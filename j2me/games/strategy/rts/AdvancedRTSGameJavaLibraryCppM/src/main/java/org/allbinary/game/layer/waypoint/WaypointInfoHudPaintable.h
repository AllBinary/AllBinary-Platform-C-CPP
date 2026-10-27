
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Font;
class Graphics;
class NullPathFindingLayer;
class PathFindingLayerInterface;
class RTSLayer;
#include <org/allbinary/game/layer/SelectionHudPaintable.h>
class KeyValueDrawString;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointInfoHudPaintable: public SelectionHudPaintable {

    private: KeyValueDrawString* keyvalueDrawString;

    /*protected*/ public: PathFindingLayerInterface* rtsLayerP;

    private: int32_t textLine2Y= 0;

public: WaypointInfoHudPaintable();

    public: void updateMeasurement(Graphics* graphics);

    public: void updateSelectionInfo();

    public: void setRtsLayer(RTSLayer* rtsLayer);

    public: PathFindingLayerInterface* getRtsLayer();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/layer/NullPathFindingLayer.h>)
#include <org/allbinary/game/layer/NullPathFindingLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer.h>)
#include <org/allbinary/game/layer/RTSLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/SelectionHudPaintable.h>)
#include <org/allbinary/game/layer/SelectionHudPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/draw/KeyValueDrawString.h>)
#include <org/allbinary/graphics/draw/KeyValueDrawString.h>
#endif

        #endif
    
