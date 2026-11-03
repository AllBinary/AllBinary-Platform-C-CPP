
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYBASE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class BasicGeographicMap;
class GeographicMapCellPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBaseInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathFindingNodeCostInfoFactoryBase
            : public virtual Object
        , public virtual PathFindingNodeCostInfoFactoryBaseInterface {

    private: static PathFindingNodeCostInfoFactoryBase* NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE_owner();
    public: static PathFindingNodeCostInfoFactoryBase* NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE;


            
    public: PathFindingNodeCostInfoFactoryBase();
        
                //@Throws(Exception.constructor)
            
    public: void create(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd);

                //@Throws(Exception.constructor)
            
    public: int64_t getTotalCost(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYBASE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYBASE_H_COMPLETE
        #if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBaseInterface.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBaseInterface.h"
#endif

        #endif
    
