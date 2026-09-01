
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PAINT_INITUPDATEPAINTABLE_H
        #define ORG_ALLBINARY_GRAPHICS_PAINT_INITUPDATEPAINTABLE_H

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Paintable.h"
#include "InitUpdatePaintableInterface.h"

class InitUpdatePaintable: public Paintable, public InitUpdatePaintableInterface {

protected: InitUpdatePaintable();

                //@Throws(Exception.constructor)
            
    public: void init();

    public: void update();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_INITUPDATEPAINTABLE_H
