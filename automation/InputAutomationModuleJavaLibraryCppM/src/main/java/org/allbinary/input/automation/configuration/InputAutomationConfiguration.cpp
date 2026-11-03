
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATION_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/configuration/InputAutomationConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

InputAutomationConfiguration::InputAutomationConfiguration() : logUtil(LogUtil::getInstance()){
}


    auto InputAutomationConfiguration::getFile() -> File*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new File(FILENAME);
    
}


    auto InputAutomationConfiguration::isInstalled() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->installed;
    
}


    auto InputAutomationConfiguration::setInstalled(bool installed) -> void{
this->installed= installed;
    
this->logUtil->putF(JavaString::valueOf("Installed: ") +JavaString::valueOf(installed), this, "setIntalled");
    
}


    auto InputAutomationConfiguration::getInputAutomationModuleConfigurationList() -> List<InputAutomationModuleConfiguration*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputAutomationModuleConfigurationList;
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationConfiguration::save() -> void{

    Document* document = DomDocumentHelper::create();;
    

                    //Otherwise - statement - EmptyStmt


    File* file = new File(FILENAME);;
    
FileUtil::getInstance()->copy(new AbPath(file->getAbsolutePath(), StringUtil::getInstance()->EMPTY_STRING), new AbPath(JavaString::valueOf(file->getAbsolutePath()) +JavaString::valueOf(".bak.xml"), StringUtil::getInstance()->EMPTY_STRING));
    

    JAXBContext* jaxbContext = JAXBContext::newInstance(
                            Class::forType(typeid(InputAutomationConfiguration)));;
    

    Marshaller* marshaller = jaxbContext->createMarshaller();;
    
marshaller->setProperty(Marshaller::JAXB_FORMATTED_OUTPUT, true);
    
marshaller->marshal(this, document);
    
DomDocumentFileHelper::save(FileWrapperUtil::wrapFile(file), document);
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATION_CPP
