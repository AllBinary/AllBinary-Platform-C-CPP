
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
        



        #ifndef ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSORUTIL_H
        #define ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSORUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SWTProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SWTProcessorUtil
            : public virtual Object
         {

    private: static SWTProcessorUtil* instance_owner();
    private: static SWTProcessorUtil* instance;

    public: static SWTProcessorUtil* getInstance();


            
    public: SWTProcessorUtil();
        
    public: SWTProcessor* swtProcessor;

};

            


        #endif //ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSORUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSORUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSORUTIL_H_COMPLETE
        #if __has_include("org/allbinary/emulator/swt/SWTProcessor.h")
#include "org/allbinary/emulator/swt/SWTProcessor.h"
#endif

        #endif
    
