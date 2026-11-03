
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
        



        #ifndef ORG_ALLBINARY_GAME_GD_RESOURCE_GDLAZYRESOURCES_CPP
        #define ORG_ALLBINARY_GAME_GD_RESOURCE_GDLAZYRESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/gd/resource/GDLazyResources.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GDLazyResources::GDLazyResources() : imageResourceWidthArray({}), imageResourceHeightArray({}), requiredResourcesBeforeLoadingArray(
                                                        {
                                                            
                                                        }) {
        }
        auto GDLazyResources::instance_owner() -> GDLazyResources* { static std::unique_ptr<GDLazyResources> value(new GDLazyResources()); return value.get(); }
GDLazyResources* GDLazyResources::instance = GDLazyResources::instance_owner();

    auto GDLazyResources::getInstance() -> GDLazyResources*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GDLazyResources::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_GD_RESOURCE_GDLAZYRESOURCES_CPP
