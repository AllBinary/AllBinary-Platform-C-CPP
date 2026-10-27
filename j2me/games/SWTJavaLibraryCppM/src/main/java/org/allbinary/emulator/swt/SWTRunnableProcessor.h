
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_EMULATOR_SWT_SWTRUNNABLEPROCESSOR_H
        #define ORG_ALLBINARY_EMULATOR_SWT_SWTRUNNABLEPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Display;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/emulator/swt/SWTProcessor.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SWTRunnableProcessor: public SWTProcessor {

    private: static SWTRunnableProcessor* instanceR_owner();
    private: static SWTRunnableProcessor* instanceR;

    public: static SWTRunnableProcessor* getInstance();

private: SWTRunnableProcessor();

    public: void process(Display* display);

};

            


        #endif //ORG_ALLBINARY_EMULATOR_SWT_SWTRUNNABLEPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_EMULATOR_SWT_SWTRUNNABLEPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_EMULATOR_SWT_SWTRUNNABLEPROCESSOR_H_COMPLETE
        #if __has_include(<org/eclipse/swt/widgets/Display.h>)
#include <org/eclipse/swt/widgets/Display.h>
#endif
#if __has_include("org/allbinary/emulator/swt/SWTProcessor.h")
#include "org/allbinary/emulator/swt/SWTProcessor.h"
#endif

        #endif
    
