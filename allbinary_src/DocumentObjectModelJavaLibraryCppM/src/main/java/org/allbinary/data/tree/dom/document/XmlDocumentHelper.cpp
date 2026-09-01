
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
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

    public: static XmlDocumentHelper getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return XmlDocumentHelper::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string INDENT_NUMBER = "indent-number";

    private: Transformer transformer;

private: XmlDocumentHelper(){
this->init(4, true);
    
}


    public: void init(int32_t indent, bool ignoreDeclaration){

        try {
            
    BooleanFactory booleanFactory = BooleanFactory::getInstance();;
    

    TransformerFactory transformerFactory = TransformerFactory::newInstance();;
    
transformerFactory.setAttribute(this->INDENT_NUMBER, indent);
    
this->transformer= transformerFactory.newTransformer();
    
this->transformer.setOutputProperty(OutputKeys::ENCODING, CharacterSetData::getInstance().UTF_8);
    
this->transformer.setOutputProperty(OutputKeys::OMIT_XML_DECLARATION, ignoreDeclaration
                        ?       
                                booleanFactory.YES
                                :

                            booleanFactory.NO;

    );
    
this->transformer.setOutputProperty(OutputKeys::INDENT, booleanFactory.YES);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.INIT, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string format(std::string xmlString){

    InputSource src = InputSource(StringReader(xmlString));;
    

    Document document = DocumentBuilderFactory::newInstance().newDocumentBuilder().parse(src);;
    

    Writer out = StringWriter();;
    
this->transformer.transform(DOMSource(document), StreamResult(out));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return out.toString();;
    
}


};

            

