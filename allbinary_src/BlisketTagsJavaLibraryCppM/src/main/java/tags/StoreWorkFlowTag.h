
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
        



        #ifndef TAGS_STOREWORKFLOWTAG_H
        #define TAGS_STOREWORKFLOWTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>
class JspTagException;
class AbResponseHandler;
class LogUtil;
class LicensingException;
class TransformInfoData;
class StoreTagWorkFlowHelperFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "tags/HelperTag.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //and hidden field removal
class StoreWorkFlowTag: public HelperTag {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string viewName;

    private: std::string viewFile;

public: StoreWorkFlowTag();

    public: void setName(std::string value);

                //@Throws(Exception.constructor)
            
    private: int32_t process();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //TAGS_STOREWORKFLOWTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGS_STOREWORKFLOWTAG_H_COMPLETE)
        #define TAGS_STOREWORKFLOWTAG_H_COMPLETE
        #if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
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
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>
#endif
#if __has_include(<taghelpers/StoreTagWorkFlowHelperFactory.h>)
#include <taghelpers/StoreTagWorkFlowHelperFactory.h>
#endif
#if __has_include("tags/HelperTag.h")
#include "tags/HelperTag.h"
#endif

        #endif
    
