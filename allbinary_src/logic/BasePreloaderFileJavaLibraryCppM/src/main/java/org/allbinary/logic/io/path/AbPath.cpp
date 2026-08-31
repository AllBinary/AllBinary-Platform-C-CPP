
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
        
            #include "../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/io/file/FilePathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbPathData.h"
#include "PathUtil.h"

class AbPath
            : public Object
         {
        

    public static AbPath createAbPath(){

        try {
            
    EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(EMPTY_STRING, EMPTY_STRING);
    

                //: 
} catch(ex) 
            {



                            throw new RuntimeException();
                    
}

}


    private: static const NETWORK_SEP: string = ":/";

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const abPathData: AbPathData = AbPathData.getInstance()!;

    private: const abPathUtil: PathUtil = PathUtil.getInstance()!;

    private: const EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;

    schema: string = this.EMPTY_STRING;

    private: path: string = this.EMPTY_STRING;

    nameP: string = this.EMPTY_STRING;

    private: hasSchemaP: bool = false;

    private: numberOfSeps: int32_t = 0;

public constructor (string aPath, string name){

            super();
        
    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(!stringValidationUtil!.isEmpty(aPath))
                        
                                    {
                                    this.schema= this.getSchema(aPath);
    
this.nameP= name;
    
this.path= this.abPathUtil!.adjustEnd(this.abPathUtil!.adjust(this.getPathFromPath(aPath)));
    

                                    }
                                
                        else {
                            this.init();
    

                        if(!stringValidationUtil!.isEmpty(name))
                        
                                    {
                                    this.nameP= name;
    

                                    }
                                

                        }
                            
}


    init(){
this.schema= this.EMPTY_STRING;
    
this.setPath(this.abPathData!.SEPARATOR);
    
this.nameP= this.EMPTY_STRING;
    
}


    string getSchema(string aPath){

    beginIndex: int32_t = aPath!.indexOf(this.commonSeps!.COLON)!;;
    

                        if(beginIndex >= 0)
                        
                                    {
                                    this.hasSchemaP= true;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return aPath!.substring(0, beginIndex);;
    

                                    }
                                
this.hasSchemaP= false;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.EMPTY_STRING;
    
}


    public bool hasSchema(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hasSchemaP;
    
}


                //@Throws(Exception.constructor)
            
    public string getPathFromPath(string aPath){

    filePathData: FilePathData = FilePathData.getInstance()!;;
    

    tempPath: string = aPath;;
    

                        if(!this.hasSchema())
                        
                                    {
                                    tempPath= this.abPathUtil!.adjustStart(tempPath);
    

                                    }
                                
                        else {
                            
    beginIndex: int32_t = tempPath!.indexOf(this.commonSeps!.COLON)!;;
    

                        if(beginIndex >= 0)
                        
                                    {
                                    beginIndex++;
    

        while(tempPath[beginIndex] == this.abPathData!.SEPARATORCHAR || tempPath[beginIndex] == filePathData!.SEPARATORCHAR)
        {
beginIndex++;
    
this.numberOfSeps++;
    

                        if(this.numberOfSeps > 2)
                        
                                    {
                                    


                            throw new Exception("Should Not Have More Than Two Seps");
                    

                                    }
                                
}

tempPath= tempPath!.substring(beginIndex, tempPath!.length);
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return tempPath;
    
}


    public setName(string name){
this.nameP= name;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.nameP;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    

                        if(this.hasSchema())
                        
                                    {
                                    stringBuffer!.append(this.schema);
    
stringBuffer!.append(AbPath.NETWORK_SEP);
    

                                    }
                                
stringBuffer!.append(this.getPath());
    
stringBuffer!.append(this.nameP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public string toFileSystemString(){

                        if(this.hasSchema())
                        
                                    {
                                    
    filePathData: FilePathData = FilePathData.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.schema);
    
stringBuffer!.append(this.commonSeps!.COLON);
    
stringBuffer!.append(filePathData!.PATH_START);
    
stringBuffer!.append(FilePathUtil.adjust(this.getPath()));
    
stringBuffer!.append(this.nameP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FilePathUtil.adjust(this.getPath()) +this.nameP;
    

                        }
                            
}


    public string getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.path;
    
}


    setPath(string path){
this.path= path;
    
}


};

            

