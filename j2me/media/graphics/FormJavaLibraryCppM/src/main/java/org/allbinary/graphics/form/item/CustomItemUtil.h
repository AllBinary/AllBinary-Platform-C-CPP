
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

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABCustomItem.h"

class CustomItemUtil
            : public Object
         {
        

    private: static const instance: CustomItemUtil = new CustomItemUtil();

    public static CustomItemUtil getInstance();

    public const CUSTOM_ITEM_ARRAY: std::vector<ABCustomItem> = [];

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_H
