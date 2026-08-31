
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/io/File.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2SEForJ2ME
class AbFileSystem
            : public Object
         {
        

    private: static const instance: AbFileSystem = new AbFileSystem();

    public static AbFileSystem getInstance();

                //@Throws(Exception.constructor)
            
    public static main(std::vector<string> args);

    private: const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public bool isDirectoryOrFile(string path);

    public bool isDirectory(string path);

    public std::vector<string> getFilesAsStringArrayForPath(string currentDirPath);

    public string readAsString(string fileName);

    public string readAsString(string fileName, std::vector<int8_t> bytes);

    public bool close(any = {} closeable);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H
