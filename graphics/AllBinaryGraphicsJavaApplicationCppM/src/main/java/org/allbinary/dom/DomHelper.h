
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
        



        #ifndef ORG_ALLBINARY_DOM_DOMHELPER_H
        #define ORG_ALLBINARY_DOM_DOMHELPER_H

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

    public static DomHelper getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor ();

    public Document createDocument();

                //@Throws(Exception.constructor)
            
    public Document createDocument(File xmlFile);

                //@Throws(Exception.constructor)
            
    public string toString(Document document);

                //@Throws(Exception.constructor)
            
    public save(File file, Document document);

                //@Throws(Exception.constructor)
            
    public NodeList getChildNodeList(string nodeName, NodeList nodeList);

                //@Throws(Exception.constructor)
            
    public BasicArrayList getChildrenWithoutTextNodes(string nodeName, NodeList nodeList);

                //@Throws(Exception.constructor)
            
    public BasicArrayList getWithoutTextNodes(NodeList nodeList);

                //@Throws(Exception.constructor)
            
    public Node searchNodeList(string nodeName, NodeList nodeList);

                //@Throws(Exception.constructor)
            
    public Node searchNodeList(string nodeName, BasicArrayList nodeList);

};

            


        #endif //ORG_ALLBINARY_DOM_DOMHELPER_H
