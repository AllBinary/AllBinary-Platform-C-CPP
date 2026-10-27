
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TouchButtonInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CurrentlyPressedTouchButtonSingleton
            : public virtual Object
         {

    private: static CurrentlyPressedTouchButtonSingleton* instance_owner();
    private: static CurrentlyPressedTouchButtonSingleton* instance;

    public: static CurrentlyPressedTouchButtonSingleton* getInstance();

    /*protected*/ public: BasicArrayList* list;

/*protected*/ public: CurrentlyPressedTouchButtonSingleton();

    public: int32_t size();

    public: TouchButtonInput* removeAt(int32_t index);

    public: bool remove(TouchButtonInput* touchButtonInput);

    public: TouchButtonInput* get(int32_t index);

    public: bool contains(TouchButtonInput* touchButtonInput);

    public: void add(TouchButtonInput* touchButtonInput);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonInput.h")
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#endif

        #endif
    
