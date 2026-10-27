
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIG_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class EntryData;
class DomNodeHelper;
class DomSearchHelper;
class BooleanUtil;
class BasicArrayList;
class BasicArrayListD;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LogConfigData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LogConfig
            : public virtual Object
         {

    private: bool isEnabled_;

    private: std::string name;

    private: std::string description;

    private: std::string path;

    private: std::string fileName;

public: LogConfig(std::string aName, std::string aDescription, std::string aPath, std::string aFileName);

public: LogConfig(Node* node);

    public: std::string getName();

    public: bool isEnabled();

    public: void enable();

    public: void disable();

    public: std::string getDescription();

    public: std::string getFileName();

    public: void setName(std::string value);

    public: void setDescription(std::string value);

    public: void setPath(std::string value);

    public: void setFileName(std::string value);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getTypeVector();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIG_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIG_H_COMPLETE
        #if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanUtil.h>)
#include <org/allbinary/logic/java/bool/BooleanUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/communication/log/config/LogConfigData.h")
#include "org/allbinary/logic/communication/log/config/LogConfigData.h"
#endif

        #endif
    
