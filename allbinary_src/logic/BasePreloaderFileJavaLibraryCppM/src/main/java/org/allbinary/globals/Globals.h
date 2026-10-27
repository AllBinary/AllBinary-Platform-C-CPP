
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_GLOBALS_H
        #define ORG_ALLBINARY_GLOBALS_GLOBALS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/ClassLoader.h"
        
class LogUtil;
class StringMaker;
class StringValidationUtil;
class WebappClassLoaderInfo;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AppUrlGlobals;
class URLGLOBALS;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Globals
            : public virtual Object
         {

    private: static Globals* instance_owner();
    private: static Globals* instance;

    public: static Globals* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: Globals();

    public: void init(ClassLoader* classLoader, std::string pathString);

};

            


        #endif //ORG_ALLBINARY_GLOBALS_GLOBALS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GLOBALS_GLOBALS_H_COMPLETE)
        #define ORG_ALLBINARY_GLOBALS_GLOBALS_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>)
#include <org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/globals/AppUrlGlobals.h")
#include "org/allbinary/globals/AppUrlGlobals.h"
#endif
#if __has_include("org/allbinary/globals/URLGLOBALS.h")
#include "org/allbinary/globals/URLGLOBALS.h"
#endif

        #endif
    
