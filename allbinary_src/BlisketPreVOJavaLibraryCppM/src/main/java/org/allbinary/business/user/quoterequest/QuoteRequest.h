
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: std::string id;

    private: std::string userName;

    private: std::string projectInfo;

    private: std::string userComments;

    private: std::string budget;

    private: std::string timeFrame;

    private: std::string comments;

public: QuoteRequest(std::string userName, HttpServletRequest request);

public: QuoteRequest(HashMap<any, any> hashMap);

    public: Boolean isValid();

    public: std::string validationInfo();

    public: Vector toVector();

    public: HashMap<any, any> toHashMap();

    public: void setUserName(std::string value);

    public: void setProjectInfo(std::string value);

    public: void setUserComments(std::string value);

    public: void setBudget(std::string value);

    public: void setTimeFrame(std::string value);

    public: void setComments(std::string value);

    public: std::string getUserName();

    public: std::string getProjectInfo();

    public: std::string getUserComments();

    public: std::string getBudget();

    public: std::string getTimeFrame();

    public: std::string getComments();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_QUOTEREQUEST_QUOTEREQUEST_H
