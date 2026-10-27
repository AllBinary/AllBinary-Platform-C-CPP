
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITIONFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryTiledLayer;
class MyRandomFactory;
class BasicGeographicMap;
class GeographicMapCellPosition;
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeologicalGeographicMapCellPosition;
class GeologicalResource;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeologicalGeographicMapCellPositionFactory
            : public virtual Object
        , public GeographicMapCellPositionFactoryInterface {

    private: std::vector<int32_t> resourcePerMapCellType;

public: GeologicalGeographicMapCellPositionFactory(std::vector<int32_t> resourcePerMapCellType);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getInstance(BasicGeographicMap* geographicMapInterface, int32_t i_column, int32_t i_row, int32_t columns, int32_t rows, int32_t width, int32_t height);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/game/rand/MyRandomFactory.h>)
#include <org/allbinary/game/rand/MyRandomFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>
#endif
#if __has_include("org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h")
#include "org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h"
#endif
#if __has_include("org/allbinary/game/layer/geological/resources/GeologicalResource.h")
#include "org/allbinary/game/layer/geological/resources/GeologicalResource.h"
#endif

        #endif
    
