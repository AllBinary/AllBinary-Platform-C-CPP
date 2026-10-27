
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <javax/xml/transform/stream/StreamResult.h>

      
#include <javax/xml/transform/stream/StreamSource.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/dom/XslHelper.h"

class AbXslHelper
            : public Object
         {

    private: static AbXslHelper* instance() { static std::unique_ptr<AbXslHelper> value(new AbXslHelper()); return value.get(); }

    public: static AbXslHelper* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbXslHelper::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: std::string translate(AbFile* xslFile, AbFile* xmlFile){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->translate(xslFile->getAbsolutePath(), xmlFile->getAbsolutePath());;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string translate(AbPath* xslPath, AbPath* xmlPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->translate(xslPath->getPath(), xmlPath->getPath());;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string translate(std::string xsltFilePath, std::string xmlFilePath){

        try {
            
    ByteArrayOutputStream* outputStream = new ByteArrayOutputStream();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return XslHelper::getInstance()->translate(new StreamSource(xsltFilePath), new StreamSource(xmlFilePath), new StreamResult(outputStream)).toString();;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


};

            

