
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
        



#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserInterface: public TableMappingInterface, public ValidationInterface {
        

    setUserName(string value)

    setPrefixName(string value)

    setFirstName(string value)

    setLastName(string value)

    setMiddleName(string value)

    setSuffixName(string value)

    setCompany(string value)

    setPositionAtCompany(string value)

    setMainEmail(string value)

    setSecondaryEmail(string value)

    setHomePhone(string value)

    setCellPhone(string value)

    setWorkPhone(string value)

    setOtherContact(string value)

    setElectronicContact(string value)

    setFax(string value)

    setRole(UserRole aRole)

    setEncryption(string value)

    setSecret(string value)

    setPassword(string value)

    setPermissions(string value)

    enable()

    setEnable(string enable)

    string getUserName()

    string getPrefixName()

    string getFirstName()

    string getLastName()

    string getMiddleName()

    string getSuffixName()

    string getCompany()

    string getPositionAtCompany()

    string getMainEmail()

    string getSecondaryEmail()

    string getHomePhone()

    string getCellPhone()

    string getWorkPhone()

    string getOtherContact()

    string getElectronicContact()

    string getFax()

    UserRole getRole()

    string getEncryption()

    string getSecret()

    string getPassword()

    string getPermissions()

    UserConfigurationInterface getUserConfigurationInterface()

    setUserConfigurationInterface(UserConfigurationInterface userConfigurationInterface)

    HashMap<any, any> toPasswordHashMap()

    validateSession(WeblisketSessionInterface weblisketSession)

    updateSession(WeblisketSessionInterface weblisketSession)

    Boolean isSessionValid()

};

            

