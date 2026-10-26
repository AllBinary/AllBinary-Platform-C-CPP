
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYINTERFACE_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathFindingNodeCostInfoFactoryBaseInterface.h"
#include "PathFindingNodeCostInfo.h"

class PathFindingNodeCostInfoFactoryInterface: public PathFindingNodeCostInfoFactoryBaseInterface {

                //@Throws(Exception.constructor)
            
    PathFindingNodeCostInfo getInstance(GeographicMapCellPosition comingFromGeographicMapCellPosition, GeographicMapCellPosition geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd);

    PathFindingNodeCostInfo getInstance(GeographicMapCellPosition comingFromGeographicMapCellPosition, GeographicMapCellPosition geographicMapCellPosition);

    int64_t getTotalCost(GeographicMapCellPosition comingFromGeographicMapCellPosition, GeographicMapCellPosition geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYINTERFACE_H
