
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2009 AllBinary
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_ACTIVITYFRACTUREINPUTUTILFACTORY_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_ACTIVITYFRACTUREINPUTUTILFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/ActivityFractureInputUtilFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/android/ActivityFractureUtil.h>

      
#include <org/allbinary/android/AndroidInfoFactory.h>

      
#include <org/allbinary/android/api1/ActivityFractureUtilAPI1.h>

      
#include <org/allbinary/android/api16/ActivityFractureUtilAPI16.h>

      
#include <org/allbinary/android/api19/ActivityFractureUtilAPI19.h>

      
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ActivityFractureInputUtilFactory::ActivityFractureInputUtilFactory() {
        }
        
    auto ActivityFractureInputUtilFactory::getInstance() -> ActivityFractureUtil*{

    int32_t SDK_VERSION = AndroidInfoFactory::getInstance()->getVersion();;
    

                        if(SDK_VERSION <= 4)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI1::getInstance();;
    

                                    }
                                
                             else 
                        if(SDK_VERSION <= 15)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI5::getInstance();;
    

                                    }
                                
                             else 
                        if(SDK_VERSION <= 16)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI16::getInstance();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI19::getInstance();;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_ACTIVITYFRACTUREINPUTUTILFACTORY_CPP
