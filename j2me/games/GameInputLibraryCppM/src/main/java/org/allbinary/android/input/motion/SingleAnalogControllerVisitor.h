
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_SINGLEANALOGCONTROLLERVISITOR_H
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_SINGLEANALOGCONTROLLERVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class AnalogLocationInput;
class AnalogLocationInputFactory;
class AllBinaryLayerManager;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/AnalogControllerVisitor.h"
class AnalogLocationInputProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SingleAnalogControllerVisitor: public AnalogControllerVisitor {

    private: int32_t playerInputId;

public: SingleAnalogControllerVisitor(int32_t playerInputId);

    public: void process(AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_SINGLEANALOGCONTROLLERVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_MOTION_SINGLEANALOGCONTROLLERVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_SINGLEANALOGCONTROLLERVISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/analog/AnalogLocationInput.h>)
#include <org/allbinary/game/input/analog/AnalogLocationInput.h>
#endif
#if __has_include(<org/allbinary/game/input/analog/AnalogLocationInputFactory.h>)
#include <org/allbinary/game/input/analog/AnalogLocationInputFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include("org/allbinary/android/input/motion/AnalogControllerVisitor.h")
#include "org/allbinary/android/input/motion/AnalogControllerVisitor.h"
#endif
#if __has_include("org/allbinary/android/input/motion/AnalogLocationInputProcessor.h")
#include "org/allbinary/android/input/motion/AnalogLocationInputProcessor.h"
#endif

        #endif
    
