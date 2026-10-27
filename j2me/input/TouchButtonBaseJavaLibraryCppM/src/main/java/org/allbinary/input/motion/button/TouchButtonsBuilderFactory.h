
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSBUILDERFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSBUILDERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NoButtonsTouchInputFactory;
class BaseTouchInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchButtonsBuilderFactory
            : public virtual Object
         {

    private: static TouchButtonsBuilderFactory* NO_TOUCH_BUTTON_BUILDER_FACTORY_owner();
    public: static TouchButtonsBuilderFactory* NO_TOUCH_BUTTON_BUILDER_FACTORY;


            
    public: TouchButtonsBuilderFactory();
        
    public: BaseTouchInput* getInstance();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSBUILDERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSBUILDERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSBUILDERFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/input/motion/button/NoButtonsTouchInputFactory.h")
#include "org/allbinary/input/motion/button/NoButtonsTouchInputFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/BaseTouchInput.h")
#include "org/allbinary/input/motion/button/BaseTouchInput.h"
#endif

        #endif
    
