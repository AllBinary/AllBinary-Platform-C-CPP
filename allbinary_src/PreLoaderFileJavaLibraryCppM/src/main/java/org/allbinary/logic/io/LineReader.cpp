
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
        
#include <java/io/DataInputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFileInputStream.h"

class LineReader
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: fileName: string;

    private: string: string;

    private: index: int32_t = 0;

    private: idFile: AbFileInputStream;

    private: idData: DataInputStream;

public constructor (string fileName){

            super();
        
        try {
            
    bytes: std::vector<int8_t> = new Array(100000);;
    
this.fileName= fileName;
    
this.idFile= new AbFileInputStream(fileName);
    
this.idFile!.read(bytes);
    
this.string= String.fromCharCode(...bytes);
    

                //: 
} catch(e) 
            {
this.logUtil!.put("File: " +fileName, this, "LineReader", e);
    


                            {
                            
                            }
                    
}

}


    public bool hasNext(){

        try {
            
    nextIndex: int32_t = this.string.indexOf(CommonSeps.getInstance()!.NEW_LINE, index)!;;
    

                        if(nextIndex ==  -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, "hasNext", e);
    


                            {
                            
                            }
                    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(Exception.constructor)
            
    public string next(){

        try {
            
    nextIndex: int32_t = this.string.indexOf(CommonSeps.getInstance()!.NEW_LINE, index)!;;
    

                        if(nextIndex ==  -1)
                        
                                    {
                                    


                            throw new Exception("next() should have been called first");
                    

                                    }
                                

    temp: string = this.string.substring(index, nextIndex)!;;
    
index= nextIndex +1;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return temp;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, "next", e);
    


                            {
                            
                            }
                    



                            throw e;
                    
}

}


};

            

