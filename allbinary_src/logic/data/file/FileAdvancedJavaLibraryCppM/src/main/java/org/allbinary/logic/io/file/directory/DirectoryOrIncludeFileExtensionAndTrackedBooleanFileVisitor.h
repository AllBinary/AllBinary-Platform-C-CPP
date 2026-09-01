
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

            #include <vector>
        
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

    public: static void main(std::vector<std::string> args);

    private: const TrackedStrings trackedStrings = TrackedStrings::getInstance();

    private: std::string includesString;

public: DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(BasicArrayList filterStringBasicArrayList);

public: DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(BasicArrayList filterStringBasicArrayList, std::string includesString);

    public: Boolean visit(AbFile file);

    public: Boolean visit(AbFile file, std::string fileNameString);

    private: bool isGitTracked(AbFile file);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYORINCLUDEFILEEXTENSIONANDTRACKEDBOOLEANFILEVISITOR_H
