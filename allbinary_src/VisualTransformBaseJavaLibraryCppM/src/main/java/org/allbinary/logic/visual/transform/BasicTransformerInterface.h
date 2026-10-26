
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

            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <javax/xml/transform/URIResolver.h>

      
#include <javax/xml/transform/stream/StreamSource.h>

      
#include <org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicTransformerInterface: public CompositeTransformInfoInterface {

    void setInputStream(InputStream inputStream);

    void setURIResolver(URIResolver uriResolver);

    StreamSource getStreamSource();

    InputStream getInputStream();

    URIResolver getURIResolver();

                //@Throws(Exception.constructor)
            
    std::string translate(std::string xmlDocumentStr);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMERINTERFACE_H
