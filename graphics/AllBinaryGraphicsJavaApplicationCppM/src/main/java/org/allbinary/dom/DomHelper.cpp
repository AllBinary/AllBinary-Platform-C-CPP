
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/File.h>

      
#include <javax/xml/parsers/DocumentBuilder.h>

      
#include <javax/xml/parsers/DocumentBuilderFactory.h>

      
#include <javax/xml/transform/Transformer.h>

      
#include <javax/xml/transform/TransformerFactory.h>

      
#include <javax/xml/transform/dom/DOMSource.h>

      
#include <javax/xml/transform/stream/StreamResult.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DomHelper
            : public Object
         {

    private: static DomHelper* instance() { static std::unique_ptr<DomHelper> value(new DomHelper()); return value.get(); }

    public: static DomHelper* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomHelper::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: DomHelper(){
}


    public: Document* createDocument(){

        try {
            
    DocumentBuilderFactory* factory = DocumentBuilderFactory::newInstance();;
    

    DocumentBuilder* builder = factory->newDocumentBuilder();;
    

    Document* document = builder->newDocument();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


                //@Throws(Exception.constructor)
            
    public: Document* createDocument(File* xmlFile){

        try {
            
    DocumentBuilderFactory* factory = DocumentBuilderFactory::newInstance();;
    

    DocumentBuilder* builder = factory->newDocumentBuilder();;
    

    Document* document = builder->parse(xmlFile);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string toString(Document* document){

        try {
            
    DOMSource* domSource = new DOMSource(document);;
    

    ByteArrayOutputStream* byteArrayOutputStream = new ByteArrayOutputStream();;
    

    StreamResult* streamResult = new StreamResult(byteArrayOutputStream);;
    

    TransformerFactory* copyTransformerFactory = TransformerFactory::newInstance();;
    

    Transformer* copyTransformer = copyTransformerFactory->newTransformer();;
    
copyTransformer->transform(domSource, streamResult);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return byteArrayOutputStream->toString();;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: void save(File* file, Document* document){

        try {
            
    TransformerFactory* copyTransformerFactory = TransformerFactory::newInstance();;
    

    Transformer* copyTransformer = copyTransformerFactory->newTransformer();;
    

    DOMSource* domSource = new DOMSource(document);;
    
file->createNewFile();
    

    StreamResult* streamResult = new StreamResult(file);;
    
copyTransformer->transform(domSource, streamResult);
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: NodeList* getChildNodeList(std::string nodeName, NodeList* nodeList){

    int32_t numberOfNodes = nodeList->getLength();;
    




                        for (
    int32_t index = 0;index < numberOfNodes; index++)
        {

    Node* node = nodeList->item(index);;
    

                        if(node->getNodeName()->compareTo(nodeName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node->getChildNodes();;
    

                                    }
                                
}




                            throw new Exception(nodeName +" Node Not Found");
                    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getChildrenWithoutTextNodes(std::string nodeName, NodeList* nodeList){

    BasicArrayList* list = new BasicArrayListD();;
    

    NodeList* childNodeList = this->getChildNodeList(nodeName, nodeList);;
    

    int32_t numberOfChildren = childNodeList->getLength();;
    




                        for (
    int32_t index = 0;index < numberOfChildren; index++)
        {

    Node* node = childNodeList->item(index);;
    

                        if(node->getNodeType() != Node::TEXT_NODE)
                        
                                    {
                                    list->add(node);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getWithoutTextNodes(NodeList* nodeList){

    BasicArrayList* list = new BasicArrayListD();;
    

    int32_t numberOfChildren = nodeList->getLength();;
    




                        for (
    int32_t index = 0;index < numberOfChildren; index++)
        {

    Node* node = nodeList->item(index);;
    

                        if(node->getNodeType() != Node::TEXT_NODE)
                        
                                    {
                                    list->add(node);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


                //@Throws(Exception.constructor)
            
    public: Node* searchNodeList(std::string nodeName, NodeList* nodeList){

    int32_t numberOfNodes = nodeList->getLength();;
    




                        for (
    int32_t index = 0;index < numberOfNodes; index++)
        {

    Node* node = nodeList->item(index);;
    
this->logUtil->putF("NodeName: " +node->getNodeName(), this, "searchNodeList");
    

                        if(node->getNodeName()->compareTo(nodeName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                
}




                            throw new Exception(nodeName +" Node Not Found in search");
                    
}


                //@Throws(Exception.constructor)
            
    public: Node* searchNodeList(std::string nodeName, BasicArrayList* nodeList){

    int32_t numberOfNodes = nodeList->size();;
    




                        for (
    int32_t index = 0;index < numberOfNodes; index++)
        {

    Node* node = dynamic_cast<Node*>(nodeList->get(index));;
    
this->logUtil->putF("NodeName: " +node->getNodeName(), this, "searchNodeList");
    

                        if(node->getNodeName()->compareTo(nodeName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                
}




                            throw new Exception(nodeName +" Node Not Found in search");
                    
}


};

            

