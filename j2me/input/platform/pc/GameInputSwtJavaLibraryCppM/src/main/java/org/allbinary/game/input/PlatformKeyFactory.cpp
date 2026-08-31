
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
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PCGameKey.h"
#include "PCKeyFactory.h"
#include "Input.h"

class PlatformKeyFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static PlatformKeyFactory getInstance(){

                        if(PlatformKeyFactory.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    PlatformKeyFactory.instance= new PlatformKeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlatformKeyFactory.instance as PlatformKeyFactory;
    
}


    public string getString(int32_t keyCode){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCGameKey.getString(keyCode);;
    
}


    public bool isSubmission(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory.getInstance()!.isSubmission(input);;
    
}


    public bool isDelete(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory.getInstance()!.isDelete(input);;
    
}


    public bool isBackSpace(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory.getInstance()!.isBackSpace(input);;
    
}


    public bool isUp(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory.getInstance()!.isUp(input);;
    
}


    public bool isDown(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory.getInstance()!.isDown(input);;
    
}


    public bool isEnter(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory.getInstance()!.isEnter(input);;
    
}


    public bool isLeft(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory.getInstance()!.isLeft(input);;
    
}


    public bool isRight(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory.getInstance()!.isRight(input);;
    
}


};

            

