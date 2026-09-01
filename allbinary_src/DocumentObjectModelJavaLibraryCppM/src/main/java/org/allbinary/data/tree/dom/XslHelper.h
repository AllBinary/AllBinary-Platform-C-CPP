
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/File.h>

      
#include <java/io/OutputStream.h>

      
#include <java/io/StringBufferInputStream.h>

      
#include <javax/xml/transform/Transformer.h>

      
#include <javax/xml/transform/TransformerFactory.h>

      
#include <javax/xml/transform/URIResolver.h>

      
#include <javax/xml/transform/stream/StreamResult.h>

      
#include <javax/xml/transform/stream/StreamSource.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //import org.allbinary.data.tree.dom.document.DomDocumentHelper;
class XslHelper
            : public Object
         {

    private: static XslHelper instance() { return XslHelper(); }

    public: static XslHelper getInstance();

private: XslHelper();

                //@Throws(Exception.constructor)
            
    public: OutputStream translate(StreamSource xsltStreamSource, StreamSource xmlStreamSource, StreamResult streamResult);

                //@Throws(Exception.constructor)
            
    public: OutputStream translate(URIResolver resolver, StreamSource xsltStreamSource, StreamSource xmlStreamSource, StreamResult streamResult);

                //@Throws(Exception.constructor)
            
    public: std::string translate(StreamSource xsltStreamSource, Document xmlDocument);

                //@Throws(Exception.constructor)
            
    public: std::string translate(StreamSource xsltStreamSource, StreamSource xmlStreamSource);

                //@Throws(Exception.constructor)
            
    public: std::string translate(URIResolver resolver, StreamSource xsltStreamSource, StreamSource xmlStreamSource);

                //@Throws(Exception.constructor)
            
    public: void export(File outputFile, std::string xsltFilePath, Document xmlDocument);

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_XSLHELPER_H
