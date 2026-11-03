
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_STOREURIRESOLVER_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_STOREURIRESOLVER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/StoreUriResolver.h"
        

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

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/dom/URIResolverStrings.h"
#include "org/allbinary/data/tree/dom/BasicUriResolver.h"


StoreUriResolver::StoreUriResolver(TransformInfoInterface* parentTransformInfoInterface, BasicUriResolver* basicURIResolver) : logUtil(LogUtil::getInstance()), uriResolverStrings(URIResolverStrings::getInstance()){
this->parentTransformInfoInterface= parentTransformInfoInterface;
    
this->basicURIResolver= basicURIResolver;
    
}


                //@Throws(TransformerException.constructor)
            
    auto StoreUriResolver::resolve(std::string href, std::string base) -> Source*{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

    TransformInfoHttpStoreInterface* transformInfoHttpStoreInterface = dynamic_cast<TransformInfoHttpStoreInterface*>(this->parentTransformInfoInterface);;
    
stringBuffer->append(URLGLOBALS::getMainPath())->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH)->append(transformInfoHttpStoreInterface->getStoreName())->append(AbPathData::getInstance()->SEPARATOR)->append(href);
    

    AbPath* fileAbPath = dynamic_cast<AbPath*>(new AbFilePath(stringBuffer->toString()));;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->XMLLOGGING))
                        
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


    auto StoreUriResolver::toString() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH) +JavaString::valueOf("{Store Name if Any}/{import url}");
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "StoreUriResolver - Does not work without webapp path should be changed";
    
}

}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_STOREURIRESOLVER_CPP
