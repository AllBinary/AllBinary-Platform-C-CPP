
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_STATICPATHGENERATOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_STATICPATHGENERATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class BasicArrayList;
class BasicArrayListD;
class CommonStrings;
class LogUtil;
class PreLogUtil;
class CellPosition;
class StringMaker;
class SmallIntegerSingletonFactory;
class StringUtil;
class BasicGeographicMap;
class BasicGeographicMapCellPositionFactory;
class GeographicMapCellHistory;
class GeographicMapCellPosition;
class PathData;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathGeneratorInterface.h"
class PathCacheFactory;
class PathFindingInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StaticPathGenerator
            : public virtual Object
        , public PathGeneratorInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: BasicArrayListUtil* basicArrayListUtil;

/*protected*/ public: StaticPathGenerator();

                //@Throws(Exception.constructor)
            
    public: void init(Object* geographicMapInterface, int32_t totalPaths);
    public: void init(const std::string& geographicMapInterface, int32_t totalPaths) { return init(JavaString::box(geographicMapInterface), totalPaths); }

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* getGeographicMapCellPositionListFromBasicGeographicMapCellPositionList(BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory, BasicArrayList* pathList);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* createList(BasicGeographicMap* geographicMapInterface, GeographicMapCellHistory* geographicMapCellHistory, PathFindingInfo* pathFindingInfo, int32_t totalPaths);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_STATICPATHGENERATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_STATICPATHGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_STATICPATHGENERATOR_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPosition.h>)
#include <org/allbinary/graphics/CellPosition.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/PathData.h>)
#include <org/allbinary/media/graphics/geography/map/PathData.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathGeneratorInterface.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathGeneratorInterface.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathCacheFactory.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathCacheFactory.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#endif

        #endif
    
