
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_USER_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_USER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/modules/configuration/UserConfigurationDomDocumentMapping.h>

      
#include <org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h>

      
#include <org/allbinary/business/user/modules/configuration/UserConfigurationInterfaceFactory.h>

      
#include <org/allbinary/business/user/password/Password.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/business/user/role/UserRoleB.h>

      
#include <org/allbinary/business/user/role/UserRoleData.h>

      
#include <org/allbinary/business/user/username/UserName.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class User
            : public Object
        : public UserInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: userName: string;

    private: prefixName: string;

    private: firstName: string;

    private: lastName: string;

    private: middleName: string;

    private: suffixName: string;

    private: company: string;

    private: positionAtCompany: string;

    private: mainEmail: string;

    private: secondaryEmail: string;

    private: homePhone: string;

    private: cellPhone: string;

    private: workPhone: string;

    private: otherContact: string;

    private: electronicDevice: string;

    private: fax: string;

    private: role: UserRole;

    private: encryption: string;

    private: secret: string;

    private: password: Password;

    private: enable: string;

    private: permissions: string;

    private: userConfigurationInterface: UserConfigurationInterface;

public constructor ();

public constructor (HttpServletRequest request);

public constructor (HashMap<any, any> userHashMap);

                //@Throws(Exception.constructor)
            
    public getFormData(HashMap<any, any> userHashMap);

    public Boolean isValid();

    public string validationInfo();

    public setUserName(string value);

    public setPrefixName(string value);

    public setFirstName(string value);

    public setLastName(string value);

    public setMiddleName(string value);

    public setSuffixName(string value);

    public setCompany(string value);

    public setPositionAtCompany(string value);

    public setMainEmail(string value);

    public setSecondaryEmail(string value);

    public setHomePhone(string value);

    public setCellPhone(string value);

    public setWorkPhone(string value);

    public setOtherContact(string value);

    public setElectronicContact(string value);

    public setFax(string value);

    public setRole(UserRole role);

    public setPermissions(string value);

    public setEncryption(string value);

    public setSecret(string value);

    public setPassword(string value);

    public enable();

    public disable();

    public setEnable(string enable);

    public string getUserName();

    public string getPrefixName();

    public string getFirstName();

    public string getLastName();

    public string getMiddleName();

    public string getSuffixName();

    public string getCompany();

    public string getPositionAtCompany();

    public string getMainEmail();

    public string getSecondaryEmail();

    public string getHomePhone();

    public string getCellPhone();

    public string getWorkPhone();

    public string getOtherContact();

    public string getElectronicContact();

    public string getFax();

    public UserRole getRole();

    public string getPermissions();

    public string getEncryption();

    public string getSecret();

    public string getPassword();

                //@Throws(Exception.constructor)
            
    public Vector toVector();

                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap();

    public HashMap<any, any> toPasswordHashMap();

    public validateSession(WeblisketSessionInterface weblisketSession);

    public updateSession(WeblisketSessionInterface weblisketSession);

    public Boolean isSessionValid();

                //@Throws(Exception.constructor)
            
    public any getKey();

    public Document toValidationInfoDoc();

    public Node toValidationInfoNode(Document document);

    public UserConfigurationInterface getUserConfigurationInterface();

    public setUserConfigurationInterface(UserConfigurationInterface userConfigurationInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_USER_H
