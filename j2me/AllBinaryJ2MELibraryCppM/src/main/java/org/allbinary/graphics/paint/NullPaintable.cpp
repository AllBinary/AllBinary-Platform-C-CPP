
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PAINT_NULLPAINTABLE_CPP
        #define ORG_ALLBINARY_GRAPHICS_PAINT_NULLPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/paint/NullPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/paint/Paintable.h"

auto NullPaintable::SINGLETON_owner() -> NullPaintable* { static std::unique_ptr<NullPaintable> value(new NullPaintable()); return value.get(); }
NullPaintable* NullPaintable::SINGLETON = NullPaintable::SINGLETON_owner();

NullPaintable::NullPaintable(){
}


    auto NullPaintable::getInstance() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullPaintable::SINGLETON;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_NULLPAINTABLE_CPP
