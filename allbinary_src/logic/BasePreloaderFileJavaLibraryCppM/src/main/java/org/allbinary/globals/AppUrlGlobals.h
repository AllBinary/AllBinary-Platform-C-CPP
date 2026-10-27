
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_APPURLGLOBALS_H
        #define ORG_ALLBINARY_GLOBALS_APPURLGLOBALS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/globals/UrlGlobalsInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //implements
class AppUrlGlobals: public UrlGlobalsInterface {

    private: static AppUrlGlobals* NULL_APP_URL_GLOBALS_owner();
    public: static AppUrlGlobals* NULL_APP_URL_GLOBALS;


            
    public: AppUrlGlobals();
        
    private: std::string path;

    public: bool isTestingMode();

    public: std::string getWebappPath();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setWebappPath(std::string path);

    public: std::string getTestHtmlPath();

                //@Throws(Exception.constructor)
            
    public: std::string getMainPath();

};

            


        #endif //ORG_ALLBINARY_GLOBALS_APPURLGLOBALS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GLOBALS_APPURLGLOBALS_H_COMPLETE)
        #define ORG_ALLBINARY_GLOBALS_APPURLGLOBALS_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/globals/UrlGlobalsInterface.h")
#include "org/allbinary/globals/UrlGlobalsInterface.h"
#endif

        #endif
    
