
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
        #include "URIResolverStrings.h"
#include "BasicUriResolver.h"

class ContextUriResolver
            : public Object
        : public URIResolver {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const uriResolverStrings: URIResolverStrings = URIResolverStrings.getInstance()!;

    private: basicURIResolver: BasicUriResolver;

public constructor (BasicUriResolver basicURIResolver){

            super();
        this.basicURIResolver= basicURIResolver;
    
}


                //@Throws(TransformerException.constructor)
            
    public Source resolve(string href, string base){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(URLGLOBALS.getMainPath());
    
stringBuffer!.append(FREEBLISKET_PATH_GLOBALS.getInstance()!.XSLPATH);
    
stringBuffer!.append(FREEBLISKET_PATH_GLOBALS.getInstance()!.INSTALLPATH);
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
stringBuffer!.append(href);
    

    fileAbPath: AbPath = new AbFilePath(stringBuffer!.toString());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.XMLLOGGING))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.uriResolverStrings!.ATTEMPT);
    
stringBuffer!.append(href);
    
stringBuffer!.append(this.uriResolverStrings!.BASE);
    
stringBuffer!.append(base);
    
stringBuffer!.append(this.uriResolverStrings!.NEW_PATH);
    
stringBuffer!.append(fileAbPath!.toString());
    
stringBuffer!.append(this.uriResolverStrings!.NOTE);
    
stringBuffer!.append(FREEBLISKET_PATH_GLOBALS.getInstance()!.XSLPATH);
    
stringBuffer!.append(this.uriResolverStrings!.URL_GLOBAL);
    
stringBuffer!.append(this.uriResolverStrings!.REQUIRED_EXTENSION);
    
stringBuffer!.append(this.basicURIResolver!.getExtension());
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.uriResolverStrings!.RESOLVE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StreamSource(new CryptFileReader(TransformInfoTemplateData.getInstance()!.UNCRYPTED_EXTENSION, TransformInfoTemplateData.getInstance()!.ENCRYPTED_EXTENSION).getInputStream(fileAbPath));
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {



                            throw new TransformerException(e);
                    
}
*/
}


    public string toString(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return URLGLOBALS.getMainPath() +FREEBLISKET_PATH_GLOBALS.getInstance()!.INSTALLPATH +this.uriResolverStrings!.IMPORT_URL;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "ContextUriResolver - Does not work without webapp path should be changed";
    
}

}


};

            

