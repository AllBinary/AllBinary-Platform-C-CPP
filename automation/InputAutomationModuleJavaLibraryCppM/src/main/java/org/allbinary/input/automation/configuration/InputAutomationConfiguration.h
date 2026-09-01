
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/util/List.h>

      
#include <javax/xml/bind/JAXBContext.h>

      
#include <javax/xml/bind/Marshaller.h>

      
#include <javax/xml/bind/annotation/XmlAccessType.h>

      
#include <javax/xml/bind/annotation/XmlAccessorType.h>

      
#include <javax/xml/bind/annotation/XmlElement.h>

      
#include <javax/xml/bind/annotation/XmlRootElement.h>

      
#include <javax/xml/bind/annotation/XmlType.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentFileHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //name="inputAutomationConfiguration", 
class InputAutomationConfiguration
            : public Object
         {

    private: static const std::string FILENAME = "InputAutomationConfig.xml";

    public: static File getFile();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: bool installed= false;

    private: List<InputAutomationModuleConfiguration> inputAutomationModuleConfigurationList;

public: InputAutomationConfiguration();

    public: bool isInstalled();

    public: void setInstalled(bool installed);

    public: List<InputAutomationModuleConfiguration> getInputAutomationModuleConfigurationList();

                //@Throws(Exception.constructor)
            
    public: void save();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATION_H
