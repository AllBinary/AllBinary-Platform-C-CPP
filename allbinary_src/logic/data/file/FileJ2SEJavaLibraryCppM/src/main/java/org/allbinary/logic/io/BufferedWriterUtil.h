
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/io/BufferedWriter.h>

      
#include <java/io/FileWriter.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BufferedWriterUtil
            : public Object
         {
        

    private: static const instance: BufferedWriterUtil = new BufferedWriterUtil();

    public static BufferedWriterUtil getInstance();

    private: const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonLabels: CommonLabels = CommonLabels.getInstance()!;

    private: const REMOVING_OLD: string = "Remove old for overwritting: ";

                //@Throws(Exception.constructor)
            
    public overwrite(string path, string data);

                //@Throws(Exception.constructor)
            
    public overwrite(AbFile abFile, string data);

                //@Throws(Exception.constructor)
            
    public write(AbFile abFile, string data);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H
