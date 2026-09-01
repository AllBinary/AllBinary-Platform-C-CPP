
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_THREAD_NULLTHREAD_H
        #define ORG_ALLBINARY_THREAD_NULLTHREAD_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Thread.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullRunnable.h"

class NullThread
            : public Object
         {

    public: static const Thread NULL_THREAD = Thread(NullRunnable::getInstance(), StringUtil::getInstance().EMPTY_STRING);

};

            


        #endif //ORG_ALLBINARY_THREAD_NULLTHREAD_H
