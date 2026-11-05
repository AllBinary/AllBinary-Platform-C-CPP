
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class NullUtil;
class CommonSeps;
class StringMaker;
class GeographicMapCellPosition;
class SimpleGeographicMapCellPositionFactory;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathFindingNode
            : public virtual Object
         {

    public: Object* parent;

    public: GeographicMapCellPosition* geographicMapCellPosition;

public: PathFindingNode(Object* parent, GeographicMapCellPosition* geographicMapCellPosition);
public: PathFindingNode(const std::string& parent, GeographicMapCellPosition* geographicMapCellPosition) : PathFindingNode(JavaString::box(parent), geographicMapCellPosition) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> PathFindingNode(BoxValue parent, GeographicMapCellPosition* geographicMapCellPosition) : PathFindingNode(JavaBoxes::toObject(parent), geographicMapCellPosition) { }
public: template<typename BoxElement> PathFindingNode(const std::vector<BoxElement>& parent, GeographicMapCellPosition* geographicMapCellPosition) : PathFindingNode(JavaBoxes::toObject(parent), geographicMapCellPosition) { }

    public: PathFindingNode* getParentP();

    public: void setGeographicMapCellPositionP(GeographicMapCellPosition* geographicMapCellPosition);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif

        #endif
    
