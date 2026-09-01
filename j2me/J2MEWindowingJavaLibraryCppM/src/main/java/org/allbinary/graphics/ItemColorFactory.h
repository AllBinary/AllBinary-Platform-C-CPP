
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_ITEMCOLORFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_ITEMCOLORFACTORY_H

            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ItemColorFactory
            : public Object
         {

    private: static ItemColorFactory instance() { return ItemColorFactory(); }

    public: static ItemColorFactory getInstance();

    public: int32_t INVERT_PAINT = static_cast<int32_t>(0xFF000000);

    public: int32_t PAINT = static_cast<int32_t>(0xFFe07718);

    public: int32_t TEXT_FIELD_NO_FOCUS = 0x7F7F7F;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_ITEMCOLORFACTORY_H
