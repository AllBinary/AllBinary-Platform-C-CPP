
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
        



        #ifndef ADMIN_TAGS_QUOTEREQUESTTAG_H
        #define ADMIN_TAGS_QUOTEREQUESTTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>
class JspTagException;
class QuoteHelperFactory;
class QuoteRequestHelperFactory;
class StoreFrontData;
class AbResponseHandler;
class LogUtil;
class LicensingException;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class QuoteRequestTag: public TableTag {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string storeName;

public: QuoteRequestTag();

    public: void setStoreName(std::string storeName);

                //@Throws(LicensingException.constructor)
            
    private: std::string email();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_QUOTEREQUESTTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGS_QUOTEREQUESTTAG_H_COMPLETE)
        #define ADMIN_TAGS_QUOTEREQUESTTAG_H_COMPLETE
        #if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
#endif
#if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<admin/taghelpers/QuoteHelperFactory.h>)
#include <admin/taghelpers/QuoteHelperFactory.h>
#endif
#if __has_include(<admin/taghelpers/QuoteRequestHelperFactory.h>)
#include <admin/taghelpers/QuoteRequestHelperFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
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
#if __has_include("admin/tags/TableTag.h")
#include "admin/tags/TableTag.h"
#endif

        #endif
    
