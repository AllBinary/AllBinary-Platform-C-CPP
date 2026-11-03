
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAMS_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAMS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/request/NameSpaceRequestParams.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h"
#include "org/allbinary/logic/communication/http/request/NameSpaceRequestParam.h"
//containing string values and other hashmaps of the like

NameSpaceRequestParams::NameSpaceRequestParams() : RequestParams(), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Constructing empty", this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


NameSpaceRequestParams::NameSpaceRequestParams(HttpServletRequest* httpServletRequest) : RequestParams(httpServletRequest), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Constructing from HttpServletRequest", this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


NameSpaceRequestParams::NameSpaceRequestParams(PageContext* pageContext) : RequestParams(pageContext), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Constructing from PageContext", this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto NameSpaceRequestParams::createPackageNode(Document* document, std::string packageName, HashMap<Object*, Object*>* packagePropertiesHashMap) -> Node*{

    Node* node = document->createElement(packageName);;
    

    Set* propertyKeySet = packagePropertiesHashMap->keys();;
    

    std::vector<Object*> propertyKeySetArray = propertyKeySet->toArray();;
    

    int32_t size = propertyKeySetArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string propertyName = JavaBoxes::unbox<std::string>(propertyKeySetArray[index]);;
    

    std::string propertyValue = JavaBoxes::unbox<std::string>(packagePropertiesHashMap->get(propertyName));;
    

    Node* propertyNode = ModDomHelper::createTextNode(document, propertyName, propertyValue);;
    
node->appendChild(propertyNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto NameSpaceRequestParams::createPackageMultiNode(Document* document, NameSpaceRequestParam* nameSpaceRequestParam, std::string packageName, HashMap<Object*, Object*>* packagePropertiesHashMap) -> Node*{

    int32_t beginIndex = JavaString::indexOf(packageName, '[');;
    

    std::string indexValue = JavaString::substring(packageName, beginIndex +1, packageName.size() -1);;
    

    std::string multiElementPackage = JavaString::substring(packageName, 0, beginIndex);;
    

    std::string selectedValue = nameSpaceRequestParam->getValue();;
    

    std::string propertyValue = JavaBoxes::unbox<std::string>(packagePropertiesHashMap->get(DomData::VALUE));;
    

                        if(propertyValue.compare(NameSpaceRequestParamData::VALUE) != 0)
                        
                                    {
                                    selectedValue= propertyValue;
    

                                    }
                                

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("\nAppending Multinode Element: ") +JavaString::valueOf(multiElementPackage)) +JavaString::valueOf("[")) +JavaString::valueOf(indexValue)) +JavaString::valueOf("] ")) +JavaString::valueOf(selectedValue), this, "createPackageMultiNode");
    

                                    }
                                

    Node* nextNode = ModDomHelper::createNameValueNodes(document, multiElementPackage, selectedValue);;
    

    Node* indexNode = ModDomHelper::createTextNode(document, DomData::INDEX, indexValue);;
    
nextNode->appendChild(indexNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nextNode;
    
}


                //@Throws(Exception.constructor)
            
    auto NameSpaceRequestParams::getRootNode(std::string rootElementPackage, HashMap<Object*, Object*>* packagePropertiesHashMap, Document* document) -> Node*{

    Node* rootNode = DomSearchHelper::getNodeNoThrow(rootElementPackage, document->getChildNodes());;
    

                        if(rootNode == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("\nAppending Document Root: ") +JavaString::valueOf("\nElementName: ")) +JavaString::valueOf(rootElementPackage)) +JavaString::valueOf("\nProperties: ")) +JavaString::valueOf(packagePropertiesHashMap->toString()), this, "getRootNode");
    

                                    }
                                

    Node* node = this->createPackageNode(document, rootElementPackage, packagePropertiesHashMap);;
    
