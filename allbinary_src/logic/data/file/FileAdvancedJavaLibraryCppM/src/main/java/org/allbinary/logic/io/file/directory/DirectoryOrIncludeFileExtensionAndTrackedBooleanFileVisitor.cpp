
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

    public: static void main(std::vector<std::string> args){

    CommonDataFileStrings commonFileStrings = CommonDataFileStrings::getInstance();;
    

    BasicArrayList list = BasicArrayListD();;
    
list.add(commonFileStrings.JAVA);
    

    std::string filePath = "G:\\mnt\\bc\\mydev\\games\\ZeptoRacer\\platform\\j2se\\ZeptoRacerStaticPathsJ2SEM\\target\\dependency\\org\\allbinary\\logic\\system\\security\\licensing\\ZeptoRacerPCClientInformation.java";;
    

    bool result = DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(list).visit(AbFile::createAbFileFromRawPath(filePath));;
    
console.log(filePath +" is Tracked: " +result);
    
}


    private: const TrackedStrings trackedStrings = TrackedStrings::getInstance();

    private: std::string includesString;

public: DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(BasicArrayList filterStringBasicArrayList){
            super(filterStringBasicArrayList);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->includesString= 
                                        nullptr
                                    ;
    
}


public: DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(BasicArrayList filterStringBasicArrayList, std::string includesString){
            super(filterStringBasicArrayList);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->includesString= includesString;
    
}


    public: Boolean visit(AbFile file){

                        if(file.isDirectory())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                

                        if(false || file.getAbsolutePath().indexOf(this->includesString) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.visit(file);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            
}


    public: Boolean visit(AbFile file, std::string fileNameString){

    std::string filePath = file.getPath();;
    

                        if(super.visit(file, fileNameString))
                        
                                    {
                                    
                        if(!(filePath.contains(this->trackedStrings.APPLICATION) || filePath.contains(this->trackedStrings.APP) || filePath.contains(this->trackedStrings.HTML_TEMP)))
                        
                                    {
                                    
                        if(!(filePath.contains(this->trackedStrings.TARGET_PATH_WINDOWS) || filePath.contains(this->trackedStrings.TARGET_PATH_UNIX)))
                        
                                    {
                                    
                        if(this->isGitTracked(file))
                        
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


    private: bool isGitTracked(AbFile file){

        try {
            
    File nativeFile = AbFileNativeUtil::get(file);;
    

    File parentFile = nativeFile.getParentFile();;
    

    Process process = ProcessBuilder(this->trackedStrings.GIT_COMMAND, this->trackedStrings.CHANGE_DIRECTORY_OPTION, parentFile.getPath(), this->trackedStrings.LIST_FILES_COMMAND, this->trackedStrings.ERROR_UNMATCH_OPTION, this->trackedStrings.PATHSPEC_SEPARATOR, nativeFile.getName()).redirectErrorStream(true).start();;
    
process.getInputStream().readAllBytes();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return process.waitFor() == 0;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

