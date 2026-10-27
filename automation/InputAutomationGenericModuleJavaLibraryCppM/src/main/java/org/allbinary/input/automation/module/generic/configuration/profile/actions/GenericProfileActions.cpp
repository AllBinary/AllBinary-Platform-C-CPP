
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONS_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/DataOutputStream.h>

      
#include <java/io/File.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/io/FileOutputStream.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>

      
#include <org/allbinary/input/automation/module/DefaultListModelHelper.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfiles.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionsJPanel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionsData.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h"

const std::string GenericProfileActions::DEFAULT_PROFILE_ACTIONS_PATH = JavaString::valueOf(GenericProfiles::DEFAULT_PROFILES_PATH) +JavaString::valueOf("actions/");

GenericProfileActions::GenericProfileActions(GenericProfileActionsJPanel* genericProfileActionsJPanel, std::string name) : logUtil(LogUtil::getInstance()), commonFileStrings(CommonDataFileStrings::getInstance()){
this->setName(name);
    
this->init(genericProfileActionsJPanel);
    
this->load();
    
}


GenericProfileActions::GenericProfileActions(GenericProfileActionsJPanel* genericProfileActionsJPanel, AbPath* abPath, std::string name) : logUtil(LogUtil::getInstance()), commonFileStrings(CommonDataFileStrings::getInstance()){
this->setName(name);
    
this->init(genericProfileActionsJPanel);
    
this->load();
    
}


