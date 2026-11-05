
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/StringReader.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
class DocumentBuilderFactory;
class OutputKeys;
class Transformer;
class TransformerConfigurationException;
class TransformerFactory;
class DOMSource;
class StreamResult;
class LogUtil;
class BooleanFactory;
class CharacterSetData;
class Document;
class InputSource;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class XmlDocumentHelper
            : public virtual Object
         {

    private: static XmlDocumentHelper* instance_owner();
    private: static XmlDocumentHelper* instance;

    public: static XmlDocumentHelper* getInstance();

                //@Throws(Exception.constructor)
            
    public: static std::string toString(Document* document);

    /*protected*/ public: LogUtil* logUtil;

    private: const std::string INDENT_NUMBER = "indent-number";

    private: int32_t indent= 0;

    private: bool ignoreDeclaration= false;

private: XmlDocumentHelper();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void init(int32_t indent, bool ignoreDeclaration);

                //@Throws(TransformerConfigurationException.constructor)
            
    private: Transformer* createTransformer(int32_t indent, bool ignoreDeclaration);

                //@Throws(TransformerConfigurationException.constructor)
            
    public: Transformer* createTransformer();

                //@Throws(Exception.constructor)
            
    public: std::string format(std::string xmlString);

                //@Throws(Exception.constructor)
            
    public: std::string formatWithTransformer(std::string xmlString, Transformer* transformer);

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_XMLDOCUMENTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_XMLDOCUMENTHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_XMLDOCUMENTHELPER_H_COMPLETE
        #if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/StringReader.h>)
#include <java/io/StringReader.h>
#endif
#if __has_include(<java/io/StringWriter.h>)
#include <java/io/StringWriter.h>
#endif
#if __has_include(<java/io/Writer.h>)
#include <java/io/Writer.h>
#endif
#if __has_include(<javax/xml/parsers/DocumentBuilderFactory.h>)
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#endif
#if __has_include(<javax/xml/transform/OutputKeys.h>)
#include <javax/xml/transform/OutputKeys.h>
#endif
#if __has_include(<javax/xml/transform/Transformer.h>)
#include <javax/xml/transform/Transformer.h>
#endif
#if __has_include(<javax/xml/transform/TransformerConfigurationException.h>)
#include <javax/xml/transform/TransformerConfigurationException.h>
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
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/logic/java/characters/CharacterSetData.h>)
#include <org/allbinary/logic/java/characters/CharacterSetData.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/xml/sax/InputSource.h>)
#include <org/xml/sax/InputSource.h>
#endif

        #endif
    
