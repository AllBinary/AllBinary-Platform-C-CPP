
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_H
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbPathData
            : public Object
         {
        

    private: static const instance: AbPathData = new AbPathData();

    public static AbPathData getInstance();

    public const EXTENSION_SEP: string = CommonSeps.getInstance()!.PERIOD;

    public const SEPARATORCHAR: char = '/';

    public const SEPARATOR: string = CommonSeps.getInstance()!.FORWARD_SLASH;

private constructor ();

    public int32_t getExtensionIndex(string filePath);

    public string getExtensionWithDot(string filePath);

    public string getExtension(string filePath);

    public string getNameFromPath(string path);

    public string removeNameFromPath(string path);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_H
