
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
        



#include <org/eclipse/swt/widgets/Display.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SWTProcessor.h"

class SWTRunnableProcessor: public SWTProcessor {
        

    private: static const instanceR: SWTRunnableProcessor = new SWTRunnableProcessor();

    public static SWTRunnableProcessor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SWTRunnableProcessor.instanceR;
    
}


private constructor (){

            super();
        }


    public process(Display display){
this.runnable.run();
    
}


};

            

