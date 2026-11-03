
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMERINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMERINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>
class URIResolver;
class StreamSource;
#include <org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicTransformerInterface: public virtual CompositeTransformInfoInterface {

    public: virtual void setInputStream(InputStream* inputStream) = 0;

    public: virtual void setURIResolver(URIResolver* uriResolver) = 0;

    public: virtual StreamSource* getStreamSource() = 0;

    public: virtual InputStream* getInputStream() = 0;

    public: virtual URIResolver* getURIResolver() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string translate(std::string xmlDocumentStr) = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMERINTERFACE_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<javax/xml/transform/URIResolver.h>)
#include <javax/xml/transform/URIResolver.h>
#endif
#if __has_include(<javax/xml/transform/stream/StreamSource.h>)
#include <javax/xml/transform/stream/StreamSource.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>
#endif

        #endif
    
