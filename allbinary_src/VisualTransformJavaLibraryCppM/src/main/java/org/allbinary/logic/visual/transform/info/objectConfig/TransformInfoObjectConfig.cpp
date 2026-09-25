
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
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
        #include "TransformInfoObjectConfigInterface.h"
#include "TransformInfoObjectConfigData.h"

class TransformInfoObjectConfig
            : public Object
        : public TransformInfoObjectConfigInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: TransformInfoInterface ownerTransformInfoInterface;

    private: Document document;

    private: std::string outputTypeName;

public: TransformInfoObjectConfig(Object transformInfoInterface){
this->ownerTransformInfoInterface= transformInfoInterface;
    
this->createDocument();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("TransformInfo: ");
    

                        if(this->ownerTransformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append(this->ownerTransformInfoInterface.getName());
    

                                    }
                                
                        else {
                            stringBuffer.append("No Owner!?#@");
    

                        }
                            
stringBuffer.append("\nConstructed with document: ");
    
stringBuffer.append(this->toString());
    
this->logUtil.putF(stringBuffer.toString(), this, "Constructor(TransformInfoInterface)");
    

                                    }
                                
}


public: TransformInfoObjectConfig(Object transformInfoInterface, Object document){
this->ownerTransformInfoInterface= transformInfoInterface;
    
this->document= document;
    

    Node node = DomSearchHelper::getNodeNoThrow(OutputTypeData::getInstance().NAME, this->getRootNode().getChildNodes());;
    

                        if(node != 
                                    nullptr
                                )
                        
                                    {
                                    this->setOutputTypeName(DomNodeHelper::getTextNodeValue(node));
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("TransformInfo: ");
    

                        if(this->ownerTransformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append(this->ownerTransformInfoInterface.getName());
    

                                    }
                                
                        else {
                            stringBuffer.append("No Owner!?#@");
    

                        }
                            
stringBuffer.append("\nConstructed with document: ");
    
stringBuffer.append(this->toString());
    
this->logUtil.putF(stringBuffer.toString(), this, "Constructor(TransformInfoInterface, Document)");
    

                                    }
                                
}


