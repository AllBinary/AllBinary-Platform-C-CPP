
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
        



            #include "../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfigType.h"

class LogConfigTypeFactory
            : public Object
         {
        

    private: static const instance: LogConfigTypeFactory = new LogConfigTypeFactory();

    public static LogConfigTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogConfigTypeFactory.instance;
    
}


    private: const NO_DESCRIPTION: string = "No Description";

    public const AUTHENTICATION: LogConfigType = new LogConfigType("Authentication", this.NO_DESCRIPTION);

    public const AUTHENTICATIONERROR: LogConfigType = new LogConfigType("Authentication Error", this.NO_DESCRIPTION);

    public const CATEGORY: LogConfigType = new LogConfigType("Category", this.NO_DESCRIPTION);

    public const CATEGORYERROR: LogConfigType = new LogConfigType("Category Error", this.NO_DESCRIPTION);

    public const CRYPT: LogConfigType = new LogConfigType("Crypt", this.NO_DESCRIPTION);

    public const CRYPTERROR: LogConfigType = new LogConfigType("Crypt Error", this.NO_DESCRIPTION);

    public const EMAILLOGGING: LogConfigType = new LogConfigType("Email", this.NO_DESCRIPTION);

    public const EMAILLOGGINGERROR: LogConfigType = new LogConfigType("Email Error", this.NO_DESCRIPTION);

    public const ENTITYFACTORYERROR: LogConfigType = new LogConfigType("Entity Factory Error", this.NO_DESCRIPTION);

    public const NETBEANS_MODULE: LogConfigType = new LogConfigType("NetBeans Module", this.NO_DESCRIPTION);

    public const NETBEANS_MODULE_ERROR: LogConfigType = new LogConfigType("NetBeans Module Error", this.NO_DESCRIPTION);

    public const FACTORYERROR: LogConfigType = new LogConfigType("General Factory Error", this.NO_DESCRIPTION);

    public const FILE: LogConfigType = new LogConfigType("File", this.NO_DESCRIPTION);

    public const FILEERROR: LogConfigType = new LogConfigType("File Error", this.NO_DESCRIPTION);

    public const HTTP: LogConfigType = new LogConfigType("HTTP", this.NO_DESCRIPTION);

    public const HTTPERROR: LogConfigType = new LogConfigType("HTTP Error", this.NO_DESCRIPTION);

    public const HTTPREQUEST: LogConfigType = new LogConfigType("Http Request", this.NO_DESCRIPTION);

    public const HTTPREQUESTERROR: LogConfigType = new LogConfigType("Http Request Error", this.NO_DESCRIPTION);

    public const IDLOGGING: LogConfigType = new LogConfigType("ID Logging", this.NO_DESCRIPTION);

    public const JSPEXTRAOUTPUT: LogConfigType = new LogConfigType("JSP Extra Output", this.NO_DESCRIPTION);

    public const JSPTAGEXTRAOUTPUT: LogConfigType = new LogConfigType("JSP Tag Extra Output", this.NO_DESCRIPTION);

    public const JSPTAG: LogConfigType = new LogConfigType("JSP Tag", this.NO_DESCRIPTION);

    public const JSPTAGERROR: LogConfigType = new LogConfigType("JSP Tag Error", this.NO_DESCRIPTION);

    public const LICENSING: LogConfigType = new LogConfigType("Licensing", this.NO_DESCRIPTION);

    public const LICENSINGERROR: LogConfigType = new LogConfigType("Licensing Error", this.NO_DESCRIPTION);

    public const LOADER: LogConfigType = new LogConfigType("Loader", this.NO_DESCRIPTION);

    public const LOADERERROR: LogConfigType = new LogConfigType("Loader Error", this.NO_DESCRIPTION);

    public const OS: LogConfigType = new LogConfigType("OS", this.NO_DESCRIPTION);

    public const OSERROR: LogConfigType = new LogConfigType("OS Error", this.NO_DESCRIPTION);

    public const PAYMENT: LogConfigType = new LogConfigType("Payment", this.NO_DESCRIPTION);

    public const PAYMENTERROR: LogConfigType = new LogConfigType("Payment Error", this.NO_DESCRIPTION);

    public const PRELOADER: LogConfigType = new LogConfigType("PreLoader", this.NO_DESCRIPTION);

    public const PRELOADERERROR: LogConfigType = new LogConfigType("PreLoader Error", this.NO_DESCRIPTION);

    public const PRODUCTSEARCHLOGGING: LogConfigType = new LogConfigType("Product Search Logging", this.NO_DESCRIPTION);

    public const PRODUCTSEARCHLOGGINGERROR: LogConfigType = new LogConfigType("Product Search Logging Error", this.NO_DESCRIPTION);

    public const SERVLET: LogConfigType = new LogConfigType("Servlet", this.NO_DESCRIPTION);

    public const SERVLETERROR: LogConfigType = new LogConfigType("Servlet Error", this.NO_DESCRIPTION);

    public const SHIPPINGERROR: LogConfigType = new LogConfigType("Shipping Error", this.NO_DESCRIPTION);

    public const SQLLOGGINGERROR: LogConfigType = new LogConfigType("SQL Error", this.NO_DESCRIPTION);

    public const SQLLOGGING: LogConfigType = new LogConfigType("SQL Logging", this.NO_DESCRIPTION);

    public const SQLTAGS: LogConfigType = new LogConfigType("SQL Tag Logging", this.NO_DESCRIPTION);

    public const SQLTAGSERROR: LogConfigType = new LogConfigType("SQL Tag Error", this.NO_DESCRIPTION);

    public const STYLE: LogConfigType = new LogConfigType("Style", this.NO_DESCRIPTION);

    public const STYLEERROR: LogConfigType = new LogConfigType("Style Error", this.NO_DESCRIPTION);

    public const TAGHELPER: LogConfigType = new LogConfigType("Tag Helper", this.NO_DESCRIPTION);

    public const TAGHELPERERROR: LogConfigType = new LogConfigType("Tag Helper Error", this.NO_DESCRIPTION);

    public const TAGHELPERFACTORY: LogConfigType = new LogConfigType("Tag Helper Factory", this.NO_DESCRIPTION);

    public const TAGHELPERFACTORYERROR: LogConfigType = new LogConfigType("Tag Helper Factory Error", this.NO_DESCRIPTION);

    public const TAX: LogConfigType = new LogConfigType("Tax", this.NO_DESCRIPTION);

    public const TAXERROR: LogConfigType = new LogConfigType("Tax Error", this.NO_DESCRIPTION);

    public const VALIDATION: LogConfigType = new LogConfigType("Validation", this.NO_DESCRIPTION);

    public const VALIDATIONERROR: LogConfigType = new LogConfigType("Validation Error", this.NO_DESCRIPTION);

    public const VIEW: LogConfigType = new LogConfigType("View", this.NO_DESCRIPTION);

    public const VIEWERROR: LogConfigType = new LogConfigType("View Error", this.NO_DESCRIPTION);

    public const VIEWFACTORYERROR: LogConfigType = new LogConfigType("View Factory Error", this.NO_DESCRIPTION);

    public const WORKFLOW: LogConfigType = new LogConfigType("Workflow", this.NO_DESCRIPTION);

    public const WORKFLOWERROR: LogConfigType = new LogConfigType("Workflow Error", this.NO_DESCRIPTION);

    public const XMLLOGGING: LogConfigType = new LogConfigType("XML Logging", this.NO_DESCRIPTION);

    public const XMLLOGGINGERROR: LogConfigType = new LogConfigType("XML Logging Error", this.NO_DESCRIPTION);

    public const XSLLOGGING: LogConfigType = new LogConfigType("XSL Logging", this.NO_DESCRIPTION);

    public const XSLLOGGINGERROR: LogConfigType = new LogConfigType("XSL Logging Error", this.NO_DESCRIPTION);

    public const REPLACE: LogConfigType = new LogConfigType("Replace", this.NO_DESCRIPTION);

    public const REPLACE_INFO: LogConfigType = new LogConfigType("Replace Info", this.NO_DESCRIPTION);

    public const REPLACEERROR: LogConfigType = new LogConfigType("Replace Error", this.NO_DESCRIPTION);

    public const SQLLOGGINGPOOL: LogConfigType = new LogConfigType("SQL Pool", this.NO_DESCRIPTION);

    public const SQLLOGGINGPOOLERROR: LogConfigType = new LogConfigType("SQL Pool Error", this.NO_DESCRIPTION);

    public const STATICPAGEGENERATIONLOGGING: LogConfigType = new LogConfigType("Static Page Generation Logging", this.NO_DESCRIPTION);

    public const STATICPAGEGENERATIONLOGGINGERROR: LogConfigType = new LogConfigType("Static Page Generation Logging Error", this.NO_DESCRIPTION);

private constructor (){

            super();
        PreLogUtil.put("FreeBlisket", this, CommonStrings.getInstance()!.CONSTRUCTOR);
    
}


};

            

