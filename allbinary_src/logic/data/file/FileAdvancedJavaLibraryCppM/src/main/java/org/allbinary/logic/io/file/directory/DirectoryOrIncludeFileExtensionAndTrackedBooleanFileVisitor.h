
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/System.h"
        
#include <org/allbinary/java/runtime/process/git/GitProcessHelper.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
#include <org/allbinary/logic/io/file/visitor/IncludeFileExtensionsBooleanFileVisitor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/directory/TrackedStrings.h"

class DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor: public IncludeFileExtensionsBooleanFileVisitor {

    public: static void main(std::vector<std::string> args);

    private: TrackedStrings* trackedStrings = TrackedStrings::getInstance();

    private: GitProcessHelper* gitProcessHelper = GitProcessHelper::getInstance();

    private: std::string includesString;

public: DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(BasicArrayList* filterStringBasicArrayList);

public: DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(BasicArrayList* filterStringBasicArrayList, std::string includesString);

    public: bool visit(AbFile* file);

    public: bool visit(AbFile* file, std::string fileNameString);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYORINCLUDEFILEEXTENSIONANDTRACKEDBOOLEANFILEVISITOR_H
