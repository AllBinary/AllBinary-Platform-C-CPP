
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_ABTRANSFORMER_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_ABTRANSFORMER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/AbTransformer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <java/io/StringBufferInputStream.h>

      
#include <javax/xml/transform/URIResolver.h>

      
#include <javax/xml/transform/stream/StreamSource.h>

      
#include <org/allbinary/data/tree/dom/XslHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGenerator.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/BasicTransformerInterface.h"


AbTransformer::AbTransformer(TransformInfoInterface* transformInfoInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->transformInfoInterface= transformInfoInterface;
    
}


    auto AbTransformer::getTransformInfoInterface() -> TransformInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->transformInfoInterface;
    
}


    auto AbTransformer::setInputStream(InputStream* inputStream) -> void{
this->inputStream= inputStream;
    
}


    auto AbTransformer::setURIResolver(URIResolver* uriResolver) -> void{
this->uriResolver= uriResolver;
    
}


    auto AbTransformer::getInputStream() -> InputStream*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputStream;
    
}


    auto AbTransformer::getURIResolver() -> URIResolver*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->uriResolver;
    
}


    auto AbTransformer::getStreamSource() -> StreamSource*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new StreamSource(this->getInputStream());
    
}


                //@Throws(Exception.constructor)
            
    auto AbTransformer::translate(std::string xmlDocumentStr) -> std::string{

        try {
            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->XMLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("xml: \n") +JavaString::valueOf(xmlDocumentStr), this, "translate(String xmlDocumentStr)");
    

                                    }
                                

                        if(this->getURIResolver() == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("No URIResolver");
                    

                                    }
                                

    std::string result = XslHelper::getInstance()->translate(this->getURIResolver(), new StreamSource(this->getInputStream()), new StreamSource(new StringBufferInputStream(xmlDocumentStr)));;
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->XSLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("translated xml: ") +JavaString::valueOf(result), this, "translate(String xmlDocumentStr)");
    

                                    }
                                

    TransformInfoObjectConfigGenerator* transformInfoObjectConfigGeneratorInterface = TransformInfoObjectConfigGeneratorFactory::getInstance()->getInstance(this->getTransformInfoInterface());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return transformInfoObjectConfigGeneratorInterface->process(result);;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(this->transformInfoInterface->log(), this, "translate(document)", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_ABTRANSFORMER_CPP
