
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSTRAFELEFTRESOURCE_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSTRAFELEFTRESOURCE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchButtonStrafeLeftResource.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonResource.h"

TouchButtonResource* TouchButtonStrafeLeftResource::instance = new TouchButtonStrafeLeftResource();

    auto TouchButtonStrafeLeftResource::getInstance() -> TouchButtonResource*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchButtonStrafeLeftResource::instance;
    
}


TouchButtonStrafeLeftResource::TouchButtonStrafeLeftResource() : TouchButtonResource("/touch_button_strafe_left_arrow_64_by_64.png", "/touch_button_strafe_left_arrow_hint_64_by_64.png"){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSTRAFELEFTRESOURCE_CPP
