
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTINTERFACE_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/context/configuration/ContextConfigurationInterface.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreFrontInterface: public TableMappingInterface {

    Boolean isNameValid();

    Boolean isValid();

    std::string nameValidationInfo();

    std::string validationInfo();

    std::string getTestHtmlPath();

    std::string getCurrentHostName();

    std::string getCurrentHostNamePath();

    std::string getCurrentHomeHostName();

    std::string getCurrentHomeHostNamePath();

    std::string getName();

    std::string getBasketName();

    std::string getHomeHostName();

    std::string getHomeHostNamePath();

    std::string getHostName();

    std::string getHostNamePath();

    std::string getTestHomeHostName();

    std::string getTestHomeHostNamePath();

    std::string getTestHostName();

    std::string getTestHostNamePath();

    std::string getStaticPath();

    std::string getCategoryPath();

                //@Throws(Exception.constructor)
            
    BasicArrayList getSubStores();

    std::string getTagLocation();

    std::string getPackageLocation();

    std::string getInventoryControl();

    ContextConfigurationInterface getContextConfigurationInterface();

    void setContextConfigurationInterface(ContextConfigurationInterface contextConfigurationInterface);

    std::string getFtp();

    std::string getFtpPath();

    std::string getFtpUserName();

    std::string getFtpPassword();

    std::string getTestFtp();

    std::string getTestFtpPath();

    std::string getTestFtpUserName();

    std::string getTestFtpPassword();

    std::string getTimeCreated();

    std::string getLastModified();

    void setName(std::string value);

    void setBasketName(std::string value);

    void setHomeHostName(std::string value);

                //@Throws(Exception.constructor)
            
    void setHomeHostNamePath(std::string value);

    void setHostName(std::string value);

                //@Throws(Exception.constructor)
            
    void setHostNamePath(std::string value);

    void setTestHomeHostName(std::string value);

                //@Throws(Exception.constructor)
            
    void setTestHomeHostNamePath(std::string value);

    void setTestHostName(std::string value);

                //@Throws(Exception.constructor)
            
    void setTestHostNamePath(std::string value);

                //@Throws(Exception.constructor)
            
    void setImagePath(std::string value);

                //@Throws(Exception.constructor)
            
    void setStaticPath(std::string value);

                //@Throws(Exception.constructor)
            
    void setCategoryPath(std::string value);

    void setPackageLocation(std::string value);

    void setInventoryControl(std::string value);

    void setFtp(std::string value);

                //@Throws(Exception.constructor)
            
    void setFtpPath(std::string value);

    void setFtpUserName(std::string value);

    void setFtpPassword(std::string value);

    void setTestFtp(std::string value);

                //@Throws(Exception.constructor)
            
    void setTestFtpPath(std::string value);

    void setTestFtpUserName(std::string value);

    void setTestFtpPassword(std::string value);

    void setTimeCreated(std::string value);

    void setLastModified(std::string value);

                //@Throws(Exception.constructor)
            
    void install(int32_t current, int32_t total);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTINTERFACE_H
