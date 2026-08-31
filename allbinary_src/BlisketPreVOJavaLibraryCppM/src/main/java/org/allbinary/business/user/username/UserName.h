
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_USERNAME_USERNAME_H
        #define ORG_ALLBINARY_BUSINESS_USER_USERNAME_USERNAME_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        

    private: static const instance: UserName = new UserName();

    public static UserName getInstance();

    public static string getValidationInfo(string aUserName);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: userName: string;

private constructor ();

public constructor (HashMap<any, any> hashMap);

    public Boolean isValid();

    public string get();

    public Boolean isValid(string aUserName);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_USERNAME_USERNAME_H