public: TransformInfoObjectConfig(Object transformInfoInterface, std::string name, std::string type){
this->ownerTransformInfoInterface= transformInfoInterface;
    
this->createDocument();
    

    Attr configNameAttr = this->document.createAttribute(TransformInfoObjectConfigData::getInstance().NAME);;
    
configNameAttr.setValue(name);
    

    Node objectConfigNode = this->document.getElementsByTagName(TransformInfoObjectConfigData::getInstance().NAME).item(0);;
    
objectConfigNode.appendChild(configNameAttr);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("TransformInfo: ");
    

                        if(this->ownerTransformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append(this->ownerTransformInfoInterface.getName());
    

                                    }
                                
                        else {
                            stringBuffer.append("No Owner!?#@");
    

                        }
                            
stringBuffer.append("\nConstructed with document: ");
    
stringBuffer.append(this->toString());
    
this->logUtil.putF(stringBuffer.toString(), this, "Constructor(TransformInfoInterface, name, type)");
    

                                    }
                                
}


    private: void createDocument(){
this->document= DomDocumentHelper::create();
    

    Node objectConfigNode = this->document.createElement(TransformInfoObjectConfigData::getInstance().NAME);;
    
this->document.appendChild(objectConfigNode);
    
}


    protected: TransformInfoInterface getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ownerTransformInfoInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->document;
    
}


    protected: void setDocument(Document document){
this->document= document;
    
}


    public: bool containsView(TransformInfoInterface transformInfoInterface){

    Node objectConfigNode = this->document.getElementsByTagName(TransformInfoObjectConfigData::getInstance().NAME).item(0);;
    

    NodeList viewNodeList = objectConfigNode.getChildNodes();;
    

    int32_t numberOfViews = viewNodeList.getLength();;
    




                        for (
    int32_t index = 0;index < numberOfViews; index++)
        {

    Node viewNode = viewNodeList.item(index);;
    

    NamedNodeMap viewAttributes = viewNode.getAttributes();;
    

    Attr attrNode = viewAttributes.getNamedItem(TransformInfoData::getInstance().NAME) as Attr;;
    

                        if(transformInfoInterface.getName().compareTo(attrNode.getValue()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    private: NamedNodeMap getTemplateAttributes(){

    Node componentNode = this->document.getElementsByTagName(TransformInfoObjectConfigData::getInstance().NAME).item(0);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return componentNode.getAttributes();;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getName(){

    Attr attrNode = this->getTemplateAttributes().getNamedItem(TransformInfoObjectConfigData::getInstance().NAME) as Attr;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return attrNode.getValue();;
    
}


                //@Throws(Exception.constructor)
            
    public: void setName(std::string name){

    Attr attrNode = this->getTemplateAttributes().getNamedItem(TransformInfoObjectConfigData::getInstance().NAME) as Attr;;
    
attrNode.setValue(name);
    
}


                //@Throws(Exception.constructor)
            
    private: BasicArrayList getNodeVector(std::string nodeName){

    NodeList componentsNodeList = this->document.getElementsByTagName(nodeName);;
    

                        if(componentsNodeList != 
                                    nullptr
                                 && componentsNodeList.getLength() > 0)
                        
                                    {
                                    
    BasicArrayList viewNodeVector = DomSearchHelper::getAllNodes(TransformInfoData::getInstance().NAME, componentsNodeList.item(0).getChildNodes());;
    

    int32_t numberOfViews = viewNodeVector.size();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Number Of ");
    
stringBuffer.append(nodeName);
    
stringBuffer.append(" Nodes: ");
    
stringBuffer.appendint(numberOfViews);
    
this->logUtil.putF(stringBuffer.toString(), this, "getNodeVector(nodename)");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewNodeVector;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListD();
    
}


                //@Throws(Exception.constructor)
            
    private: BasicArrayList getTransformDomNodes(std::string nodeName){

    BasicArrayList viewVector = BasicArrayListD();;
    

    BasicArrayList viewNodeVector = this->getNodeVector(nodeName);;
    

    int32_t size = viewNodeVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node viewNode = viewNodeVector.get(index) as Node;;
    
viewVector.add(TransformInfoDomNode(viewNode));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewVector;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTransforms(std::string nodeName){

    BasicArrayList viewVector = BasicArrayListD();;
    

    BasicArrayList viewNodeVector = this->getNodeVector(nodeName);;
    

    int32_t size = viewNodeVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node viewNode = viewNodeVector.get(index) as Node;;
    
viewVector.add(TransformInfoDomNode(viewNode).getTransformInfoInterface());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewVector;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTransformsGroup(std::string group){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Started: " +group, this, "getTransformsGroup()");
    

                                    }
                                

    BasicArrayList viewVector = BasicArrayListD();;
    

    std::string GROUP = TransformInfosData::getInstance().GROUP;;
    

    NodeList componentsNodeList = this->document.getElementsByTagName(GROUP);;
    

                        if(componentsNodeList != 
                                    nullptr
                                 && componentsNodeList.getLength() > 0)
                        
                                    {
                                    
    Node componentsNode = componentsNodeList.item(0);;
    

    int32_t length = componentsNodeList.getLength();;
    




                        for (
    int32_t index = 0;index < length; index++)
        {

    Node node = componentsNodeList.item(index);;
    

    NamedNodeMap attributes = node.getAttributes();;
    

    Attr attrNode = attributes.getNamedItem(GROUP) as Attr;;
    

    std::string value = attrNode.getValue();;
    

                        if(value.compareTo(group) == 0)
                        
                                    {
                                    componentsNode= node;
    
break;

                    

                                    }
                                
}


    BasicArrayList viewNodeVector = DomSearchHelper::getAllNodes(TransformInfoData::getInstance().NAME, componentsNode.getChildNodes());;
    

    int32_t numberOfViews = viewNodeVector.size();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Number Of Nodes: " +numberOfViews, this, "getTransformsGroup()");
    

                                    }
                                

    int32_t size = viewNodeVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node viewNode = viewNodeVector.get(index) as Node;;
    
viewVector.add(TransformInfoDomNode(viewNode));
    
}


                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
                        if(componentsNodeList == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil.putF("Number Of Nodes: NULL", this, "getTransformsGroup()");
    

                                    }
                                
                        else {
                            this->logUtil.putF("Number Of Nodes: 0", this, "getTransformsGroup()");
    

                        }
                            

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewVector;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTransformDomNodes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTransformDomNodes(TransformInfosData::getInstance().GROUP);;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTransforms(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTransforms(TransformInfosData::getInstance().NAME);;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getGroupTransforms(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTransforms(TransformInfosData::getInstance().GROUP);;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getParentTransforms(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTransforms(TransformInfoData::getInstance().PARENT);;
    
}


    private: Node getRootNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->document.getElementsByTagName(TransformInfoObjectConfigData::getInstance().NAME).item(0);;
    
}


    public: void setOutputTypeName(std::string outputTypeName){
this->outputTypeName= outputTypeName;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getOutputTypeName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->outputTypeName;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getInputOutputTypeName(){

    Node node = DomSearchHelper::getNode(InputOutputTypeData::getInstance().NAME, this->getRootNode().getChildNodes());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomNodeHelper::getTextNodeValue(node);;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getInputOutputTypeFile(){

    Node node = DomSearchHelper::getNode(InputOutputTypeData::getInstance().FILE, this->getRootNode().getChildNodes());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomNodeHelper::getTextNodeValue(node);;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getImportUriPath(){

    Node node = DomSearchHelper::getNode(XslData::getInstance().ROOT_IMPORT_URI, this->getRootNode().getChildNodes());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomNodeHelper::getTextNodeValue(node);;
    
}


    public: std::string toString(){

        try {
            
                        if(this->document != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomDocumentHelper::toString(this->document);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.putF("DOM Document error", this, this->commonStrings.TOSTRING);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

