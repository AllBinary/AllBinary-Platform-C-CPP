
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITION_CPP
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/geological/resources/GeologicalResource.h"


GeologicalGeographicMapCellPosition::GeologicalGeographicMapCellPosition(int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height, GeologicalResource* geologicalResource) : GeographicMapCellPosition(column, row, columns, rows, width, height){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->geologicalResource= geologicalResource;
    
}


    auto GeologicalGeographicMapCellPosition::getGeologicalResource() -> GeologicalResource*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geologicalResource;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITION_CPP
