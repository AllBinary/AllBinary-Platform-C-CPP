
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class ContextConfigurationInterface;
#include <org/allbinary/data/tables/TableMappingInterface.h>
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreFrontInterface: public TableMappingInterface {

    public: virtual bool isNameValid() = 0;

    public: virtual bool isValid() = 0;

    public: virtual std::string nameValidationInfo() = 0;

    public: virtual std::string validationInfo() = 0;

    public: virtual std::string getTestHtmlPath() = 0;

    public: virtual std::string getCurrentHostName() = 0;

    public: virtual std::string getCurrentHostNamePath() = 0;

    public: virtual std::string getCurrentHomeHostName() = 0;

    public: virtual std::string getCurrentHomeHostNamePath() = 0;

    public: virtual std::string getName() = 0;

    public: virtual std::string getBasketName() = 0;

    public: virtual std::string getHomeHostName() = 0;

    public: virtual std::string getHomeHostNamePath() = 0;

    public: virtual std::string getHostName() = 0;

    public: virtual std::string getHostNamePath() = 0;

    public: virtual std::string getTestHomeHostName() = 0;

    public: virtual std::string getTestHomeHostNamePath() = 0;

    public: virtual std::string getTestHostName() = 0;

    public: virtual std::string getTestHostNamePath() = 0;

    public: virtual std::string getStaticPath() = 0;

    public: virtual std::string getCategoryPath() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getSubStores() = 0;

    public: virtual std::string getTagLocation() = 0;

    public: virtual std::string getPackageLocation() = 0;

    public: virtual std::string getInventoryControl() = 0;

    public: virtual ContextConfigurationInterface* getContextConfigurationInterface() = 0;

    public: virtual void setContextConfigurationInterface(ContextConfigurationInterface* contextConfigurationInterface) = 0;

    public: virtual std::string getFtp() = 0;

    public: virtual std::string getFtpPath() = 0;

    public: virtual std::string getFtpUserName() = 0;

    public: virtual std::string getFtpPassword() = 0;

    public: virtual std::string getTestFtp() = 0;

    public: virtual std::string getTestFtpPath() = 0;

    public: virtual std::string getTestFtpUserName() = 0;

    public: virtual std::string getTestFtpPassword() = 0;

    public: virtual std::string getTimeCreated() = 0;

    public: virtual std::string getLastModified() = 0;

    public: virtual void setName(std::string value) = 0;

    public: virtual void setBasketName(std::string value) = 0;

    public: virtual void setHomeHostName(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setHomeHostNamePath(std::string value) = 0;

    public: virtual void setHostName(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setHostNamePath(std::string value) = 0;

    public: virtual void setTestHomeHostName(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setTestHomeHostNamePath(std::string value) = 0;

    public: virtual void setTestHostName(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setTestHostNamePath(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setImagePath(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setStaticPath(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setCategoryPath(std::string value) = 0;

    public: virtual void setPackageLocation(std::string value) = 0;

    public: virtual void setInventoryControl(std::string value) = 0;

    public: virtual void setFtp(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setFtpPath(std::string value) = 0;

    public: virtual void setFtpUserName(std::string value) = 0;

    public: virtual void setFtpPassword(std::string value) = 0;

    public: virtual void setTestFtp(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setTestFtpPath(std::string value) = 0;

    public: virtual void setTestFtpUserName(std::string value) = 0;

    public: virtual void setTestFtpPassword(std::string value) = 0;

    public: virtual void setTimeCreated(std::string value) = 0;

    public: virtual void setLastModified(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void install(int32_t current, int32_t total) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/business/context/configuration/ContextConfigurationInterface.h>)
#include <org/allbinary/business/context/configuration/ContextConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/data/tables/TableMappingInterface.h>)
#include <org/allbinary/data/tables/TableMappingInterface.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
