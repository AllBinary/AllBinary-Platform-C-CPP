
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GeographicMapCellPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBaseInterface.h"
class PathFindingNodeCostInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathFindingNodeCostInfoFactoryInterface: public PathFindingNodeCostInfoFactoryBaseInterface {

                //@Throws(Exception.constructor)
            
    public: virtual PathFindingNodeCostInfo* getInstance(GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd) = 0;

    public: virtual PathFindingNodeCostInfo* getInstance(GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition) = 0;

    public: virtual int64_t getTotalCost(GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition) = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBaseInterface.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBaseInterface.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfo.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfo.h"
#endif

        #endif
    
