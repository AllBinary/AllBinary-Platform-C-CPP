
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AndroidInfoFactory;
class VirtualKeyboardAPI1;
class VirtualKeyboardAPI3;
class Activity;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class VirtualKeyboard;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VirtualKeyboardFactory
            : public virtual Object
         {

    private: static VirtualKeyboard* virtualKeyboard;

    public: static void init(Activity* activity);

    public: static VirtualKeyboard* getInstance();


            
    public: VirtualKeyboardFactory();
        
};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARDFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARDFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARDFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/android/AndroidInfoFactory.h>)
#include <org/allbinary/android/AndroidInfoFactory.h>
#endif
#if __has_include(<org/allbinary/android/input/api1/VirtualKeyboardAPI1.h>)
#include <org/allbinary/android/input/api1/VirtualKeyboardAPI1.h>
#endif
#if __has_include(<org/allbinary/android/input/api3/VirtualKeyboardAPI3.h>)
#include <org/allbinary/android/input/api3/VirtualKeyboardAPI3.h>
#endif
#if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include("org/allbinary/android/input/VirtualKeyboard.h")
#include "org/allbinary/android/input/VirtualKeyboard.h"
#endif

        #endif
    
