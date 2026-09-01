
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
        



            #include <vector>
        
            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/password/Password.h>

      
#include <org/allbinary/business/user/role/BasicUserRole.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/UserEntityInterface.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/email/NewPasswordEmail.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelper.h"

class AuthenticationRequestHelper: public TagHelper {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: WeblisketSession weblisketSession;

    private: HttpServletRequest request;

public: AuthenticationRequestHelper(HashMap<any, any> hashMap, PageContext pageContext){
this->weblisketSession= WeblisketSession(hashMap, pageContext);
    
this->request= pageContext.getRequest() as HttpServletRequest;
    
}


public: AuthenticationRequestHelper(HashMap<any, any> hashMap, HttpServletRequest httpServletRequest){
this->weblisketSession= WeblisketSession(hashMap, httpServletRequest);
    
this->request= httpServletRequest;
    
}


                //@Throws(Exception.constructor)
            
    private: std::string generateNewPassword(){

                        if(this->weblisketSession != 
                                    nullptr
                                 && this->weblisketSession.getId() != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t startIndex = this->weblisketSession.getId().length();;
    

                        if(startIndex >= 8)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->weblisketSession.getId().substring(startIndex -8);;
    

                                    }
                                
                        else {
                            


                            throw Exception("Error Generating New Password");
                    

                        }
                            

                                    }
                                
                        else {
                            


                            throw Exception("No Session Available For Generating New Password");
                    

                        }
                            
}


    public: Boolean newPassword(){

        try {
            
    std::string userName = this->request.getParameter(WeblisketSessionData::REMOVABLEUSERNAME);;
    

    std::string email = this->request.getParameter(UserData::MAINEMAIL);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    this->logUtil.putF("Generating New Password For: " +userName, this, "newPassword()");
    

                                    }
                                

    UserEntityInterface userEntityInterface = UserEntityFactory::getInstance();;
    

    UserInterface userInterface = userEntityInterface.getUser(userName);;
    

                        if(userInterface.getMainEmail().compareTo(email) != 0)
                        
                                    {
                                    
                        if(userInterface.getSecondaryEmail() != 
                                    nullptr
                                 && userInterface.getSecondaryEmail().compareTo(email) != 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    this->logUtil.putF("Requested Email Is Not In User Profile", this, "newPassword()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                

    std::string newPassword = this->generateNewPassword();;
    
userInterface.setPassword(newPassword);
    

    HashMap<any, any> newPasswordHashMap = userInterface.toPasswordHashMap();;
    
UserEntityFactory::getInstance().update(userName, newPasswordHashMap);
    
NewPasswordEmail(this->abeClientInformation, userInterface, newPassword).process();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    this->logUtil.putF("Generated New Password For: " +userName, this, "newPassword()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "newPassword()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: Boolean changePassword(){

        try {
            
    std::string userName = this->request.getParameter(WeblisketSessionData::REMOVABLEUSERNAME);;
    

    std::string passwordString = this->request.getParameter(WeblisketSessionData::REMOVABLEPASSWORD);;
    

    std::string newPassword = this->request.getParameter(WeblisketSessionData::REMOVABLENEWPASSWORD);;
    

    std::string newReenteredPassword = this->request.getParameter(WeblisketSessionData::REMOVABLEREENTERNEWPASSWORD);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    this->logUtil.putF("Changing Password For User: " +userName, this, "changePassword()");
    

                                    }
                                

    Password password = Password(newPassword);;
    

                        if(!password.isValid().valueOf())
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    this->logUtil.putF("New Password Is Not Valid", this, "changePassword()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if(newPassword.compareTo(newReenteredPassword) != 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    this->logUtil.putF("New Password Fields Do Not Match", this, "changePassword()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    std::string sessionPassword = this->weblisketSession.getPassword();;
    

    UserEntityInterface userEntityInterface = UserEntityFactory::getInstance();;
    

    UserInterface userInterface = userEntityInterface.getUser(userName);;
    

    std::string login = userEntityInterface.login(userName, passwordString);;
    

                        if(login.compareTo(GLOBALS2::LOGINSUCCESS) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    this->logUtil.putF("Authentication Successful", this, "changePassword()");
    

                                    }
                                

    HashMap<any, any> newPasswordHashMap = password.toHashMap(
                            nullptr);;
    
UserEntityFactory::getInstance().update(userName, newPasswordHashMap);
    
NewPasswordEmail(this->abeClientInformation, userInterface, newPassword).process();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    this->logUtil.putF("Authentication Failed", this, "changePassword()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put("Authentication Failed", this, "changePassword()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: Boolean isRoleValid(std::string userName, std::string password, Vector roles){

        try {
            
    UserEntityInterface userEntityInterface = UserEntityFactory::getInstance();;
    

    UserInterface userInterface = userEntityInterface.getUser(userName);;
    

                        if(userInterface.getRole() == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    this->logUtil.putF("Role is null: " +userInterface.getRole() +" Valid Roles: " +roles.toString(), this, "isRoleValid()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    std::vector<Object*> basicUserRoleArray = roles.toArray();;
    

    int32_t size = basicUserRoleArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicUserRole nextRole = basicUserRoleArray[index]! as BasicUserRole;;
    

                        if(userInterface.getRole().getBasicUserRole() === nextRole)
                        
                                    {
                                    userInterface.validateSession(this->weblisketSession as WeblisketSessionInterface);
    
this->request.removeAttribute(WeblisketSessionData::REMOVABLEUSERNAME);
    
this->request.removeAttribute(WeblisketSessionData::REMOVABLEPASSWORD);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Role is not valid: ");
    
stringBuffer.append(userInterface.getRole().toString());
    
stringBuffer.append(" Valid Roles: ");
    
stringBuffer.append(roles.toString());
    
this->logUtil.putF(stringBuffer.toString(), this, "isRoleValid()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "isRoleValid()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


};

            

