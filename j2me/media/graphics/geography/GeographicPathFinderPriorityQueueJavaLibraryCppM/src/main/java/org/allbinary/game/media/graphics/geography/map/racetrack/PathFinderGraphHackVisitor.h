
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_H
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicGeographicMap;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //1.4.2
class PathFinderGraphHackVisitor: public BasePathFinderGraphVisitor {

public: PathFinderGraphHackVisitor(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

                //@Throws(Exception.constructor)
            
    public: void visit(Object* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList);
    public: void visit(const std::string& graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) { return visit(JavaString::box(graph), startPathFindingNodeList, endPathFindingNodeList); }

                //@Throws(Exception.constructor)
            
    private: void fixStart(Object* graph, BasicArrayList* startPathFindingNodeList);
    private: void fixStart(const std::string& graph, BasicArrayList* startPathFindingNodeList) { return fixStart(JavaString::box(graph), startPathFindingNodeList); }

                //@Throws(Exception.constructor)
            
    private: void fixEnd(Object* graph, BasicArrayList* endPathFindingNodeList);
    private: void fixEnd(const std::string& graph, BasicArrayList* endPathFindingNodeList) { return fixEnd(JavaString::box(graph), endPathFindingNodeList); }

                //@Throws(Exception.constructor)
            
    private: void fixOverPassEdges(Object* graph);
    private: void fixOverPassEdges(const std::string& graph) { return fixOverPassEdges(JavaString::box(graph)); }

                //@Throws(Exception.constructor)
            
    public: void fixPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList);

                //@Throws(Exception.constructor)
            
    private: void removeOverPassEdges(BasicArrayList* pathList);

    public: bool isValid(Object* graphPath);
    public: bool isValid(const std::string& graphPath) { return isValid(JavaString::box(graphPath)); }

};

            


        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include("org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h")
#include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"
#endif

        #endif
    
