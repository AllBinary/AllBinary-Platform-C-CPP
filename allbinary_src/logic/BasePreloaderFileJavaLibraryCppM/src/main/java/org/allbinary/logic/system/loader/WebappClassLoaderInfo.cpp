
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/loader/WebappClassLoaderInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/ClassLoader.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* WebappClassLoaderInfo::classLoader = NullUtil::getInstance()->NULL_OBJECT;

WebappClassLoaderInfo::WebappClassLoaderInfo(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto WebappClassLoaderInfo::setLoader(ClassLoader* classLoader) -> void{
WebappClassLoaderInfo::classLoader= classLoader;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto WebappClassLoaderInfo::getLoader() -> ClassLoader*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<ClassLoader*>(WebappClassLoaderInfo::classLoader);
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_CPP
