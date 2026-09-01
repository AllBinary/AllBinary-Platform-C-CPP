
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

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonInput.h"

class CurrentlyPressedTouchButtonSingleton
            : public Object
         {

    private: static CurrentlyPressedTouchButtonSingleton instance() { return CurrentlyPressedTouchButtonSingleton(); }

    public: static CurrentlyPressedTouchButtonSingleton getInstance();

    protected: const BasicArrayList list = BasicArrayListD();

protected: CurrentlyPressedTouchButtonSingleton();

    public: int32_t size();

    public: TouchButtonInput removeAt(int32_t index);

    public: bool remove(TouchButtonInput touchButtonInput);

    public: TouchButtonInput get(int32_t index);

    public: bool contains(TouchButtonInput touchButtonInput);

    public: void add(TouchButtonInput touchButtonInput);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_H
