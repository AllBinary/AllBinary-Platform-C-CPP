
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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

      
#include <org/allbinary/logic/StdUtil.h>

      
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string userName;

    private: std::string prefixName;

    private: std::string firstName;

    private: std::string lastName;

    private: std::string middleName;

    private: std::string suffixName;

    private: std::string company;

    private: std::string positionAtCompany;

    private: std::string mainEmail;

    private: std::string secondaryEmail;

    private: std::string homePhone;

    private: std::string cellPhone;

    private: std::string workPhone;

    private: std::string otherContact;

    private: std::string electronicDevice;

    private: std::string fax;

    private: UserRole role;

    private: std::string encryption;

    private: std::string secret;

    private: Password password;

    private: std::string enable;

    private: std::string permissions;

    private: UserConfigurationInterface userConfigurationInterface;

public: User();

public: User(HttpServletRequest request);

public: User(HashMap<Object*, Object*> userHashMap);

                //@Throws(Exception.constructor)
            
    public: void getFormData(HashMap<Object*, Object*> userHashMap);

    public: Boolean isValid();

    public: std::string validationInfo();

    public: void setUserName(std::string value);

    public: void setPrefixName(std::string value);

    public: void setFirstName(std::string value);

    public: void setLastName(std::string value);

    public: void setMiddleName(std::string value);

    public: void setSuffixName(std::string value);

    public: void setCompany(std::string value);

    public: void setPositionAtCompany(std::string value);

    public: void setMainEmail(std::string value);

    public: void setSecondaryEmail(std::string value);

    public: void setHomePhone(std::string value);

    public: void setCellPhone(std::string value);

    public: void setWorkPhone(std::string value);

    public: void setOtherContact(std::string value);

    public: void setElectronicContact(std::string value);

    public: void setFax(std::string value);

    public: void setRole(UserRole role);

    public: void setPermissions(std::string value);

    public: void setEncryption(std::string value);

    public: void setSecret(std::string value);

    public: void setPassword(std::string value);

    public: void enable();

    public: void disable();

    public: void setEnable(std::string enable);

    public: std::string getUserName();

    public: std::string getPrefixName();

    public: std::string getFirstName();

    public: std::string getLastName();

    public: std::string getMiddleName();

    public: std::string getSuffixName();

    public: std::string getCompany();

    public: std::string getPositionAtCompany();

    public: std::string getMainEmail();

    public: std::string getSecondaryEmail();

    public: std::string getHomePhone();

    public: std::string getCellPhone();

    public: std::string getWorkPhone();

    public: std::string getOtherContact();

    public: std::string getElectronicContact();

    public: std::string getFax();

    public: UserRole getRole();

    public: std::string getPermissions();

    public: std::string getEncryption();

    public: std::string getSecret();

    public: std::string getPassword();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList toVector();

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*> toHashMap();

    public: HashMap<Object*, Object*> toPasswordHashMap();

    public: void validateSession(WeblisketSessionInterface weblisketSession);

    public: void updateSession(WeblisketSessionInterface weblisketSession);

    public: Boolean isSessionValid();

                //@Throws(Exception.constructor)
            
    public: Object* getKey();

    public: Document toValidationInfoDoc();

    public: Node toValidationInfoNode(Document document);

    public: UserConfigurationInterface getUserConfigurationInterface();

    public: void setUserConfigurationInterface(UserConfigurationInterface userConfigurationInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_USER_H
