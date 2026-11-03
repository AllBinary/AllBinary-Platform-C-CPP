
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_H
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class StringUtil;
class BasicGeographicMap;
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>
class PathFindingNode;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //1.4.2
class BasePathFinderGraphVisitor: public PathFinderGraphVisitorBase {

    /*protected*/ public: BasicGeographicMap* geographicMapInterface;

    /*protected*/ public: int32_t edgeMinimum;

    /*protected*/ public: int32_t minPathWeight;

    /*protected*/ public: int32_t maxPathWeight;

public: BasePathFinderGraphVisitor(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

                //@Throws(Exception.constructor)
            
    public: void visit(Object* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList);
    public: void visit(const std::string& graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) { return visit(JavaString::box(graph), startPathFindingNodeList, endPathFindingNodeList); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void visit(BoxValue graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) { return visit(JavaBoxes::toObject(graph), startPathFindingNodeList, endPathFindingNodeList); }
    public: template<typename BoxElement> void visit(const std::vector<BoxElement>& graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) { return visit(JavaBoxes::toObject(graph), startPathFindingNodeList, endPathFindingNodeList); }

                //@Throws(Exception.constructor)
            
    public: void fixPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList);

    public: bool isValid(Object* graphPath);
    public: bool isValid(const std::string& graphPath) { return isValid(JavaString::box(graphPath)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool isValid(BoxValue graphPath) { return isValid(JavaBoxes::toObject(graphPath)); }
    public: template<typename BoxElement> bool isValid(const std::vector<BoxElement>& graphPath) { return isValid(JavaBoxes::toObject(graphPath)); }

    public: std::string getInvalidReason(Object* graphPath);
    public: std::string getInvalidReason(const std::string& graphPath) { return getInvalidReason(JavaString::box(graphPath)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> std::string getInvalidReason(BoxValue graphPath) { return getInvalidReason(JavaBoxes::toObject(graphPath)); }
    public: template<typename BoxElement> std::string getInvalidReason(const std::vector<BoxElement>& graphPath) { return getInvalidReason(JavaBoxes::toObject(graphPath)); }

};

            


        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
