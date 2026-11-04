
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYORINCLUDEFILEEXTENSIONANDTRACKEDBOOLEANFILEVISITOR_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYORINCLUDEFILEEXTENSIONANDTRACKEDBOOLEANFILEVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/directory/DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/System.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/java/runtime/process/git/GitProcessHelper.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
#include <org/allbinary/logic/io/file/visitor/IncludeFileExtensionsBooleanFileVisitor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/directory/TrackedStrings.h"


DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor::DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(BasicArrayList* filterStringBasicArrayList) : IncludeFileExtensionsBooleanFileVisitor(filterStringBasicArrayList), trackedStrings(TrackedStrings::getInstance()), gitProcessHelper(GitProcessHelper::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->includesString= 
                                        nullptr
                                    ;
    
}


DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor::DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(BasicArrayList* filterStringBasicArrayList, std::string includesString) : IncludeFileExtensionsBooleanFileVisitor(filterStringBasicArrayList), trackedStrings(TrackedStrings::getInstance()), gitProcessHelper(GitProcessHelper::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->includesString= includesString;
    
}


    auto DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor::visit(AbFile* file) -> bool{

                        if(file->isDirectory())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                                    }
                                

                        if(false || JavaString::indexOf(file->getAbsolutePath(), this->includesString) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return IncludeFileExtensionsBooleanFileVisitor::visit(file);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                        }
                            
}


    auto DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor::visit(AbFile* file, std::string fileNameString) -> bool{

    std::string filePath = file->getPath();;
    

                        if(IncludeFileExtensionsBooleanFileVisitor::visit(file, fileNameString))
                        
                                    {
                                    
                        if(!(JavaString::contains(filePath, this->trackedStrings->APPLICATION) || JavaString::contains(filePath, this->trackedStrings->APP) || JavaString::contains(filePath, this->trackedStrings->HTML_TEMP)))
                        
                                    {
                                    
                        if(!(JavaString::contains(filePath, this->trackedStrings->TARGET_PATH_WINDOWS) || JavaString::contains(filePath, this->trackedStrings->TARGET_PATH_UNIX)))
                        
                                    {
                                    
                        if(this->gitProcessHelper->isTracked(file))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}


    auto DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor::main(std::vector<std::string> args) -> void{

    CommonDataFileStrings* commonFileStrings = CommonDataFileStrings::getInstance();;
    

    BasicArrayList* list = new BasicArrayListD();;
    
list->add(commonFileStrings->JAVA);
    

    std::string filePath = "G:\\mnt\\bc\\mydev\\games\\ZeptoRacer\\platform\\j2se\\ZeptoRacerStaticPathsJ2SEM\\target\\dependency\\org\\allbinary\\logic\\system\\security\\licensing\\ZeptoRacerPCClientInformation.java";;
    

    bool result = (new DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(list))->visit(AbFile::createAbFileFromRawPath(filePath));;
    
System.out.println(JavaString::valueOf(JavaString::valueOf(filePath) +JavaString::valueOf(" is Tracked: ")) +JavaString::valueOf(result));
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYORINCLUDEFILEEXTENSIONANDTRACKEDBOOLEANFILEVISITOR_CPP
