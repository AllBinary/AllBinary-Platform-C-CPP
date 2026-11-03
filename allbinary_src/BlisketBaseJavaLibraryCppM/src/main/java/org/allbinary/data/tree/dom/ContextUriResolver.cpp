
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_CONTEXTURIRESOLVER_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_CONTEXTURIRESOLVER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/ContextUriResolver.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/xml/transform/Source.h>

      
#include <javax/xml/transform/TransformerException.h>

      
#include <javax/xml/transform/URIResolver.h>

      
#include <javax/xml/transform/stream/StreamSource.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbFilePath.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/dom/URIResolverStrings.h"
#include "org/allbinary/data/tree/dom/BasicUriResolver.h"


ContextUriResolver::ContextUriResolver(BasicUriResolver* basicURIResolver) : logUtil(LogUtil::getInstance()), uriResolverStrings(URIResolverStrings::getInstance()){
this->basicURIResolver= basicURIResolver;
    
}


                //@Throws(TransformerException.constructor)
            
    auto ContextUriResolver::resolve(std::string href, std::string base) -> Source*{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getMainPath());
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH);
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->INSTALLPATH);
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
stringBuffer->append(href);
    

    AbPath* fileAbPath = new AbFilePath(stringBuffer->toString());;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->XMLLOGGING))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->uriResolverStrings->ATTEMPT);
    
stringBuffer->append(href);
    
stringBuffer->append(this->uriResolverStrings->BASE);
    
stringBuffer->append(base);
    
stringBuffer->append(this->uriResolverStrings->NEW_PATH);
    
stringBuffer->append(fileAbPath->toString());
    
stringBuffer->append(this->uriResolverStrings->NOTE);
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH);
    
stringBuffer->append(this->uriResolverStrings->URL_GLOBAL);
    
stringBuffer->append(this->uriResolverStrings->REQUIRED_EXTENSION);
    
stringBuffer->append(this->basicURIResolver->getExtension());
    
this->logUtil->putF(stringBuffer->toString(), this, this->uriResolverStrings->RESOLVE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new StreamSource((new CryptFileReader(TransformInfoTemplateData::getInstance()->UNCRYPTED_EXTENSION, TransformInfoTemplateData::getInstance()->ENCRYPTED_EXTENSION))->getInputStream(fileAbPath));
    

                //: 
} catch(TransformerException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {



                            throw TransformerException(&e);
                    
}

}


    auto ContextUriResolver::toString() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance()->INSTALLPATH +this->uriResolverStrings->IMPORT_URL;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "ContextUriResolver - Does not work without webapp path should be changed";
    
}

}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_CONTEXTURIRESOLVER_CPP
