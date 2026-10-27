
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class StringMaker;
class Direction;
class DirectionFactory;
class CellPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeographicMapCellPosition;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapDirectionUtil
            : public virtual Object
         {

    private: static GeographicMapDirectionUtil* instance_owner();
    private: static GeographicMapDirectionUtil* instance;

    public: static GeographicMapDirectionUtil* getInstance();

private: GeographicMapDirectionUtil();

    private: const std::string MESSAGE = "Cell Position should have been cached!!!";

                //@Throws(Exception.constructor)
            
    public: Direction* getDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: Direction* getEightDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: Direction* getDirectionFromCellPositionToCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);

    private: const std::string ERROR = "Error: ";

    private: const std::string EQUAL = " == ";

                //@Throws(Exception.constructor)
            
    public: Direction* getEightDirectionFromCellPositionToCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionFactory.h>)
#include <org/allbinary/direction/DirectionFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPosition.h>)
#include <org/allbinary/graphics/CellPosition.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#endif

        #endif
    
