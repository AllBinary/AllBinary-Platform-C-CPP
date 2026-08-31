
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYORINCLUDEFILEEXTENSIONANDTRACKEDBOOLEANFILEVISITOR_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYORINCLUDEFILEEXTENSIONANDTRACKEDBOOLEANFILEVISITOR_H

            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/System.h"
        
#include <java/io/File.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
#include <org/allbinary/logic/io/file/visitor/IncludeFileExtensionsBooleanFileVisitor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TrackedStrings.h"
#include "ProcessBuilder.h"
#include "Process.h"

class DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor: public IncludeFileExtensionsBooleanFileVisitor {
        

    public static main(std::vector<string> args);

    private: const trackedStrings: TrackedStrings = TrackedStrings.getInstance()!;

    private: const includesString: string;

public constructor (BasicArrayList filterStringBasicArrayList);

public constructor (BasicArrayList filterStringBasicArrayList, string includesString);

    public Boolean visit(AbFile file);

    public Boolean visit(AbFile file, string fileNameString);

    bool isGitTracked(AbFile file);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYORINCLUDEFILEEXTENSIONANDTRACKEDBOOLEANFILEVISITOR_H
