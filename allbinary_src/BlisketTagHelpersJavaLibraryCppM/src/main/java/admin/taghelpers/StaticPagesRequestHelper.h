
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

            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/AbContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/AcceptableResponseGenerator.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>

      
#include <org/allbinary/logic/control/search/SearchParams.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <views/admin/inventory/listings/ProductListingFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelperInterface.h"

class StaticPagesRequestHelper: public AbContext, public TagHelperInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: HttpServletRequest request;

    private: std::string storeName;

    private: SearchParams searchParams;

    private: std::string xslFile;

public: StaticPagesRequestHelper(HashMap<any, any> propertiesHashMap, PageContext pageContext);

    private: void getFormData();

                //@Throws(Exception.constructor)
            
    private: void email();

    public: std::string generateStaticPages();

    public: std::string makePublic();

};

            


        #endif //ADMIN_TAGHELPERS_STATICPAGESREQUESTHELPER_H
