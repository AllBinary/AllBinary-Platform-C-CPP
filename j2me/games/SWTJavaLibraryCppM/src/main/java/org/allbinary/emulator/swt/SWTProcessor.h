
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
        



        #ifndef ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_H
        #define ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
class NullRunnable;
class Display;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SWTProcessor
            : public virtual Object
         {

    private: static SWTProcessor* instance_owner();
    private: static SWTProcessor* instance;

    public: static SWTProcessor* getInstance();

/*protected*/ public: SWTProcessor();

    public: Runnable* runnable;

    public: void process(Display* display);

};

            


        #endif //ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/thread/NullRunnable.h>)
#include <org/allbinary/thread/NullRunnable.h>
#endif
#if __has_include(<org/eclipse/swt/widgets/Display.h>)
#include <org/eclipse/swt/widgets/Display.h>
#endif

        #endif
    
