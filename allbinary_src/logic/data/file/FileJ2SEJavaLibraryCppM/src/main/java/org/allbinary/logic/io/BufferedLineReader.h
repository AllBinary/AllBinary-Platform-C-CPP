
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_H
        #define ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/io/BufferedReader.h>

      
#include <java/io/FileReader.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BufferedLineReader
            : public Object
         {
        

    private: const tmpIn: BufferedReader;

public constructor (AbFile file);

    public readUpToLines(int64_t readAheadIndex);

                //@Throws(Exception.constructor)
            
    public string readLine();

    public int64_t getSize();

    public int32_t getCurrent();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_H
