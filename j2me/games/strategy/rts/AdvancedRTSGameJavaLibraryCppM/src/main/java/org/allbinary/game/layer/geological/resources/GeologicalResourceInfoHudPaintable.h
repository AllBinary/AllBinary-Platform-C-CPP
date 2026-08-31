
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLE_H

#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/graphics/draw/KeyValueDrawCharArray.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeologicalGeographicMapCellPosition.h"

class GeologicalResourceInfoHudPaintable: public WaypointInfoHudPaintable {
        

    private: static const RESOURCES: string = "Resources: ";

    private: const keyvalueDrawString: KeyValueDrawCharArray;

    private: fontHeight: int32_t = 0;

public constructor ();

    public updateMeasurement(Graphics graphics);

    public updateSelectionInfo();

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLE_H
