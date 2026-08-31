
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
        

    public static main(std::vector<string> args){

    commonFileStrings: CommonDataFileStrings = CommonDataFileStrings.getInstance()!;;
    

    list: BasicArrayList = new BasicArrayListD();;
    
list.add(commonFileStrings!.JAVA);
    

    filePath: string = "G:\\mnt\\bc\\mydev\\games\\ZeptoRacer\\platform\\j2se\\ZeptoRacerStaticPathsJ2SEM\\target\\dependency\\org\\allbinary\\logic\\system\\security\\licensing\\ZeptoRacerPCClientInformation.java";;
    

    result: bool = new DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(list).visit(AbFile.createAbFileFromRawPath(filePath))!;;
    
console.log(filePath +" is Tracked: " +result);
    
}


    private: const trackedStrings: TrackedStrings = TrackedStrings.getInstance()!;

    private: const includesString: string;

public constructor (BasicArrayList filterStringBasicArrayList){
            super(filterStringBasicArrayList);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.includesString= 
                                        nullptr
                                    ;
    
}


public constructor (BasicArrayList filterStringBasicArrayList, string includesString){
            super(filterStringBasicArrayList);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.includesString= includesString;
    
}


    public Boolean visit(AbFile file){

                        if(file.isDirectory())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                                    }
                                

                        if(this.includesString == 
                                    null
                                 || file.getAbsolutePath()!.indexOf(this.includesString) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.visit(file);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                        }
                            
}


    public Boolean visit(AbFile file, string fileNameString){

    filePath: string = file.getPath()!;;
    

                        if(super.visit(file, fileNameString))
                        
                                    {
                                    
                        if(!(filePath!.contains(this.trackedStrings!.APPLICATION) || filePath!.contains(this.trackedStrings!.APP) || filePath!.contains(this.trackedStrings!.HTML_TEMP)))
                        
                                    {
                                    
                        if(!(filePath!.contains(this.trackedStrings!.TARGET_PATH_WINDOWS) || filePath!.contains(this.trackedStrings!.TARGET_PATH_UNIX)))
                        
                                    {
                                    
                        if(this.isGitTracked(file))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

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
                        return Boolean.FALSE;
    
}


    bool isGitTracked(AbFile file){

        try {
            
    nativeFile: File = AbFileNativeUtil.get(file)!;;
    

    parentFile: File = nativeFile!.getParentFile()!;;
    

    process: Process = new ProcessBuilder(this.trackedStrings!.GIT_COMMAND, this.trackedStrings!.CHANGE_DIRECTORY_OPTION, parentFile!.getPath(), this.trackedStrings!.LIST_FILES_COMMAND, this.trackedStrings!.ERROR_UNMATCH_OPTION, this.trackedStrings!.PATHSPEC_SEPARATOR, nativeFile!.getName()).redirectErrorStream(true)!.start()!;;
    
process.getInputStream()!.readAllBytes();
    



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

            

