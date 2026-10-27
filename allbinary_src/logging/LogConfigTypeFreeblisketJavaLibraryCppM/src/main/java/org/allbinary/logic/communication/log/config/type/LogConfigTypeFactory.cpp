
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"

class LogConfigTypeFactory
            : public Object
         {

    private: static LogConfigTypeFactory* instance() { static std::unique_ptr<LogConfigTypeFactory> value(new LogConfigTypeFactory()); return value.get(); }

    public: static LogConfigTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogConfigTypeFactory::instance();
    
}


    private: const std::string NO_DESCRIPTION = "No Description";

    public: LogConfigType* AUTHENTICATION = new LogConfigType("Authentication", this->NO_DESCRIPTION);

    public: LogConfigType* AUTHENTICATIONERROR = new LogConfigType("Authentication Error", this->NO_DESCRIPTION);

    public: LogConfigType* CATEGORY = new LogConfigType("Category", this->NO_DESCRIPTION);

    public: LogConfigType* CATEGORYERROR = new LogConfigType("Category Error", this->NO_DESCRIPTION);

    public: LogConfigType* CRYPT = new LogConfigType("Crypt", this->NO_DESCRIPTION);

    public: LogConfigType* CRYPTERROR = new LogConfigType("Crypt Error", this->NO_DESCRIPTION);

    public: LogConfigType* EMAILLOGGING = new LogConfigType("Email", this->NO_DESCRIPTION);

    public: LogConfigType* EMAILLOGGINGERROR = new LogConfigType("Email Error", this->NO_DESCRIPTION);

    public: LogConfigType* ENTITYFACTORYERROR = new LogConfigType("Entity Factory Error", this->NO_DESCRIPTION);

    public: LogConfigType* NETBEANS_MODULE = new LogConfigType("NetBeans Module", this->NO_DESCRIPTION);

    public: LogConfigType* NETBEANS_MODULE_ERROR = new LogConfigType("NetBeans Module Error", this->NO_DESCRIPTION);

    public: LogConfigType* FACTORYERROR = new LogConfigType("General Factory Error", this->NO_DESCRIPTION);

    public: LogConfigType* FILE = new LogConfigType("File", this->NO_DESCRIPTION);

    public: LogConfigType* FILEERROR = new LogConfigType("File Error", this->NO_DESCRIPTION);

    public: LogConfigType* HTTP = new LogConfigType("HTTP", this->NO_DESCRIPTION);

    public: LogConfigType* HTTPERROR = new LogConfigType("HTTP Error", this->NO_DESCRIPTION);

    public: LogConfigType* HTTPREQUEST = new LogConfigType("Http Request", this->NO_DESCRIPTION);

    public: LogConfigType* HTTPREQUESTERROR = new LogConfigType("Http Request Error", this->NO_DESCRIPTION);

    public: LogConfigType* IDLOGGING = new LogConfigType("ID Logging", this->NO_DESCRIPTION);

    public: LogConfigType* JSPEXTRAOUTPUT = new LogConfigType("JSP Extra Output", this->NO_DESCRIPTION);

    public: LogConfigType* JSPTAGEXTRAOUTPUT = new LogConfigType("JSP Tag Extra Output", this->NO_DESCRIPTION);

    public: LogConfigType* JSPTAG = new LogConfigType("JSP Tag", this->NO_DESCRIPTION);

    public: LogConfigType* JSPTAGERROR = new LogConfigType("JSP Tag Error", this->NO_DESCRIPTION);

    public: LogConfigType* LICENSING = new LogConfigType("Licensing", this->NO_DESCRIPTION);

    public: LogConfigType* LICENSINGERROR = new LogConfigType("Licensing Error", this->NO_DESCRIPTION);

    public: LogConfigType* LOADER = new LogConfigType("Loader", this->NO_DESCRIPTION);

    public: LogConfigType* LOADERERROR = new LogConfigType("Loader Error", this->NO_DESCRIPTION);

    public: LogConfigType* OS = new LogConfigType("OS", this->NO_DESCRIPTION);

    public: LogConfigType* OSERROR = new LogConfigType("OS Error", this->NO_DESCRIPTION);

    public: LogConfigType* PAYMENT = new LogConfigType("Payment", this->NO_DESCRIPTION);

    public: LogConfigType* PAYMENTERROR = new LogConfigType("Payment Error", this->NO_DESCRIPTION);

    public: LogConfigType* PRELOADER = new LogConfigType("PreLoader", this->NO_DESCRIPTION);

    public: LogConfigType* PRELOADERERROR = new LogConfigType("PreLoader Error", this->NO_DESCRIPTION);

    public: LogConfigType* PRODUCTSEARCHLOGGING = new LogConfigType("Product Search Logging", this->NO_DESCRIPTION);

    public: LogConfigType* PRODUCTSEARCHLOGGINGERROR = new LogConfigType("Product Search Logging Error", this->NO_DESCRIPTION);

    public: LogConfigType* SERVLET = new LogConfigType("Servlet", this->NO_DESCRIPTION);

    public: LogConfigType* SERVLETERROR = new LogConfigType("Servlet Error", this->NO_DESCRIPTION);

    public: LogConfigType* SHIPPINGERROR = new LogConfigType("Shipping Error", this->NO_DESCRIPTION);

    public: LogConfigType* SQLLOGGINGERROR = new LogConfigType("SQL Error", this->NO_DESCRIPTION);

    public: LogConfigType* SQLLOGGING = new LogConfigType("SQL Logging", this->NO_DESCRIPTION);

    public: LogConfigType* SQLTAGS = new LogConfigType("SQL Tag Logging", this->NO_DESCRIPTION);

    public: LogConfigType* SQLTAGSERROR = new LogConfigType("SQL Tag Error", this->NO_DESCRIPTION);

    public: LogConfigType* STYLE = new LogConfigType("Style", this->NO_DESCRIPTION);

    public: LogConfigType* STYLEERROR = new LogConfigType("Style Error", this->NO_DESCRIPTION);

    public: LogConfigType* TAGHELPER = new LogConfigType("Tag Helper", this->NO_DESCRIPTION);

    public: LogConfigType* TAGHELPERERROR = new LogConfigType("Tag Helper Error", this->NO_DESCRIPTION);

    public: LogConfigType* TAGHELPERFACTORY = new LogConfigType("Tag Helper Factory", this->NO_DESCRIPTION);

    public: LogConfigType* TAGHELPERFACTORYERROR = new LogConfigType("Tag Helper Factory Error", this->NO_DESCRIPTION);

    public: LogConfigType* TAX = new LogConfigType("Tax", this->NO_DESCRIPTION);

    public: LogConfigType* TAXERROR = new LogConfigType("Tax Error", this->NO_DESCRIPTION);

    public: LogConfigType* VALIDATION = new LogConfigType("Validation", this->NO_DESCRIPTION);

    public: LogConfigType* VALIDATIONERROR = new LogConfigType("Validation Error", this->NO_DESCRIPTION);

    public: LogConfigType* VIEW = new LogConfigType("View", this->NO_DESCRIPTION);

    public: LogConfigType* VIEWERROR = new LogConfigType("View Error", this->NO_DESCRIPTION);

    public: LogConfigType* VIEWFACTORYERROR = new LogConfigType("View Factory Error", this->NO_DESCRIPTION);

    public: LogConfigType* WORKFLOW = new LogConfigType("Workflow", this->NO_DESCRIPTION);

    public: LogConfigType* WORKFLOWERROR = new LogConfigType("Workflow Error", this->NO_DESCRIPTION);

    public: LogConfigType* XMLLOGGING = new LogConfigType("XML Logging", this->NO_DESCRIPTION);

    public: LogConfigType* XMLLOGGINGERROR = new LogConfigType("XML Logging Error", this->NO_DESCRIPTION);

    public: LogConfigType* XSLLOGGING = new LogConfigType("XSL Logging", this->NO_DESCRIPTION);

    public: LogConfigType* XSLLOGGINGERROR = new LogConfigType("XSL Logging Error", this->NO_DESCRIPTION);

    public: LogConfigType* REPLACE = new LogConfigType("Replace", this->NO_DESCRIPTION);

    public: LogConfigType* REPLACE_INFO = new LogConfigType("Replace Info", this->NO_DESCRIPTION);

    public: LogConfigType* REPLACEERROR = new LogConfigType("Replace Error", this->NO_DESCRIPTION);

    public: LogConfigType* SQLLOGGINGPOOL = new LogConfigType("SQL Pool", this->NO_DESCRIPTION);

    public: LogConfigType* SQLLOGGINGPOOLERROR = new LogConfigType("SQL Pool Error", this->NO_DESCRIPTION);

    public: LogConfigType* STATICPAGEGENERATIONLOGGING = new LogConfigType("Static Page Generation Logging", this->NO_DESCRIPTION);

    public: LogConfigType* STATICPAGEGENERATIONLOGGINGERROR = new LogConfigType("Static Page Generation Logging Error", this->NO_DESCRIPTION);

private: LogConfigTypeFactory(){
PreLogUtil::put("FreeBlisket", this, CommonStrings::getInstance()->CONSTRUCTOR);
    
}


};

            

