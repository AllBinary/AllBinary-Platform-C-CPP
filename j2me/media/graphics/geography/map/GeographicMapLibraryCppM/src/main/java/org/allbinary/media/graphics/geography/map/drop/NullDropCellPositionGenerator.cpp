
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_NULLDROPCELLPOSITIONGENERATOR_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_NULLDROPCELLPOSITIONGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/drop/NullDropCellPositionGenerator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/drop/BaseDropCellPositionGenerator.h"


NullDropCellPositionGenerator::NullDropCellPositionGenerator() {
        }
        auto NullDropCellPositionGenerator::instance_owner() -> NullDropCellPositionGenerator* { static std::unique_ptr<NullDropCellPositionGenerator> value(new NullDropCellPositionGenerator()); return value.get(); }
NullDropCellPositionGenerator* NullDropCellPositionGenerator::instance = NullDropCellPositionGenerator::instance_owner();

    auto NullDropCellPositionGenerator::getInstance() -> NullDropCellPositionGenerator*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullDropCellPositionGenerator::instance;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_NULLDROPCELLPOSITIONGENERATOR_CPP
