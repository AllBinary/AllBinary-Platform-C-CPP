
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARDFACTORY_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARDFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/VirtualKeyboardFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/android/AndroidInfoFactory.h>

      
#include <org/allbinary/android/input/api1/VirtualKeyboardAPI1.h>

      
#include <org/allbinary/android/input/api3/VirtualKeyboardAPI3.h>

      
#include <android/app/Activity.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/VirtualKeyboard.h"


VirtualKeyboardFactory::VirtualKeyboardFactory() {
        }
        VirtualKeyboard* VirtualKeyboardFactory::virtualKeyboard = VirtualKeyboard::NULL_VIRTUAL_KEYBOARD;

    auto VirtualKeyboardFactory::init(Activity* activity) -> void{

    int32_t SDK_VERSION = AndroidInfoFactory::getInstance()->getVersion();;
    

                        if(SDK_VERSION <= 2)
                        
                                    {
                                    VirtualKeyboardFactory::virtualKeyboard= new VirtualKeyboardAPI1(activity);
    

                                    }
                                
                        else {
                            VirtualKeyboardFactory::virtualKeyboard= new VirtualKeyboardAPI3(activity);
    

                        }
                            
}


    auto VirtualKeyboardFactory::getInstance() -> VirtualKeyboard*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VirtualKeyboardFactory::virtualKeyboard;
    
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARDFACTORY_CPP
