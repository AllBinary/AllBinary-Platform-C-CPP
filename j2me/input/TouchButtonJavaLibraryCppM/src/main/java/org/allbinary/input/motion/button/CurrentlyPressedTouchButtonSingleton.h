
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonInput.h"

class CurrentlyPressedTouchButtonSingleton
            : public Object
         {

    private: static CurrentlyPressedTouchButtonSingleton* instance() { static std::unique_ptr<CurrentlyPressedTouchButtonSingleton> value(new CurrentlyPressedTouchButtonSingleton()); return value.get(); }

    public: static CurrentlyPressedTouchButtonSingleton* getInstance();

    protected: BasicArrayList* list = new BasicArrayListD();

protected: CurrentlyPressedTouchButtonSingleton();

    public: int32_t size();

    public: TouchButtonInput* removeAt(int32_t index);

    public: bool remove(TouchButtonInput* touchButtonInput);

    public: TouchButtonInput* get(int32_t index);

    public: bool contains(TouchButtonInput* touchButtonInput);

    public: void add(TouchButtonInput* touchButtonInput);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_H
