
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
        



        #ifndef ADMIN_TAGS_TABLETAG_H
        #define ADMIN_TAGS_TABLETAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>
class HttpServletRequest;
class JspTagException;
class TagHelperFactoryInterface;
class AbResponseHandler;
class LogUtil;
class SqlStrings;
class BooleanUtil;
class StringMaker;
class StringValidationUtil;
class LicensingException;
#include <tags/PropertiesTag.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TableTag: public PropertiesTag {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string enabled;

    private: TagHelperFactoryInterface* tagHelperFactoryInterface;

    private: TagHelperFactoryInterface* tagRequestHelperFactoryInterface;

    private: Object* requestObject;

    private: int32_t current;

    private: int32_t total;

public: TableTag();

    public: void setIsSelected(std::string enabled);

                //@Throws(Exception.constructor)
            
    public: bool isEnabled();

    /*protected*/ public: void setTagHelperFactory(TagHelperFactoryInterface* tagHelperFactoryInterface);

    /*protected*/ public: TagHelperFactoryInterface* getTagHelperFactoryInterface();

    /*protected*/ public: void setTagRequestHelperFactory(TagHelperFactoryInterface* tagHelperFactoryInterface);

    /*protected*/ public: TagHelperFactoryInterface* getTagRequestHelperFactoryInterface();

    public: void setCurrent(int32_t current);

    public: int32_t getCurrent();

    public: void setTotal(int32_t total);

    public: int32_t getTotal();

                //@Throws(LicensingException.constructor)
            
    public: std::string drop();

                //@Throws(LicensingException.constructor)
            
    public: std::string create();

                //@Throws(LicensingException.constructor)
            
    public: std::string restore();

                //@Throws(LicensingException.constructor)
            
    public: std::string backup();

                //@Throws(LicensingException.constructor)
            
    public: std::string insert();

                //@Throws(LicensingException.constructor)
            
    public: std::string delete_();

                //@Throws(LicensingException.constructor)
            
    public: std::string update();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_TABLETAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGS_TABLETAG_H_COMPLETE)
        #define ADMIN_TAGS_TABLETAG_H_COMPLETE
        #if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<admin/taghelpers/TagHelperFactoryInterface.h>)
#include <admin/taghelpers/TagHelperFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbResponseHandler.h>)
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/SqlStrings.h>)
#include <org/allbinary/logic/communication/sql/SqlStrings.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanUtil.h>)
#include <org/allbinary/logic/java/bool/BooleanUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<tags/PropertiesTag.h>)
#include <tags/PropertiesTag.h>
#endif

        #endif
    
