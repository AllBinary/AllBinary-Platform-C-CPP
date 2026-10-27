
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
        



        #ifndef ADMIN_TAGS_CUSTOMLOADERTAG_H
        #define ADMIN_TAGS_CUSTOMLOADERTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class JspTagException;
class AppUrlGlobals;
class GLOBALS2;
class URLGLOBALS;
class AbResponseHandler;
class LogUtil;
class LicensingException;
#include <tags/CustomTagSupport.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomLoaderTag: public CustomTagSupport {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string command;

    private: std::string webappPath;

public: CustomLoaderTag();

    public: void setCommand(std::string command);

    public: void setWebappPath(std::string value);

                //@Throws(LicensingException.constructor)
            
    private: void setCustomLoaderWebappPath();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_CUSTOMLOADERTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGS_CUSTOMLOADERTAG_H_COMPLETE)
        #define ADMIN_TAGS_CUSTOMLOADERTAG_H_COMPLETE
        #if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<org/allbinary/globals/AppUrlGlobals.h>)
#include <org/allbinary/globals/AppUrlGlobals.h>
#endif
#if __has_include(<org/allbinary/globals/GLOBALS2.h>)
#include <org/allbinary/globals/GLOBALS2.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbResponseHandler.h>)
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<tags/CustomTagSupport.h>)
#include <tags/CustomTagSupport.h>
#endif

        #endif
    
