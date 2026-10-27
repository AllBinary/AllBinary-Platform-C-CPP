
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/File.h>
class DocumentBuilder;
class DocumentBuilderFactory;
class Transformer;
class TransformerFactory;
class DOMSource;
class StreamResult;
class LogUtil;
class BasicArrayList;
class BasicArrayListD;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DomHelper
            : public virtual Object
         {

    private: static DomHelper* instance_owner();
    private: static DomHelper* instance;

    public: static DomHelper* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: DomHelper();

    public: Document* createDocument();

                //@Throws(Exception.constructor)
            
    public: Document* createDocument(File* xmlFile);

                //@Throws(Exception.constructor)
            
    public: std::string toString(Document* document);

                //@Throws(Exception.constructor)
            
    public: void save(File* file, Document* document);

                //@Throws(Exception.constructor)
            
    public: NodeList* getChildNodeList(std::string nodeName, NodeList* nodeList);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getChildrenWithoutTextNodes(std::string nodeName, NodeList* nodeList);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getWithoutTextNodes(NodeList* nodeList);

                //@Throws(Exception.constructor)
            
    public: Node* searchNodeList(std::string nodeName, NodeList* nodeList);

                //@Throws(Exception.constructor)
            
    public: Node* searchNodeList(std::string nodeName, BasicArrayList* nodeList);

};

            


        #endif //ORG_ALLBINARY_DOM_DOMHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DOM_DOMHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_DOM_DOMHELPER_H_COMPLETE
        #if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<javax/xml/parsers/DocumentBuilder.h>)
#include <javax/xml/parsers/DocumentBuilder.h>
#endif
#if __has_include(<javax/xml/parsers/DocumentBuilderFactory.h>)
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#endif
#if __has_include(<javax/xml/transform/Transformer.h>)
#include <javax/xml/transform/Transformer.h>
#endif
#if __has_include(<javax/xml/transform/TransformerFactory.h>)
#include <javax/xml/transform/TransformerFactory.h>
#endif
#if __has_include(<javax/xml/transform/dom/DOMSource.h>)
#include <javax/xml/transform/dom/DOMSource.h>
#endif
#if __has_include(<javax/xml/transform/stream/StreamResult.h>)
#include <javax/xml/transform/stream/StreamResult.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif

        #endif
    
