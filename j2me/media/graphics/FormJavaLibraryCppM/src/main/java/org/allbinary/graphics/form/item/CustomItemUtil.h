
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ABCustomItem;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomItemUtil
            : public virtual Object
         {

    private: static CustomItemUtil* instance_owner();
    private: static CustomItemUtil* instance;

    public: static CustomItemUtil* getInstance();


            
    public: CustomItemUtil();
        
    public: std::vector<ABCustomItem*> CUSTOM_ITEM_ARRAY;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_H_COMPLETE
        #if __has_include("org/allbinary/graphics/form/item/ABCustomItem.h")
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#endif

        #endif
    
