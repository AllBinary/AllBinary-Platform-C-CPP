
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfigType.h"

class LogConfigTypeFactory
            : public Object
         {

    private: static LogConfigTypeFactory instance() { return LogConfigTypeFactory(); }

    public: static LogConfigTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogConfigTypeFactory::instance();
    
}


    private: const std::string NO_DESCRIPTION = "No Description";

    public: const LogConfigType AUTHENTICATION = LogConfigType("Authentication", this->NO_DESCRIPTION);

    public: const LogConfigType AUTHENTICATIONERROR = LogConfigType("Authentication Error", this->NO_DESCRIPTION);

    public: const LogConfigType CATEGORY = LogConfigType("Category", this->NO_DESCRIPTION);

    public: const LogConfigType CATEGORYERROR = LogConfigType("Category Error", this->NO_DESCRIPTION);

    public: const LogConfigType CRYPT = LogConfigType("Crypt", this->NO_DESCRIPTION);

    public: const LogConfigType CRYPTERROR = LogConfigType("Crypt Error", this->NO_DESCRIPTION);

    public: const LogConfigType EMAILLOGGING = LogConfigType("Email", this->NO_DESCRIPTION);

    public: const LogConfigType EMAILLOGGINGERROR = LogConfigType("Email Error", this->NO_DESCRIPTION);

    public: const LogConfigType ENTITYFACTORYERROR = LogConfigType("Entity Factory Error", this->NO_DESCRIPTION);

    public: const LogConfigType NETBEANS_MODULE = LogConfigType("NetBeans Module", this->NO_DESCRIPTION);

    public: const LogConfigType NETBEANS_MODULE_ERROR = LogConfigType("NetBeans Module Error", this->NO_DESCRIPTION);

    public: const LogConfigType FACTORYERROR = LogConfigType("General Factory Error", this->NO_DESCRIPTION);

    public: const LogConfigType FILE = LogConfigType("File", this->NO_DESCRIPTION);

    public: const LogConfigType FILEERROR = LogConfigType("File Error", this->NO_DESCRIPTION);

    public: const LogConfigType HTTP = LogConfigType("HTTP", this->NO_DESCRIPTION);

    public: const LogConfigType HTTPERROR = LogConfigType("HTTP Error", this->NO_DESCRIPTION);

    public: const LogConfigType HTTPREQUEST = LogConfigType("Http Request", this->NO_DESCRIPTION);

    public: const LogConfigType HTTPREQUESTERROR = LogConfigType("Http Request Error", this->NO_DESCRIPTION);

    public: const LogConfigType IDLOGGING = LogConfigType("ID Logging", this->NO_DESCRIPTION);

    public: const LogConfigType JSPEXTRAOUTPUT = LogConfigType("JSP Extra Output", this->NO_DESCRIPTION);

    public: const LogConfigType JSPTAGEXTRAOUTPUT = LogConfigType("JSP Tag Extra Output", this->NO_DESCRIPTION);

    public: const LogConfigType JSPTAG = LogConfigType("JSP Tag", this->NO_DESCRIPTION);

    public: const LogConfigType JSPTAGERROR = LogConfigType("JSP Tag Error", this->NO_DESCRIPTION);

    public: const LogConfigType LICENSING = LogConfigType("Licensing", this->NO_DESCRIPTION);

    public: const LogConfigType LICENSINGERROR = LogConfigType("Licensing Error", this->NO_DESCRIPTION);

    public: const LogConfigType LOADER = LogConfigType("Loader", this->NO_DESCRIPTION);

    public: const LogConfigType LOADERERROR = LogConfigType("Loader Error", this->NO_DESCRIPTION);

    public: const LogConfigType OS = LogConfigType("OS", this->NO_DESCRIPTION);

    public: const LogConfigType OSERROR = LogConfigType("OS Error", this->NO_DESCRIPTION);

    public: const LogConfigType PAYMENT = LogConfigType("Payment", this->NO_DESCRIPTION);

    public: const LogConfigType PAYMENTERROR = LogConfigType("Payment Error", this->NO_DESCRIPTION);

    public: const LogConfigType PRELOADER = LogConfigType("PreLoader", this->NO_DESCRIPTION);

    public: const LogConfigType PRELOADERERROR = LogConfigType("PreLoader Error", this->NO_DESCRIPTION);

    public: const LogConfigType PRODUCTSEARCHLOGGING = LogConfigType("Product Search Logging", this->NO_DESCRIPTION);

    public: const LogConfigType PRODUCTSEARCHLOGGINGERROR = LogConfigType("Product Search Logging Error", this->NO_DESCRIPTION);

    public: const LogConfigType SERVLET = LogConfigType("Servlet", this->NO_DESCRIPTION);

    public: const LogConfigType SERVLETERROR = LogConfigType("Servlet Error", this->NO_DESCRIPTION);

    public: const LogConfigType SHIPPINGERROR = LogConfigType("Shipping Error", this->NO_DESCRIPTION);

    public: const LogConfigType SQLLOGGINGERROR = LogConfigType("SQL Error", this->NO_DESCRIPTION);

    public: const LogConfigType SQLLOGGING = LogConfigType("SQL Logging", this->NO_DESCRIPTION);

    public: const LogConfigType SQLTAGS = LogConfigType("SQL Tag Logging", this->NO_DESCRIPTION);

    public: const LogConfigType SQLTAGSERROR = LogConfigType("SQL Tag Error", this->NO_DESCRIPTION);

    public: const LogConfigType STYLE = LogConfigType("Style", this->NO_DESCRIPTION);

    public: const LogConfigType STYLEERROR = LogConfigType("Style Error", this->NO_DESCRIPTION);

    public: const LogConfigType TAGHELPER = LogConfigType("Tag Helper", this->NO_DESCRIPTION);

    public: const LogConfigType TAGHELPERERROR = LogConfigType("Tag Helper Error", this->NO_DESCRIPTION);

    public: const LogConfigType TAGHELPERFACTORY = LogConfigType("Tag Helper Factory", this->NO_DESCRIPTION);

    public: const LogConfigType TAGHELPERFACTORYERROR = LogConfigType("Tag Helper Factory Error", this->NO_DESCRIPTION);

    public: const LogConfigType TAX = LogConfigType("Tax", this->NO_DESCRIPTION);

    public: const LogConfigType TAXERROR = LogConfigType("Tax Error", this->NO_DESCRIPTION);

    public: const LogConfigType VALIDATION = LogConfigType("Validation", this->NO_DESCRIPTION);

    public: const LogConfigType VALIDATIONERROR = LogConfigType("Validation Error", this->NO_DESCRIPTION);

    public: const LogConfigType VIEW = LogConfigType("View", this->NO_DESCRIPTION);

    public: const LogConfigType VIEWERROR = LogConfigType("View Error", this->NO_DESCRIPTION);

    public: const LogConfigType VIEWFACTORYERROR = LogConfigType("View Factory Error", this->NO_DESCRIPTION);

    public: const LogConfigType WORKFLOW = LogConfigType("Workflow", this->NO_DESCRIPTION);

    public: const LogConfigType WORKFLOWERROR = LogConfigType("Workflow Error", this->NO_DESCRIPTION);

    public: const LogConfigType XMLLOGGING = LogConfigType("XML Logging", this->NO_DESCRIPTION);

    public: const LogConfigType XMLLOGGINGERROR = LogConfigType("XML Logging Error", this->NO_DESCRIPTION);

    public: const LogConfigType XSLLOGGING = LogConfigType("XSL Logging", this->NO_DESCRIPTION);

    public: const LogConfigType XSLLOGGINGERROR = LogConfigType("XSL Logging Error", this->NO_DESCRIPTION);

    public: const LogConfigType REPLACE = LogConfigType("Replace", this->NO_DESCRIPTION);

    public: const LogConfigType REPLACE_INFO = LogConfigType("Replace Info", this->NO_DESCRIPTION);

    public: const LogConfigType REPLACEERROR = LogConfigType("Replace Error", this->NO_DESCRIPTION);

    public: const LogConfigType SQLLOGGINGPOOL = LogConfigType("SQL Pool", this->NO_DESCRIPTION);

    public: const LogConfigType SQLLOGGINGPOOLERROR = LogConfigType("SQL Pool Error", this->NO_DESCRIPTION);

    public: const LogConfigType STATICPAGEGENERATIONLOGGING = LogConfigType("Static Page Generation Logging", this->NO_DESCRIPTION);

    public: const LogConfigType STATICPAGEGENERATIONLOGGINGERROR = LogConfigType("Static Page Generation Logging Error", this->NO_DESCRIPTION);

private: LogConfigTypeFactory(){
PreLogUtil::put("FreeBlisket", this, CommonStrings::getInstance().CONSTRUCTOR);
    
}


};

            

