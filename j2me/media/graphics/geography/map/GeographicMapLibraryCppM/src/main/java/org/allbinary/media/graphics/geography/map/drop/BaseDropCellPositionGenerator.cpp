
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_BASEDROPCELLPOSITIONGENERATOR_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_BASEDROPCELLPOSITIONGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/drop/BaseDropCellPositionGenerator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionGeneratorInterface.h"


BaseDropCellPositionGenerator::BaseDropCellPositionGenerator() {
        }
        
    auto BaseDropCellPositionGenerator::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getClass()->getName();;
    
}


                //@Throws(Exception.constructor)
            
    auto BaseDropCellPositionGenerator::update(AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface) -> void{
}


                //@Throws(Exception.constructor)
            
    auto BaseDropCellPositionGenerator::isDropAllowedAt(GeographicMapCellPosition* geographicMapCellPosition) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto BaseDropCellPositionGenerator::processTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_BASEDROPCELLPOSITIONGENERATOR_CPP
