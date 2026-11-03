
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIG_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/io/OutputTypeData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/logic/visual/transform/template/XslData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Attr.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/NamedNodeMap.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"


TransformInfoObjectConfig::TransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->ownerTransformInfoInterface= transformInfoInterface;
    
this->createDocument();
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("TransformInfo: ");
    

                        if(this->ownerTransformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(this->ownerTransformInfoInterface->getName());
    

                                    }
                                
                        else {
                            stringBuffer->append("No Owner!?#@");
    

                        }
                            
stringBuffer->append("\nConstructed with document: ");
    
stringBuffer->append(this->toString());
    
this->logUtil->putF(stringBuffer->toString(), this, "Constructor(TransformInfoInterface)");
    

                                    }
                                
}


TransformInfoObjectConfig::TransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface, Document* document) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->ownerTransformInfoInterface= transformInfoInterface;
    
this->document= document;
    

    Node* node = DomSearchHelper::getNodeNoThrow(OutputTypeData::getInstance()->NAME, this->getRootNode()->getChildNodes());;
    

                        if(node != 
                                    nullptr
                                )
                        
                                    {
                                    this->setOutputTypeName(DomNodeHelper::getTextNodeValue(node));
    

                                    }
                                

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("TransformInfo: ");
    

                        if(this->ownerTransformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(this->ownerTransformInfoInterface->getName());
    

                                    }
                                
                        else {
                            stringBuffer->append("No Owner!?#@");
    

                        }
                            
stringBuffer->append("\nConstructed with document: ");
    
stringBuffer->append(this->toString());
    
this->logUtil->putF(stringBuffer->toString(), this, "Constructor(TransformInfoInterface, Document)");
    

                                    }
                                
}


TransformInfoObjectConfig::TransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface, std::string name, std::string type) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->ownerTransformInfoInterface= transformInfoInterface;
    
this->createDocument();
    

    Attr* configNameAttr = this->document->createAttribute(TransformInfoObjectConfigData::getInstance()->NAME);;
    
configNameAttr->setValue(name);
    

    Node* objectConfigNode = this->document->getElementsByTagName(TransformInfoObjectConfigData::getInstance()->NAME)->item(0);;
    
objectConfigNode->appendChild(configNameAttr);
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("TransformInfo: ");
    

                        if(this->ownerTransformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(this->ownerTransformInfoInterface->getName());
    

                                    }
                                
                        else {
                            stringBuffer->append("No Owner!?#@");
    

                        }
                            
stringBuffer->append("\nConstructed with document: ");
    
stringBuffer->append(this->toString());
    
