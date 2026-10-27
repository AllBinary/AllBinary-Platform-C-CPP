
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
        



        #ifndef TAGS_VALIDATIONTRANSFORMTAG_H
        #define TAGS_VALIDATIONTRANSFORMTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>
class HttpServletRequest;
class JspTagException;
class AbResponseHandler;
class LogUtil;
class StringMaker;
class LicensingException;
class ValidatedViewHelperFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "tags/TransformTag.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ValidationTransformTag: public TransformTag {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string xslFile;

    private: bool logic;

public: ValidationTransformTag();

    public: void setXsl(std::string value);

    public: void setLogic(bool logic);

                //@Throws(Exception.constructor)
            
    private: bool isValid();

                //@Throws(Exception.constructor)
            
    private: std::string validationInfo();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

    public: int32_t doEndTag();

};

            


        #endif //TAGS_VALIDATIONTRANSFORMTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGS_VALIDATIONTRANSFORMTAG_H_COMPLETE)
        #define TAGS_VALIDATIONTRANSFORMTAG_H_COMPLETE
        #if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbResponseHandler.h>)
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<taghelpers/ValidatedViewHelperFactory.h>)
#include <taghelpers/ValidatedViewHelperFactory.h>
#endif
#if __has_include("tags/TransformTag.h")
#include "tags/TransformTag.h"
#endif

        #endif
    
