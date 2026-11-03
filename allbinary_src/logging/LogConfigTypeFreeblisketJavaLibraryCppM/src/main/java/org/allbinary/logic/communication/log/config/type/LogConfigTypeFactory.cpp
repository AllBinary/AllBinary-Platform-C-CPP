
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"

auto LogConfigTypeFactory::instance_owner() -> LogConfigTypeFactory* { static std::unique_ptr<LogConfigTypeFactory> value(new LogConfigTypeFactory()); return value.get(); }
LogConfigTypeFactory* LogConfigTypeFactory::instance = LogConfigTypeFactory::instance_owner();

    auto LogConfigTypeFactory::getInstance() -> LogConfigTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LogConfigTypeFactory::instance;
    
}


LogConfigTypeFactory::LogConfigTypeFactory() : AUTHENTICATION(new LogConfigType("Authentication", this->NO_DESCRIPTION)), AUTHENTICATIONERROR(new LogConfigType("Authentication Error", this->NO_DESCRIPTION)), CATEGORY(new LogConfigType("Category", this->NO_DESCRIPTION)), CATEGORYERROR(new LogConfigType("Category Error", this->NO_DESCRIPTION)), CRYPT(new LogConfigType("Crypt", this->NO_DESCRIPTION)), CRYPTERROR(new LogConfigType("Crypt Error", this->NO_DESCRIPTION)), EMAILLOGGING(new LogConfigType("Email", this->NO_DESCRIPTION)), EMAILLOGGINGERROR(new LogConfigType("Email Error", this->NO_DESCRIPTION)), ENTITYFACTORYERROR(new LogConfigType("Entity Factory Error", this->NO_DESCRIPTION)), NETBEANS_MODULE(new LogConfigType("NetBeans Module", this->NO_DESCRIPTION)), NETBEANS_MODULE_ERROR(new LogConfigType("NetBeans Module Error", this->NO_DESCRIPTION)), FACTORYERROR(new LogConfigType("General Factory Error", this->NO_DESCRIPTION)), FILE(new LogConfigType("File", this->NO_DESCRIPTION)), FILEERROR(new LogConfigType("File Error", this->NO_DESCRIPTION)), HTTP(new LogConfigType("HTTP", this->NO_DESCRIPTION)), HTTPERROR(new LogConfigType("HTTP Error", this->NO_DESCRIPTION)), HTTPREQUEST(new LogConfigType("Http Request", this->NO_DESCRIPTION)), HTTPREQUESTERROR(new LogConfigType("Http Request Error", this->NO_DESCRIPTION)), IDLOGGING(new LogConfigType("ID Logging", this->NO_DESCRIPTION)), JSPEXTRAOUTPUT(new LogConfigType("JSP Extra Output", this->NO_DESCRIPTION)), JSPTAGEXTRAOUTPUT(new LogConfigType("JSP Tag Extra Output", this->NO_DESCRIPTION)), JSPTAG(new LogConfigType("JSP Tag", this->NO_DESCRIPTION)), JSPTAGERROR(new LogConfigType("JSP Tag Error", this->NO_DESCRIPTION)), LICENSING(new LogConfigType("Licensing", this->NO_DESCRIPTION)), LICENSINGERROR(new LogConfigType("Licensing Error", this->NO_DESCRIPTION)), LOADER(new LogConfigType("Loader", this->NO_DESCRIPTION)), LOADERERROR(new LogConfigType("Loader Error", this->NO_DESCRIPTION)), OS(new LogConfigType("OS", this->NO_DESCRIPTION)), OSERROR(new LogConfigType("OS Error", this->NO_DESCRIPTION)), PAYMENT(new LogConfigType("Payment", this->NO_DESCRIPTION)), PAYMENTERROR(new LogConfigType("Payment Error", this->NO_DESCRIPTION)), PRELOADER(new LogConfigType("PreLoader", this->NO_DESCRIPTION)), PRELOADERERROR(new LogConfigType("PreLoader Error", this->NO_DESCRIPTION)), PRODUCTSEARCHLOGGING(new LogConfigType("Product Search Logging", this->NO_DESCRIPTION)), PRODUCTSEARCHLOGGINGERROR(new LogConfigType("Product Search Logging Error", this->NO_DESCRIPTION)), SERVLET(new LogConfigType("Servlet", this->NO_DESCRIPTION)), SERVLETERROR(new LogConfigType("Servlet Error", this->NO_DESCRIPTION)), SHIPPINGERROR(new LogConfigType("Shipping Error", this->NO_DESCRIPTION)), SQLLOGGINGERROR(new LogConfigType("SQL Error", this->NO_DESCRIPTION)), SQLLOGGING(new LogConfigType("SQL Logging", this->NO_DESCRIPTION)), SQLTAGS(new LogConfigType("SQL Tag Logging", this->NO_DESCRIPTION)), SQLTAGSERROR(new LogConfigType("SQL Tag Error", this->NO_DESCRIPTION)), STYLE(new LogConfigType("Style", this->NO_DESCRIPTION)), STYLEERROR(new LogConfigType("Style Error", this->NO_DESCRIPTION)), TAGHELPER(new LogConfigType("Tag Helper", this->NO_DESCRIPTION)), TAGHELPERERROR(new LogConfigType("Tag Helper Error", this->NO_DESCRIPTION)), TAGHELPERFACTORY(new LogConfigType("Tag Helper Factory", this->NO_DESCRIPTION)), TAGHELPERFACTORYERROR(new LogConfigType("Tag Helper Factory Error", this->NO_DESCRIPTION)), TAX(new LogConfigType("Tax", this->NO_DESCRIPTION)), TAXERROR(new LogConfigType("Tax Error", this->NO_DESCRIPTION)), VALIDATION(new LogConfigType("Validation", this->NO_DESCRIPTION)), VALIDATIONERROR(new LogConfigType("Validation Error", this->NO_DESCRIPTION)), VIEW(new LogConfigType("View", this->NO_DESCRIPTION)), VIEWERROR(new LogConfigType("View Error", this->NO_DESCRIPTION)), VIEWFACTORYERROR(new LogConfigType("View Factory Error", this->NO_DESCRIPTION)), WORKFLOW(new LogConfigType("Workflow", this->NO_DESCRIPTION)), WORKFLOWERROR(new LogConfigType("Workflow Error", this->NO_DESCRIPTION)), XMLLOGGING(new LogConfigType("XML Logging", this->NO_DESCRIPTION)), XMLLOGGINGERROR(new LogConfigType("XML Logging Error", this->NO_DESCRIPTION)), XSLLOGGING(new LogConfigType("XSL Logging", this->NO_DESCRIPTION)), XSLLOGGINGERROR(new LogConfigType("XSL Logging Error", this->NO_DESCRIPTION)), REPLACE(new LogConfigType("Replace", this->NO_DESCRIPTION)), REPLACE_INFO(new LogConfigType("Replace Info", this->NO_DESCRIPTION)), REPLACEERROR(new LogConfigType("Replace Error", this->NO_DESCRIPTION)), SQLLOGGINGPOOL(new LogConfigType("SQL Pool", this->NO_DESCRIPTION)), SQLLOGGINGPOOLERROR(new LogConfigType("SQL Pool Error", this->NO_DESCRIPTION)), STATICPAGEGENERATIONLOGGING(new LogConfigType("Static Page Generation Logging", this->NO_DESCRIPTION)), STATICPAGEGENERATIONLOGGINGERROR(new LogConfigType("Static Page Generation Logging Error", this->NO_DESCRIPTION)){
PreLogUtil::put("FreeBlisket", this, CommonStrings::getInstance()->CONSTRUCTOR);
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_CPP
