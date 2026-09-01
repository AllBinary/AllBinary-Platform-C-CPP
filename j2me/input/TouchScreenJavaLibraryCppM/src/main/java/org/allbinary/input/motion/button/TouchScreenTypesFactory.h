
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

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchScreenType.h"

class TouchScreenTypesFactory
            : public Object
         {

    private: static TouchScreenTypesFactory instance() { return TouchScreenTypesFactory(); }

    public: static TouchScreenTypesFactory getInstance();

    public: const TouchScreenType FINGER = TouchScreenType("Finger");

    public: const TouchScreenType NOTOUCH = TouchScreenType("No Touch");

    public: const TouchScreenType STYLUS = TouchScreenType("Stylus");

    public: const TouchScreenType UNDEFINED = TouchScreenType("Undefined");

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPESFACTORY_H
