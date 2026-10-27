
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_BUTTON_TOUCHBUTTONANDROIDRESOURCES_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_BUTTON_TOUCHBUTTONANDROIDRESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/button/TouchButtonAndroidResources.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/AndroidResources.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/init/Init.h>

      
#include <org/allbinary/input/motion/button/CommonButtons.h>

      
#include <org/allbinary/input/motion/button/TouchButtonBlankResource.h>

      
#include <org/allbinary/input/motion/button/TouchButtonDownResource.h>

      
#include <org/allbinary/input/motion/button/TouchButtonGenericActionResource.h>

      
#include <org/allbinary/input/motion/button/TouchButtonResource.h>

      
#include <org/allbinary/input/motion/button/TouchButtonStartResource.h>

      
#include <org/allbinary/input/motion/button/TouchButtonStrafeLeftResource.h>

      
#include <org/allbinary/input/motion/button/TouchButtonStrafeRightResource.h>

      
#include <org/allbinary/input/motion/button/TouchButtonTurnLeftResource.h>

      
#include <org/allbinary/input/motion/button/TouchButtonTurnRightResource.h>

      
#include <org/allbinary/input/motion/button/TouchButtonUpResource.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TouchButtonAndroidResources::TouchButtonAndroidResources() {
        }
        
    auto TouchButtonAndroidResources::init() -> void{

    ResourceUtil* resourceUtil = ResourceUtil::getInstance();;
    

    AndroidResources* androidResources = AndroidResources::getInstance();;
    

    std::vector<TouchButtonResource*> RESOURCE_STRING_ARRAY = 
                                                        {
                                                            TouchButtonBlankResource::getInstance(), TouchButtonGenericActionResource::getInstance(), TouchButtonStartResource::getInstance(), TouchButtonUpResource::getInstance(), TouchButtonDownResource::getInstance(), TouchButtonTurnLeftResource::getInstance(), TouchButtonTurnRightResource::getInstance(), TouchButtonStrafeLeftResource::getInstance(), TouchButtonStrafeRightResource::getInstance()
                                                        };;
    

    std::vector<int32_t> RESOURCE_ARRAY = std::vector<int32_t>(RESOURCE_STRING_ARRAY::length);;
    

                        if(CommonButtons::getInstance()->STANDARD_BUTTON_SIZE == 128)
                        
                                    {
                                    RESOURCE_ARRAY[0]= androidResources->raw->touch_button_128_by_128;
    
RESOURCE_ARRAY[1]= androidResources->raw->touch_button_generic_action_128_by_128;
    
RESOURCE_ARRAY[2]= androidResources->raw->touch_button_start_128_by_128;
    
RESOURCE_ARRAY[3]= androidResources->raw->touch_button_up_arrow_128_by_128;
    
RESOURCE_ARRAY[4]= androidResources->raw->touch_button_down_arrow_128_by_128;
    
RESOURCE_ARRAY[5]= androidResources->raw->touch_button_turn_left_arrow_128_by_128;
    
RESOURCE_ARRAY[6]= androidResources->raw->touch_button_turn_right_arrow_128_by_128;
    
RESOURCE_ARRAY[7]= androidResources->raw->touch_button_strafe_left_arrow_128_by_128;
    
RESOURCE_ARRAY[8]= androidResources->raw->touch_button_strafe_right_arrow_128_by_128;
    

                        if(OperatingSystemFactory::getInstance()->getOperatingSystemInstance()->isOverScan())
                        
                                    {
                                    resourceUtil->addResource(RESOURCE_STRING_ARRAY[2]->HINT, Integer.valueOf(androidResources->raw->ouya_o));
    

                                    }
                                

                                    }
                                
                        else {
                            RESOURCE_ARRAY[0]= androidResources->raw->touch_button_64_by_64;
    
RESOURCE_ARRAY[1]= androidResources->raw->touch_button_generic_action_64_by_64;
    
RESOURCE_ARRAY[2]= androidResources->raw->touch_button_start_64_by_64;
    
RESOURCE_ARRAY[3]= androidResources->raw->touch_button_up_arrow_64_by_64;
    
RESOURCE_ARRAY[4]= androidResources->raw->touch_button_down_arrow_64_by_64;
    
RESOURCE_ARRAY[5]= androidResources->raw->touch_button_turn_left_arrow_64_by_64;
    
RESOURCE_ARRAY[6]= androidResources->raw->touch_button_turn_right_arrow_64_by_64;
    
RESOURCE_ARRAY[7]= androidResources->raw->touch_button_strafe_left_arrow_64_by_64;
    
RESOURCE_ARRAY[8]= androidResources->raw->touch_button_strafe_right_arrow_64_by_64;
    

                        }
                            




                        for (
    int32_t index = 0;index < RESOURCE_ARRAY::size(); index++)
        {
resourceUtil->addResource(RESOURCE_STRING_ARRAY[index]->RESOURCE, Integer.valueOf(RESOURCE_ARRAY[index]));
    
}

}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_BUTTON_TOUCHBUTTONANDROIDRESOURCES_CPP
