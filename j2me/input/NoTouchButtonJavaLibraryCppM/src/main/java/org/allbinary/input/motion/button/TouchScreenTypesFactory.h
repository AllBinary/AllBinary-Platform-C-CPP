
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPESFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPESFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchScreenType.h"

class TouchScreenTypesFactory
            : public Object
         {

    private: static TouchScreenTypesFactory* instance() { static std::unique_ptr<TouchScreenTypesFactory> value(new TouchScreenTypesFactory()); return value.get(); }

    public: static TouchScreenTypesFactory* getInstance();

    public: TouchScreenType* FINGER = new TouchScreenType("Finger");

    public: TouchScreenType* NOTOUCH = new TouchScreenType("No Touch");

    public: TouchScreenType* STYLUS = new TouchScreenType("Stylus");

    public: TouchScreenType* UNDEFINED = new TouchScreenType("Undefined");

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPESFACTORY_H
