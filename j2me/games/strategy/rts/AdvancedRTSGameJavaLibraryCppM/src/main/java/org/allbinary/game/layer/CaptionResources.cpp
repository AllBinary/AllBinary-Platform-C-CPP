
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_CAPTIONRESOURCES_CPP
        #define ORG_ALLBINARY_GAME_LAYER_CAPTIONRESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/CaptionResources.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto CaptionResources::instance_owner() -> CaptionResources* { static std::unique_ptr<CaptionResources> value(new CaptionResources()); return value.get(); }
CaptionResources* CaptionResources::instance = CaptionResources::instance_owner();

    auto CaptionResources::getInstance() -> CaptionResources*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CaptionResources::instance;
    
}


CaptionResources::CaptionResources(){
}




        #endif //ORG_ALLBINARY_GAME_LAYER_CAPTIONRESOURCES_CPP
