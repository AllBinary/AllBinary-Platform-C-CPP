
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TouchScreenType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchScreenTypesFactory
            : public virtual Object
         {

    private: static TouchScreenTypesFactory* instance_owner();
    private: static TouchScreenTypesFactory* instance;

    public: static TouchScreenTypesFactory* getInstance();


            
    public: TouchScreenTypesFactory();
        
    public: TouchScreenType* FINGER;

    public: TouchScreenType* NOTOUCH;

    public: TouchScreenType* STYLUS;

    public: TouchScreenType* UNDEFINED;

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPESFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPESFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPESFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/input/motion/button/TouchScreenType.h")
#include "org/allbinary/input/motion/button/TouchScreenType.h"
#endif

        #endif
    