this->logUtil->putF(stringBuffer->toString(), this, "Constructor(TransformInfoInterface, name, type)");
    

                                    }
                                
}


    auto TransformInfoObjectConfig::createDocument() -> void{
this->document= DomDocumentHelper::create();
    

    Node* objectConfigNode = this->document->createElement(TransformInfoObjectConfigData::getInstance()->NAME);;
    
this->document->appendChild(objectConfigNode);
    
}


    auto TransformInfoObjectConfig::getTransformInfoInterface() -> TransformInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->ownerTransformInfoInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::toXmlDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->document;
    
}


    auto TransformInfoObjectConfig::setDocument(Document* document) -> void{
this->document= document;
    
}


    auto TransformInfoObjectConfig::containsView(TransformInfoInterface* transformInfoInterface) -> bool{

    Node* objectConfigNode = this->document->getElementsByTagName(TransformInfoObjectConfigData::getInstance()->NAME)->item(0);;
    

    NodeList* viewNodeList = objectConfigNode->getChildNodes();;
    

    int32_t numberOfViews = viewNodeList->getLength();;
    




                        for (
    int32_t index = 0;index < numberOfViews; index++)
        {

    Node* viewNode = viewNodeList->item(index);;
    

    NamedNodeMap* viewAttributes = viewNode->getAttributes();;
    

    Attr* attrNode = dynamic_cast<Attr*>(viewAttributes->getNamedItem(TransformInfoData::getInstance()->NAME));;
    

                        if(transformInfoInterface->getName().compare(attrNode->getValue()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getTemplateAttributes() -> NamedNodeMap*{

    Node* componentNode = this->document->getElementsByTagName(TransformInfoObjectConfigData::getInstance()->NAME)->item(0);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return componentNode->getAttributes();;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getName() -> std::string{

    Attr* attrNode = dynamic_cast<Attr*>(this->getTemplateAttributes()->getNamedItem(TransformInfoObjectConfigData::getInstance()->NAME));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return attrNode->getValue();;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::setName(std::string name) -> void{

    Attr* attrNode = dynamic_cast<Attr*>(this->getTemplateAttributes()->getNamedItem(TransformInfoObjectConfigData::getInstance()->NAME));;
    
attrNode->setValue(name);
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getNodeVector(std::string nodeName) -> BasicArrayList*{

    NodeList* componentsNodeList = this->document->getElementsByTagName(nodeName);;
    

                        if(componentsNodeList != 
                                    nullptr
                                 && componentsNodeList->getLength() > 0)
                        
                                    {
                                    
    BasicArrayList* viewNodeVector = DomSearchHelper::getAllNodes(TransformInfoData::getInstance()->NAME, componentsNodeList->item(0)->getChildNodes());;
    

    int32_t numberOfViews = viewNodeVector->size();;
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Number Of ");
    
stringBuffer->append(nodeName);
    
stringBuffer->append(" Nodes: ");
    
stringBuffer->appendint(numberOfViews);
    
this->logUtil->putF(stringBuffer->toString(), this, "getNodeVector(nodename)");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return viewNodeVector;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new BasicArrayListD();
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getTransformDomNodes(std::string nodeName) -> BasicArrayList*{

    BasicArrayList* viewVector = new BasicArrayListD();;
    

    BasicArrayList* viewNodeVector = this->getNodeVector(nodeName);;
    

    int32_t size = viewNodeVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node* viewNode = dynamic_cast<Node*>(viewNodeVector->get(index));;
    
viewVector->add(new TransformInfoDomNode(viewNode));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return viewVector;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getTransforms(std::string nodeName) -> BasicArrayList*{

    BasicArrayList* viewVector = new BasicArrayListD();;
    

    BasicArrayList* viewNodeVector = this->getNodeVector(nodeName);;
    

    int32_t size = viewNodeVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node* viewNode = dynamic_cast<Node*>(viewNodeVector->get(index));;
    
viewVector->add((new TransformInfoDomNode(viewNode))->getTransformInfoInterface());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return viewVector;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getTransformsGroup(std::string group) -> BasicArrayList*{

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Started: ") +JavaString::valueOf(group), this, "getTransformsGroup()");
    

                                    }
                                

    BasicArrayList* viewVector = new BasicArrayListD();;
    

    std::string GROUP = TransformInfosData::getInstance()->GROUP;;
    

    NodeList* componentsNodeList = this->document->getElementsByTagName(GROUP);;
    

                        if(componentsNodeList != 
                                    nullptr
                                 && componentsNodeList->getLength() > 0)
                        
                                    {
                                    
    Node* componentsNode = componentsNodeList->item(0);;
    

    int32_t length = componentsNodeList->getLength();;
    




                        for (
    int32_t index = 0;index < length; index++)
        {

    Node* node = componentsNodeList->item(index);;
    

    NamedNodeMap* attributes = node->getAttributes();;
    

    Attr* attrNode = dynamic_cast<Attr*>(attributes->getNamedItem(GROUP));;
    

    std::string value = attrNode->getValue();;
    

                        if(value.compare(group) == 0)
                        
                                    {
                                    componentsNode= node;
    
break;

                    

                                    }
                                
}


    BasicArrayList* viewNodeVector = DomSearchHelper::getAllNodes(TransformInfoData::getInstance()->NAME, componentsNode->getChildNodes());;
    

    int32_t numberOfViews = viewNodeVector->size();;
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Number Of Nodes: ") +JavaString::valueOf(numberOfViews), this, "getTransformsGroup()");
    

                                    }
                                

    int32_t size = viewNodeVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node* viewNode = dynamic_cast<Node*>(viewNodeVector->get(index));;
    
viewVector->add(new TransformInfoDomNode(viewNode));
    
}


                                    }
                                
                        else {
                            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
                        if(componentsNodeList == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil->putF("Number Of Nodes: NULL", this, "getTransformsGroup()");
    

                                    }
                                
                        else {
                            this->logUtil->putF("Number Of Nodes: 0", this, "getTransformsGroup()");
    

                        }
                            

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return viewVector;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getTransformDomNodes() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getTransformDomNodes(TransformInfosData::getInstance()->GROUP);;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getTransforms() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getTransforms(TransformInfosData::getInstance()->NAME);;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getGroupTransforms() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getTransforms(TransformInfosData::getInstance()->GROUP);;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getParentTransforms() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getTransforms(TransformInfoData::getInstance()->PARENT);;
    
}


    auto TransformInfoObjectConfig::getRootNode() -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->document->getElementsByTagName(TransformInfoObjectConfigData::getInstance()->NAME)->item(0);;
    
}


    auto TransformInfoObjectConfig::setOutputTypeName(std::string outputTypeName) -> void{
this->outputTypeName= outputTypeName;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getOutputTypeName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->outputTypeName;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getInputOutputTypeName() -> std::string{

    Node* node = DomSearchHelper::getNode(InputOutputTypeData::getInstance()->NAME, this->getRootNode()->getChildNodes());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DomNodeHelper::getTextNodeValue(node);;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getInputOutputTypeFile() -> std::string{

    Node* node = DomSearchHelper::getNode(InputOutputTypeData::getInstance()->FILE, this->getRootNode()->getChildNodes());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DomNodeHelper::getTextNodeValue(node);;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfig::getImportUriPath() -> std::string{

    Node* node = DomSearchHelper::getNode(XslData::getInstance()->ROOT_IMPORT_URI, this->getRootNode()->getChildNodes());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DomNodeHelper::getTextNodeValue(node);;
    
}


    auto TransformInfoObjectConfig::toString() -> std::string{

        try {
            
                        if(this->document != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return XmlDocumentHelper::toString(this->document);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->putF("DOM Document error", this, this->commonStrings->TOSTRING);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIG_CPP
