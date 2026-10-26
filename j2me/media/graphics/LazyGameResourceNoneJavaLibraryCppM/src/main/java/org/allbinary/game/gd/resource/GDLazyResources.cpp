
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
        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GDLazyResources
            : public Object
         {

    private: static GDLazyResources instance() { return GDLazyResources(); }

    public: static GDLazyResources getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GDLazyResources::instance();
    
}


    public: const std::vector<int32_t> imageResourceWidthArray = {};

    public: const std::vector<int32_t> imageResourceHeightArray = {};

    public: const std::vector<std::string> requiredResourcesBeforeLoadingArray = 
                                                        {
                                                            
                                                        };

};

            

