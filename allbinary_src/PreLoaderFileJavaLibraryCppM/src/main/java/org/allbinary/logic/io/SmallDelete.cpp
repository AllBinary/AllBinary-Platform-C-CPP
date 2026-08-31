
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/io/DataOutputStream.h>

      
#include <java/io/FileOutputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFileSystem.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SmallDelete
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: fileName: string;

    private: string: string;

public constructor (string fileName){

            super();
        this.fileName= fileName;
    
this.string= AbFileSystem.getInstance()!.readAsString(fileName);
    
}


    public bool deleteAtStart(string start, string end){

        try {
            
    beginIndex: int32_t= 0;endIndex: int32_t= 0;;
    
beginIndex= this.string.indexOf(start);
    
endIndex= this.string.indexOf(end);
    

                        if(endIndex > beginIndex && beginIndex >= 0 && endIndex >= 0 && beginIndex < 10 && endIndex < 525)
                        
                                    {
                                    
    text: string = this.string.substring(endIndex, this.string.length)!;;
    

    idFile: FileOutputStream = new FileOutputStream(this.fileName);;
    

    idOutData: DataOutputStream = new DataOutputStream(idFile);;
    
idOutData!.writeBytes(text);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.IDLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "deleteAtStart", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool deleteBetween(string start, string end, string newText){

        try {
            
    beginIndex: int32_t= 0;endIndex: int32_t= 0;;
    
beginIndex= this.string.indexOf(start);
    
endIndex= this.string.indexOf(end);
    

                        if(endIndex > beginIndex && beginIndex >= 0 && endIndex >= 0 && beginIndex < 50 && endIndex < 425)
                        
                                    {
                                    
    newStart: string = this.string.substring(0, beginIndex)!;;
    

    text: string = this.string.substring(endIndex +end.length, this.string.length)!;;
    

    idFile: FileOutputStream = new FileOutputStream(this.fileName);;
    

    idOutData: DataOutputStream = new DataOutputStream(idFile);;
    
idOutData!.writeBytes(newStart +newText +text);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.IDLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "deleteAtStart", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

