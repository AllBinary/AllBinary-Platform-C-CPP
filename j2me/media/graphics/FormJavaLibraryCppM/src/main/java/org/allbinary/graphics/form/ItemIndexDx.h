
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEMINDEXDX_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEMINDEXDX_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ItemIndexDx
            : public Object
         {

    private: static ItemIndexDx instance() { return ItemIndexDx(); }

    public: static ItemIndexDx getInstance();

                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEMINDEXDX_H
