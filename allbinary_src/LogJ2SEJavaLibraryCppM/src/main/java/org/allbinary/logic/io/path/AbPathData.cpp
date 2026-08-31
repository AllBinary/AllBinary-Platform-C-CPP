
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
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbPathData
            : public Object
         {
        

    private: static const instance: AbPathData = new AbPathData();

    public static AbPathData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPathData.instance;
    
}


    public const EXTENSION_SEP: string = CommonSeps.getInstance()!.PERIOD;

    public const SEPARATORCHAR: char = '/';

    public const SEPARATOR: string = CommonSeps.getInstance()!.FORWARD_SLASH;

private constructor (){

            super();
        }


    public int32_t getExtensionIndex(string filePath){

    indexOfFileExtensionDelmiter: int32_t = filePath!.lastIndexOf(this.EXTENSION_SEP)!;;
    

    indexOfLatDelimiter: int32_t = filePath!.lastIndexOf(this.SEPARATORCHAR)!;;
    

                        if(indexOfFileExtensionDelmiter < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    

                                    }
                                

                        if(indexOfFileExtensionDelmiter < indexOfLatDelimiter)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexOfFileExtensionDelmiter;
    
}


    public string getExtensionWithDot(string filePath){

    indexOfFileExtensionDelmiter: int32_t = this.getExtensionIndex(filePath)!;;
    

    extension: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(indexOfFileExtensionDelmiter >= 0)
                        
                                    {
                                    extension= filePath!.substring(indexOfFileExtensionDelmiter);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return extension;
    
}


    public string getExtension(string filePath){

    indexOfFileExtensionDelmiter: int32_t = this.getExtensionIndex(filePath)!;;
    

    extension: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(indexOfFileExtensionDelmiter >= 0)
                        
                                    {
                                    extension= filePath!.substring(indexOfFileExtensionDelmiter +1);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return extension;
    
}


    public string getNameFromPath(string path){

    endIndex: int32_t = path.lastIndexOf(this.SEPARATORCHAR)!;;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= path.lastIndexOf(FilePathData.getInstance()!.SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    

                                    }
                                

                        if(path.length == endIndex +1)
                        
                                    {
                                    
    categoryName: string = path.substring(0, endIndex)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getNameFromPath(categoryName);;
    

                                    }
                                
                        else {
                            
    categoryName: string = path.substring(endIndex +1)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryName;
    

                        }
                            
}


    public string removeNameFromPath(string path){

    endIndex: int32_t = path.lastIndexOf(this.SEPARATORCHAR)!;;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= path.lastIndexOf(FilePathData.getInstance()!.SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    

                                    }
                                

                        if(path.length == endIndex +1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.removeNameFromPath(path.substring(0, endIndex -1));;
    

                                    }
                                
                        else {
                            
    pathWithoutName: string = path.substring(0, endIndex)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathWithoutName;
    

                        }
                            
}


};

            

