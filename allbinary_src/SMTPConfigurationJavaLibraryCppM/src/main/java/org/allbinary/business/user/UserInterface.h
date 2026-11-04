
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_USERINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_USERINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>
class UserConfigurationInterface;
class UserRole;
#include <org/allbinary/data/tables/TableMappingInterface.h>
class WeblisketSessionInterface;
#include <org/allbinary/logic/control/validate/ValidationInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserInterface: public virtual TableMappingInterface, public virtual ValidationInterface {

    public: virtual void setUserName(std::string value) = 0;

    public: virtual void setPrefixName(std::string value) = 0;

    public: virtual void setFirstName(std::string value) = 0;

    public: virtual void setLastName(std::string value) = 0;

    public: virtual void setMiddleName(std::string value) = 0;

    public: virtual void setSuffixName(std::string value) = 0;

    public: virtual void setCompany(std::string value) = 0;

    public: virtual void setPositionAtCompany(std::string value) = 0;

    public: virtual void setMainEmail(std::string value) = 0;

    public: virtual void setSecondaryEmail(std::string value) = 0;

    public: virtual void setHomePhone(std::string value) = 0;

    public: virtual void setCellPhone(std::string value) = 0;

    public: virtual void setWorkPhone(std::string value) = 0;

    public: virtual void setOtherContact(std::string value) = 0;

    public: virtual void setElectronicContact(std::string value) = 0;

    public: virtual void setFax(std::string value) = 0;

    public: virtual void setRole(UserRole* aRole) = 0;

    public: virtual void setEncryption(std::string value) = 0;

    public: virtual void setSecret(std::string value) = 0;

    public: virtual void setPassword(std::string value) = 0;

    public: virtual void setPermissions(std::string value) = 0;

    public: virtual void enable() = 0;

    public: virtual void setEnable(std::string enable) = 0;

    public: virtual std::string getUserName() = 0;

    public: virtual std::string getPrefixName() = 0;

    public: virtual std::string getFirstName() = 0;

    public: virtual std::string getLastName() = 0;

    public: virtual std::string getMiddleName() = 0;

    public: virtual std::string getSuffixName() = 0;

    public: virtual std::string getCompany() = 0;

    public: virtual std::string getPositionAtCompany() = 0;

    public: virtual std::string getMainEmail() = 0;

    public: virtual std::string getSecondaryEmail() = 0;

    public: virtual std::string getHomePhone() = 0;

    public: virtual std::string getCellPhone() = 0;

    public: virtual std::string getWorkPhone() = 0;

    public: virtual std::string getOtherContact() = 0;

    public: virtual std::string getElectronicContact() = 0;

    public: virtual std::string getFax() = 0;

    public: virtual UserRole* getRole() = 0;

    public: virtual std::string getEncryption() = 0;

    public: virtual std::string getSecret() = 0;

    public: virtual std::string getPassword() = 0;

    public: virtual std::string getPermissions() = 0;

    public: virtual UserConfigurationInterface* getUserConfigurationInterface() = 0;

    public: virtual void setUserConfigurationInterface(UserConfigurationInterface* userConfigurationInterface) = 0;

    public: virtual HashMap<Object*, Object*>* toPasswordHashMap() = 0;

    public: virtual void validateSession(WeblisketSessionInterface* weblisketSession) = 0;

    public: virtual void updateSession(WeblisketSessionInterface* weblisketSession) = 0;

    public: virtual bool isSessionValid() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_USERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_USERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_USERINTERFACE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h>)
#include <org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRole.h>)
#include <org/allbinary/business/user/role/UserRole.h>
#endif
#if __has_include(<org/allbinary/data/tables/TableMappingInterface.h>)
#include <org/allbinary/data/tables/TableMappingInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationInterface.h>
#endif

        #endif
    
