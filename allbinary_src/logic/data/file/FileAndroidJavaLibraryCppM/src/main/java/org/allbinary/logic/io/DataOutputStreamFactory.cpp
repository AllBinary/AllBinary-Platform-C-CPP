
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/io/file/AbFile.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFileOutputStream.h"
#include "AbDataOutputStream.h"
#include "FileStreamFactory.h"

class DataOutputStreamFactory
            : public Object
         {

    private: static DataOutputStreamFactory instance() { return DataOutputStreamFactory(); }

    public: static DataOutputStreamFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DataOutputStreamFactory::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: AbDataOutputStream getInstanceForAbFile(AbFile file){

    AbFileOutputStream idFileOutputStream = AbFileOutputStream::createFromAbFile(file);;
    

    AbDataOutputStream idOutData = AbDataOutputStream(idFileOutputStream);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return idOutData;
    
}


                //@Throws(Exception.constructor)
            
    public: AbDataOutputStream getInstance(std::string filePath, std::string fileName){

    FileStreamFactory fileStreamFactory = FileStreamFactory::getInstance();;
    

    AbFileOutputStream fileOutputStream = fileStreamFactory.getFileOutputStreamInstance(filePath, fileName);;
    

    AbDataOutputStream idOutData = AbDataOutputStream(fileOutputStream);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return idOutData;
    
}


};

            

