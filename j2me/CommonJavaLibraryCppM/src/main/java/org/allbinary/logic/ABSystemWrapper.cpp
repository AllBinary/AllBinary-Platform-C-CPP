
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ABSystemWrapper
            : public Object
         {

    private: static ABSystemWrapper* instance() { static std::unique_ptr<ABSystemWrapper> value(new ABSystemWrapper()); return value.get(); }

    public: static ABSystemWrapper* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ABSystemWrapper::instance();
    
}


    public: template<typename Value> void arraycopy(const std::vector<Value>& src, int32_t srcPos, std::vector<Value>& dest, int32_t destPos, int32_t length) {
        System.arraycopy(src, srcPos, dest, destPos, length);
    }


    public: int64_t currentTimeMillis(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.currentTimeMillis();;
    
}


};

            

