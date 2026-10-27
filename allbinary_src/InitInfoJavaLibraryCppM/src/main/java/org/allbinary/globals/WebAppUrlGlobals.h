
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_WEBAPPURLGLOBALS_H
        #define ORG_ALLBINARY_GLOBALS_WEBAPPURLGLOBALS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class InitInfo;
class StringValidationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/globals/UrlGlobalsInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WebAppUrlGlobals: public UrlGlobalsInterface {


            
    public: WebAppUrlGlobals();
        
    private: std::string path;

    private: bool isWebappPathSet = false;

    public: bool isTestingMode();

    public: std::string getWebappPath();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setWebappPath(std::string path);

    public: std::string getTestHtmlPath();

                //@Throws(Exception.constructor)
            
    public: std::string getMainPath();

};

            


        #endif //ORG_ALLBINARY_GLOBALS_WEBAPPURLGLOBALS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GLOBALS_WEBAPPURLGLOBALS_H_COMPLETE)
        #define ORG_ALLBINARY_GLOBALS_WEBAPPURLGLOBALS_H_COMPLETE
        #if __has_include(<org/allbinary/business/init/InitInfo.h>)
#include <org/allbinary/business/init/InitInfo.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include("org/allbinary/globals/UrlGlobalsInterface.h")
#include "org/allbinary/globals/UrlGlobalsInterface.h"
#endif

        #endif
    
