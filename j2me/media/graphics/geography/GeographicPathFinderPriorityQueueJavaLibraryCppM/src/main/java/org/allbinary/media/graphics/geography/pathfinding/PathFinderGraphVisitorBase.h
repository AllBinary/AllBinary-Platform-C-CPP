
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDERGRAPHVISITORBASE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDERGRAPHVISITORBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //1.4.2
class PathFinderGraphVisitorBase
            : public virtual Object
         {


            
    public: PathFinderGraphVisitorBase();
        
                //@Throws(Exception.constructor)
            
    public: void visit(Object* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList);
    public: void visit(const std::string& graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) { return visit(JavaString::box(graph), startPathFindingNodeList, endPathFindingNodeList); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void visit(BoxValue graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) { return visit(JavaBoxes::toObject(graph), startPathFindingNodeList, endPathFindingNodeList); }

                //@Throws(Exception.constructor)
            
    public: void fixPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList);

    public: bool isValid(Object* graphPath);
    public: bool isValid(const std::string& graphPath) { return isValid(JavaString::box(graphPath)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool isValid(BoxValue graphPath) { return isValid(JavaBoxes::toObject(graphPath)); }

    public: std::string getInvalidReason(Object* graphPath);
    public: std::string getInvalidReason(const std::string& graphPath) { return getInvalidReason(JavaString::box(graphPath)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> std::string getInvalidReason(BoxValue graphPath) { return getInvalidReason(JavaBoxes::toObject(graphPath)); }

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDERGRAPHVISITORBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDERGRAPHVISITORBASE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDERGRAPHVISITORBASE_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
