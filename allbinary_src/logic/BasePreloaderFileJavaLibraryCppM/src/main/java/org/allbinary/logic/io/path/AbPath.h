
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
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
        

    public static AbPath createAbPath();

    private: static const NETWORK_SEP: string = ":/";

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const abPathData: AbPathData = AbPathData.getInstance()!;

    private: const abPathUtil: PathUtil = PathUtil.getInstance()!;

    private: const EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;

    schema: string = this.EMPTY_STRING;

    private: path: string = this.EMPTY_STRING;

    nameP: string = this.EMPTY_STRING;

    private: hasSchemaP: bool = false;

    private: numberOfSeps: int32_t = 0;

public constructor (string aPath, string name);

    init();

    string getSchema(string aPath);

    public bool hasSchema();

                //@Throws(Exception.constructor)
            
    public string getPathFromPath(string aPath);

    public setName(string name);

    public string getName();

    public string toString();

    public string toFileSystemString();

    public string getPath();

    setPath(string path);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H
