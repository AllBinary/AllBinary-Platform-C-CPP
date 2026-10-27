
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
        



        #ifndef ORG_ALLBINARY_THREAD_NULLRUNNABLE_H
        #define ORG_ALLBINARY_THREAD_NULLRUNNABLE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ARunnable.h"

class NullRunnable: public ARunnable {

    private: static NullRunnable* instance() { static std::unique_ptr<NullRunnable> value(new NullRunnable()); return value.get(); }

    public: static NullRunnable* getInstance();

private: NullRunnable();

};

            


        #endif //ORG_ALLBINARY_THREAD_NULLRUNNABLE_H
