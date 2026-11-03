
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_PASSWORD_PASSWORD_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_PASSWORD_PASSWORD_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/password/Password.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Random.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

Password::Password(std::string password) : logUtil(LogUtil::getInstance()){
this->password= password;
    
}


    auto Password::set(std::string value) -> void{
this->password= value;
    
}


    auto Password::get() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->password;
    
}


    auto Password::isValid() -> bool{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
    bool valid = Boolean::TRUE;;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VALIDATION))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Password: ") +JavaString::valueOf(this->password), this, commonStrings->IS_VALID);
    

                                    }
                                

                        if(!StringValidationUtil::getInstance()->isValidRequired(this->password, 6, UserData::MAXLEN))
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VALIDATION))
                        
                                    {
                                    this->logUtil->putF("Password is invalid", this, commonStrings->IS_VALID);
    

                                    }
                                
valid= Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return valid;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VALIDATIONERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", "Password", commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto Password::getValidationInfo() -> std::string{

                        if(!StringValidationUtil::getInstance()->isValidRequired(this->password, 6, UserData::MAXLEN))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Please enter a Password with more than 6 characters.<br />";
    

                                    }
                                

    StringUtil* stringUtil = StringUtil::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringUtil->EMPTY_STRING;
    
}


    auto Password::toVector(std::string secret) -> BasicArrayList*{
this->password= StringUtil::getInstance()->getNonNull(this->password);
    

    int32_t random = (new Random())->nextInt(SuperCrypt::KEYMAX);;
    

    BasicArrayList* vector = new BasicArrayListD();;
    
vector->add((int32_t(random)).toString());
    
vector->add(secret);
    
vector->add((new SuperCrypt(random))->encrypt(this->password));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return vector;
    
}


    auto Password::toHashMap(std::string secret) -> HashMap<Object*, Object*>*{
this->password= StringUtil::getInstance()->getNonNull(this->password);
    

    HashMap<Object*, Object*>* values = StdUtil::getInstance()->createHashMap();;
    

    int32_t random = (new Random())->nextInt(SuperCrypt::KEYMAX);;
    
values->put(EntryData::getInstance()->ENCRYPTION, (int32_t(random)).toString());
    
values->put(UserData::SECRET, secret);
    
values->put(UserData::PASSWORD, (new SuperCrypt(random))->encrypt(this->password));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return values;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_PASSWORD_PASSWORD_CPP
