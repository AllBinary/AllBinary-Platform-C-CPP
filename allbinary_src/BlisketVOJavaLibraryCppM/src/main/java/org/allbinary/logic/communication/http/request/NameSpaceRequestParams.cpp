
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
class NameSpaceRequestParams: public RequestParams {

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: NameSpaceRequestParams() : RequestParams(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Constructing empty", this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
}


public: NameSpaceRequestParams(HttpServletRequest* httpServletRequest) : RequestParams(httpServletRequest){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Constructing from HttpServletRequest", this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
}


public: NameSpaceRequestParams(PageContext* pageContext) : RequestParams(pageContext){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Constructing from PageContext", this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: Node* createPackageNode(Document* document, std::string packageName, HashMap<Object*, Object*>* packagePropertiesHashMap){

    Node* node = document->createElement(packageName);;
    

    Set* propertyKeySet = packagePropertiesHashMap->keys();;
    

    std::vector<Object*> propertyKeySetArray = propertyKeySet->toArray();;
    

    int32_t size = propertyKeySetArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string propertyName = propertyKeySetArray[index];;
    

    std::string propertyValue = packagePropertiesHashMap->get(propertyName);;
    

    Node* propertyNode = ModDomHelper::createTextNode(document, propertyName, propertyValue);;
    
node->appendChild(propertyNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    private: Node* createPackageMultiNode(Document* document, NameSpaceRequestParam* nameSpaceRequestParam, std::string packageName, HashMap<Object*, Object*>* packagePropertiesHashMap){

    int32_t beginIndex = JavaString::indexOf(packageName, '[');;
    

    std::string indexValue = JavaString::substring(packageName, beginIndex +1, packageName.size() -1);;
    

    std::string multiElementPackage = JavaString::substring(packageName, 0, beginIndex);;
    

    std::string selectedValue = nameSpaceRequestParam->getValue();;
    

    std::string propertyValue = packagePropertiesHashMap->get(DomData::VALUE);;
    

                        if(propertyValue.compare(NameSpaceRequestParamData::VALUE) != 0)
                        
                                    {
                                    selectedValue= propertyValue;
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nAppending Multinode Element: " +multiElementPackage +"[" +indexValue +"] " +selectedValue, this, "createPackageMultiNode");
    

                                    }
                                

    Node* nextNode = ModDomHelper::createNameValueNodes(document, multiElementPackage, selectedValue);;
    

    Node* indexNode = ModDomHelper::createTextNode(document, DomData::INDEX, indexValue);;
    
nextNode->appendChild(indexNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nextNode;
    
}


                //@Throws(Exception.constructor)
            
    private: Node* getRootNode(std::string rootElementPackage, HashMap<Object*, Object*>* packagePropertiesHashMap, Document* document){

    Node* rootNode = DomSearchHelper::getNodeNoThrow(rootElementPackage, document->getChildNodes());;
    

                        if(rootNode == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nAppending Document Root: " +"\nElementName: " +rootElementPackage +"\nProperties: " +packagePropertiesHashMap->toString(), this, "getRootNode");
    

                                    }
                                

    Node* node = this->createPackageNode(document, rootElementPackage, packagePropertiesHashMap);;
    
document->appendChild(node);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nAppended Document Created: " +XmlDocumentHelper::toString(document), this, "getRootNode");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nUsing Existing Root Node", this, "getRootNode");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rootNode;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    private: Node* addNewProperties(Document* document, Node* node, HashMap<Object*, Object*>* nextPackagePropertiesHashMap){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("\nAdding Any New Properties: ")->append(nextPackagePropertiesHashMap->toString())->append("\nto node: ")->append(node->getNodeName())->toString(), this, "addNewProperties");
    

                                    }
                                

    Set* propertyNameSet = nextPackagePropertiesHashMap->keys();;
    

    std::vector<Object*> propertyNameSetArray = propertyNameSet->toArray();;
    

    int32_t size = propertyNameSetArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string nextPropertyName = propertyNameSetArray[index];;
    

    std::string propertyValue = StringUtil::getInstance()->getNonNull(nextPackagePropertiesHashMap->get(nextPropertyName));;
    

    Node* valueNode = DomSearchHelper::getNodeNoThrow(nextPropertyName, node->getChildNodes());;
    

                        if(valueNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string existingElementNodeTextNodeValue = DomNodeHelper::getTextNodeValue(valueNode);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nIf property: \"" +nextPropertyName +" is the same as:\n" +"Node: " +node->getNodeName() +" then: " +propertyValue +"==" +existingElementNodeTextNodeValue, this, "addNewProperties");
    

                                    }
                                

                        if(propertyValue.compare(existingElementNodeTextNodeValue) != 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("At least one Property from NameSpaceRequest Package was different from Node", this, "addNewProperties");
    

                                    }
                                



                            throw new Exception("Property Modifications Should Not Occur");
                    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Adding a new Property: " +nextPropertyName +"=" +propertyValue, this, "addNewProperties");
    

                                    }
                                

    Node* newPropertyNode = ModDomHelper::createTextNode(document, nextPropertyName, propertyValue);;
    
node->appendChild(newPropertyNode);
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    private: bool isElementValueTextNodeEqual(HashMap<Object*, Object*>* nextPackagePropertiesHashMap, Node* node){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nComparing the value property in: " +nextPackagePropertiesHashMap->toString() +"\nto node child leaves of node: " +node->getNodeName(), this, "isElementValueTextNodeEqual");
    

                                    }
                                

    std::string propertyValue = nextPackagePropertiesHashMap->get(DomData::VALUE);;
    

    Node* valueNode = DomSearchHelper::getNodeNoThrow(DomData::VALUE, node->getChildNodes());;
    

