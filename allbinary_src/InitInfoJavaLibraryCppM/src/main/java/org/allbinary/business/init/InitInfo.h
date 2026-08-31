
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
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
        

    private: static const instance: InitInfo = new InitInfo();

    public static InitInfo getInstance();

    public const TESTING: string = "TESTING";

    public const MAINPATH: string = "MAINPATH";

    public const TESTHTMLPATH: string = "TESTHTMLPATH";

    private: testing: string = 
                null
            ;

    private: mainPath: AbPath = 
                null
            ;

    private: testHtmlPath: AbPath = 
                null
            ;

    private: hasRead: bool = false;

private constructor ();

                //@Throws(InitException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public set();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public set(HashMap<any, any> hashMap);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    get();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setHasRead(bool value);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    updateIfNeeded();

    public bool isTesting();

    public string getTesting();

    public string getTestHtmlPath();

    public string getMainPath();

    public setTesting(string value);

    public setTestHtmlPath(AbPath value);

    public setMainPath(AbPath value);

    public bool isMainPathValid(AbPath abPath);

    public bool isTestHtmlPathValid(AbPath abPath);

                //@Throws(Exception.constructor)
            
    public bool isTestingValid(string testing);

    public HashMap<any, any> toHashMap();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITINFO_H
