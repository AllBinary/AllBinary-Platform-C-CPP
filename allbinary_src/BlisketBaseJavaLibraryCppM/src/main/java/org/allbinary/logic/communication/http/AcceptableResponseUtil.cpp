
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
        
#include <java/util/Vector.h>

      
#include <org/allbinary/TsUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AcceptableResponseFactory.h"

class AcceptableResponseUtil
            : public Object
         {
        

    private: static const instance: AcceptableResponseUtil = new AcceptableResponseUtil();

    public static AcceptableResponseUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AcceptableResponseUtil.instance;
    
}


                    static int32_t initResult = AcceptableResponseUtil::init();
                static int32_t init() { 
                    
TsUtil.getInstance()!.hashCode(AcceptableResponseFactory.getInstance()!.HTML);
    


                    return 0;
                }
            
    public const candidateVector: Vector = new Vector();

    public const tagNameVector: Vector = new Vector();

    public string get(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.candidateVector!.get(index) as string;
    
}


    public string getTagName(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tagNameVector!.get(index) as string;
    
}


    public int32_t size(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.candidateVector!.length;;
    
}


};

            

