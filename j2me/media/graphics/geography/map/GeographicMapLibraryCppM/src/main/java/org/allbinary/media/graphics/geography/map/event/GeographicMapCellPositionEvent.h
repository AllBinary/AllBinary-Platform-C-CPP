
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENT_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CellPosition;
class CellPositionFactory;
class StringMaker;
class StringUtil;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
class GeographicMapCellPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCellPositionEvent: public AllBinaryEventObject {

    private: CellPosition* geographicMapCellPosition;

public: GeographicMapCellPositionEvent(Object* anyType, CellPosition* geographicMapCellPosition);

    public: void init(Object* anyType);
    public: void init(const std::string& anyType) { return init(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void init(BoxValue anyType) { return init(JavaBoxes::toObject(anyType)); }

    public: void setGeographicMapCellPosition(GeographicMapCellPosition* geographicMapCellPosition);

    public: GeographicMapCellPosition* getGeographicMapCellPosition();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/CellPosition.h>)
#include <org/allbinary/graphics/CellPosition.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPositionFactory.h>)
#include <org/allbinary/graphics/CellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif

        #endif
    
