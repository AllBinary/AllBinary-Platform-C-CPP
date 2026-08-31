
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

#include <org/eclipse/swt/widgets/Display.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SWTProcessor.h"

class SWTRunnableProcessor: public SWTProcessor {
        

    private: static const instanceR: SWTRunnableProcessor = new SWTRunnableProcessor();

    public static SWTRunnableProcessor getInstance();

private constructor ();

    public process(Display display);

};

            


        #endif //ORG_ALLBINARY_EMULATOR_SWT_SWTRUNNABLEPROCESSOR_H
