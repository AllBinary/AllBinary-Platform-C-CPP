
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABCustomItem.h"

class CustomItemUtil
            : public Object
         {

    private: static CustomItemUtil* instance() { static std::unique_ptr<CustomItemUtil> value(new CustomItemUtil()); return value.get(); }

    public: static CustomItemUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CustomItemUtil::instance();
    
}


    public: const std::vector<ABCustomItem*> CUSTOM_ITEM_ARRAY = {};

};

            

