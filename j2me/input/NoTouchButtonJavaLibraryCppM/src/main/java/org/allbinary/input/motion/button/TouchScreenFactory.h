
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TouchScreenTypesFactory;
class TouchScreenType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchScreenFactory
            : public virtual Object
         {

    private: static TouchScreenFactory* SINGLETON_owner();
    private: static TouchScreenFactory* SINGLETON;

    public: static TouchScreenFactory* getInstance();

    private: bool multiTouch= false;

    private: bool touch= false;

    private: TouchScreenType* touchScreenType;

private: TouchScreenFactory();

    public: bool isMultiTouch();

    public: void setTouch(bool touch);

    public: bool isTouch();

    public: TouchScreenType* getTouchScreenType();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/input/motion/button/TouchScreenTypesFactory.h")
#include "org/allbinary/input/motion/button/TouchScreenTypesFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchScreenType.h")
#include "org/allbinary/input/motion/button/TouchScreenType.h"
#endif

        #endif
    
