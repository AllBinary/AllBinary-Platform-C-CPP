
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_XSLHELPER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_XSLHELPER_H

        
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
#include <java/io/OutputStream.h>
#include <java/io/StringBufferInputStream.h>
class Templates;
class Transformer;
class TransformerFactory;
class URIResolver;
class StreamResult;
class StreamSource;
class XmlDocumentHelper;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //import org.allbinary.data.tree.dom.document.DomDocumentHelper;
class XslHelper
            : public virtual Object
         {

    private: static XslHelper* instance_owner();
    private: static XslHelper* instance;

    public: static XslHelper* getInstance();

private: XslHelper();

                //@Throws(Exception.constructor)
            
    public: OutputStream* translate(StreamSource* xsltStreamSource, StreamSource* xmlStreamSource, StreamResult* streamResult);

                //@Throws(Exception.constructor)
            
    public: OutputStream* translate(URIResolver* resolver, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource, StreamResult* streamResult);

                //@Throws(Exception.constructor)
            
    public: std::string translateTemplate(Templates* templates, StreamSource* xmlStreamSource);

                //@Throws(Exception.constructor)
            
    public: std::string translate(StreamSource* xsltStreamSource, Document* xmlDocument);

                //@Throws(Exception.constructor)
            
    public: std::string translate(StreamSource* xsltStreamSource, StreamSource* xmlStreamSource);

                //@Throws(Exception.constructor)
            
    public: std::string translate(URIResolver* resolver, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource);

                //@Throws(Exception.constructor)
            
    public: void export_(File* outputFile, std::string xsltFilePath, Document* xmlDocument);

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_XSLHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_XSLHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_XSLHELPER_H_COMPLETE
        #if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/OutputStream.h>)
#include <java/io/OutputStream.h>
#endif
#if __has_include(<java/io/StringBufferInputStream.h>)
#include <java/io/StringBufferInputStream.h>
#endif
#if __has_include(<javax/xml/transform/Templates.h>)
#include <javax/xml/transform/Templates.h>
#endif
#if __has_include(<javax/xml/transform/Transformer.h>)
#include <javax/xml/transform/Transformer.h>
#endif
#if __has_include(<javax/xml/transform/TransformerFactory.h>)
#include <javax/xml/transform/TransformerFactory.h>
#endif
#if __has_include(<javax/xml/transform/URIResolver.h>)
#include <javax/xml/transform/URIResolver.h>
#endif
#if __has_include(<javax/xml/transform/stream/StreamResult.h>)
#include <javax/xml/transform/stream/StreamResult.h>
#endif
#if __has_include(<javax/xml/transform/stream/StreamSource.h>)
#include <javax/xml/transform/stream/StreamSource.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif

        #endif
    
