
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

    private: static AbPathUtilOld instance() { return AbPathUtilOld(); }

    public: static AbPathUtilOld getInstance();

    private: static const int32_t MIN = 4;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AbPathData abPathData = AbPathData::getInstance();

    private: const FilePathData filePathData = FilePathData::getInstance();

private: AbPathUtilOld();

                //@Throws(Exception.constructor)
            
    public: std::string getExtension(AbFilePath abFilePath);

                //@Throws(Exception.constructor)
            
    public: std::string getExtension(AbPath abPath);

                //@Throws(Exception.constructor)
            
    public: std::string getExtension(std::string filePath);

                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtension(AbFilePath abFilePath);

                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtension(AbPath abPath);

                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtension(std::string filePath);

    public: bool isValid(std::string path);

    private: bool isValidStart(std::string path);

    private: bool isValidEnd(std::string path);

    public: std::string adjustStart(std::string path);

    public: std::string adjustEnd(std::string path);

    public: std::string adjust(std::string path);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string getNameFromPath(std::string categoryPath);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: AbPath removeNameFromPath(std::string categoryPath);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_PATH_ABPATHUTILOLD_H
