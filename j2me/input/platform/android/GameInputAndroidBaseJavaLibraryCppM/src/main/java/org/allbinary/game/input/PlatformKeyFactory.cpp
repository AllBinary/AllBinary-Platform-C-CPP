
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ActivityFractureControllerUtilFactory.h"
#include "AndroidKeyFactory.h"
#include "AndroidGameKey.h"
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


    private: const androidKeyFactory: AndroidKeyFactory = ActivityFractureControllerUtilFactory.getInstance()!;

    public string getString(int32_t keyCode){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidGameKey.getString(keyCode);;
    
}


    public bool isSubmission(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.androidKeyFactory!.isSubmission(input);;
    
}


    public bool isDelete(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.androidKeyFactory!.isDelete(input);;
    
}


    public bool isBackSpace(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.androidKeyFactory!.isBackSpace(input);;
    
}


    public bool isLeft(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.androidKeyFactory!.isLeft(input);;
    
}


    public bool isRight(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.androidKeyFactory!.isRight(input);;
    
}


    public bool isUp(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.androidKeyFactory!.isUp(input);;
    
}


    public bool isDown(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.androidKeyFactory!.isDown(input);;
    
}


    public bool isEnter(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.androidKeyFactory!.isEnter(input);;
    
}


};

            

