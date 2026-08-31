
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREAINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREAINTERFACE_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeographicMapCellPositionAreaInterface {
        

    GeographicMapCellPosition getNextSurroundingGeographicMapCellPosition();

    BasicArrayList getOccupyingGeographicMapCellPositionList();

    BasicArrayList getSurroundingGeographicMapCellPositionList();

                //@Throws(Exception.constructor)
            
    update(BasicGeographicMap geographicMapInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREAINTERFACE_H
