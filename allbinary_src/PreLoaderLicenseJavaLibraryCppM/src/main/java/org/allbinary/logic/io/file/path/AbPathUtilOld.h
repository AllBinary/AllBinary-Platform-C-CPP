
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_PATH_ABPATHUTILOLD_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_PATH_ABPATHUTILOLD_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/io/path/AbFilePath.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Used to correct user input for paths
class AbPathUtilOld
            : public Object
         {
        

    private: static const instance: AbPathUtilOld = new AbPathUtilOld();

    public static AbPathUtilOld getInstance();

    private: static const MIN: int32_t = 4;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const abPathData: AbPathData = AbPathData.getInstance()!;

    private: const filePathData: FilePathData = FilePathData.getInstance()!;

private constructor ();

                //@Throws(Exception.constructor)
            
    public string getExtension(AbFilePath abFilePath);

                //@Throws(Exception.constructor)
            
    public string getExtension(AbPath abPath);

                //@Throws(Exception.constructor)
            
    public string getExtension(string filePath);

                //@Throws(Exception.constructor)
            
    public string getWithoutExtension(AbFilePath abFilePath);

                //@Throws(Exception.constructor)
            
    public string getWithoutExtension(AbPath abPath);

                //@Throws(Exception.constructor)
            
    public string getWithoutExtension(string filePath);

    public bool isValid(string path);

    bool isValidStart(string path);

    bool isValidEnd(string path);

    public string adjustStart(string path);

    public string adjustEnd(string path);

    public string adjust(string path);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string getNameFromPath(string categoryPath);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public AbPath removeNameFromPath(string categoryPath);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_PATH_ABPATHUTILOLD_H
