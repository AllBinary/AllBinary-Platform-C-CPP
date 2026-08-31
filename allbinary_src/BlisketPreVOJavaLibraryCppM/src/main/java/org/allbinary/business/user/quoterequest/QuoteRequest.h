
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_QUOTEREQUEST_QUOTEREQUEST_H
        #define ORG_ALLBINARY_BUSINESS_USER_QUOTEREQUEST_QUOTEREQUEST_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/quoterequest/QuoteRequestData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/data/generator/QuoteRequestIdGenerator.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class QuoteRequest
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: id: string;

    private: userName: string;

    private: projectInfo: string;

    private: userComments: string;

    private: budget: string;

    private: timeFrame: string;

    private: comments: string;

public constructor (string userName, HttpServletRequest request);

public constructor (HashMap<any, any> hashMap);

    public Boolean isValid();

    public string validationInfo();

    public Vector toVector();

    public HashMap<any, any> toHashMap();

    public setUserName(string value);

    public setProjectInfo(string value);

    public setUserComments(string value);

    public setBudget(string value);

    public setTimeFrame(string value);

    public setComments(string value);

    public string getUserName();

    public string getProjectInfo();

    public string getUserComments();

    public string getBudget();

    public string getTimeFrame();

    public string getComments();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_QUOTEREQUEST_QUOTEREQUEST_H
