
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2022 AllBinary
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_ABXSLHELPER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_ABXSLHELPER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <javax/xml/transform/stream/StreamResult.h>

      
#include <javax/xml/transform/stream/StreamSource.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "XslHelper.h"

class AbXslHelper
            : public Object
         {
        

    private: static const instance: AbXslHelper = new AbXslHelper();

    public static AbXslHelper getInstance();

                //@Throws(Exception.constructor)
            
    public string translate(AbFile xslFile, AbFile xmlFile);

                //@Throws(Exception.constructor)
            
    public string translate(AbPath xslPath, AbPath xmlPath);

                //@Throws(Exception.constructor)
            
    public string translate(string xsltFilePath, string xmlFilePath);

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_ABXSLHELPER_H