GenericProfileActions::GenericProfileActions(GenericProfileActionsJPanel* genericProfileActionsJPanel, FileInputStream* fileInputStream, std::string name) : logUtil(LogUtil::getInstance()), commonFileStrings(CommonDataFileStrings::getInstance()){
this->setName(name);
    
this->init(genericProfileActionsJPanel);
    
this->fileInit(fileInputStream);
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileActions::init(GenericProfileActionsJPanel* genericProfileActionsJPanel) -> void{
this->setGenericProfileActionsJPanel(genericProfileActionsJPanel);
    
this->actionsDefaultListModelHelper= new DefaultListModelHelper();
    
this->setHashMap(new HashMap<Object*, Object*>());
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileActions::save() -> void{

    FileOutputStream* idFile = new FileOutputStream(GenericProfileActions::DEFAULT_PROFILE_ACTIONS_PATH +getName() +this->commonFileStrings->_XML);;
    

    DataOutputStream* idOutData = new DataOutputStream(idFile);;
    
idOutData->writeBytes(XmlDocumentHelper::toString(this->toXmlDoc()));
    
}


    auto GenericProfileActions::getFile(std::string name) -> File*{

    std::string fileName = JavaString::valueOf(JavaString::valueOf(DEFAULT_PROFILE_ACTIONS_PATH) +JavaString::valueOf(name)) +JavaString::valueOf(this->commonFileStrings->_XML);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new File(fileName);
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileActions::load() -> void{

    File* file = this->getFile(getName());;
    

                        if(file->isFile())
                        
                                    {
                                    
    FileInputStream* idFile = new FileInputStream(file);;
    
this->fileInit(idFile);
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf("No Profile: ") +JavaString::valueOf(file->getAbsolutePath()), this, "Contructor");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileActions::fileInit(FileInputStream* fileInputStream) -> void{

    std::vector<int8_t> bytes = std::vector<int8_t>(100000);;
    

    int32_t length = fileInputStream->read(bytes);;
    

    std::string data = JavaString::fromChars(bytes);;
    

    int32_t endIndex = JavaString::lastIndexOf(data, '>');;
    

    Document* document = DomDocumentHelper::create(JavaString::substring(data, 0, endIndex +1));;
    

    NodeList* nameNodeList = document->getElementsByTagName(GenericProfileActionsData::NAME);;
    
this->logUtil->putF(JavaString::valueOf("Number Of Profiles Specified: ") +JavaString::valueOf(nameNodeList->getLength()), this, "Contructor");
    




                        for (
    int32_t index = 0;index < nameNodeList->getLength(); index++)
        {

    Node* node = nameNodeList->item(index);;
    

    NodeList* nodeList = node->getChildNodes();;
    

                        if(nodeList != 
                                    nullptr
                                )
                        
                                    {
                                    this->initActions(nodeList);
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf(GenericProfileActionData::NAME) +JavaString::valueOf(" Name Node Node Children"));
                    

                        }
                            
}

this->logUtil->putF(JavaString::valueOf(JavaString::valueOf("Loaded: ") +JavaString::valueOf(this->getHashMap()->size())) +JavaString::valueOf(" Configuration Profile Action(s)"), this, "Contructor");
    
this->getDefaultListModelHelper()->initDefaultModelList();
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileActions::initActions(NodeList* nodeList) -> void{




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* actionNode = nodeList->item(index);;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    GenericProfileAction* genericConfigurationProfileAction = new GenericProfileAction(this->getGenericProfileActionsJPanel()->getGenericProfileActionJPanel(), actionNode);;
    
this->getHashMap()->put(genericConfigurationProfileAction->getName(), genericConfigurationProfileAction);
    
this->getDefaultListModelHelper()->add(genericConfigurationProfileAction->getName());
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf(GenericProfileActionData::NAME) +JavaString::valueOf(" Node Null"));
                    

                        }
                            
}

}


    auto GenericProfileActions::getDefaultListModelHelper() -> DefaultListModelHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->actionsDefaultListModelHelper;
    
}


    auto GenericProfileActions::getAction(std::string string) -> GenericProfileAction*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GenericProfileAction*>(this->getHashMap()->get(string));
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileActions::add(std::string name) -> void{

    GenericProfileAction* genericProfileAction = new GenericProfileAction(name);;
    
this->getHashMap()->put(genericProfileAction->getName(), genericProfileAction);
    
this->getDefaultListModelHelper()->add(genericProfileAction->getName());
    
this->getDefaultListModelHelper()->initDefaultModelList();
    
this->save();
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileActions::remove(std::string name) -> void{
this->getHashMap()->remove(name);
    
this->getDefaultListModelHelper()->remove(name);
    
this->getDefaultListModelHelper()->initDefaultModelList();
    
this->save();
    
}


    auto GenericProfileActions::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
this->logUtil->putF(JavaString::valueOf("HashMap: ") +JavaString::valueOf(hashMap->toString()), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileActions::toXmlNode(Document* document) -> Node*{

    Node* node = document->createElement(GenericProfileActionsData::NAME);;
    

    Set* set = this->getHashMap()->keys();;
    

    std::vector<Object*> actionNameArray = set->toArray();;
    

    int32_t size = actionNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string nextActionName = actionNameArray[index];;
    

    GenericProfileAction* nextGenericProfileAction = dynamic_cast<GenericProfileAction*>(this->getAction(nextActionName));;
    
node->appendChild(nextGenericProfileAction->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileActions::toXmlDoc() -> Document*{

    Document* document = DomDocumentHelper::create();;
    

    Node* node = this->toXmlNode(document);;
    
document->appendChild(node);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


    auto GenericProfileActions::getGenericProfileActionsJPanel() -> GenericProfileActionsJPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActionsJPanel;
    
}


    auto GenericProfileActions::setGenericProfileActionsJPanel(GenericProfileActionsJPanel* genericProfileActionsJPanel) -> void{
this->genericProfileActionsJPanel= genericProfileActionsJPanel;
    
}


    auto GenericProfileActions::getHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashMap;
    
}


    auto GenericProfileActions::setHashMap(HashMap<Object*, Object*>* hashMap) -> void{
this->hashMap= hashMap;
    
}


    auto GenericProfileActions::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto GenericProfileActions::setName(std::string name) -> void{
this->name= name;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONS_CPP
