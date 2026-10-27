
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

    public: static void main(std::vector<std::string> args){

    CommonDataFileStrings* commonFileStrings = CommonDataFileStrings::getInstance();;
    

    BasicArrayList* list = new BasicArrayListD();;
    
list->add(commonFileStrings->JAVA);
    

    std::string filePath = "G:\\mnt\\bc\\mydev\\games\\ZeptoRacer\\platform\\j2se\\ZeptoRacerStaticPathsJ2SEM\\target\\dependency\\org\\allbinary\\logic\\system\\security\\licensing\\ZeptoRacerPCClientInformation.java";;
    

    bool result = (new DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(list))->visit(AbFile::createAbFileFromRawPath(filePath));;
    
System.out.println(filePath +" is Tracked: " +result);
    
}


    private: TrackedStrings* trackedStrings = TrackedStrings::getInstance();

    private: GitProcessHelper* gitProcessHelper = GitProcessHelper::getInstance();

    private: std::string includesString;

public: DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(BasicArrayList* filterStringBasicArrayList) : IncludeFileExtensionsBooleanFileVisitor(filterStringBasicArrayList){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->includesString= 
                                        nullptr
                                    ;
    
}


public: DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(BasicArrayList* filterStringBasicArrayList, std::string includesString) : IncludeFileExtensionsBooleanFileVisitor(filterStringBasicArrayList){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->includesString= includesString;
    
}


    public: bool visit(AbFile* file){

                        if(file->isDirectory())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                

                        if(false || file->getAbsolutePath()->indexOf(this->includesString) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.visit(file);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            
}


    public: bool visit(AbFile* file, std::string fileNameString){

    std::string filePath = file->getPath();;
    

                        if(super.visit(file, fileNameString))
                        
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


};

            

