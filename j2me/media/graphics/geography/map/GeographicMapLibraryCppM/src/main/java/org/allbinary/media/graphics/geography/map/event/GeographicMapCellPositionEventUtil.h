
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CellPositionFactory;
class GeographicMapCellPositionTracking;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeographicMapCellPositionEvent;
class GeographicMapCellPositionEventHandler;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCellPositionEventUtil
            : public virtual Object
         {

    private: GeographicMapCellPositionEvent* geographicMapCellPositionEvent;

    private: GeographicMapCellPositionEventHandler* geographicMapCellPositionEventHandler;

public: GeographicMapCellPositionEventUtil(Object* anyType);
public: GeographicMapCellPositionEventUtil(const std::string& anyType) : GeographicMapCellPositionEventUtil(JavaString::box(anyType)) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> GeographicMapCellPositionEventUtil(BoxValue anyType) : GeographicMapCellPositionEventUtil(JavaBoxes::toObject(anyType)) { }
public: template<typename BoxElement> GeographicMapCellPositionEventUtil(const std::vector<BoxElement>& anyType) : GeographicMapCellPositionEventUtil(JavaBoxes::toObject(anyType)) { }

                //@Throws(Exception.constructor)
            
    public: void update(GeographicMapCellPositionTracking* geographicMapCellPositionTracking);

                //@Throws(Exception.constructor)
            
    public: void remove(GeographicMapCellPositionTracking* geographicMapCellPositionTracking);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/CellPositionFactory.h>)
#include <org/allbinary/graphics/CellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEvent.h")
#include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEvent.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventHandler.h")
#include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventHandler.h"
#endif

        #endif
    
