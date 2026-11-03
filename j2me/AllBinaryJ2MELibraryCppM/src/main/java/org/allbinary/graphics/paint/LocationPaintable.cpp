
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PAINT_LOCATIONPAINTABLE_CPP
        #define ORG_ALLBINARY_GRAPHICS_PAINT_LOCATIONPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/paint/LocationPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/paint/LocationPaintableInterface.h"


LocationPaintable::LocationPaintable() {
        }
        auto LocationPaintable::instance_owner() -> LocationPaintable* { static std::unique_ptr<LocationPaintable> value(new LocationPaintable()); return value.get(); }
LocationPaintable* LocationPaintable::instance = LocationPaintable::instance_owner();

    auto LocationPaintable::getInstance() -> LocationPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LocationPaintable::instance;
    
}


    auto LocationPaintable::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_LOCATIONPAINTABLE_CPP
