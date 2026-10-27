
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DomSearchHelper;
class DomDocumentHelper;
class XmlDocumentHelper;
class PATH_GLOBALS;
class URLGLOBALS;
class AbFileLocalInputStream;
class AbFile;
class AbPath;
class BasicArrayList;
class BasicArrayListD;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LogConfigsData;
class LogConfigData;
class LogConfig;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LoggingInitInfo
            : public virtual Object
         {

    private: static inline const std::string INITFILENAME = "logConfig.xml";

    private: static const std::string PACKAGE;

    private: static inline BasicArrayList* logConfigInfoList = 
                nullptr
            ;

    private: static inline bool hasRead = false;

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static Document* getDoc();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void write();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: static void read();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void setHasRead(bool value);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: static void updateIfNeeded();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void set(BasicArrayList* logConfigInfoVector);

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList* get();

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList* getTypeNameList();

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList* getTypeList();

public: LoggingInitInfo();

    public: bool isValid();

                //@Throws(Exception.constructor)
            
    public: int32_t getNumberOfLogConfigs();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/globals/PATH_GLOBALS.h>)
#include <org/allbinary/globals/PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileLocalInputStream.h>)
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/logic/communication/log/config/LogConfigsData.h")
#include "org/allbinary/logic/communication/log/config/LogConfigsData.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/config/LogConfigData.h")
#include "org/allbinary/logic/communication/log/config/LogConfigData.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/config/LogConfig.h")
#include "org/allbinary/logic/communication/log/config/LogConfig.h"
#endif

        #endif
    
