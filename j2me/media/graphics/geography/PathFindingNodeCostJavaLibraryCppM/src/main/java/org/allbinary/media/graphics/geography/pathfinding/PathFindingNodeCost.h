
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOST_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOST_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Comparable.h"
        
            #include "java/lang/Exception.h"
        
class StringMaker;
class CommonSeps;
class GeographicMapCellPosition;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"
class PathFindingNodeCostInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathFindingNodeCost: public PathFindingNode, public virtual Comparable<PathFindingNodeCost*> {

    public: static std::vector<std::vector<PathFindingNodeCost*>> NULL_PATH_FINDING_NODE_COST_ARRAY_ARRAY;

    private: CommonSeps* commonSeps;

    public: PathFindingNodeCostInfo* pathFindingNodeCostInfoP;

public: PathFindingNodeCost(Object* parent, GeographicMapCellPosition* geographicMapCellPosition, PathFindingNodeCostInfo* pathFindingNodeCostInfo);
public: PathFindingNodeCost(const std::string& parent, GeographicMapCellPosition* geographicMapCellPosition, PathFindingNodeCostInfo* pathFindingNodeCostInfo) : PathFindingNodeCost(JavaString::box(parent), geographicMapCellPosition, pathFindingNodeCostInfo) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> PathFindingNodeCost(BoxValue parent, GeographicMapCellPosition* geographicMapCellPosition, PathFindingNodeCostInfo* pathFindingNodeCostInfo) : PathFindingNodeCost(JavaBoxes::toObject(parent), geographicMapCellPosition, pathFindingNodeCostInfo) { }
public: template<typename BoxElement> PathFindingNodeCost(const std::vector<BoxElement>& parent, GeographicMapCellPosition* geographicMapCellPosition, PathFindingNodeCostInfo* pathFindingNodeCostInfo) : PathFindingNodeCost(JavaBoxes::toObject(parent), geographicMapCellPosition, pathFindingNodeCostInfo) { }

    public: PathFindingNodeCostInfo* getPathFindingNodeCostInfo();

    public: void setPathFindingNodeCostInfo(PathFindingNodeCostInfo* pathFindingNodeCostInfo);

    public: int32_t compareTo(PathFindingNodeCost* pathFindingNodeCost);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOST_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOST_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOST_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfo.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfo.h"
#endif

        #endif
    
