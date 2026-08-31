
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_SUBDIRECTORY_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_SUBDIRECTORY_H

            #include "../../../../../../java/lang/Object.h"
        
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Directory.h"

class SubDirectory
            : public Object
         {
        

    private: static const instance: SubDirectory = new SubDirectory();

    public static SubDirectory getInstance();

    public static string toString(BasicArrayList files);

    private: const directory: Directory = Directory.getInstance()!;

private constructor ();

    public BasicArrayList search(FileFilter fileFilter, AbFile file);

    public BasicArrayList search(AbFile file);

    public BasicArrayList search(string searchValue, AbFile file);

    public BasicArrayList search(int32_t level, AbFile file);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_SUBDIRECTORY_H
