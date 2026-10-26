
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_XMLDOCUMENTHELPER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_XMLDOCUMENTHELPER_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/StringReader.h>

      
#include <java/io/StringWriter.h>

      
#include <java/io/Writer.h>

      
#include <javax/xml/parsers/DocumentBuilderFactory.h>

      
#include <javax/xml/transform/OutputKeys.h>

      
#include <javax/xml/transform/Transformer.h>

      
#include <javax/xml/transform/TransformerFactory.h>

      
#include <javax/xml/transform/dom/DOMSource.h>

      
#include <javax/xml/transform/stream/StreamResult.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/java/characters/CharacterSetData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/xml/sax/InputSource.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class XmlDocumentHelper
            : public Object
         {

    private: static XmlDocumentHelper instance() { return XmlDocumentHelper(); }

    public: static XmlDocumentHelper getInstance();

                //@Throws(Exception.constructor)
            
    public: static std::string toString(Document document);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string INDENT_NUMBER = "indent-number";

    private: Transformer transformer;

private: XmlDocumentHelper();

    public: void init(int32_t indent, bool ignoreDeclaration);

                //@Throws(Exception.constructor)
            
    public: std::string format(std::string xmlString);

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_XMLDOCUMENTHELPER_H
