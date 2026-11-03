
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Source;
class TransformerException;
#include <javax/xml/transform/URIResolver.h>
class StreamSource;
class FREEBLISKET_PATH_GLOBALS;
class URLGLOBALS;
class LogUtil;
class CryptFileReader;
class AbFilePath;
class AbPath;
class AbPathData;
class StringMaker;
class TransformInfoHttpStoreInterface;
class TransformInfoInterface;
class TransformInfoTemplateData;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class URIResolverStrings;
class BasicUriResolver;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreUriResolver
            : public virtual Object
        , public virtual URIResolver {

    /*protected*/ public: LogUtil* logUtil;

    private: URIResolverStrings* uriResolverStrings;

    private: BasicUriResolver* basicURIResolver;

    private: TransformInfoInterface* parentTransformInfoInterface;

public: StoreUriResolver(TransformInfoInterface* parentTransformInfoInterface, BasicUriResolver* basicURIResolver);

                //@Throws(TransformerException.constructor)
            
    public: Source* resolve(std::string href, std::string base);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_STOREURIRESOLVER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_STOREURIRESOLVER_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_STOREURIRESOLVER_H_COMPLETE
        #if __has_include(<javax/xml/transform/Source.h>)
#include <javax/xml/transform/Source.h>
#endif
#if __has_include(<javax/xml/transform/TransformerException.h>)
#include <javax/xml/transform/TransformerException.h>
#endif
#if __has_include(<javax/xml/transform/URIResolver.h>)
#include <javax/xml/transform/URIResolver.h>
#endif
#if __has_include(<javax/xml/transform/stream/StreamSource.h>)
#include <javax/xml/transform/stream/StreamSource.h>
#endif
#if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/file/CryptFileReader.h>)
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbFilePath.h>)
#include <org/allbinary/logic/io/path/AbFilePath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>)
#include <org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>
#endif
#if __has_include("org/allbinary/data/tree/dom/URIResolverStrings.h")
#include "org/allbinary/data/tree/dom/URIResolverStrings.h"
#endif
#if __has_include("org/allbinary/data/tree/dom/BasicUriResolver.h")
#include "org/allbinary/data/tree/dom/BasicUriResolver.h"
#endif

        #endif
    
