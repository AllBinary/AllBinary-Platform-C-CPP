
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class PreLogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LogConfigType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LogConfigTypeFactory
            : public virtual Object
         {

    private: static LogConfigTypeFactory* instance_owner();
    private: static LogConfigTypeFactory* instance;

    public: static LogConfigTypeFactory* getInstance();

    private: const std::string NO_DESCRIPTION = "No Description";

    public: LogConfigType* AUTHENTICATION;

    public: LogConfigType* AUTHENTICATIONERROR;

    public: LogConfigType* CATEGORY;

    public: LogConfigType* CATEGORYERROR;

    public: LogConfigType* CRYPT;

    public: LogConfigType* CRYPTERROR;

    public: LogConfigType* EMAILLOGGING;

    public: LogConfigType* EMAILLOGGINGERROR;

    public: LogConfigType* ENTITYFACTORYERROR;

    public: LogConfigType* NETBEANS_MODULE;

    public: LogConfigType* NETBEANS_MODULE_ERROR;

    public: LogConfigType* FACTORYERROR;

    public: LogConfigType* FILE;

    public: LogConfigType* FILEERROR;

    public: LogConfigType* HTTP;

    public: LogConfigType* HTTPERROR;

    public: LogConfigType* HTTPREQUEST;

    public: LogConfigType* HTTPREQUESTERROR;

    public: LogConfigType* IDLOGGING;

    public: LogConfigType* JSPEXTRAOUTPUT;

    public: LogConfigType* JSPTAGEXTRAOUTPUT;

    public: LogConfigType* JSPTAG;

    public: LogConfigType* JSPTAGERROR;

    public: LogConfigType* LICENSING;

    public: LogConfigType* LICENSINGERROR;

    public: LogConfigType* LOADER;

    public: LogConfigType* LOADERERROR;

    public: LogConfigType* OS;

    public: LogConfigType* OSERROR;

    public: LogConfigType* PAYMENT;

    public: LogConfigType* PAYMENTERROR;

    public: LogConfigType* PRELOADER;

    public: LogConfigType* PRELOADERERROR;

    public: LogConfigType* PRODUCTSEARCHLOGGING;

    public: LogConfigType* PRODUCTSEARCHLOGGINGERROR;

    public: LogConfigType* SERVLET;

    public: LogConfigType* SERVLETERROR;

    public: LogConfigType* SHIPPINGERROR;

    public: LogConfigType* SQLLOGGINGERROR;

    public: LogConfigType* SQLLOGGING;

    public: LogConfigType* SQLTAGS;

    public: LogConfigType* SQLTAGSERROR;

    public: LogConfigType* STYLE;

    public: LogConfigType* STYLEERROR;

    public: LogConfigType* TAGHELPER;

    public: LogConfigType* TAGHELPERERROR;

    public: LogConfigType* TAGHELPERFACTORY;

    public: LogConfigType* TAGHELPERFACTORYERROR;

    public: LogConfigType* TAX;

    public: LogConfigType* TAXERROR;

    public: LogConfigType* VALIDATION;

    public: LogConfigType* VALIDATIONERROR;

    public: LogConfigType* VIEW;

    public: LogConfigType* VIEWERROR;

    public: LogConfigType* VIEWFACTORYERROR;

    public: LogConfigType* WORKFLOW;

    public: LogConfigType* WORKFLOWERROR;

    public: LogConfigType* XMLLOGGING;

    public: LogConfigType* XMLLOGGINGERROR;

    public: LogConfigType* XSLLOGGING;

    public: LogConfigType* XSLLOGGINGERROR;

    public: LogConfigType* REPLACE;

    public: LogConfigType* REPLACE_INFO;

    public: LogConfigType* REPLACEERROR;

    public: LogConfigType* SQLLOGGINGPOOL;

    public: LogConfigType* SQLLOGGINGPOOLERROR;

    public: LogConfigType* STATICPAGEGENERATIONLOGGING;

    public: LogConfigType* STATICPAGEGENERATIONLOGGINGERROR;

private: LogConfigTypeFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/communication/log/config/type/LogConfigType.h")
#include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"
#endif

        #endif
    
