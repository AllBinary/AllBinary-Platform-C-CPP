
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
        



        #ifndef ORG_ALLBINARY_SERVLET_BLISKETSERVLETUTIL_H
        #define ORG_ALLBINARY_SERVLET_BLISKETSERVLETUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class HttpServletRequest;
class AppUrlGlobals;
class URLGLOBALS;
class AbPathData;
class WebappClassLoaderInfo;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BlisketServletUtil
            : public virtual Object
         {

    private: static BlisketServletUtil* instance_owner();
    private: static BlisketServletUtil* instance;

    public: static BlisketServletUtil* getInstance();


            
    public: BlisketServletUtil();
        
    public: void init(HttpServletRequest* request);

};

            


        #endif //ORG_ALLBINARY_SERVLET_BLISKETSERVLETUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_SERVLET_BLISKETSERVLETUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_SERVLET_BLISKETSERVLETUTIL_H_COMPLETE
        #if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/globals/AppUrlGlobals.h>)
#include <org/allbinary/globals/AppUrlGlobals.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>)
#include <org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>
#endif

        #endif
    
