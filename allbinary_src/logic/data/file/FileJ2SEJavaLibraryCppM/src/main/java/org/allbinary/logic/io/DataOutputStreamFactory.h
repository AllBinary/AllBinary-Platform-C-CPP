
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_H
        #define ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/io/file/AbFile.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFileOutputStream.h"
#include "AbDataOutputStream.h"
#include "FileStreamFactory.h"

class DataOutputStreamFactory
            : public Object
         {

    private: static DataOutputStreamFactory instance() { return DataOutputStreamFactory(); }

    public: static DataOutputStreamFactory getInstance();

                //@Throws(Exception.constructor)
            
    public: AbDataOutputStream getInstanceForAbFile(AbFile file);

                //@Throws(Exception.constructor)
            
    public: AbDataOutputStream getInstance(std::string filePath, std::string fileName);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_H
