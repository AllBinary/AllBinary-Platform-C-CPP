
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/ClassLoader.h"
        
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WebappClassLoaderInfo
            : public virtual Object
         {

    private: static Object* classLoader;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void setLoader(ClassLoader* classLoader);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static ClassLoader* getLoader();

private: WebappClassLoaderInfo();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif

        #endif
    
