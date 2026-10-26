
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/io/file/FilePathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbPathData.h"
#include "PathUtil.h"

class AbPath
            : public Object
         {

    public: static AbPath createAbPath();

    private: static const std::string NETWORK_SEP = ":/";

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: const AbPathData abPathData = AbPathData::getInstance();

    private: const PathUtil abPathUtil = PathUtil::getInstance();

    private: const std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;

    protected: std::string schema = this->EMPTY_STRING;

    private: std::string path = this->EMPTY_STRING;

    protected: std::string nameP = this->EMPTY_STRING;

    private: bool hasSchemaP = false;

    private: int32_t numberOfSeps = 0;

public: AbPath(std::string aPath, std::string name);

    private: void init();

    protected: std::string getSchema(std::string aPath);

    public: bool hasSchema();

                //@Throws(Exception.constructor)
            
    public: std::string getPathFromPath(std::string aPath);

    public: void setName(std::string name);

    public: std::string getName();

    public: std::string toString();

    public: std::string toFileSystemString();

    public: std::string getPath();

    protected: void setPath(std::string path);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H
