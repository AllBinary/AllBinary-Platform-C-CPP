
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_USER_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_USER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/modules/User.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Boolean.h"
        
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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

User::User() : logUtil(LogUtil::getInstance()){
this->userConfigurationInterface= UserConfigurationInterfaceFactory::getInstance();
    
this->password= new Password(StringUtil::getInstance()->EMPTY_STRING);
    
}


User::User(HttpServletRequest* request) : logUtil(LogUtil::getInstance()){
this->getFormData((new RequestParams(request))->toHashMap());
    
this->userConfigurationInterface= UserConfigurationInterfaceFactory::getInstance(this->getRole());
    
}


User::User(HashMap<Object*, Object*>* userHashMap) : logUtil(LogUtil::getInstance()){
this->getFormData(userHashMap);
    
this->userConfigurationInterface= UserConfigurationInterfaceFactory::getInstance(this->getRole());
    
}


                //@Throws(Exception.constructor)
            
    auto User::getFormData(HashMap<Object*, Object*>* userHashMap) -> void{
this->userName= (new UserName(userHashMap))->get();
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string passwordString = stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::PASSWORD)));;
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil->isEmpty(this->userName) && stringValidationUtil->isEmpty(passwordString))
                        
                                    {
                                    this->userName= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(WeblisketSessionData::REMOVABLEUSERNAME)));
    
passwordString= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(WeblisketSessionData::REMOVABLEPASSWORD)));
    

                                    }
                                

    std::string encryption = stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(EntryData::getInstance()->ENCRYPTION)));;
    

    std::string secret = stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::SECRET)));;
    
this->password= new Password(passwordString);
    
this->prefixName= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::PREFIXNAME)));
    
this->firstName= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::FIRSTNAME)));
    
this->lastName= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::LASTNAME)));
    
this->middleName= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::MIDDLENAME)));
    
this->suffixName= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::SUFFIXNAME)));
    
this->company= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::COMPANY)));
    
this->positionAtCompany= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::POSITIONATCOMPANY)));
    
this->mainEmail= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::MAINEMAIL)));
    
this->secondaryEmail= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::SECONDARYEMAIL)));
    
this->homePhone= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::HOMEPHONE)));
    
this->cellPhone= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::CELLPHONE)));
    
this->workPhone= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::WORKPHONE)));
    
this->otherContact= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::OTHERCONTACT)));
    
this->electronicDevice= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::ELECTRONICDEVICE)));
    
this->fax= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::FAX)));
    
this->role= UserRoleB::getRole(JavaBoxes::unbox<std::string>(userHashMap->get(UserRoleData::NAME->toString())));
    
this->permissions= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(UserData::PERMISSIONS)));
    

                        if(!stringValidationUtil->isEmpty(this->permissions) && this->permissions.compare(StoreFrontData::getInstance()->NAME) == 0)
                        this->permissions= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(StoreFrontData::getInstance()->NAME)));
                                
                             else 
                        if(false)
                        
                                    {
                                    this->permissions= "No Permissions";
    

                                    }
                                
