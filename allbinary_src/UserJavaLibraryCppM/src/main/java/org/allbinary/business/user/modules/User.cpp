
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

public constructor (){

            super();
        this.userConfigurationInterface= UserConfigurationInterfaceFactory.getInstance();
    
this.password= new Password(StringUtil.getInstance()!.EMPTY_STRING);
    
}


public constructor (HttpServletRequest request){

            super();
        this.getFormData(new RequestParams(request).toHashMap());
    
this.userConfigurationInterface= UserConfigurationInterfaceFactory.getInstance(this.getRole());
    
}


public constructor (HashMap<any, any> userHashMap){

            super();
        this.getFormData(userHashMap);
    
this.userConfigurationInterface= UserConfigurationInterfaceFactory.getInstance(this.getRole());
    
}


                //@Throws(Exception.constructor)
            
    public getFormData(HashMap<any, any> userHashMap){
this.userName= new UserName(userHashMap).get();
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    passwordString: string = stringUtil!.getNonNull(userHashMap!.get(UserData.PASSWORD) as string)!;;
    

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(stringValidationUtil!.isEmpty(this.userName) && stringValidationUtil!.isEmpty(passwordString))
                        
                                    {
                                    this.userName= stringUtil!.getNonNull(userHashMap!.get(WeblisketSessionData.REMOVABLEUSERNAME) as string);
    
passwordString= stringUtil!.getNonNull(userHashMap!.get(WeblisketSessionData.REMOVABLEPASSWORD) as string);
    

                                    }
                                

    encryption: string = stringUtil!.getNonNull(userHashMap!.get(EntryData.getInstance()!.ENCRYPTION) as string)!;;
    

    secret: string = stringUtil!.getNonNull(userHashMap!.get(UserData.SECRET) as string)!;;
    
this.password= new Password(passwordString);
    
this.prefixName= stringUtil!.getNonNull(userHashMap!.get(UserData.PREFIXNAME) as string);
    
this.firstName= stringUtil!.getNonNull(userHashMap!.get(UserData.FIRSTNAME) as string);
    
this.lastName= stringUtil!.getNonNull(userHashMap!.get(UserData.LASTNAME) as string);
    
this.middleName= stringUtil!.getNonNull(userHashMap!.get(UserData.MIDDLENAME) as string);
    
this.suffixName= stringUtil!.getNonNull(userHashMap!.get(UserData.SUFFIXNAME) as string);
    
this.company= stringUtil!.getNonNull(userHashMap!.get(UserData.COMPANY) as string);
    
this.positionAtCompany= stringUtil!.getNonNull(userHashMap!.get(UserData.POSITIONATCOMPANY) as string);
    
this.mainEmail= stringUtil!.getNonNull(userHashMap!.get(UserData.MAINEMAIL) as string);
    
this.secondaryEmail= stringUtil!.getNonNull(userHashMap!.get(UserData.SECONDARYEMAIL) as string);
    
this.homePhone= stringUtil!.getNonNull(userHashMap!.get(UserData.HOMEPHONE) as string);
    
this.cellPhone= stringUtil!.getNonNull(userHashMap!.get(UserData.CELLPHONE) as string);
    
this.workPhone= stringUtil!.getNonNull(userHashMap!.get(UserData.WORKPHONE) as string);
    
this.otherContact= stringUtil!.getNonNull(userHashMap!.get(UserData.OTHERCONTACT) as string);
    
this.electronicDevice= stringUtil!.getNonNull(userHashMap!.get(UserData.ELECTRONICDEVICE) as string);
    
this.fax= stringUtil!.getNonNull(userHashMap!.get(UserData.FAX) as string);
    
this.role= UserRoleB.getRole(userHashMap!.get(UserRoleData.NAME.toString()) as string);
    
this.permissions= stringUtil!.getNonNull(userHashMap!.get(UserData.PERMISSIONS) as string);
    

                        if(!stringValidationUtil!.isEmpty(this.permissions) && this.permissions.compareTo(StoreFrontData.getInstance()!.NAME) == 0)
                        this.permissions= stringUtil!.getNonNull(userHashMap!.get(StoreFrontData.getInstance()!.NAME) as string)
                             else 
                        if(this.permissions == 
                                    null
                                )
                        
                                    {
                                    this.permissions= "No Permissions";
    

                                    }
                                
this.enable= stringUtil!.getNonNull(userHashMap!.get(EntryData.getInstance()!.ENABLE) as string);
    
}


    public Boolean isValid(){

        try {
            
    valid: Boolean = Boolean.TRUE;;
    

                        if(!UserName.getInstance()!.isValid(this.userName).valueOf())
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!this.password.isValid().valueOf())
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(!stringValidationUtil!.isValidRequired(this.firstName, 1, UserData.MAXLEN))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.lastName, 1, UserData.MAXLEN))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.mainEmail, 1, UserData.MAXLEN) || this.mainEmail!.indexOf("@") ==  -1)
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VALIDATIONERROR))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put("Failed to validate form", this, commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


    public string validationInfo(){

        try {
            
    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(UserName.getValidationInfo(this.userName));
    
stringBuffer!.append(this.password.getValidationInfo());
    

                        if(!stringValidationUtil!.isValidRequired(this.firstName, 1, UserData.MAXLEN))
                        
                                    {
                                    stringBuffer!.append("Please enter a valid First Name.<br />");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.lastName, 1, UserData.MAXLEN))
                        
                                    {
                                    stringBuffer!.append("Please enter a valid Last Name.<br />");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.mainEmail, 1, UserData.MAXLEN) || this.mainEmail!.indexOf("@") ==  -1)
                        
                                    {
                                    stringBuffer!.append("Please enter a valid email address.<br />");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public setUserName(string value){
this.userName= value;
    
}


    public setPrefixName(string value){
this.prefixName= value;
    
}


    public setFirstName(string value){
this.firstName= value;
    
}


    public setLastName(string value){
this.lastName= value;
    
}


    public setMiddleName(string value){
this.middleName= value;
    
}


    public setSuffixName(string value){
this.suffixName= value;
    
}


    public setCompany(string value){
this.company= value;
    
}


    public setPositionAtCompany(string value){
this.positionAtCompany= value;
    
}


    public setMainEmail(string value){
this.mainEmail= value;
    
}


    public setSecondaryEmail(string value){
this.secondaryEmail= value;
    
}


    public setHomePhone(string value){
this.homePhone= value;
    
}


    public setCellPhone(string value){
this.cellPhone= value;
    
}


    public setWorkPhone(string value){
this.workPhone= value;
    
}


    public setOtherContact(string value){
this.otherContact= value;
    
}


    public setElectronicContact(string value){
this.electronicDevice= value;
    
}


    public setFax(string value){
this.fax= value;
    
}


    public setRole(UserRole role){
this.role= role;
    
}


    public setPermissions(string value){
this.permissions= value;
    
}


    public setEncryption(string value){
this.encryption= value;
    
}


    public setSecret(string value){
this.secret= value;
    
}


    public setPassword(string value){
this.password.set(value);
    
}


    public enable(){
this.setEnable("Yes");
    
}


    public disable(){
this.setEnable("No");
    
}


    public setEnable(string enable){
this.enable= enable;
    
}


    public string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userName;
    
}


    public string getPrefixName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.prefixName;
    
}


    public string getFirstName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.firstName;
    
}


    public string getLastName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lastName;
    
}


    public string getMiddleName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.middleName;
    
}


    public string getSuffixName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.suffixName;
    
}


    public string getCompany(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.company;
    
}


    public string getPositionAtCompany(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.positionAtCompany;
    
}


    public string getMainEmail(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mainEmail;
    
}


    public string getSecondaryEmail(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.secondaryEmail;
    
}


    public string getHomePhone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.homePhone;
    
}


    public string getCellPhone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cellPhone;
    
}


    public string getWorkPhone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.workPhone;
    
}


    public string getOtherContact(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.otherContact;
    
}


    public string getElectronicContact(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.electronicDevice;
    
}


    public string getFax(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.fax;
    
}


    public UserRole getRole(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.role;
    
}


    public string getPermissions(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.permissions;
    
}


    public string getEncryption(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.encryption;
    
}


    public string getSecret(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.secret;
    
}


    public string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.password.get();;
    
}


                //@Throws(Exception.constructor)
            
    public Vector toVector(){

    values: Vector = new Vector();;
    
values.add(this.userName);
    
values.add(this.prefixName);
    
values.add(this.firstName);
    
values.add(this.lastName);
    
values.add(this.middleName);
    
values.add(this.suffixName);
    
values.add(this.company);
    
values.add(this.positionAtCompany);
    
values.add(this.mainEmail);
    
values.add(this.secondaryEmail);
    
values.add(this.homePhone);
    
values.add(this.cellPhone);
    
values.add(this.workPhone);
    
values.add(this.otherContact);
    
values.add(this.electronicDevice);
    
values.add(this.fax);
    
values.add(this.getRole()!.toString());
    

    userConfigurationDomDocumentMapping: UserConfigurationDomDocumentMapping = new UserConfigurationDomDocumentMapping(this.getUserConfigurationInterface());;
    
values.add(userConfigurationDomDocumentMapping!.toDomDocumentString());
    
values.add(this.permissions);
    
values.addAll(this.password.toVector(this.secret));
    
values.add(this.enable);
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
values.add(time);
    
values.add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){

    values: HashMap<any, any> = new HashMap<any, any>();;
    
values.put(UserData.USERNAME, userName);
    
values.put(UserData.PREFIXNAME, prefixName);
    
values.put(UserData.FIRSTNAME, firstName);
    
values.put(UserData.LASTNAME, lastName);
    
values.put(UserData.MIDDLENAME, middleName);
    
values.put(UserData.SUFFIXNAME, suffixName);
    
values.put(UserData.COMPANY, company);
    
values.put(UserData.POSITIONATCOMPANY, positionAtCompany);
    
values.put(UserData.MAINEMAIL, mainEmail);
    
values.put(UserData.SECONDARYEMAIL, secondaryEmail);
    
values.put(UserData.HOMEPHONE, homePhone);
    
values.put(UserData.CELLPHONE, cellPhone);
    
values.put(UserData.WORKPHONE, workPhone);
    
values.put(UserData.OTHERCONTACT, otherContact);
    
values.put(UserData.ELECTRONICDEVICE, electronicDevice);
    
values.put(UserData.FAX, fax);
    

                        if(this.getRole() != 
                                    null
                                )
                        
                                    {
                                    values.put(UserRoleData.NAME.toString(), this.getRole()!.toString());
    

                                    }
                                

    userConfigurationDomDocumentMapping: UserConfigurationDomDocumentMapping = new UserConfigurationDomDocumentMapping(this.getUserConfigurationInterface());;
    
values.put(UserData.CONFIGURATION, userConfigurationDomDocumentMapping!.toDomDocumentString());
    
values.put(UserData.PERMISSIONS, this.permissions);
    
values.putAll(this.password.toHashMap(this.secret));
    
values.put(EntryData.getInstance()!.ENABLE, this.enable);
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
values.put(EntryData.getInstance()!.LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


    public HashMap<any, any> toPasswordHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.password.toHashMap(this.secret);;
    
}


    public validateSession(WeblisketSessionInterface weblisketSession){
weblisketSession!.setAuthenticated();
    
weblisketSession!.setRole(this.getRole());
    
weblisketSession!.setUserName(this.getUserName());
    
}


    public updateSession(WeblisketSessionInterface weblisketSession){
}


    public Boolean isSessionValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    
}


                //@Throws(Exception.constructor)
            
    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userName;
    
}


    public Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public UserConfigurationInterface getUserConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userConfigurationInterface;
    
}


    public setUserConfigurationInterface(UserConfigurationInterface userConfigurationInterface){
this.userConfigurationInterface= userConfigurationInterface;
    
}


};

            

