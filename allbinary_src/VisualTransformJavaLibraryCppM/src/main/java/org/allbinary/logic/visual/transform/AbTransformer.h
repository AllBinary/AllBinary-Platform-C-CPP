
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_ABTRANSFORMER_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_ABTRANSFORMER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>
#include <java/io/StringBufferInputStream.h>
class URIResolver;
class StreamSource;
class XslHelper;
class LogUtil;
class TransformInfoInterface;
class TransformInfoObjectConfigGenerator;
class TransformInfoObjectConfigGeneratorFactory;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/BasicTransformerInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbTransformer
            : public virtual Object
        , public virtual BasicTransformerInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: TransformInfoInterface* transformInfoInterface;

    private: InputStream* inputStream;

    private: URIResolver* uriResolver;

public: AbTransformer(TransformInfoInterface* transformInfoInterface);

    public: TransformInfoInterface* getTransformInfoInterface();

    public: void setInputStream(InputStream* inputStream);

    public: void setURIResolver(URIResolver* uriResolver);

    public: InputStream* getInputStream();

    public: URIResolver* getURIResolver();

    public: StreamSource* getStreamSource();

                //@Throws(Exception.constructor)
            
    public: std::string translate(std::string xmlDocumentStr);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_ABTRANSFORMER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_ABTRANSFORMER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_ABTRANSFORMER_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<java/io/StringBufferInputStream.h>)
#include <java/io/StringBufferInputStream.h>
#endif
#if __has_include(<javax/xml/transform/URIResolver.h>)
#include <javax/xml/transform/URIResolver.h>
#endif
#if __has_include(<javax/xml/transform/stream/StreamSource.h>)
#include <javax/xml/transform/stream/StreamSource.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/XslHelper.h>)
#include <org/allbinary/data/tree/dom/XslHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGenerator.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGenerator.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactory.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/BasicTransformerInterface.h")
#include "org/allbinary/logic/visual/transform/BasicTransformerInterface.h"
#endif

        #endif
    
