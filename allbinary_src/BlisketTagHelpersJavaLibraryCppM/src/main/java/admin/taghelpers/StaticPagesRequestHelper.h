
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
        



        #ifndef ADMIN_TAGHELPERS_STATICPAGESREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_STATICPAGESREQUESTHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class HttpServletRequest;
class PageContext;
#include <org/allbinary/business/context/AbContext.h>
class StoreFrontData;
class StoreFrontFactory;
class StoreFrontInterface;
class URLGLOBALS;
class AcceptableResponseGenerator;
class LogUtil;
class UserEmailEventNameData;
class UserEmailEventHandler;
class AdminUserEmailEventHandlerSingletons;
class StoreAdminUserEmailEventHandlerSingletons;
class AdminEmailInfo;
class BasicEmailInfo;
class EmailInfo;
class StoreEmailInfo;
class SearchParams;
class SearchRequest;
class FileUtil;
class AbPath;
class AbPathData;
class StringUtil;
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
class TransformInfoData;
class ProductListingFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelperInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StaticPagesRequestHelper: public AbContext, public TagHelperInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: AbeClientInformationInterface* abeClientInformation;

    private: HttpServletRequest* request;

    private: std::string storeName;

    private: SearchParams* searchParams;

    private: std::string xslFile;

public: StaticPagesRequestHelper(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

    private: void getFormData();

                //@Throws(Exception.constructor)
            
    private: void email();

    public: std::string generateStaticPages();

    public: std::string makePublic();

};

            


        #endif //ADMIN_TAGHELPERS_STATICPAGESREQUESTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_STATICPAGESREQUESTHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_STATICPAGESREQUESTHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/AbContext.h>)
#include <org/allbinary/business/context/AbContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/AcceptableResponseGenerator.h>)
#include <org/allbinary/logic/communication/http/AcceptableResponseGenerator.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>)
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>)
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>)
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>)
#include <org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/EmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchParams.h>)
#include <org/allbinary/logic/control/search/SearchParams.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchRequest.h>)
#include <org/allbinary/logic/control/search/SearchRequest.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileUtil.h>)
#include <org/allbinary/logic/io/file/FileUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>
#endif
#if __has_include(<views/admin/inventory/listings/ProductListingFactory.h>)
#include <views/admin/inventory/listings/ProductListingFactory.h>
#endif
#if __has_include("admin/taghelpers/TagHelperInterface.h")
#include "admin/taghelpers/TagHelperInterface.h"
#endif

        #endif
    
