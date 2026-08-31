
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
        



            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ItemColorFactory
            : public Object
         {
        

    private: static const instance: ItemColorFactory = new ItemColorFactory();

    public static ItemColorFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ItemColorFactory.instance;
    
}


    public INVERT_PAINT: int32_t = static_cast<int32_t>(0xFF000000);

    public PAINT: int32_t = static_cast<int32_t>(0xFFe07718);

    public TEXT_FIELD_NO_FOCUS: int32_t = 0x7F7F7F;

};

            