this->enable_= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(userHashMap->get(EntryData::getInstance()->ENABLE)));
    
}


    auto User::isValid() -> bool{

        try {
            
    bool valid = Boolean::TRUE;;
    

                        if(!UserName::getInstance()->isValid(this->userName))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!this->password->isValid())
                        
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
                                

                        if(!stringValidationUtil->isValidRequired(this->mainEmail, 1, UserData::MAXLEN) || JavaString::indexOf(this->mainEmail, "@") ==  -1)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return valid;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VALIDATIONERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put("Failed to validate form", this, commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto User::validationInfo() -> std::string{

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
                                

                        if(!stringValidationUtil->isValidRequired(this->mainEmail, 1, UserData::MAXLEN) || JavaString::indexOf(this->mainEmail, "@") ==  -1)
                        
                                    {
                                    stringBuffer->append("Please enter a valid email address.<br />");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Validating Form";
    
}

}


    auto User::setUserName(std::string value) -> void{
this->userName= value;
    
}


    auto User::setPrefixName(std::string value) -> void{
this->prefixName= value;
    
}


    auto User::setFirstName(std::string value) -> void{
this->firstName= value;
    
}


    auto User::setLastName(std::string value) -> void{
this->lastName= value;
    
}


    auto User::setMiddleName(std::string value) -> void{
this->middleName= value;
    
}


    auto User::setSuffixName(std::string value) -> void{
this->suffixName= value;
    
}


    auto User::setCompany(std::string value) -> void{
this->company= value;
    
}


    auto User::setPositionAtCompany(std::string value) -> void{
this->positionAtCompany= value;
    
}


    auto User::setMainEmail(std::string value) -> void{
this->mainEmail= value;
    
}


    auto User::setSecondaryEmail(std::string value) -> void{
this->secondaryEmail= value;
    
}


    auto User::setHomePhone(std::string value) -> void{
this->homePhone= value;
    
}


    auto User::setCellPhone(std::string value) -> void{
this->cellPhone= value;
    
}


    auto User::setWorkPhone(std::string value) -> void{
this->workPhone= value;
    
}


    auto User::setOtherContact(std::string value) -> void{
this->otherContact= value;
    
}


    auto User::setElectronicContact(std::string value) -> void{
this->electronicDevice= value;
    
}


    auto User::setFax(std::string value) -> void{
this->fax= value;
    
}


    auto User::setRole(UserRole* role) -> void{
this->role= role;
    
}


    auto User::setPermissions(std::string value) -> void{
this->permissions= value;
    
}


    auto User::setEncryption(std::string value) -> void{
this->encryption= value;
    
}


    auto User::setSecret(std::string value) -> void{
this->secret= value;
    
}


    auto User::setPassword(std::string value) -> void{
this->password->set(value);
    
}


    auto User::enable() -> void{
this->setEnable("Yes");
    
}


    auto User::disable() -> void{
this->setEnable("No");
    
}


    auto User::setEnable(std::string enable_) -> void{
this->enable_= enable_;
    
}


    auto User::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userName;
    
}


    auto User::getPrefixName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->prefixName;
    
}


    auto User::getFirstName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->firstName;
    
}


    auto User::getLastName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->lastName;
    
}


    auto User::getMiddleName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->middleName;
    
}


    auto User::getSuffixName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->suffixName;
    
}


    auto User::getCompany() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->company;
    
}


    auto User::getPositionAtCompany() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->positionAtCompany;
    
}


    auto User::getMainEmail() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mainEmail;
    
}


    auto User::getSecondaryEmail() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->secondaryEmail;
    
}


    auto User::getHomePhone() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->homePhone;
    
}


    auto User::getCellPhone() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->cellPhone;
    
}


    auto User::getWorkPhone() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->workPhone;
    
}


    auto User::getOtherContact() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->otherContact;
    
}


    auto User::getElectronicContact() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->electronicDevice;
    
}


    auto User::getFax() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fax;
    
}


    auto User::getRole() -> UserRole*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->role;
    
}


    auto User::getPermissions() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->permissions;
    
}


    auto User::getEncryption() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->encryption;
    
}


    auto User::getSecret() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->secret;
    
}


    auto User::getPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->password->get();;
    
}


                //@Throws(Exception.constructor)
            
    auto User::toVector() -> BasicArrayList*{

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
    
values->add(this->enable_);
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = JavaString::valueOf((int64_t(calendar->getTimeInMillis())));;
    
values->add(time);
    
values->add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return values;
    
}


                //@Throws(Exception.constructor)
            
    auto User::toHashMap() -> HashMap<Object*, Object*>*{

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
                                    values->put(UserRoleData::NAME->toString(), this->getRole()->toString());
    

                                    }
                                

    UserConfigurationDomDocumentMapping* userConfigurationDomDocumentMapping = new UserConfigurationDomDocumentMapping(this->getUserConfigurationInterface());;
    
values->put(UserData::CONFIGURATION, userConfigurationDomDocumentMapping->toDomDocumentString());
    
values->put(UserData::PERMISSIONS, this->permissions);
    
values->putAll(this->password->toHashMap(this->secret));
    
values->put(EntryData::getInstance()->ENABLE, this->enable_);
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = JavaString::valueOf((int64_t(calendar->getTimeInMillis())));;
    
values->put(EntryData::getInstance()->LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return values;
    
}


    auto User::toPasswordHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->password->toHashMap(this->secret);;
    
}


    auto User::validateSession(WeblisketSessionInterface* weblisketSession) -> void{
weblisketSession->setAuthenticated();
    
weblisketSession->setRole(this->getRole());
    
weblisketSession->setUserName(this->getUserName());
    
}


    auto User::updateSession(WeblisketSessionInterface* weblisketSession) -> void{
}


    auto User::isSessionValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}


                //@Throws(Exception.constructor)
            
    auto User::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userName;
    
}


    auto User::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto User::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto User::getUserConfigurationInterface() -> UserConfigurationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userConfigurationInterface;
    
}


    auto User::setUserConfigurationInterface(UserConfigurationInterface* userConfigurationInterface) -> void{
this->userConfigurationInterface= userConfigurationInterface;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_USER_CPP
