
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

    private: static BufferedWriterUtil instance() { return BufferedWriterUtil(); }

    public: static BufferedWriterUtil getInstance();

    private: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const CommonLabels commonLabels = CommonLabels::getInstance();

    private: const std::string REMOVING_OLD = "Remove old for overwriting: ";

                //@Throws(Exception.constructor)
            
    public: void overwrite(std::string path, std::string data);

                //@Throws(Exception.constructor)
            
    public: void overwrite(AbFile abFile, std::string data);

                //@Throws(Exception.constructor)
            
    public: void write(AbFile abFile, std::string data);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H
