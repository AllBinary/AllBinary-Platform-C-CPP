
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_ITEMCOLORFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_ITEMCOLORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/ItemColorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ItemColorFactory::ItemColorFactory() : INVERT_PAINT(static_cast<int32_t>(0xFF000000)), PAINT(static_cast<int32_t>(0xFFe07718)) {
        }
        auto ItemColorFactory::instance_owner() -> ItemColorFactory* { static std::unique_ptr<ItemColorFactory> value(new ItemColorFactory()); return value.get(); }
ItemColorFactory* ItemColorFactory::instance = ItemColorFactory::instance_owner();

    auto ItemColorFactory::getInstance() -> ItemColorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ItemColorFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_ITEMCOLORFACTORY_CPP
