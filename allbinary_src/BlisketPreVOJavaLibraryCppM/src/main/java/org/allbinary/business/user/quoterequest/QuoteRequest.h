
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class BasicArrayList;
class BasicArrayListD;
class HttpServletRequest;
class EntryData;
class QuoteRequestData;
class UserData;
class QuoteRequestIdGenerator;
class StdUtil;
class LogUtil;
class AbSqlData;
class StringMaker;
class StringUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class QuoteRequest
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: std::string id;

    private: std::string userName;

    private: std::string projectInfo;

    private: std::string userComments;

    private: std::string budget;

    private: std::string timeFrame;

    private: std::string comments;

public: QuoteRequest(std::string userName, HttpServletRequest* request);

public: QuoteRequest(HashMap<Object*, Object*>* hashMap);

    public: bool isValid();

    public: std::string validationInfo();

    public: BasicArrayList* toVector();

    public: HashMap<Object*, Object*>* toHashMap();

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_QUOTEREQUEST_QUOTEREQUEST_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_QUOTEREQUEST_QUOTEREQUEST_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/quoterequest/QuoteRequestData.h>)
#include <org/allbinary/business/quoterequest/QuoteRequestData.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/data/generator/QuoteRequestIdGenerator.h>)
#include <org/allbinary/data/generator/QuoteRequestIdGenerator.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlData.h>)
#include <org/allbinary/logic/communication/sql/AbSqlData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
