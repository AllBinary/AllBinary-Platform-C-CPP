
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATION_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>
#include <java/util/List.h>
class JAXBContext;
class Marshaller;
class XmlAccessType;
class XmlAccessorType;
class XmlElement;
class XmlRootElement;
class XmlType;
class DomDocumentFileHelper;
class DomDocumentHelper;
class InputAutomationModuleConfiguration;
class LogUtil;
class FileUtil;
class FileWrapperUtil;
class AbPath;
class StringUtil;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //name="inputAutomationConfiguration", 
class InputAutomationConfiguration
            : public virtual Object
         {

    private: static inline const std::string FILENAME = "InputAutomationConfig.xml";

    public: static File* getFile();

    /*protected*/ public: LogUtil* logUtil;

    private: bool installed= false;

    private: List<InputAutomationModuleConfiguration*>* inputAutomationModuleConfigurationList;

public: InputAutomationConfiguration();

    public: bool isInstalled();

    public: void setInstalled(bool installed);

    public: List<InputAutomationModuleConfiguration*>* getInputAutomationModuleConfigurationList();

                //@Throws(Exception.constructor)
            
    public: void save();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATION_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/util/List.h>)
#include <java/util/List.h>
#endif
#if __has_include(<javax/xml/bind/JAXBContext.h>)
#include <javax/xml/bind/JAXBContext.h>
#endif
#if __has_include(<javax/xml/bind/Marshaller.h>)
#include <javax/xml/bind/Marshaller.h>
#endif
#if __has_include(<javax/xml/bind/annotation/XmlAccessType.h>)
#include <javax/xml/bind/annotation/XmlAccessType.h>
#endif
#if __has_include(<javax/xml/bind/annotation/XmlAccessorType.h>)
#include <javax/xml/bind/annotation/XmlAccessorType.h>
#endif
#if __has_include(<javax/xml/bind/annotation/XmlElement.h>)
#include <javax/xml/bind/annotation/XmlElement.h>
#endif
#if __has_include(<javax/xml/bind/annotation/XmlRootElement.h>)
#include <javax/xml/bind/annotation/XmlRootElement.h>
#endif
#if __has_include(<javax/xml/bind/annotation/XmlType.h>)
#include <javax/xml/bind/annotation/XmlType.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentFileHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentFileHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>)
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileUtil.h>)
#include <org/allbinary/logic/io/file/FileUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileWrapperUtil.h>)
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif

        #endif
    
