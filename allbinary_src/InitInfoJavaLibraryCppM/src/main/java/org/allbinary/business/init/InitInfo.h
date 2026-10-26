
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INITINFO_H
        #define ORG_ALLBINARY_BUSINESS_INIT_INITINFO_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InitInfoEntity.h"

class InitInfo
            : public Object
         {

    private: static InitInfo instance() { return InitInfo(); }

    public: static InitInfo getInstance();

    public: const std::string TESTING = "TESTING";

    public: const std::string MAINPATH = "MAINPATH";

    public: const std::string TESTHTMLPATH = "TESTHTMLPATH";

    private: std::string testing = 
                nullptr
            ;

    private: AbPath mainPath = 
                nullptr
            ;

    private: AbPath testHtmlPath = 
                nullptr
            ;

    private: bool hasRead = false;

private: InitInfo();

                //@Throws(InitException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void set();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void set(HashMap<Object*, Object*> hashMap);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void get();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setHasRead(bool value);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void updateIfNeeded();

    public: bool isTesting();

    public: std::string getTesting();

    public: std::string getTestHtmlPath();

    public: std::string getMainPath();

    public: void setTesting(std::string value);

    public: void setTestHtmlPath(AbPath value);

    public: void setMainPath(AbPath value);

    public: bool isMainPathValid(AbPath abPath);

    public: bool isTestHtmlPathValid(AbPath abPath);

                //@Throws(Exception.constructor)
            
    public: bool isTestingValid(std::string testing);

    public: HashMap<Object*, Object*> toHashMap();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITINFO_H
