
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_STOREURIRESOLVER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_STOREURIRESOLVER_H

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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "URIResolverStrings.h"
#include "BasicUriResolver.h"

class StoreUriResolver
            : public Object
        : public URIResolver {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const URIResolverStrings uriResolverStrings = URIResolverStrings::getInstance();

    private: BasicUriResolver basicURIResolver;

    private: TransformInfoInterface parentTransformInfoInterface;

public: StoreUriResolver(TransformInfoInterface parentTransformInfoInterface, BasicUriResolver basicURIResolver);

                //@Throws(TransformerException.constructor)
            
    public: Source resolve(std::string href, std::string base);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_STOREURIRESOLVER_H
