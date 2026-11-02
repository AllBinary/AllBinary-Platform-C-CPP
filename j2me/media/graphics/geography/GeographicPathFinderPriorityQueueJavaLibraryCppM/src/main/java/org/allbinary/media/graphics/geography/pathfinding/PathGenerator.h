
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHGENERATOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHGENERATOR_H

        
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
class GeographicMapCellHistory;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathGeneratorInterface.h"
class PathFindingInfo;
class GeographicPathFinderBase;
class MultipassState;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathGenerator
            : public virtual Object
        , public PathGeneratorInterface {

    private: static PathGenerator* SINGLETON_owner();
    private: static PathGenerator* SINGLETON;

    public: static PathGenerator* getInstance();

private: PathGenerator();

                //@Throws(Exception.constructor)
            
    public: void init(Object* geographicMapInterface, int32_t totalPaths);
    public: void init(const std::string& geographicMapInterface, int32_t totalPaths) { return init(JavaString::box(geographicMapInterface), totalPaths); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void init(BoxValue geographicMapInterface, int32_t totalPaths) { return init(JavaBoxes::toObject(geographicMapInterface), totalPaths); }

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getInstanceNoCache(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* createList(BasicGeographicMap* geographicMapInterface, GeographicMapCellHistory* geographicMapCellHistory, PathFindingInfo* pathFindingInfo, int32_t totalPaths);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* create(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* createN(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths, MultipassState* multipassState);

                //@Throws(Exception.constructor)
            
    private: bool isValid(BasicArrayList* pathList, GeographicMapCellHistory* geographicMapCellHistory);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHGENERATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHGENERATOR_H_COMPLETE
        #if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathGeneratorInterface.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathGeneratorInterface.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h")
#include "org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/MultipassState.h")
#include "org/allbinary/media/graphics/geography/pathfinding/MultipassState.h"
#endif

        #endif
    
