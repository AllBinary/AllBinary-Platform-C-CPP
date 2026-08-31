
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
        
            #include "../../../../java/lang/System.h"
        
#include <java/io/DataOutputStream.h>

      
#include <java/io/FileOutputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFileSystem.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SmallInsert
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


    public bool atBeginning(string text){

        try {
            
    idFile: FileOutputStream = new FileOutputStream(this.fileName);;
    

    idOutData: DataOutputStream = new DataOutputStream(idFile);;
    
idOutData!.writeBytes(text +this.string);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.IDLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "insertAtBeginning", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool after(string text, string after){

        try {
            
    index: int32_t = this.string.indexOf(after)!;;
    

                        if(index < 0)
                        
                                    {
                                    console.log("No such start: " +after +" in: " +this.string);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
index= index +after.length;
    

    start: string = this.string.substring(0, index)!;;
    

    end: string = this.string.substring(index +1, this.string.length)!;;
    

    idFile: FileOutputStream = new FileOutputStream(this.fileName);;
    

    idOutData: DataOutputStream = new DataOutputStream(idFile);;
    
idOutData!.writeBytes(start +text +end);
    
idOutData!.close();
    
idFile!.close();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.IDLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "after", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool atEnd(string text){

        try {
            
    idFile: FileOutputStream = new FileOutputStream(this.fileName);;
    

    idOutData: DataOutputStream = new DataOutputStream(idFile);;
    
idOutData!.writeBytes(this.string +text);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.IDLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "insertAtEnd", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

