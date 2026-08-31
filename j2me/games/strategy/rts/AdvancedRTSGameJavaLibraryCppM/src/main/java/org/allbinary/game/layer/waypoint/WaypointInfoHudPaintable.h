
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

#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/NullPathFindingLayer.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/SelectionHudPaintable.h>

      
#include <org/allbinary/graphics/draw/KeyValueDrawString.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WaypointInfoHudPaintable: public SelectionHudPaintable {
        

    private: const keyvalueDrawString: KeyValueDrawString;

    rtsLayerP: PathFindingLayerInterface = NullPathFindingLayer.NULL_PATH_FINDING_LAYER;

    private: textLine2Y: int32_t= 0;

public constructor ();

    public updateMeasurement(Graphics graphics);

    public updateSelectionInfo();

    public setRtsLayer(RTSLayer rtsLayer);

    public PathFindingLayerInterface getRtsLayer();

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLE_H
