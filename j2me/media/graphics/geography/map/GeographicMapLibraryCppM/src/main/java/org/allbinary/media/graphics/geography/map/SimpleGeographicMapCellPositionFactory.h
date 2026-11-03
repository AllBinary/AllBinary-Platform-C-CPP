
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAPCELLPOSITIONFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAPCELLPOSITIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"
class GeographicMapCellPosition;
class BasicGeographicMap;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SimpleGeographicMapCellPositionFactory
            : public virtual Object
        , public virtual GeographicMapCellPositionFactoryInterface {

    private: static GeographicMapCellPosition* NULL_GEOGRAPHIC_MAP_CELL_POSITION_owner();
    public: static GeographicMapCellPosition* NULL_GEOGRAPHIC_MAP_CELL_POSITION;


            
    public: SimpleGeographicMapCellPositionFactory();
        
    public: GeographicMapCellPosition* getInstance(BasicGeographicMap* geographicMapInterface, int32_t i_column, int32_t i_row, int32_t columns, int32_t rows, int32_t width, int32_t height);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAPCELLPOSITIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAPCELLPOSITIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAPCELLPOSITIONFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#endif

        #endif
    
