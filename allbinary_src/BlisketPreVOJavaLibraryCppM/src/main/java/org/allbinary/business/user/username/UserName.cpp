
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_USERNAME_USERNAME_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_USERNAME_USERNAME_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/username/UserName.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto UserName::instance_owner() -> UserName* { static std::unique_ptr<UserName> value(new UserName()); return value.get(); }
UserName* UserName::instance = UserName::instance_owner();

    auto UserName::getInstance() -> UserName*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserName::instance;
    
}


UserName::UserName() : logUtil(LogUtil::getInstance()){
}


UserName::UserName(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()){
this->userName= JavaBoxes::unbox<std::string>(hashMap->get(UserData::USERNAME));
    
}


    auto UserName::isValid() -> bool{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isValid(this->userName);;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, "isUserNameValid()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    auto UserName::get() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    auto UserName::isValid(std::string aUserName) -> bool{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
    BooleanFactory* booleanFactory = BooleanFactory::getInstance();;
    

    bool valid = booleanFactory->TRUE;;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VALIDATION))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("UserName: ") +JavaString::valueOf(aUserName), this, commonStrings->IS_VALID);
    

                                    }
                                

                        if(!StringValidationUtil::getInstance()->isValidRequired(aUserName, 5, UserData::MAXLEN))
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VALIDATION))
                        
                                    {
                                    this->logUtil->putF("UserName is invalid", this, commonStrings->IS_VALID);
    

                                    }
                                
valid= booleanFactory->FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    auto UserName::getValidationInfo(std::string aUserName) -> std::string{

                        if(!StringValidationUtil::getInstance()->isValidRequired(aUserName, 5, UserData::MAXLEN))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Please enter a User Name with more than 5 characters.<br/>";
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_USERNAME_USERNAME_CPP
