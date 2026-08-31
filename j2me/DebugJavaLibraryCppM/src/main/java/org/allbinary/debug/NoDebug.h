
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
        



        #ifndef ORG_ALLBINARY_DEBUG_NODEBUG_H
        #define ORG_ALLBINARY_DEBUG_NODEBUG_H

            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DebugInterface.h"

class NoDebug
            : public Object
        : public DebugInterface {
        

    private: static SINGLETON: DebugInterface = new NoDebug();

    public static DebugInterface getInstance();

    public start();

    public stop();

    public int64_t getMaxTime();

    public int64_t getStartTime();

    public bool isRunning();

};

            


        #endif //ORG_ALLBINARY_DEBUG_NODEBUG_H
