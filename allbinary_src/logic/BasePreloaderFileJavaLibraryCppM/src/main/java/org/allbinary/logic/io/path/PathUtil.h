
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbPathData.h"
#include "AbFilePath.h"
#include "AbPath.h"
//Used to correct user input for paths
class PathUtil
            : public Object
         {
        

    private: static const instance: PathUtil = new PathUtil();

    public static PathUtil getInstance();

    private: const abPathData: AbPathData = AbPathData.getInstance()!;

    private: const filePathData: FilePathData = FilePathData.getInstance()!;

private constructor ();

    public string getExtensionWithAbFilePath(AbFilePath abFilePath);

    public string getExtensionWithAbPath(AbPath abPath);

                //@Throws(Exception.constructor)
            
    public string getWithoutExtensionWithAbFilePath(AbFilePath abFilePath);

                //@Throws(Exception.constructor)
            
    public string getWithoutExtensionWithAbPath(AbPath abPath);

                //@Throws(Exception.constructor)
            
    public string getWithoutExtension(string filePath);

    public bool isValid(string path);

    bool isValidStart(string path);

    bool isValidEnd(string path);

    public string adjustStart(string path);

    public string adjustEnd(string path);

    public string adjust(string path);

                //@Throws(Exception.constructor)
            
    public AbPath removeNameFromPath(string path);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H
