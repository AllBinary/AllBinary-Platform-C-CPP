
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfigsData.h"
#include "LogConfigData.h"
#include "LogConfig.h"

class LoggingInitInfo
            : public Object
         {
        

    private: static const INITFILENAME: string = "logConfig.xml";

    private: static const PACKAGE: string = PATH_GLOBALS.getInstance()!.INIT_PATH;

    private: static logConfigInfoList: BasicArrayList = 
                null
            ;

    private: static hasRead: bool = false;

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static Document getDoc();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static write();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    static read();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static setHasRead(bool value);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    static updateIfNeeded();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static set(BasicArrayList logConfigInfoVector);

                //@Throws(Exception.constructor)
            
    public static BasicArrayList get();

                //@Throws(Exception.constructor)
            
    public static BasicArrayList getTypeNameList();

                //@Throws(Exception.constructor)
            
    public static BasicArrayList getTypeList();

public constructor ();

    public bool isValid();

                //@Throws(Exception.constructor)
            
    public int32_t getNumberOfLogConfigs();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_H
