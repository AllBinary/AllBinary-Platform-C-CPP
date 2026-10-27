
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITION_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeologicalResource;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeologicalGeographicMapCellPosition: public GeographicMapCellPosition {

    private: GeologicalResource* geologicalResource;

public: GeologicalGeographicMapCellPosition(int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height, GeologicalResource* geologicalResource);

    public: GeologicalResource* getGeologicalResource();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITION_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITION_H_COMPLETE
        #if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include("org/allbinary/game/layer/geological/resources/GeologicalResource.h")
#include "org/allbinary/game/layer/geological/resources/GeologicalResource.h"
#endif

        #endif
    
