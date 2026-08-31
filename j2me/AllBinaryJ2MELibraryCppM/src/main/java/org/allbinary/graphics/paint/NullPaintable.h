
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PAINT_NULLPAINTABLE_H
        #define ORG_ALLBINARY_GRAPHICS_PAINT_NULLPAINTABLE_H

#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Paintable.h"

class NullPaintable: public Paintable {
        

    private: static const SINGLETON: NullPaintable = new NullPaintable();

    public static Paintable getInstance();

private constructor ();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_NULLPAINTABLE_H
