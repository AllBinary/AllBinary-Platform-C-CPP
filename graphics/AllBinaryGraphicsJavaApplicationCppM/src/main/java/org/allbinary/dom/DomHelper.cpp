
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
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
        

    private: static const instance: DomHelper = new DomHelper();

    public static DomHelper getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomHelper.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


    public Document createDocument(){

        try {
            
    factory: DocumentBuilderFactory = DocumentBuilderFactory.newInstance()!;;
    

    builder: DocumentBuilder = factory.newDocumentBuilder()!;;
    

    document: Document = builder.newDocument()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


                //@Throws(Exception.constructor)
            
    public Document createDocument(File xmlFile){

        try {
            
    factory: DocumentBuilderFactory = DocumentBuilderFactory.newInstance()!;;
    

    builder: DocumentBuilder = factory.newDocumentBuilder()!;;
    

    document: Document = builder.parse(xmlFile)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public string toString(Document document){

        try {
            
    domSource: DOMSource = new DOMSource(document);;
    

    byteArrayOutputStream: ByteArrayOutputStream = new ByteArrayOutputStream();;
    

    streamResult: StreamResult = new StreamResult(byteArrayOutputStream);;
    

    copyTransformerFactory: TransformerFactory = TransformerFactory.newInstance()!;;
    

    copyTransformer: Transformer = copyTransformerFactory!.newTransformer()!;;
    
copyTransformer!.transform(domSource, streamResult);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return byteArrayOutputStream!.toString();;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public save(File file, Document document){

        try {
            
    copyTransformerFactory: TransformerFactory = TransformerFactory.newInstance()!;;
    

    copyTransformer: Transformer = copyTransformerFactory!.newTransformer()!;;
    

    domSource: DOMSource = new DOMSource(document);;
    
file.createNewFile();
    

    streamResult: StreamResult = new StreamResult(file);;
    
copyTransformer!.transform(domSource, streamResult);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public NodeList getChildNodeList(string nodeName, NodeList nodeList){

    numberOfNodes: int32_t = nodeList!.getLength()!;;
    




                        for (
    index: int32_t = 0;index < numberOfNodes; index++)
        {

    node: Node = nodeList!.item(index)!;;
    

                        if(node.getNodeName()!.compareTo(nodeName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node.getChildNodes();;
    

                                    }
                                
}




                            throw new Exception(nodeName +" Node Not Found");
                    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getChildrenWithoutTextNodes(string nodeName, NodeList nodeList){

    list: BasicArrayList = new BasicArrayListD();;
    

    childNodeList: NodeList = this.getChildNodeList(nodeName, nodeList)!;;
    

    numberOfChildren: int32_t = childNodeList!.getLength()!;;
    




                        for (
    index: int32_t = 0;index < numberOfChildren; index++)
        {

    node: Node = childNodeList!.item(index)!;;
    

                        if(node.getNodeType() != Node.TEXT_NODE)
                        
                                    {
                                    list.add(node);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getWithoutTextNodes(NodeList nodeList){

    list: BasicArrayList = new BasicArrayListD();;
    

    numberOfChildren: int32_t = nodeList!.getLength()!;;
    




                        for (
    index: int32_t = 0;index < numberOfChildren; index++)
        {

    node: Node = nodeList!.item(index)!;;
    

                        if(node.getNodeType() != Node.TEXT_NODE)
                        
                                    {
                                    list.add(node);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


                //@Throws(Exception.constructor)
            
    public Node searchNodeList(string nodeName, NodeList nodeList){

    numberOfNodes: int32_t = nodeList!.getLength()!;;
    




                        for (
    index: int32_t = 0;index < numberOfNodes; index++)
        {

    node: Node = nodeList!.item(index)!;;
    
this.logUtil!.putF("NodeName: " +node.getNodeName(), this, "searchNodeList");
    

                        if(node.getNodeName()!.compareTo(nodeName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                
}




                            throw new Exception(nodeName +" Node Not Found in search");
                    
}


                //@Throws(Exception.constructor)
            
    public Node searchNodeList(string nodeName, BasicArrayList nodeList){

    numberOfNodes: int32_t = nodeList!.size()!;;
    




                        for (
    index: int32_t = 0;index < numberOfNodes; index++)
        {

    node: Node = nodeList!.get(index) as Node;;
    
this.logUtil!.putF("NodeName: " +node.getNodeName(), this, "searchNodeList");
    

                        if(node.getNodeName()!.compareTo(nodeName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                
}




                            throw new Exception(nodeName +" Node Not Found in search");
                    
}


};

            

