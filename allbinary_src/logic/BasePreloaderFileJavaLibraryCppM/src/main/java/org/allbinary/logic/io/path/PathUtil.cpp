
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbPathData.h"
#include "AbFilePath.h"
#include "AbPath.h"
//Used to correct user input for paths
class PathUtil
            : public Object
         {
        

    private: static const instance: PathUtil = new PathUtil();

    public static PathUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathUtil.instance;
    
}


    private: const abPathData: AbPathData = AbPathData.getInstance()!;

    private: const filePathData: FilePathData = FilePathData.getInstance()!;

private constructor (){

            super();
        }


    public string getExtensionWithAbFilePath(AbFilePath abFilePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.abPathData!.getExtension(abFilePath!.toString());;
    
}


    public string getExtensionWithAbPath(AbPath abPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.abPathData!.getExtension(abPath!.toString());;
    
}


                //@Throws(Exception.constructor)
            
    public string getWithoutExtensionWithAbFilePath(AbFilePath abFilePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getWithoutExtension(abFilePath!.toString());;
    
}


                //@Throws(Exception.constructor)
            
    public string getWithoutExtensionWithAbPath(AbPath abPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getWithoutExtension(abPath!.toString());;
    
}


                //@Throws(Exception.constructor)
            
    public string getWithoutExtension(string filePath){

    indexOfFileExtensionDelmiter: int32_t = this.abPathData!.getExtensionIndex(filePath)!;;
    

    pathWithoutExtension: string = filePath;;
    

                        if(indexOfFileExtensionDelmiter >= 0)
                        
                                    {
                                    pathWithoutExtension= filePath!.substring(0, indexOfFileExtensionDelmiter);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathWithoutExtension;
    
}


    public bool isValid(string path){

                        if(this.isValidStart(path))
                        
                                    {
                                    
                        if(this.isValidEnd(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    bool isValidStart(string path){

                        if(path[0] == this.abPathData!.SEPARATORCHAR || path[0] == '.')
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    bool isValidEnd(string path){

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(stringValidationUtil!.isEmpty(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(path[path.length -1] == this.abPathData!.SEPARATORCHAR)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public string adjustStart(string path){

                        if(!this.isValidStart(path))
                        
                                    {
                                    path= this.abPathData!.SEPARATOR +path;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


    public string adjustEnd(string path){

                        if(!this.isValidEnd(path))
                        
                                    {
                                    path= path +this.abPathData!.SEPARATOR;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


    public string adjust(string path){

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(stringValidationUtil!.isEmpty(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.abPathData!.SEPARATOR;
    

                                    }
                                

                        if(path.indexOf("\\") >= 0)
                        
                                    {
                                    path= path.replace('\\', this.abPathData!.SEPARATORCHAR);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


                //@Throws(Exception.constructor)
            
    public AbPath removeNameFromPath(string path){

    endIndex: int32_t = path.lastIndexOf(this.abPathData!.SEPARATOR)!;;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= path.lastIndexOf(this.filePathData!.SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath.createAbPath();;
    

                                    }
                                

                        if(path.length == endIndex +1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.removeNameFromPath(path.substring(0, endIndex -1));;
    

                                    }
                                
                        else {
                            
    pathWithoutName: string = path.substring(0, endIndex)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(pathWithoutName, StringUtil.getInstance()!.EMPTY_STRING);
    

                        }
                            
}


};

            

