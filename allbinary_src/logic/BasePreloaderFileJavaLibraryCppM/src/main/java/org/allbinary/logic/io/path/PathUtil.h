
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/AbFilePath.h"
#include "org/allbinary/logic/io/path/AbPath.h"
//Used to correct user input for paths
class PathUtil
            : public Object
         {

    private: static PathUtil* instance() { static std::unique_ptr<PathUtil> value(new PathUtil()); return value.get(); }

    public: static PathUtil* getInstance();

    private: AbPathData* abPathData = AbPathData::getInstance();

    private: FilePathData* filePathData = FilePathData::getInstance();

private: PathUtil();

    public: std::string getExtensionWithAbFilePath(AbFilePath* abFilePath);

    public: std::string getExtensionWithAbPath(AbPath* abPath);

                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtensionWithAbFilePath(AbFilePath* abFilePath);

                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtensionWithAbPath(AbPath* abPath);

                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtension(std::string filePath);

    public: bool isValid(std::string path);

    private: bool isValidStart(std::string path);

    private: bool isValidEnd(std::string path);

    public: std::string adjustStart(std::string path);

    public: std::string adjustEnd(std::string path);

    public: std::string adjust(std::string path);

                //@Throws(Exception.constructor)
            
    public: AbPath* removeNameFromPath(std::string path);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H
