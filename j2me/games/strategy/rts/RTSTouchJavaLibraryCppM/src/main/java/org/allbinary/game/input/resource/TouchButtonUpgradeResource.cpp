
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_RESOURCE_TOUCHBUTTONUPGRADERESOURCE_CPP
        #define ORG_ALLBINARY_GAME_INPUT_RESOURCE_TOUCHBUTTONUPGRADERESOURCE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/resource/TouchButtonUpgradeResource.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/input/motion/button/TouchButtonResource.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
TouchButtonResource* TouchButtonUpgradeResource::instance = new TouchButtonUpgradeResource();

    auto TouchButtonUpgradeResource::getInstance() -> TouchButtonResource*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchButtonUpgradeResource::instance;
    
}


TouchButtonUpgradeResource::TouchButtonUpgradeResource() : TouchButtonResource("/touch_button_upgrade_64_by_64.png", "/touch_button_upgrade_hint_64_by_64.png"){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_RESOURCE_TOUCHBUTTONUPGRADERESOURCE_CPP
