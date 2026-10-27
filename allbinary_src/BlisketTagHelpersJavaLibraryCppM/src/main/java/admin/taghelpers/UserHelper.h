
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
        



        #ifndef ADMIN_TAGHELPERS_USERHELPER_H
        #define ADMIN_TAGHELPERS_USERHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class HttpServletRequest;
class PageContext;
class EntryData;
class Portion;
class NewUserFactory;
class UserData;
class UserInterface;
class UserName;
class UserEntityFactory;
class FREEBLISKET_PATH_GLOBALS;
class URLGLOBALS;
class RequestParams;
class LogUtil;
class AbSqlTableUtil;
class StringMaker;
class StringValidationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/Table.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserHelper: public Table {

    /*protected*/ public: LogUtil* logUtil;

    private: HashMap<Object*, Object*>* hashMap;

    private: PageContext* pageContext;

    private: HttpServletRequest* request;

    private: std::string path;

    private: Portion* portion;

public: UserHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    public: std::string delete_();

                //@Throws(Exception.constructor)
            
    public: std::string insert();

    public: std::string update();

    public: std::string drop();

    public: std::string create();

    public: std::string restore();

    public: std::string backup();

};

            


        #endif //ADMIN_TAGHELPERS_USERHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_USERHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_USERHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/installer/Portion.h>)
#include <org/allbinary/business/installer/Portion.h>
#endif
#if __has_include(<org/allbinary/business/user/NewUserFactory.h>)
#include <org/allbinary/business/user/NewUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/business/user/UserInterface.h>)
#include <org/allbinary/business/user/UserInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/username/UserName.h>)
#include <org/allbinary/business/user/username/UserName.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/UserEntityFactory.h>)
#include <org/allbinary/data/tables/user/UserEntityFactory.h>
#endif
#if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/RequestParams.h>)
#include <org/allbinary/logic/communication/http/request/RequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlTableUtil.h>)
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include("admin/taghelpers/Table.h")
#include "admin/taghelpers/Table.h"
#endif

        #endif
    
