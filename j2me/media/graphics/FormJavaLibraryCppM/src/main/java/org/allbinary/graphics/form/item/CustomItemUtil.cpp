
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/CustomItemUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABCustomItem.h"


CustomItemUtil::CustomItemUtil() : CUSTOM_ITEM_ARRAY({}) {
        }
        auto CustomItemUtil::instance_owner() -> CustomItemUtil* { static std::unique_ptr<CustomItemUtil> value(new CustomItemUtil()); return value.get(); }
CustomItemUtil* CustomItemUtil::instance = CustomItemUtil::instance_owner();

    auto CustomItemUtil::getInstance() -> CustomItemUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CustomItemUtil::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_CPP
