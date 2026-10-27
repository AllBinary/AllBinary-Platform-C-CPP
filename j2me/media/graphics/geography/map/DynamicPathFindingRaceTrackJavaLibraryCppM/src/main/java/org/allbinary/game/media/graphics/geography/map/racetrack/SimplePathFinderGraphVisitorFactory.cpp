
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_SIMPLEPATHFINDERGRAPHVISITORFACTORY_CPP
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_SIMPLEPATHFINDERGRAPHVISITORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/media/graphics/geography/map/racetrack/SimplePathFinderGraphVisitorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorFactoryBase.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"


SimplePathFinderGraphVisitorFactory::SimplePathFinderGraphVisitorFactory(int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight){
this->edgeMinimum= edgeMinimum;
    
this->minPathWeight= minPathWeight;
    
this->maxPathWeight= maxPathWeight;
    
}


    auto SimplePathFinderGraphVisitorFactory::getInstance(BasicGeographicMap* geographicMapInterface) -> PathFinderGraphVisitorBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasePathFinderGraphVisitor(geographicMapInterface, this->edgeMinimum, this->minPathWeight, this->maxPathWeight);
    
}




        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_SIMPLEPATHFINDERGRAPHVISITORFACTORY_CPP
