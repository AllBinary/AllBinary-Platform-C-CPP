
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_ABSYSTEMWRAPPER_H
        #define ORG_ALLBINARY_LOGIC_ABSYSTEMWRAPPER_H

            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ABSystemWrapper
            : public Object
         {

    private: static ABSystemWrapper instance() { return ABSystemWrapper(); }

    public: static ABSystemWrapper getInstance();

    public: template<typename Value> void arraycopy(const std::vector<Value>& src, int32_t srcPos, std::vector<Value>& dest, int32_t destPos, int32_t length) {
        System.arraycopy(src, srcPos, dest, destPos, length);
    }


    public: int64_t currentTimeMillis();

};

            


        #endif //ORG_ALLBINARY_LOGIC_ABSYSTEMWRAPPER_H
