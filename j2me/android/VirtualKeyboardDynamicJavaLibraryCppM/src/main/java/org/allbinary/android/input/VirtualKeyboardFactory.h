
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARDFACTORY_H
        #define ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARDFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/android/AndroidInfoFactory.h>

      
#include <org/allbinary/android/input/api1/VirtualKeyboardAPI1.h>

      
#include <org/allbinary/android/input/api3/VirtualKeyboardAPI3.h>

      
#include <android/app/Activity.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VirtualKeyboard.h"

class VirtualKeyboardFactory
            : public Object
         {

    private: static VirtualKeyboard virtualKeyboard = VirtualKeyboard::NULL_VIRTUAL_KEYBOARD;

    public: static void init(Activity activity);

    public: static VirtualKeyboard getInstance();

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARDFACTORY_H
