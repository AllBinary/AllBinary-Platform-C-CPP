
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

public constructor (TransformInfoInterface transformInfoInterface){

            super();
        this.transformInfoInterface= transformInfoInterface;
    
}


    public TransformInfoInterface getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.transformInfoInterface;
    
}


    public setInputStream(InputStream inputStream){
this.inputStream= inputStream;
    
}


    public setURIResolver(URIResolver uriResolver){
this.uriResolver= uriResolver;
    
}


    public InputStream getInputStream(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.inputStream;
    
}


    public URIResolver getURIResolver(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.uriResolver;
    
}


    public StreamSource getStreamSource(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StreamSource(this.getInputStream());
    
}


                //@Throws(Exception.constructor)
            
    public string translate(string xmlDocumentStr){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.XMLLOGGING))
                        
                                    {
                                    this.logUtil!.putF("xml: \n" +xmlDocumentStr, this, "translate(String xmlDocumentStr)");
    

                                    }
                                

                        if(this.getURIResolver() == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("No URIResolver");
                    

                                    }
                                

    result: string = XslHelper.getInstance()!.translate(this.getURIResolver(), new StreamSource(this.getInputStream()), new StreamSource(new StringBufferInputStream(xmlDocumentStr)))!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.XSLLOGGING))
                        
                                    {
                                    this.logUtil!.putF("translated xml: " +result, this, "translate(String xmlDocumentStr)");
    

                                    }
                                

    transformInfoObjectConfigGeneratorInterface: TransformInfoObjectConfigGenerator = TransformInfoObjectConfigGeneratorFactory.getInstance()!.getInstance(this.getTransformInfoInterface())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return transformInfoObjectConfigGeneratorInterface!.process(result);;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put(this.transformInfoInterface!.log(), this, "translate(document)", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

