
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        , public UserInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

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

    private: UserRole* role;

    private: std::string encryption;

    private: std::string secret;

    private: Password* password;

    private: std::string enable;

    private: std::string permissions;

    private: UserConfigurationInterface* userConfigurationInterface;

public: User(){
this->userConfigurationInterface= UserConfigurationInterfaceFactory::getInstance();
    
this->password= new Password(StringUtil::getInstance()->EMPTY_STRING);
    
}


public: User(HttpServletRequest* request){
this->getFormData((new RequestParams(request))->toHashMap());
    
this->userConfigurationInterface= UserConfigurationInterfaceFactory::getInstance(this->getRole());
    
}


public: User(HashMap<Object*, Object*>* userHashMap){
this->getFormData(userHashMap);
    
this->userConfigurationInterface= UserConfigurationInterfaceFactory::getInstance(this->getRole());
    
}


                //@Throws(Exception.constructor)
            
    public: void getFormData(HashMap<Object*, Object*>* userHashMap){
this->userName= (new UserName(userHashMap))->get();
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string passwordString = stringUtil->getNonNull(userHashMap->get(UserData::PASSWORD));;
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil->isEmpty(this->userName) && stringValidationUtil->isEmpty(passwordString))
                        
                                    {
                                    this->userName= stringUtil->getNonNull(userHashMap->get(WeblisketSessionData::REMOVABLEUSERNAME));
    
passwordString= stringUtil->getNonNull(userHashMap->get(WeblisketSessionData::REMOVABLEPASSWORD));
    

                                    }
                                

    std::string encryption = stringUtil->getNonNull(userHashMap->get(EntryData::getInstance()->ENCRYPTION));;
    

    std::string secret = stringUtil->getNonNull(userHashMap->get(UserData::SECRET));;
    
this->password= new Password(passwordString);
    
this->prefixName= stringUtil->getNonNull(userHashMap->get(UserData::PREFIXNAME));
    
this->firstName= stringUtil->getNonNull(userHashMap->get(UserData::FIRSTNAME));
    
this->lastName= stringUtil->getNonNull(userHashMap->get(UserData::LASTNAME));
    
this->middleName= stringUtil->getNonNull(userHashMap->get(UserData::MIDDLENAME));
    
this->suffixName= stringUtil->getNonNull(userHashMap->get(UserData::SUFFIXNAME));
    
this->company= stringUtil->getNonNull(userHashMap->get(UserData::COMPANY));
    
this->positionAtCompany= stringUtil->getNonNull(userHashMap->get(UserData::POSITIONATCOMPANY));
    
this->mainEmail= stringUtil->getNonNull(userHashMap->get(UserData::MAINEMAIL));
    
this->secondaryEmail= stringUtil->getNonNull(userHashMap->get(UserData::SECONDARYEMAIL));
    
this->homePhone= stringUtil->getNonNull(userHashMap->get(UserData::HOMEPHONE));
    
this->cellPhone= stringUtil->getNonNull(userHashMap->get(UserData::CELLPHONE));
    
this->workPhone= stringUtil->getNonNull(userHashMap->get(UserData::WORKPHONE));
    
this->otherContact= stringUtil->getNonNull(userHashMap->get(UserData::OTHERCONTACT));
    
this->electronicDevice= stringUtil->getNonNull(userHashMap->get(UserData::ELECTRONICDEVICE));
    
this->fax= stringUtil->getNonNull(userHashMap->get(UserData::FAX));
    
this->role= UserRoleB::getRole(userHashMap->get(UserRoleData::NAME.toString()));
    
this->permissions= stringUtil->getNonNull(userHashMap->get(UserData::PERMISSIONS));
    

                        if(!stringValidationUtil->isEmpty(this->permissions) && this->permissions.compare(StoreFrontData::getInstance()->NAME) == 0)
                        this->permissions= stringUtil->getNonNull(userHashMap->get(StoreFrontData::getInstance()->NAME));
                                
                             else 
                        if(false)
                        
                                    {
                                    this->permissions= "No Permissions";
    

                                    }
                                
