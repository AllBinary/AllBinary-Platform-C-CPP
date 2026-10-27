
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/ClassLoader.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WebappClassLoaderInfo
            : public Object
         {

    private: static inline Object* classLoader = NullUtil::getInstance()->NULL_OBJECT;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void setLoader(ClassLoader* classLoader){
WebappClassLoaderInfo::classLoader= classLoader;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static ClassLoader* getLoader(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<ClassLoader*>(WebappClassLoaderInfo::classLoader);
    
}


private: WebappClassLoaderInfo(){
}


};

            