                        if(valueNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string existingElementNodeTextNodeValue = DomNodeHelper::getTextNodeValue(valueNode);;
    

                        if(propertyValue.compare(existingElementNodeTextNodeValue) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
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
            
    private: int32_t isElementValueTextNodeUnique(HashMap<Object*, Object*>* nextPackagePropertiesHashMap, BasicArrayList* elementNodeVector){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nComparing Properties of: " +elementNodeVector->size() +" Nodes", this, "isElementValueTextNodeUnique");
    

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
            
    private: Document* addChildren(Document* document, Node* rootNode, NameSpaceRequestParam* nameSpaceRequestParam){

    Node* node = rootNode;;
    

    BasicArrayList* packageVector = nameSpaceRequestParam->getPackages();;
    

    int32_t size = packageVector->size();;
    




                        for (
    int32_t index = 1;index < size; index++)
        {

    std::string nextPackageName = packageVector->get(index);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("\nTrying to Add Child to Node: ")->append(node->getNodeName())->append("\nwith new PackageName: ")->append(nextPackageName)->toString(), this, "addChildren");
    

                                    }
                                

    HashMap<Object*, Object*>* nextPackagePropertiesHashMap = nameSpaceRequestParam->getPackageProperties(index);;
    

    BasicArrayList* elementNodeVector = DomSearchHelper::getAllNodesNoThrow(nextPackageName, node->getChildNodes());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nDocument Contains " +elementNodeVector->size() +" Node(s) With Same Name", this, "addChildren");
    

                                    }
                                

    int32_t isElementValueTextNodeUniqueIndex = this->isElementValueTextNodeUnique(nextPackagePropertiesHashMap, elementNodeVector);;
    

                        if((elementNodeVector->size() == 0 || isElementValueTextNodeUniqueIndex ==  -1) && !JavaString::endsWith(nextPackageName, CommonSeps::getInstance()->BRACKET_CLOSE))
                        
                                    {
                                    
    Node* nextNode = this->createPackageNode(document, nextPackageName, nextPackagePropertiesHashMap);;
    
node->appendChild(nextNode);
    
node= nextNode;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nAppended Package: " +node->getNodeName(), this, "addChildren");
    
this->logUtil->putF("\nAppended Document Created: " +XmlDocumentHelper::toString(document), this, "addChildren");
    

                                    }
                                

                                    }
                                
                             else 
                        if(JavaString::endsWith(nextPackageName, CommonSeps::getInstance()->BRACKET_CLOSE))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Package is MultiNode: just append", this, "addChildren");
    

                                    }
                                

    Node* nextNode = this->createPackageMultiNode(document, nameSpaceRequestParam, nextPackageName, nextPackagePropertiesHashMap);;
    
node->appendChild(nextNode);
    
node= nextNode;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nAppended Multinode Element: " +XmlDocumentHelper::toString(document), this, "addChildren");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Value Node already exists: Now compare (properties to leaf nodes)", this, "addChildren");
    

                                    }
                                

    Node* nodeNameDuplicateNode = dynamic_cast<Node*>(elementNodeVector->get(isElementValueTextNodeUniqueIndex));;
    
node= this->addNewProperties(document, nodeNameDuplicateNode, nextPackagePropertiesHashMap);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("\nDuplicate Node Found: Moving to next child ^", this, "addChildre");
    

                                    }
                                

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    private: Document* addNameSpace(std::string key, std::string value, Document* document){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("NameSpace key: ")->append(key)->append(" Value: ")->append(value)->toString(), this, "addNameSpace");
    

                                    }
                                

    NameSpaceRequestParam* nameSpaceRequestParam = new NameSpaceRequestParam(key, value);;
    

    BasicArrayList* packageVector = nameSpaceRequestParam->getPackages();;
    

    int32_t size = packageVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string packageName = packageVector->get(index);;
    

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
            
    public: HashMap<Object*, Object*>* toHashMap(){

    Document* document = DomDocumentHelper::create();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    Set* keys = this->getMap()->keySet();;
    

    std::vector<Object*> keyArray = keys->toArray();;
    

    int32_t keySize = keyArray.size();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("NameSpace Request Size: " +keys->size(), this, "toHashMap");
    

                                    }
                                




                        for (
    int32_t i = 0;i < keySize; i++)
        {

    std::string key = keyArray[i];;
    

    Object* anyType = this->getMap()->get(key);;
    

    std::string className = anyType->getClass()->getName();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Request Param Class: " +className, this, "toHashMap");
    

                                    }
                                

                        if(
                                        (dynamic_cast<const String*>(this->getMap()->get(key)) != nullptr)
                                    )
                        
                                    {
                                    
    std::string value = this->getMap()->get(key);;
    

                        if(JavaString::indexOf(key, NameSpaceRequestParamData::NAME) < 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Not NameSpace key: " +key +" Value: " +value, this, "toHashMap()");
    

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
                                    
    std::vector<std::string> values = this->getMap()->get(key) as string[];;
    

                        if(JavaString::indexOf(key, NameSpaceRequestParamData::NAME) < 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("Not NameSpace key: " +key +" Value: " +values[0], this, "toHashMap()");
    

                                    }
                                
hashMap->put(std::string(key), .toCharArray());
    

                                    }
                                
                        else {
                            document= this->addNameSpace(std::string(key), .toCharArray(), document);
    

                        }
                            

                                    }
                                
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF("NameSpaceRequestParams: " +this->getMap()->toString() +"\ntoHashMap(): " +hashMap->toString() +"\nDocument Created: " +XmlDocumentHelper::toString(document), this, "toHashMap()");
    

                                    }
                                
hashMap->put(NameSpaceRequestParamData::DOCUMENT, document);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


};

            

