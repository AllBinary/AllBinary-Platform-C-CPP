
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
        
class UserName
            : public Object
         {

    private: static UserName instance() { return UserName(); }

    public: static UserName getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserName::instance();
    
}


    public: static std::string getValidationInfo(std::string aUserName){

                        if(!StringValidationUtil::getInstance().isValidRequired(aUserName, 5, UserData::MAXLEN))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Please enter a User Name with more than 5 characters.<br/>";
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string userName;

private: UserName(){
}


public: UserName(HashMap<Object*, Object*> hashMap){
this->userName= hashMap.get(UserData::USERNAME);
    
}


    public: Boolean isValid(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isValid(this->userName);;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put("Failed to validate form", this, "isUserNameValid()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: std::string get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    public: Boolean isValid(std::string aUserName){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

        try {
            
    BooleanFactory booleanFactory = BooleanFactory::getInstance();;
    

    Boolean valid = booleanFactory.TRUE;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VALIDATION))
                        
                                    {
                                    this->logUtil.putF("UserName: " +aUserName, this, commonStrings.IS_VALID);
    

                                    }
                                

                        if(!StringValidationUtil::getInstance().isValidRequired(aUserName, 5, UserData::MAXLEN))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VALIDATION))
                        
                                    {
                                    this->logUtil.putF("UserName is invalid", this, commonStrings.IS_VALID);
    

                                    }
                                
valid= booleanFactory.FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put("Failed to validate form", this, commonStrings.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


};

            

