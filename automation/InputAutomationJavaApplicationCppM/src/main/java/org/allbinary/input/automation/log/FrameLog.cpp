
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
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/io/File.h>

      
#include <java/io/FileOutputStream.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/input/automation/ImageOutputData.h>

      
#include <org/allbinary/logic/java/number/LongUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FrameLog
            : public Object
         {
        

    private: static frameBytes: std::vector<int8_t> = .toCharArray().getBytes()!;

    private: static info: std::vector<int8_t> = .toCharArray().getBytes()!;

    private: static actions: std::vector<int8_t> = .toCharArray().getBytes()!;

    private: const frame: Long;

    private: infoStringBuffer: StringMaker = new StringMaker();

    private: actionsStringBuffer: StringMaker = new StringMaker();

public constructor (Long frame){

            super();
        this.frame= frame;
    
}


    public addInfo(string infoString){
this.infoStringBuffer!.append(infoString);
    
}


    public addActions(Vector<string> vectorOfStrings){

    size: int32_t = vectorOfStrings!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.addAction(vectorOfStrings!.get(index) as string);
    
}

}


    public addAction(string action){
this.actionsStringBuffer!.append(action);
    
this.actionsStringBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    
}


                //@Throws(Exception.constructor)
            
    public write(){

    filePathStringBuffer: StringMaker = new StringMaker();;
    
filePathStringBuffer!.append(ImageOutputData.SAVE_PATH);
    
filePathStringBuffer!.append(LongUtil.fillIn(this.frame.toString()));
    
filePathStringBuffer!.append(".txt");
    

    filePath: string = filePathStringBuffer!.toString()!;;
    

    fileOutputStream: FileOutputStream = new FileOutputStream(new File(filePath));;
    
fileOutputStream!.write(FrameLog.frameBytes);
    
fileOutputStream!.write(getFrame()!.toString()!.getBytes());
    
fileOutputStream!.write('\n');
    
fileOutputStream!.write(FrameLog.info);
    
fileOutputStream!.write(this.infoStringBuffer!.toString()!.getBytes());
    
fileOutputStream!.write('\n');
    
fileOutputStream!.write(FrameLog.actions);
    
fileOutputStream!.write(this.actionsStringBuffer!.toString()!.getBytes());
    
fileOutputStream!.close();
    
}


    public Long getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.frame;
    
}


};

            

