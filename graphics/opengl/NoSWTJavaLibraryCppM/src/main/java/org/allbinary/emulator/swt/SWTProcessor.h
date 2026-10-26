
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/eclipse/swt/widgets/Display.h>

      
#include <org/allbinary/thread/NullRunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SWTProcessor
            : public Object
         {

    private: static SWTProcessor instance() { return SWTProcessor(); }

    public: static SWTProcessor getInstance();

    public: Runnable runnable = NullRunnable::getInstance();

    public: void process(Display display);

};

            


        #endif //ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_H
