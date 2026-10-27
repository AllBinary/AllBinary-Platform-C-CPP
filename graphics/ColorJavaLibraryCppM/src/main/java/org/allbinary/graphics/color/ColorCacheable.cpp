
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEABLE_CPP
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/color/ColorCacheable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/Color.h"


ColorCacheable::ColorCacheable(Object* key){
this->key= key;
    
this->color= new Color((key).intValue());
    
}


    auto ColorCacheable::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->key;
    
}


    auto ColorCacheable::getColor() -> Color*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->color;
    
}


    auto ColorCacheable::setColor(Color* color) -> void{
this->color= color;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEABLE_CPP
