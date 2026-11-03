
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutput.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/BasicProfileActionScriptOutput.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputInterface.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputJPanel.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputData.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputProcessor.h"


ImageActionScriptOutput::ImageActionScriptOutput(Node* node) : BasicProfileActionScriptOutput(NAME, node), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

    Node* actionNode = DomSearchHelper::getNode(ImageActionScriptOutputData::NAME, node->getChildNodes());;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList* nodeList = actionNode->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* childNode = nodeList->item(index);;
    

                        if(childNode->getNodeName()->compareTo(ImageActionScriptOutputData::SAVE) == 0)
                        
                                    {
                                    
    std::string booleanString = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setSaved(());
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(ImageActionScriptOutputData::DISPLAY) == 0)
                        
                                    {
                                    
    std::string booleanString = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setSaved(());
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(ImageActionScriptOutputData::TYPES) == 0)
                        
                                    {
                                    this->setImageTypes(new ImageTypes(childNode));
    

                                    }
                                
                        else {
                            


                            throw Exception("Action Script Output Unknown Node");
                    

                        }
                            
}


                                    }
                                
                        else {
                            


                            throw Exception("Action Script Output Node Null");
                    

                        }
                            
this->setAllowsChildren(false);
    
this->actionScriptOutputJPanel= new ImageActionScriptOutputJPanel(this);
    
}


ImageActionScriptOutput::ImageActionScriptOutput() : BasicProfileActionScriptOutput(NAME), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setImageTypes(new ImageTypes());
    
this->setAllowsChildren(false);
    
this->actionScriptOutputJPanel= new ImageActionScriptOutputJPanel(this);
    
}


    auto ImageActionScriptOutput::getActionScriptOutputJPanel() -> ImageActionScriptOutputJPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->actionScriptOutputJPanel;
    
}


    auto ImageActionScriptOutput::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(ImageActionScriptOutputData::DISPLAY, Boolean::toString(this->isDisplay()));
    
hashMap->put(ImageActionScriptOutputData::SAVE, Boolean::toString(this->isSaved()));
    
this->logUtil->putF(JavaString::valueOf("HashMap: ") +JavaString::valueOf(hashMap->toString()), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageActionScriptOutput::toXmlNode(Document* document) -> Node*{

    Node* node = BasicProfileActionScriptOutput::toXmlNode(document);;
    

    Node* newNode = ModDomHelper::createNodeWithValueNodes(document, ImageActionScriptOutputData::NAME, this->toHashMap());;
    
newNode->appendChild(this->getImageTypes()->toXmlNode(document));
    
node->appendChild(newNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageActionScriptOutput::process(int64_t frame) -> void{
ImageActionScriptOutputProcessor::process(this, frame);
    
}


    auto ImageActionScriptOutput::showDialog() -> void{
this->actionScriptOutputJPanel->getCapturedImageActionJDialog()->setVisible(true);
    
}


    auto ImageActionScriptOutput::isSaved() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->saved;
    
}


    auto ImageActionScriptOutput::setSaved(bool saved) -> void{
this->saved= saved;
    
}


    auto ImageActionScriptOutput::isDisplay() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->display;
    
}


    auto ImageActionScriptOutput::setDisplay(bool display) -> void{
this->display= display;
    
}


    auto ImageActionScriptOutput::future_toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(" Is Save: ");
    
stringBuffer->appendboolean(this->isSaved());
    
stringBuffer->append(" Is Display: ");
    
stringBuffer->appendboolean(this->isDisplay());
    
stringBuffer->append(" ");
    
stringBuffer->append(this->getImageTypes()->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto ImageActionScriptOutput::log() -> void{
this->logUtil->putF(this->future_toString(), this, "log");
    
}


    auto ImageActionScriptOutput::getImageTypes() -> ImageTypes*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageTypes;
    
}


    auto ImageActionScriptOutput::setImageTypes(ImageTypes* imageTypes) -> void{
this->imageTypes= imageTypes;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_CPP
