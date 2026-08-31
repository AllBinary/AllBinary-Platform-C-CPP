
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
        

    private: static const instance: TouchScreenTypesFactory = new TouchScreenTypesFactory();

    public static TouchScreenTypesFactory getInstance();

    public const FINGER: TouchScreenType = new TouchScreenType("Finger");

    public const NOTOUCH: TouchScreenType = new TouchScreenType("No Touch");

    public const STYLUS: TouchScreenType = new TouchScreenType("Stylus");

    public const UNDEFINED: TouchScreenType = new TouchScreenType("Undefined");

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPESFACTORY_H