document->appendChild(node);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("\nAppended Document Created: ") +JavaString::valueOf(XmlDocumentHelper::toString(document)), this, "getRootNode");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nUsing Existing Root Node", this, "getRootNode");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return rootNode;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto NameSpaceRequestParams::addNewProperties(Document* document, Node* node, HashMap<Object*, Object*>* nextPackagePropertiesHashMap) -> Node*{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("\nAdding Any New Properties: ")->append(nextPackagePropertiesHashMap->toString())->append("\nto node: ")->append(node->getNodeName())->toString(), this, "addNewProperties");
    

                                    }
                                

    Set* propertyNameSet = nextPackagePropertiesHashMap->keys();;
    

    std::vector<Object*> propertyNameSetArray = propertyNameSet->toArray();;
    

    int32_t size = propertyNameSetArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string nextPropertyName = JavaBoxes::unbox<std::string>(propertyNameSetArray[index]);;
    

    std::string propertyValue = StringUtil::getInstance()->getNonNull(JavaBoxes::unbox<std::string>(nextPackagePropertiesHashMap->get(nextPropertyName)));;
    

    Node* valueNode = DomSearchHelper::getNodeNoThrow(nextPropertyName, node->getChildNodes());;
    

                        if(valueNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string existingElementNodeTextNodeValue = DomNodeHelper::getTextNodeValue(valueNode);;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("\nIf property: \"") +JavaString::valueOf(nextPropertyName)) +JavaString::valueOf(" is the same as:\n")) +JavaString::valueOf("Node: ")) +JavaString::valueOf(node->getNodeName())) +JavaString::valueOf(" then: ")) +JavaString::valueOf(propertyValue)) +JavaString::valueOf("==")) +JavaString::valueOf(existingElementNodeTextNodeValue), this, "addNewProperties");
    

                                    }
                                

                        if(propertyValue.compare(existingElementNodeTextNodeValue) != 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("At least one Property from NameSpaceRequest Package was different from Node", this, "addNewProperties");
    

                                    }
                                



                            throw Exception("Property Modifications Should Not Occur");
                    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Adding a new Property: ") +JavaString::valueOf(nextPropertyName)) +JavaString::valueOf("=")) +JavaString::valueOf(propertyValue), this, "addNewProperties");
    

                                    }
                                

    Node* newPropertyNode = ModDomHelper::createTextNode(document, nextPropertyName, propertyValue);;
    
node->appendChild(newPropertyNode);
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto NameSpaceRequestParams::isElementValueTextNodeEqual(HashMap<Object*, Object*>* nextPackagePropertiesHashMap, Node* node) -> bool{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("\nComparing the value property in: ") +JavaString::valueOf(nextPackagePropertiesHashMap->toString())) +JavaString::valueOf("\nto node child leaves of node: ")) +JavaString::valueOf(node->getNodeName()), this, "isElementValueTextNodeEqual");
    

                                    }
                                

    std::string propertyValue = JavaBoxes::unbox<std::string>(nextPackagePropertiesHashMap->get(DomData::VALUE));;
    

    Node* valueNode = DomSearchHelper::getNodeNoThrow(DomData::VALUE, node->getChildNodes());;
    

                        if(valueNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string existingElementNodeTextNodeValue = DomNodeHelper::getTextNodeValue(valueNode);;
    

                        if(propertyValue.compare(existingElementNodeTextNodeValue) == 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Value Node is the same", this, "isElementValueTextNodeEqual");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto NameSpaceRequestParams::isElementValueTextNodeUnique(HashMap<Object*, Object*>* nextPackagePropertiesHashMap, BasicArrayList* elementNodeVector) -> int32_t{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf("\nComparing Properties of: ") +JavaString::valueOf(elementNodeVector->size())) +JavaString::valueOf(" Nodes"), this, "isElementValueTextNodeUnique");
    

                                    }
                                

    int32_t size = elementNodeVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node* existingElementNode = dynamic_cast<Node*>(elementNodeVector->get(index));;
    

                        if(this->isElementValueTextNodeEqual(nextPackagePropertiesHashMap, existingElementNode))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return index;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


                //@Throws(Exception.constructor)
            
    auto NameSpaceRequestParams::addChildren(Document* document, Node* rootNode, NameSpaceRequestParam* nameSpaceRequestParam) -> Document*{

    Node* node = rootNode;;
    

    BasicArrayList* packageVector = nameSpaceRequestParam->getPackages();;
    

    int32_t size = packageVector->size();;
    




                        for (
    int32_t index = 1;index < size; index++)
        {

    std::string nextPackageName = JavaBoxes::unbox<std::string>(packageVector->get(index));;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("\nTrying to Add Child to Node: ")->append(node->getNodeName())->append("\nwith new PackageName: ")->append(nextPackageName)->toString(), this, "addChildren");
    

                                    }
                                

    HashMap<Object*, Object*>* nextPackagePropertiesHashMap = nameSpaceRequestParam->getPackageProperties(index);;
    

    BasicArrayList* elementNodeVector = DomSearchHelper::getAllNodesNoThrow(nextPackageName, node->getChildNodes());;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf("\nDocument Contains ") +JavaString::valueOf(elementNodeVector->size())) +JavaString::valueOf(" Node(s) With Same Name"), this, "addChildren");
    

                                    }
                                

    int32_t isElementValueTextNodeUniqueIndex = this->isElementValueTextNodeUnique(nextPackagePropertiesHashMap, elementNodeVector);;
    

                        if((elementNodeVector->size() == 0 || isElementValueTextNodeUniqueIndex ==  -1) && !JavaString::endsWith(nextPackageName, CommonSeps::getInstance()->BRACKET_CLOSE))
                        
                                    {
                                    
    Node* nextNode = this->createPackageNode(document, nextPackageName, nextPackagePropertiesHashMap);;
    
node->appendChild(nextNode);
    
node= nextNode;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("\nAppended Package: ") +JavaString::valueOf(node->getNodeName()), this, "addChildren");
    