this->enable= stringUtil->getNonNull(userHashMap->get(EntryData::getInstance()->ENABLE));
    
}


    public: bool isValid(){

        try {
            
    bool valid = Boolean::TRUE;;
    

                        if(!UserName::getInstance()->isValid(this->userName).valueOf())
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!this->password->isValid().valueOf())
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil->isValidRequired(this->firstName, 1, UserData::MAXLEN))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->lastName, 1, UserData::MAXLEN))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->mainEmail, 1, UserData::MAXLEN) || this->mainEmail.indexOf("@") ==  -1)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VALIDATIONERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put("Failed to validate form", this, commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: std::string validationInfo(){

        try {
            
    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(UserName::getValidationInfo(this->userName));
    
stringBuffer->append(this->password->getValidationInfo());
    

                        if(!stringValidationUtil->isValidRequired(this->firstName, 1, UserData::MAXLEN))
                        
                                    {
                                    stringBuffer->append("Please enter a valid First Name.<br />");
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->lastName, 1, UserData::MAXLEN))
                        
                                    {
                                    stringBuffer->append("Please enter a valid Last Name.<br />");
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->mainEmail, 1, UserData::MAXLEN) || this->mainEmail.indexOf("@") ==  -1)
                        
                                    {
                                    stringBuffer->append("Please enter a valid email address.<br />");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public: void setUserName(std::string value){
this->userName= value;
    
}


    public: void setPrefixName(std::string value){
this->prefixName= value;
    
}


    public: void setFirstName(std::string value){
this->firstName= value;
    
}


    public: void setLastName(std::string value){
this->lastName= value;
    
}


    public: void setMiddleName(std::string value){
this->middleName= value;
    
}


    public: void setSuffixName(std::string value){
this->suffixName= value;
    
}


    public: void setCompany(std::string value){
this->company= value;
    
}


    public: void setPositionAtCompany(std::string value){
this->positionAtCompany= value;
    
}


    public: void setMainEmail(std::string value){
this->mainEmail= value;
    
}


    public: void setSecondaryEmail(std::string value){
this->secondaryEmail= value;
    
}


    public: void setHomePhone(std::string value){
this->homePhone= value;
    
}


    public: void setCellPhone(std::string value){
this->cellPhone= value;
    
}


    public: void setWorkPhone(std::string value){
this->workPhone= value;
    
}


    public: void setOtherContact(std::string value){
this->otherContact= value;
    
}


    public: void setElectronicContact(std::string value){
this->electronicDevice= value;
    
}


    public: void setFax(std::string value){
this->fax= value;
    
}


    public: void setRole(UserRole* role){
this->role= role;
    
}


    public: void setPermissions(std::string value){
this->permissions= value;
    
}


    public: void setEncryption(std::string value){
this->encryption= value;
    
}


    public: void setSecret(std::string value){
this->secret= value;
    
}


    public: void setPassword(std::string value){
this->password->set(value);
    
}


    public: void enable(){
this->setEnable("Yes");
    
}


    public: void disable(){
this->setEnable("No");
    
}


    public: void setEnable(std::string enable){
this->enable= enable;
    
}


    public: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    public: std::string getPrefixName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->prefixName;
    
}


    public: std::string getFirstName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->firstName;
    
}


    public: std::string getLastName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastName;
    
}


    public: std::string getMiddleName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->middleName;
    
}


    public: std::string getSuffixName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->suffixName;
    
}


    public: std::string getCompany(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->company;
    
}


    public: std::string getPositionAtCompany(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->positionAtCompany;
    
}


    public: std::string getMainEmail(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mainEmail;
    
}


    public: std::string getSecondaryEmail(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->secondaryEmail;
    
}


    public: std::string getHomePhone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->homePhone;
    
}


    public: std::string getCellPhone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellPhone;
    
}


    public: std::string getWorkPhone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->workPhone;
    
}


    public: std::string getOtherContact(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->otherContact;
    
}


    public: std::string getElectronicContact(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->electronicDevice;
    
}


    public: std::string getFax(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fax;
    
}


    public: UserRole* getRole(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->role;
    
}


    public: std::string getPermissions(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->permissions;
    
}


    public: std::string getEncryption(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->encryption;
    
}


    public: std::string getSecret(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->secret;
    
}


    public: std::string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->password->get();;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* toVector(){

    BasicArrayList* values = new BasicArrayListD();;
    
values->add(this->userName);
    
values->add(this->prefixName);
    
values->add(this->firstName);
    
values->add(this->lastName);
    
values->add(this->middleName);
    
values->add(this->suffixName);
    
values->add(this->company);
    
values->add(this->positionAtCompany);
    
values->add(this->mainEmail);
    
values->add(this->secondaryEmail);
    
values->add(this->homePhone);
    
values->add(this->cellPhone);
    
values->add(this->workPhone);
    
values->add(this->otherContact);
    
values->add(this->electronicDevice);
    
values->add(this->fax);
    
values->add(this->getRole()->toString());
    

    UserConfigurationDomDocumentMapping* userConfigurationDomDocumentMapping = new UserConfigurationDomDocumentMapping(this->getUserConfigurationInterface());;
    
values->add(userConfigurationDomDocumentMapping->toDomDocumentString());
    
values->add(this->permissions);
    
values->addAllList(this->password->toVector(this->secret));
    
values->add(this->enable);
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
values->add(time);
    
values->add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap(){

    HashMap<Object*, Object*>* values = StdUtil::getInstance()->createHashMap();;
    
values->put(UserData::USERNAME, userName);
    
values->put(UserData::PREFIXNAME, prefixName);
    
values->put(UserData::FIRSTNAME, firstName);
    
values->put(UserData::LASTNAME, lastName);
    
values->put(UserData::MIDDLENAME, middleName);
    
values->put(UserData::SUFFIXNAME, suffixName);
    
values->put(UserData::COMPANY, company);
    
values->put(UserData::POSITIONATCOMPANY, positionAtCompany);
    
values->put(UserData::MAINEMAIL, mainEmail);
    
values->put(UserData::SECONDARYEMAIL, secondaryEmail);
    
values->put(UserData::HOMEPHONE, homePhone);
    
values->put(UserData::CELLPHONE, cellPhone);
    
values->put(UserData::WORKPHONE, workPhone);
    
values->put(UserData::OTHERCONTACT, otherContact);
    
values->put(UserData::ELECTRONICDEVICE, electronicDevice);
    
values->put(UserData::FAX, fax);
    

                        if(this->getRole() != 
                                    nullptr
                                )
                        
                                    {
                                    values->put(UserRoleData::NAME.toString(), this->getRole()->toString());
    

                                    }
                                

    UserConfigurationDomDocumentMapping* userConfigurationDomDocumentMapping = new UserConfigurationDomDocumentMapping(this->getUserConfigurationInterface());;
    
values->put(UserData::CONFIGURATION, userConfigurationDomDocumentMapping->toDomDocumentString());
    
values->put(UserData::PERMISSIONS, this->permissions);
    
values->putAll(this->password->toHashMap(this->secret));
    
values->put(EntryData::getInstance()->ENABLE, this->enable);
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
values->put(EntryData::getInstance()->LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


    public: HashMap<Object*, Object*>* toPasswordHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->password->toHashMap(this->secret);;
    
}


    public: void validateSession(WeblisketSessionInterface* weblisketSession){
weblisketSession->setAuthenticated();
    
weblisketSession->setRole(this->getRole());
    
weblisketSession->setUserName(this->getUserName());
    
}


    public: void updateSession(WeblisketSessionInterface* weblisketSession){
}


    public: bool isSessionValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


                //@Throws(Exception.constructor)
            
    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    public: Document* toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node* toValidationInfoNode(Document* document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: UserConfigurationInterface* getUserConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userConfigurationInterface;
    
}


    public: void setUserConfigurationInterface(UserConfigurationInterface* userConfigurationInterface){
this->userConfigurationInterface= userConfigurationInterface;
    
}


};

            

