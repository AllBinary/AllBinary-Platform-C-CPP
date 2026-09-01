
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

#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserInterface: public TableMappingInterface, public ValidationInterface {

    void setUserName(std::string value);

    void setPrefixName(std::string value);

    void setFirstName(std::string value);

    void setLastName(std::string value);

    void setMiddleName(std::string value);

    void setSuffixName(std::string value);

    void setCompany(std::string value);

    void setPositionAtCompany(std::string value);

    void setMainEmail(std::string value);

    void setSecondaryEmail(std::string value);

    void setHomePhone(std::string value);

    void setCellPhone(std::string value);

    void setWorkPhone(std::string value);

    void setOtherContact(std::string value);

    void setElectronicContact(std::string value);

    void setFax(std::string value);

    void setRole(UserRole aRole);

    void setEncryption(std::string value);

    void setSecret(std::string value);

    void setPassword(std::string value);

    void setPermissions(std::string value);

    void enable();

    void setEnable(std::string enable);

    std::string getUserName();

    std::string getPrefixName();

    std::string getFirstName();

    std::string getLastName();

    std::string getMiddleName();

    std::string getSuffixName();

    std::string getCompany();

    std::string getPositionAtCompany();

    std::string getMainEmail();

    std::string getSecondaryEmail();

    std::string getHomePhone();

    std::string getCellPhone();

    std::string getWorkPhone();

    std::string getOtherContact();

    std::string getElectronicContact();

    std::string getFax();

    UserRole getRole();

    std::string getEncryption();

    std::string getSecret();

    std::string getPassword();

    std::string getPermissions();

    UserConfigurationInterface getUserConfigurationInterface();

    void setUserConfigurationInterface(UserConfigurationInterface userConfigurationInterface);

    HashMap<any, any> toPasswordHashMap();

    void validateSession(WeblisketSessionInterface weblisketSession);

    void updateSession(WeblisketSessionInterface weblisketSession);

    Boolean isSessionValid();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_USERINTERFACE_H
