
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/ClassLoader.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WebappClassLoaderInfo
            : public Object
         {

    private: static Object* classLoader = NullUtil::getInstance().NULL_OBJECT;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void setLoader(ClassLoader classLoader);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static ClassLoader getLoader();

private: WebappClassLoaderInfo();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_H