this->logUtil->putF(JavaString::valueOf("\nAppended Document Created: ") +JavaString::valueOf(XmlDocumentHelper::toString(document)), this, "addChildren");
    

                                    }
                                

                                    }
                                
                             else 
                        if(JavaString::endsWith(nextPackageName, CommonSeps::getInstance()->BRACKET_CLOSE))
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Package is MultiNode: just append", this, "addChildren");
    

                                    }
                                

    Node* nextNode = this->createPackageMultiNode(document, nameSpaceRequestParam, nextPackageName, nextPackagePropertiesHashMap);;
    
node->appendChild(nextNode);
    
node= nextNode;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("\nAppended Multinode Element: ") +JavaString::valueOf(XmlDocumentHelper::toString(document)), this, "addChildren");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Value Node already exists: Now compare (properties to leaf nodes)", this, "addChildren");
    

                                    }
                                

    Node* nodeNameDuplicateNode = dynamic_cast<Node*>(elementNodeVector->get(isElementValueTextNodeUniqueIndex));;
    
node= this->addNewProperties(document, nodeNameDuplicateNode, nextPackagePropertiesHashMap);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nDuplicate Node Found: Moving to next child ^", this, "addChildre");
    

                                    }
                                

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    auto NameSpaceRequestParams::addNameSpace(std::string key, std::string value, Document* document) -> Document*{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("NameSpace key: ")->append(key)->append(" Value: ")->append(value)->toString(), this, "addNameSpace");
    

                                    }
                                

    NameSpaceRequestParam* nameSpaceRequestParam = new NameSpaceRequestParam(key, value);;
    

    BasicArrayList* packageVector = nameSpaceRequestParam->getPackages();;
    

    int32_t size = packageVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string packageName = JavaBoxes::unbox<std::string>(packageVector->get(index));;
    

    HashMap<Object*, Object*>* packagePropertiesHashMap = nameSpaceRequestParam->getPackageProperties(packageVector->indexOf(packageName));;
    

    Node* rootNode = this->getRootNode(packageName, packagePropertiesHashMap, document);;
    

                        if(index < size -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->addChildren(document, dynamic_cast<Node*>(rootNode), nameSpaceRequestParam);;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    auto NameSpaceRequestParams::toHashMap() -> HashMap<Object*, Object*>*{

    Document* document = DomDocumentHelper::create();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    Set* keys = this->getMap()->keySet();;
    

    std::vector<Object*> keyArray = keys->toArray();;
    

    int32_t keySize = keyArray.size();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("NameSpace Request Size: ") +JavaString::valueOf(keys->size()), this, "toHashMap");
    

                                    }
                                




                        for (
    int32_t i = 0;i < keySize; i++)
        {

    std::string key = JavaBoxes::unbox<std::string>(keyArray[i]);;
    

    Object* anyType = JavaBoxes::toObject(this->getMap()->get(key));;
    

    std::string className = JavaBoxes::unbox<std::string>(anyType->getClass()->getName());;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Request Param Class: ") +JavaString::valueOf(className), this, "toHashMap");
    

                                    }
                                

                        if(
                                        (dynamic_cast<const String*>(this->getMap()->get(key)) != nullptr)
                                    )
                        
                                    {
                                    
    std::string value = JavaBoxes::unbox<std::string>(this->getMap()->get(key));;
    

                        if(JavaString::indexOf(key, NameSpaceRequestParamData::NAME) < 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Not NameSpace key: ") +JavaString::valueOf(key)) +JavaString::valueOf(" Value: ")) +JavaString::valueOf(value), this, "toHashMap()");
    

                                    }
                                
hashMap->put(std::string(key), std::string(value));
    

                                    }
                                
                        else {
                            document= this->addNameSpace(std::string(key), std::string(value), document);
    

                        }
                            

                                    }
                                
                             else 
                        if(
                                        (dynamic_cast<const *>(this->getMap()->get(key)) != nullptr)
                                    )
                        
                                    {
                                    
    std::vector<std::string> values = JavaBoxes::unbox<std::vector<std::string>>(this->getMap()->get(key));;
    

                        if(JavaString::indexOf(key, NameSpaceRequestParamData::NAME) < 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Not NameSpace key: ") +JavaString::valueOf(key)) +JavaString::valueOf(" Value: ")) +JavaString::valueOf(values[0]), this, "toHashMap()");
    

                                    }
                                
hashMap->put(std::string(key), .toCharArray());
    

                                    }
                                
                        else {
                            document= this->addNameSpace(std::string(key), .toCharArray(), document);
    

                        }
                            

                                    }
                                
}


                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("NameSpaceRequestParams: ") +JavaString::valueOf(this->getMap()->toString())) +JavaString::valueOf("\ntoHashMap(): ")) +JavaString::valueOf(hashMap->toString())) +JavaString::valueOf("\nDocument Created: ")) +JavaString::valueOf(XmlDocumentHelper::toString(document)), this, "toHashMap()");
    

                                    }
                                
hashMap->put(NameSpaceRequestParamData::DOCUMENT, document);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAMS_CPP
