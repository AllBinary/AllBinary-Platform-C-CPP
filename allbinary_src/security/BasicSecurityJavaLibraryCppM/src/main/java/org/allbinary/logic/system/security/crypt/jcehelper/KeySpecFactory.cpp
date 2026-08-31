
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/RuntimeException.h"
        
#include <java/security/spec/KeySpec.h>

      
#include <javax/crypto/spec/DESKeySpec.h>

      
#include <javax/crypto/spec/DESedeKeySpec.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeySpecFactory
            : public Object
         {
        

    private: static const instance: KeySpecFactory = new KeySpecFactory();

    public static KeySpecFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return KeySpecFactory.instance;
    
}


    public const DES: string = "DES";

    public const DESEDE: string = "DESede";

    public const BLOWFISH: string = "Blowfish";

private constructor (){

            super();
        }


    public KeySpec getInstance(string algorithm, std::vector<int8_t> keyData){

        try {
            
    tsUtil: TsUtil = TsUtil.getInstance()!;;
    

                        if(tsUtil!.compareTo(algorithm, this.DES) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new DESKeySpec(keyData);
    

                                    }
                                
                             else 
                        if(tsUtil!.compareTo(algorithm, this.DESEDE) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new DESedeKeySpec(keyData);
    

                                    }
                                
                        else {
                            


                            throw new RuntimeException();
                    

                        }
                            

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.putOE(commonStrings!.EXCEPTION, this, commonStrings!.GET_INSTANCE, e);
    



                            throw new RuntimeException();
                    
}

}


};

            

