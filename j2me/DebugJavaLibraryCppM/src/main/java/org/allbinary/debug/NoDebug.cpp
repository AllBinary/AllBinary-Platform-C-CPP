
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
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DebugInterface.h"

class NoDebug
            : public Object
        : public DebugInterface {
        

    private: static SINGLETON: DebugInterface = new NoDebug();

    public static DebugInterface getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoDebug.SINGLETON;
    
}


    public start(){
}


    public stop(){
}


    public int64_t getMaxTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 10000;
    
}


    public int64_t getStartTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

