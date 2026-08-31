
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_BASICURIRESOLVER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_BASICURIRESOLVER_H

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

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "URIResolverStrings.h"

class BasicUriResolver
            : public Object
        : public URIResolver {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const uriResolverStrings: URIResolverStrings = URIResolverStrings.getInstance()!;

    private: extension: string;

public constructor (string extension);

    public string getExtension();

                //@Throws(TransformerException.constructor)
            
    public Source resolve(string href, string base);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_BASICURIRESOLVER_H
