
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_SIMPLEPATHFINDERGRAPHVISITORFACTORY_H
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_SIMPLEPATHFINDERGRAPHVISITORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class BasicGeographicMap;
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorFactoryBase.h>
class PathFinderGraphVisitorBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasePathFinderGraphVisitor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SimplePathFinderGraphVisitorFactory: public PathFinderGraphVisitorFactoryBase {

    private: int32_t edgeMinimum;

    private: int32_t minPathWeight;

    private: int32_t maxPathWeight;

public: SimplePathFinderGraphVisitorFactory(int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

    public: PathFinderGraphVisitorBase* getInstance(BasicGeographicMap* geographicMapInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_SIMPLEPATHFINDERGRAPHVISITORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_SIMPLEPATHFINDERGRAPHVISITORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_SIMPLEPATHFINDERGRAPHVISITORFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorFactoryBase.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorFactoryBase.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>
#endif
#if __has_include("org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h")
#include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"
#endif

        #endif
    
