
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        #include "BasicTransformerInterface.h"

class AbTransformer
            : public Object
        : public BasicTransformerInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: transformInfoInterface: TransformInfoInterface;

    private: inputStream: InputStream;

    private: uriResolver: URIResolver;

public constructor (TransformInfoInterface transformInfoInterface);

    public TransformInfoInterface getTransformInfoInterface();

    public setInputStream(InputStream inputStream);

    public setURIResolver(URIResolver uriResolver);

    public InputStream getInputStream();

    public URIResolver getURIResolver();

    public StreamSource getStreamSource();

                //@Throws(Exception.constructor)
            
    public string translate(string xmlDocumentStr);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_ABTRANSFORMER_H
